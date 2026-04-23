#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineCRPVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER_ACTIVEVCAMERA_1_OFFSET UNITYSDK_OFFSET(0xA912C00)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER_ACTIVEVCAMERA_OFFSET UNITYSDK_OFFSET(0xA912AE0)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xA9128E0)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA912C80)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xA912F00)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER_SETTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0xA912A00)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xA912890)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA913000)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER__SYNCTOCRPVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xA912D80)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCRPVCameraController_TypeDefinitionIndex = 63564;

	class MonoCRPVCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineCRPVirtualCamera* _CRPVCamera; // 0x18
		::UnityEngine::Rendering::CRPVirtualCamera* _TargetCamera; // 0x20
		::System::Boolean _Inited; // 0x28
		::Cinemachine::CinemachineVirtualCamera* _VCamera; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER_START_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void SetTargetCamera(::UnityEngine::Transform* cameraRoot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER_SETTARGETCAMERA_OFFSET))(this, cameraRoot);
		}

		::System::Void ActiveVCamera(::UnityEngine::Transform* cameraRoot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER_ACTIVEVCAMERA_OFFSET))(this, cameraRoot);
		}

		::System::Void ActiveVCamera_1(::Cinemachine::CinemachineVirtualCamera* vcam)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER_ACTIVEVCAMERA_1_OFFSET))(this, vcam);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void ManualUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER_MANUALUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void _SyncToCRPVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER__SYNCTOCRPVIRTUALCAMERA_OFFSET))(this);
		}
	};
}
