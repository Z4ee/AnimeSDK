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

#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_ENABLECAMERAZOOM_OFFSET UNITYSDK_OFFSET(0xB856940)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUEFROMCAMERA_OFFSET UNITYSDK_OFFSET(0xB8572B0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0xB857110)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GET__FREELOOKCAMERA_OFFSET UNITYSDK_OFFSET(0xB856A80)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INITSETTING_OFFSET UNITYSDK_OFFSET(0xB856620)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INIT_OFFSET UNITYSDK_OFFSET(0xB855DE0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB855120)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_RESETZOOM_OFFSET UNITYSDK_OFFSET(0xB8563D0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_RESET_OFFSET UNITYSDK_OFFSET(0xB855FB0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETAXISVALUETOCAMERA_OFFSET UNITYSDK_OFFSET(0xB857370)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOWPOINTNAME_OFFSET UNITYSDK_OFFSET(0xB8568F0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOW_OFFSET UNITYSDK_OFFSET(0xB856040)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKATPOINTNAME_OFFSET UNITYSDK_OFFSET(0xB8568A0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKAT_OFFSET UNITYSDK_OFFSET(0xB855FF0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CALCULATEZOOMRATIO_OFFSET UNITYSDK_OFFSET(0xB8552B0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATEDUMMYLOOKATPOINT_OFFSET UNITYSDK_OFFSET(0xB8561E0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATETRANSFORM_OFFSET UNITYSDK_OFFSET(0xB856990)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB857440)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__DEFAULTZOOM_OFFSET UNITYSDK_OFFSET(0xB856330)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETLERPINTERP_OFFSET UNITYSDK_OFFSET(0xB857000)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETORBITSHEIGHT_OFFSET UNITYSDK_OFFSET(0xB856EE0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETYAXISCLAMPVALUE_OFFSET UNITYSDK_OFFSET(0xB856F70)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETZOOMINTERP_OFFSET UNITYSDK_OFFSET(0xB856BE0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__LERPDURATION_OFFSET UNITYSDK_OFFSET(0xB856E80)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__NEEDLERPPOSITION_OFFSET UNITYSDK_OFFSET(0xB856DC0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONACTIVE_OFFSET UNITYSDK_OFFSET(0xB856090)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONDEACTIVE_OFFSET UNITYSDK_OFFSET(0xB856390)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONSETTINGCHANGED_OFFSET UNITYSDK_OFFSET(0xB856800)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__RESETCAMERAAXIS_OFFSET UNITYSDK_OFFSET(0xB8562A0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__RESETLOOKATPOSITION_OFFSET UNITYSDK_OFFSET(0xB856460)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__SETINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0xB8551D0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAROT_OFFSET UNITYSDK_OFFSET(0xB855D20)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAZOOM_OFFSET UNITYSDK_OFFSET(0xB8558A0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATELOOKATANDFOLLOW_OFFSET UNITYSDK_OFFSET(0xB855640)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMMAX_OFFSET UNITYSDK_OFFSET(0xB8565C0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMMIN_OFFSET UNITYSDK_OFFSET(0xB856B80)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMSPEED_OFFSET UNITYSDK_OFFSET(0xB856B20)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB857520)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB857480)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_RESET_OFFSET UNITYSDK_OFFSET(0xB857570)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_SETFOLLOW_OFFSET UNITYSDK_OFFSET(0xB8576D0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_SETLOOKAT_OFFSET UNITYSDK_OFFSET(0xB8575F0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY__ONACTIVE_OFFSET UNITYSDK_OFFSET(0xB8577B0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY__ONDEACTIVE_OFFSET UNITYSDK_OFFSET(0xB857830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DCameraFreeLookState_TypeDefinitionIndex = 53039;

	class UI3DCameraFreeLookState : public ::RPG::GameCore::UI3DCameraStateBase
	{
	public:
		::System::String* _FollowPointName; // 0x30
		::RPG::Client::InputDataController* _InputController; // 0x38
		::System::String* _LookAtPointName; // 0x40
		::UnityEngine::Transform* _DummyFollowTrans; // 0x48
		::RPG::GameCore::UI3DCameraFreeLookSetting* _Setting; // 0x50
		::RPG::Client::UI3DFreeLookController* _FreeLookController; // 0x58
		::UnityEngine::Transform* _DummyLookAtTrans; // 0x60
		::System::Single _LastDisSmooth; // 0x68
		::System::Single _ZoomSmoothVelocity; // 0x6C
		::System::Boolean _EnableCameraZoom; // 0x70
		::System::Single _CurrentZoom; // 0x74
		::UnityEngine::Vector3 _PerviousLookAtPosition; // 0x78
		::System::Single _SettingChangedTime; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::UI3DVirtualCameraComponent* cameraCmpt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INIT_OFFSET))(this, cameraCmpt);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_RESET_OFFSET))(this);
		}

		::System::Void SetLookAt(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKAT_OFFSET))(this, transform);
		}

		::System::Void SetFollow(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOW_OFFSET))(this, transform);
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

		::System::Void InitSetting(::RPG::GameCore::UI3DCameraFreeLookSetting* setting)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DCameraFreeLookSetting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INITSETTING_OFFSET))(this, setting);
		}

		::System::Void SetLookAtPointName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKATPOINTNAME_OFFSET))(this, name);
		}

		::System::Void SetFollowPointName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOWPOINTNAME_OFFSET))(this, name);
		}

		::System::Void EnableCameraZoom(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_ENABLECAMERAZOOM_OFFSET))(this, enable);
		}

		::System::Void _CreateDummyLookAtPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATEDUMMYLOOKATPOINT_OFFSET))(this);
		}

		::UnityEngine::Transform* _CreateTransform(::System::String* name)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATETRANSFORM_OFFSET))(this, name);
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

		::System::Void _UpdateLookAtAndFollow(::System::Single zoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATELOOKATANDFOLLOW_OFFSET))(this, zoom);
		}

		::System::Boolean _NeedLerpPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__NEEDLERPPOSITION_OFFSET))(this);
		}

		::System::Single _LerpDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__LERPDURATION_OFFSET))(this);
		}

		::System::Void _UpdateCameraZoom(::System::Single zoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAZOOM_OFFSET))(this, zoom);
		}

		::System::Void _UpdateCameraRot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAROT_OFFSET))(this);
		}

		::System::Single _GetOrbitsHeight(::System::Single zoom)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETORBITSHEIGHT_OFFSET))(this, zoom);
		}

		::System::Single _GetYAxisClampValue(::System::Single zoom)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETYAXISCLAMPVALUE_OFFSET))(this, zoom);
		}

		::System::Single _GetZoomInterp(::System::Single zoom)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETZOOMINTERP_OFFSET))(this, zoom);
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

		::System::Single GetAxisValue(::System::Int32 axis)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUE_OFFSET))(this, axis);
		}

		::System::Single GetAxisValueFromCamera(::System::Int32 axis)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUEFROMCAMERA_OFFSET))(this, axis);
		}

		::System::Void SetAxisValueToCamera(::System::Int32 axis, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETAXISVALUETOCAMERA_OFFSET))(this, axis, value);
		}

		::Cinemachine::CinemachineFreeLook* get__FreeLookCamera()
		{
			return ((::Cinemachine::CinemachineFreeLook*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GET__FREELOOKCAMERA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::RPG::GameCore::UI3DVirtualCameraComponent* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_RESET_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SetLookAt(::UnityEngine::Transform* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_SETLOOKAT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SetFollow(::UnityEngine::Transform* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE___IFIXBASEPROXY_SETFOLLOW_OFFSET))(this, P0);
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
