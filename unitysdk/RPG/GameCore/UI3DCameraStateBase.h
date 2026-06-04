#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class VirtualCameraAutoFitScreen; }
namespace RPG::GameCore { class UI3DVirtualCameraComponent; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DCAMERASTATEBASE_ACTIVE_OFFSET UNITYSDK_OFFSET(0xCFA08D0)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_ADDTRACKEDOFFSET_OFFSET UNITYSDK_OFFSET(0xCFA03E0)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_CREATE_1_OFFSET UNITYSDK_OFFSET(0xCF9FFE0)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_CREATE_OFFSET UNITYSDK_OFFSET(0xCF9FE40)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_ENABLEAUTOFITSCREEN_OFFSET UNITYSDK_OFFSET(0xCFA0510)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_INIT_OFFSET UNITYSDK_OFFSET(0xCF9D910)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xCFA0C30)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCF9FA10)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_RESET_OFFSET UNITYSDK_OFFSET(0xCF9FAF0)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_SETCAMERAACTIVE_OFFSET UNITYSDK_OFFSET(0xCFA0B90)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_SETFOLLOW_OFFSET UNITYSDK_OFFSET(0xCF9FCC0)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_SETFOV_OFFSET UNITYSDK_OFFSET(0xCFA01D0)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_SETLOOKAT_OFFSET UNITYSDK_OFFSET(0xCF9FBC0)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_SETORBITALTRANSPOSERFOLLOWOFFSET_OFFSET UNITYSDK_OFFSET(0xCFA0810)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_SETSCREENXY_OFFSET UNITYSDK_OFFSET(0xCFA0320)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE_SETTRACKEDOFFSET_OFFSET UNITYSDK_OFFSET(0xCFA0260)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xCF9F9B0)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE__GETAUTOFITSCREENCMPT_OFFSET UNITYSDK_OFFSET(0xCFA0770)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE__ONACTIVE_OFFSET UNITYSDK_OFFSET(0xCF9FD70)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE__ONDEACTIVE_OFFSET UNITYSDK_OFFSET(0xCF9FDF0)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE__SETCINEMACHINECAMERABASE_OFFSET UNITYSDK_OFFSET(0xCF9FF90)
#define RPG_GAMECORE_UI3DCAMERASTATEBASE__UPDATECINEMACHINEBRAIN_OFFSET UNITYSDK_OFFSET(0xCFA0C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DCameraStateBase_TypeDefinitionIndex = 53750;

	class UI3DCameraStateBase : public ::System::Object
	{
	public:
		// static const ::System::Int32 _PRIORITY_ON = 0x64; // 0x0
		// static const ::System::Int32 _PRIORITY_OFF = 0x0; // 0x0
		::RPG::GameCore::UI3DVirtualCameraComponent* _UI3DVirtualCameraCmpt; // 0x10
		::Cinemachine::CinemachineVirtualCameraBase* _VirtualCameraBase; // 0x18
		::RPG::Client::VirtualCameraAutoFitScreen* _AutoFitScreenCmpt; // 0x20
		::System::Boolean _IsActive; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::UI3DCameraStateBase* Create(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::RPG::GameCore::UI3DCameraStateBase*(*)(::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_CREATE_OFFSET))(a1);
		}

		static ::RPG::GameCore::UI3DCameraStateBase* Create_1(::System::Type* a1, ::Cinemachine::CinemachineVirtualCameraBase* a2)
		{
			return ((::RPG::GameCore::UI3DCameraStateBase*(*)(::System::Type*, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_CREATE_1_OFFSET))(a1, a2);
		}

		::System::Void Init(::RPG::GameCore::UI3DVirtualCameraComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_INIT_OFFSET))(this, a1);
		}

		::System::Void SetLookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_SETLOOKAT_OFFSET))(this, a1);
		}

		::System::Void SetFollow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_SETFOLLOW_OFFSET))(this, a1);
		}

		::System::Void SetFov(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_SETFOV_OFFSET))(this, a1);
		}

		::System::Void SetTrackedOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_SETTRACKEDOFFSET_OFFSET))(this, a1);
		}

		::System::Void SetScreenXY(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_SETSCREENXY_OFFSET))(this, a1);
		}

		::System::Void AddTrackedOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_ADDTRACKEDOFFSET_OFFSET))(this, a1);
		}

		::System::Void EnableAutoFitScreen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_ENABLEAUTOFITSCREEN_OFFSET))(this, a1);
		}

		::System::Void SetOrbitalTransposerFollowOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_SETORBITALTRANSPOSERFOLLOWOFFSET_OFFSET))(this, a1);
		}

		::System::Void Active()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_ACTIVE_OFFSET))(this);
		}

		::System::Void SetCameraActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE_SETCAMERAACTIVE_OFFSET))(this, a1);
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

		::System::Void _SetCinemachineCameraBase(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATEBASE__SETCINEMACHINECAMERABASE_OFFSET))(this, a1);
		}
	};
}
