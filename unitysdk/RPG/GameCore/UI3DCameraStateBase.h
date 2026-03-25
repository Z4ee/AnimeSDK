#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class VirtualCameraAutoFitScreen; }
namespace RPG::GameCore { class UI3DVirtualCameraComponent; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DCAMERASTATEBASE_ACTIVE_OFFSET UNITYSDK_OFFSET(0xAAED740)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_ADDTRACKEDOFFSET_OFFSET UNITYSDK_OFFSET(0xAAED240)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_CREATE_1_OFFSET UNITYSDK_OFFSET(0xAAECE40)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_CREATE_OFFSET UNITYSDK_OFFSET(0xAAECCA0)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_ENABLEAUTOFITSCREEN_OFFSET UNITYSDK_OFFSET(0xAAED360)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_INIT_OFFSET UNITYSDK_OFFSET(0xAAEB320)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xAAEDA20)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAAEC8B0)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_RESET_OFFSET UNITYSDK_OFFSET(0xAAEC990)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_SETCAMERAACTIVE_OFFSET UNITYSDK_OFFSET(0xAAED980)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_SETFOLLOW_OFFSET UNITYSDK_OFFSET(0xAAECB20)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_SETFOV_OFFSET UNITYSDK_OFFSET(0xAAED040)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_SETLOOKAT_OFFSET UNITYSDK_OFFSET(0xAAECA40)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_SETORBITALTRANSPOSERFOLLOWOFFSET_OFFSET UNITYSDK_OFFSET(0xAAED660)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_SETSCREENXY_OFFSET UNITYSDK_OFFSET(0xAAED180)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_SETTRACKEDOFFSET_OFFSET UNITYSDK_OFFSET(0xAAED0D0)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xAAEC850)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE__GETAUTOFITSCREENCMPT_OFFSET UNITYSDK_OFFSET(0xAAED5C0)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE__ONACTIVE_OFFSET UNITYSDK_OFFSET(0xAAECBD0)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE__ONDEACTIVE_OFFSET UNITYSDK_OFFSET(0xAAECC50)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE__SETCINEMACHINECAMERABASE_OFFSET UNITYSDK_OFFSET(0xAAECDF0)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE__UPDATECINEMACHINEBRAIN_OFFSET UNITYSDK_OFFSET(0xAAEB010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DCameraStateBase_TypeDefinitionIndex = 46365;

	class UI3DCameraStateBase : public ::System::Object
	{
	public:
		// static const ::System::Int32 _PRIORITY_ON = 0x64; // 0x0
		// static const ::System::Int32 _PRIORITY_OFF = 0x0; // 0x0
		::RPG::Client::VirtualCameraAutoFitScreen* _AutoFitScreenCmpt; // 0x10
		::RPG::GameCore::UI3DVirtualCameraComponent* _UI3DVirtualCameraCmpt; // 0x18
		::Cinemachine::CinemachineVirtualCameraBase* _VirtualCameraBase; // 0x20
		::System::Boolean _IsActive; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::UI3DCameraStateBase* Create(::Cinemachine::CinemachineVirtualCameraBase* vcCamera)
		{
			return ((::RPG::GameCore::UI3DCameraStateBase*(*)(::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_CREATE_OFFSET))(vcCamera);
		}

		static ::RPG::GameCore::UI3DCameraStateBase* Create_1(::System::Type* cameraStateType, ::Cinemachine::CinemachineVirtualCameraBase* vcCamera)
		{
			return ((::RPG::GameCore::UI3DCameraStateBase*(*)(::System::Type*, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_CREATE_1_OFFSET))(cameraStateType, vcCamera);
		}

		::System::Void Init(::RPG::GameCore::UI3DVirtualCameraComponent* cameraCmpt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_INIT_OFFSET))(this, cameraCmpt);
		}

		::System::Void SetLookAt(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_SETLOOKAT_OFFSET))(this, transform);
		}

		::System::Void SetFollow(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_SETFOLLOW_OFFSET))(this, transform);
		}

		::System::Void SetFov(::System::Single fov)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_SETFOV_OFFSET))(this, fov);
		}

		::System::Void SetTrackedOffset(::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_SETTRACKEDOFFSET_OFFSET))(this, offset);
		}

		::System::Void SetScreenXY(::UnityEngine::Vector3 screenXY)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_SETSCREENXY_OFFSET))(this, screenXY);
		}

		::System::Void AddTrackedOffset(::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_ADDTRACKEDOFFSET_OFFSET))(this, offset);
		}

		::System::Void EnableAutoFitScreen(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_ENABLEAUTOFITSCREEN_OFFSET))(this, enable);
		}

		::System::Void SetOrbitalTransposerFollowOffset(::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_SETORBITALTRANSPOSERFOLLOWOFFSET_OFFSET))(this, offset);
		}

		::System::Void Active()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_ACTIVE_OFFSET))(this);
		}

		::System::Void SetCameraActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_SETCAMERAACTIVE_OFFSET))(this, active);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_ISACTIVE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_RESET_OFFSET))(this);
		}

		::System::Void _OnActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE__ONACTIVE_OFFSET))(this);
		}

		::System::Void _OnDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE__ONDEACTIVE_OFFSET))(this);
		}

		::System::Void _UpdateCinemachineBrain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE__UPDATECINEMACHINEBRAIN_OFFSET))(this);
		}

		::RPG::Client::VirtualCameraAutoFitScreen* _GetAutoFitScreenCmpt()
		{
			return ((::RPG::Client::VirtualCameraAutoFitScreen*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE__GETAUTOFITSCREENCMPT_OFFSET))(this);
		}

		::System::Void _SetCinemachineCameraBase(::Cinemachine::CinemachineVirtualCameraBase* cmCamera)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE__SETCINEMACHINECAMERABASE_OFFSET))(this, cmCamera);
		}
	};
}
