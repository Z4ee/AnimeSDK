#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_435;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDABA530)
#define RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xDABFF30)
#define RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER_ISCAMERABLENDING_OFFSET UNITYSDK_OFFSET(0xDAC1190)
#define RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xDAC10C0)
#define RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xDAC12C0)
#define RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER_SWITCHCAMERA_OFFSET UNITYSDK_OFFSET(0xDAC0D20)
#define RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER_SWITCHTOENTRANCECAMERA_OFFSET UNITYSDK_OFFSET(0xDAC0690)
#define RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER__ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xDAC0B90)
#define RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDABA4B0)
#define RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER__DEACTIVATECAMERA_OFFSET UNITYSDK_OFFSET(0xDAC0530)
#define RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER__RESETAUDIOLISTENER_OFFSET UNITYSDK_OFFSET(0xDAC03E0)
#define RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER__SETAUDIOLISTENERFOLLOW_OFFSET UNITYSDK_OFFSET(0xDAC13D0)
#define RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER__SETUPBLENDCONFIG_OFFSET UNITYSDK_OFFSET(0xDAC08D0)

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int PetDiyCameraController_TypeDefinitionIndex = 74481;

	class PetDiyCameraController : public ::System::Object
	{
	public:
		// static const ::System::String* _EntranceCameraName; // 0x0
		// static const ::System::String* _AreaCameraPath; // 0x0
		// static const ::System::String* _SlotCameraPath; // 0x0
		::UnityEngine::Transform* _CameraRoot; // 0x10
		::Cinemachine::CinemachineVirtualCameraBase* _ActiveCamera; // 0x18
		::UnityEngine::GameObject* _CameraPrefab; // 0x20
		::System::String* _CameraPrefabPath; // 0x28

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void SwitchToEntranceCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER_SWITCHTOENTRANCECAMERA_OFFSET))(this, a1);
		}

		::System::Void SwitchCamera(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER_SWITCHCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER_MANUALUPDATE_OFFSET))(this);
		}

		::System::Boolean IsCameraBlending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER_ISCAMERABLENDING_OFFSET))(this);
		}

		::System::Void PlayAnimation(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER_PLAYANIMATION_OFFSET))(this, a1);
		}

		::System::Void _ActiveVirtualCamera(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER__ACTIVEVIRTUALCAMERA_OFFSET))(this, a1);
		}

		::System::Void _SetAudioListenerFollow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER__SETAUDIOLISTENERFOLLOW_OFFSET))(this, a1);
		}

		::System::Void _ResetAudioListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER__RESETAUDIOLISTENER_OFFSET))(this);
		}

		::System::Void _DeactivateCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER__DEACTIVATECAMERA_OFFSET))(this);
		}

		::System::Void _SetupBlendConfig(::Class_0_16E4307DCC419505_435* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_435*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETDIYCAMERACONTROLLER__SETUPBLENDCONFIG_OFFSET))(this, a1);
		}
	};
}
