#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_2BEAA93324417DF4;
namespace MoleMole { class HackEntrySubSystem; }
namespace MoleMole::Config { class ConfigHack; }

#define MOLEMOLE_CAMERAHACKSUBSYSTEM_INITCAMERAROTATIONCACHE_OFFSET UNITYSDK_OFFSET(0xF11EC40)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_ISCAMERAMOVELIMITED_OFFSET UNITYSDK_OFFSET(0xF11F3F0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xF11EAE0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF11EF20)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xF11F070)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_POSSESSED_OFFSET UNITYSDK_OFFSET(0xF11E7B0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xF11E4B0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_REGISTERUIEVENTNOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xF11E520)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_UNPOSSESSED_OFFSET UNITYSDK_OFFSET(0xF11E920)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xF11E750)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xF11F8D0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xF11F8F0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF11F980)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xF11FA10)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xF11FAA0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xF11FB30)

namespace MoleMole
{
	inline static constexpr unsigned int CameraHackSubsystem_TypeDefinitionIndex = 46311;

	class CameraHackSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::CameraHackSubsystem*>
	{
	public:
		// static const ::System::Single CameraMoveLimitDeltaThreshold; // 0x0
		::MoleMole::Config::ConfigHack* _configHack; // 0x10
		::Class_1_2BEAA93324417DF4* _generalEventCollection; // 0x18
		::MoleMole::HackEntrySubSystem* _hackEntrySubSystem; // 0x20
		::System::Single _lastCameraYaw; // 0x28
		::System::Boolean _isCameraMoveLimitSoundTriggered; // 0x2C
		::System::Boolean _isNewOpenHackEntrySubSystem; // 0x2D
		::System::Single _lastCameraPitch; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void Possessed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_POSSESSED_OFFSET))(this);
		}

		::System::Void UnPossessed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_UNPOSSESSED_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void InitCameraRotationCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_INITCAMERAROTATIONCACHE_OFFSET))(this);
		}

		::System::Boolean IsCameraMoveLimited(::UnityEngine::Vector2 inputDelta)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_ISCAMERAMOVELIMITED_OFFSET))(this, inputDelta);
		}

		::System::Void RegisterUIEventNotifyType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_REGISTERUIEVENTNOTIFYTYPE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
