#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UI3DCameraStateBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineFreeLook; }
namespace RPG::Client { class InputDataController; }
namespace RPG::Client { class UI3DFreeLookController; }
namespace RPG::GameCore { class UI3DCameraFreeLookSetting; }
namespace RPG::GameCore { class UI3DVirtualCameraComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_ENABLECAMERAZOOM_OFFSET UNITYSDK_OFFSET(0xCF9E9B0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUEFROMCAMERA_OFFSET UNITYSDK_OFFSET(0xCF9F7B0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0xCF9F610)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GET__FREELOOKCAMERA_OFFSET UNITYSDK_OFFSET(0xCF9EBF0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INITSETTING_OFFSET UNITYSDK_OFFSET(0xCF9E690)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INIT_OFFSET UNITYSDK_OFFSET(0xCF9D760)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCF9D6B0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_RESETZOOM_OFFSET UNITYSDK_OFFSET(0xCF9E440)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_RESET_OFFSET UNITYSDK_OFFSET(0xCF9D960)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETAXISVALUETOCAMERA_OFFSET UNITYSDK_OFFSET(0xCF9F880)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOWPOINTNAME_OFFSET UNITYSDK_OFFSET(0xCF9E960)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOW_OFFSET UNITYSDK_OFFSET(0xCF9D9F0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKATPOINTNAME_OFFSET UNITYSDK_OFFSET(0xCF9E910)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKAT_OFFSET UNITYSDK_OFFSET(0xCF9D9A0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CALCULATEZOOMRATIO_OFFSET UNITYSDK_OFFSET(0xCF9EC30)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATEDUMMYLOOKATPOINT_OFFSET UNITYSDK_OFFSET(0xCF9DB90)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATETRANSFORM_OFFSET UNITYSDK_OFFSET(0xCF9EA00)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xCF9F960)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__DEFAULTZOOM_OFFSET UNITYSDK_OFFSET(0xCF9DCE0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETLERPINTERP_OFFSET UNITYSDK_OFFSET(0xCF9F500)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETORBITSHEIGHT_OFFSET UNITYSDK_OFFSET(0xCF9F3E0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETYAXISCLAMPVALUE_OFFSET UNITYSDK_OFFSET(0xCF9F470)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETZOOMINTERP_OFFSET UNITYSDK_OFFSET(0xCF9F0E0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__LERPDURATION_OFFSET UNITYSDK_OFFSET(0xCF9F380)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__NEEDLERPPOSITION_OFFSET UNITYSDK_OFFSET(0xCF9F2C0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONACTIVE_OFFSET UNITYSDK_OFFSET(0xCF9DA40)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONDEACTIVE_OFFSET UNITYSDK_OFFSET(0xCF9E400)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONSETTINGCHANGED_OFFSET UNITYSDK_OFFSET(0xCF9E870)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__RESETCAMERAAXIS_OFFSET UNITYSDK_OFFSET(0xCF9DC50)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__RESETLOOKATPOSITION_OFFSET UNITYSDK_OFFSET(0xCF9E4D0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__SETINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0xCF9EAF0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAROT_OFFSET UNITYSDK_OFFSET(0xCF9E340)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAZOOM_OFFSET UNITYSDK_OFFSET(0xCF9DF60)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATELOOKATANDFOLLOW_OFFSET UNITYSDK_OFFSET(0xCF9DD40)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMMAX_OFFSET UNITYSDK_OFFSET(0xCF9E630)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMMIN_OFFSET UNITYSDK_OFFSET(0xCF9F080)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMSPEED_OFFSET UNITYSDK_OFFSET(0xCF9F020)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xCF9FA60)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCF9F9C0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_RESET_OFFSET UNITYSDK_OFFSET(0xCF9FAB0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_SETFOLLOW_OFFSET UNITYSDK_OFFSET(0xCF9FC30)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_SETLOOKAT_OFFSET UNITYSDK_OFFSET(0xCF9FB30)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY__ONACTIVE_OFFSET UNITYSDK_OFFSET(0xCF9FD30)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY__ONDEACTIVE_OFFSET UNITYSDK_OFFSET(0xCF9FDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DCameraFreeLookState_TypeDefinitionIndex = 53749;

	class UI3DCameraFreeLookState : public ::RPG::GameCore::UI3DCameraStateBase
	{
	public:
		::UnityEngine::Transform* _DummyLookAtTrans; // 0x30
		::UnityEngine::Transform* _DummyFollowTrans; // 0x38
		::RPG::GameCore::UI3DCameraFreeLookSetting* _Setting; // 0x40
		::RPG::Client::InputDataController* _InputController; // 0x48
		::System::String* _LookAtPointName; // 0x50
		::System::String* _FollowPointName; // 0x58
		::RPG::Client::UI3DFreeLookController* _FreeLookController; // 0x60
		::System::Single _CurrentZoom; // 0x68
		::System::Single _ZoomSmoothVelocity; // 0x6C
		::System::Boolean _EnableCameraZoom; // 0x70
		::System::Single _SettingChangedTime; // 0x74
		::System::Single _LastDisSmooth; // 0x78
		::UnityEngine::Vector3 _PerviousLookAtPosition; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::UI3DVirtualCameraComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INIT_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_RESET_OFFSET))(this);
		}

		::System::Void SetLookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKAT_OFFSET))(this, a1);
		}

		::System::Void SetFollow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOW_OFFSET))(this, a1);
		}

		::System::Void _OnActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONACTIVE_OFFSET))(this);
		}

		::System::Void _OnDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONDEACTIVE_OFFSET))(this);
		}

		::System::Void ResetZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_RESETZOOM_OFFSET))(this);
		}

		::System::Void InitSetting(::RPG::GameCore::UI3DCameraFreeLookSetting* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DCameraFreeLookSetting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INITSETTING_OFFSET))(this, a1);
		}

		::System::Void SetLookAtPointName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKATPOINTNAME_OFFSET))(this, a1);
		}

		::System::Void SetFollowPointName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOWPOINTNAME_OFFSET))(this, a1);
		}

		::System::Void EnableCameraZoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_ENABLECAMERAZOOM_OFFSET))(this, a1);
		}

		::System::Void _CreateDummyLookAtPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATEDUMMYLOOKATPOINT_OFFSET))(this);
		}

		::UnityEngine::Transform* _CreateTransform(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATETRANSFORM_OFFSET))(this, a1);
		}

		::System::Void _SetInputAxisProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__SETINPUTAXISPROVIDER_OFFSET))(this);
		}

		::System::Single _CalculateZoomRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CALCULATEZOOMRATIO_OFFSET))(this);
		}

		::System::Single _ZoomMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMMIN_OFFSET))(this);
		}

		::System::Single _ZoomMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMMAX_OFFSET))(this);
		}

		::System::Single _ZoomSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMSPEED_OFFSET))(this);
		}

		::System::Single _DefaultZoom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__DEFAULTZOOM_OFFSET))(this);
		}

		::System::Void _ResetLookAtPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__RESETLOOKATPOSITION_OFFSET))(this);
		}

		::System::Void _UpdateLookAtAndFollow(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATELOOKATANDFOLLOW_OFFSET))(this, a1);
		}

		::System::Boolean _NeedLerpPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__NEEDLERPPOSITION_OFFSET))(this);
		}

		::System::Single _LerpDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__LERPDURATION_OFFSET))(this);
		}

		::System::Void _UpdateCameraZoom(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAZOOM_OFFSET))(this, a1);
		}

		::System::Void _UpdateCameraRot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAROT_OFFSET))(this);
		}

		::System::Single _GetOrbitsHeight(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETORBITSHEIGHT_OFFSET))(this, a1);
		}

		::System::Single _GetYAxisClampValue(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETYAXISCLAMPVALUE_OFFSET))(this, a1);
		}

		::System::Single _GetZoomInterp(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETZOOMINTERP_OFFSET))(this, a1);
		}

		::System::Single _GetLerpInterp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETLERPINTERP_OFFSET))(this);
		}

		::System::Void _ResetCameraAxis()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__RESETCAMERAAXIS_OFFSET))(this);
		}

		::System::Void _OnSettingChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONSETTINGCHANGED_OFFSET))(this);
		}

		::System::Single GetAxisValue(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUE_OFFSET))(this, a1);
		}

		::System::Single GetAxisValueFromCamera(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUEFROMCAMERA_OFFSET))(this, a1);
		}

		::System::Void SetAxisValueToCamera(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETAXISVALUETOCAMERA_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CinemachineFreeLook* get__FreeLookCamera()
		{
			return ((::Cinemachine::CinemachineFreeLook*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GET__FREELOOKCAMERA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::RPG::GameCore::UI3DVirtualCameraComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_INIT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_RESET_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SetLookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_SETLOOKAT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_SetFollow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_SETFOLLOW_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY__ONACTIVE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY__ONDEACTIVE_OFFSET))(this);
		}
	};
}
