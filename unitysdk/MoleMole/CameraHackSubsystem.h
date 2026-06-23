#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_1_2BEAA93324417DF4;
namespace MoleMole { class HackEntrySubSystem; }
namespace MoleMole::Config { class ConfigHack; }

#define MOLEMOLE_CAMERAHACKSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xE94BB90)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE94BCF0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xE94BE40)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_POSSESSED_OFFSET UNITYSDK_OFFSET(0xE94B860)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xE94B560)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_REGISTERUIEVENTNOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xE94B5D0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_UNPOSSESSED_OFFSET UNITYSDK_OFFSET(0xE94B9D0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xE94B800)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE94C190)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xE94C1B0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE94C240)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xE94C2D0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xE94C360)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xE94C3F0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraHackSubsystem_TypeDefinitionIndex = 40563;

	class CameraHackSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::CameraHackSubsystem*>
	{
	public:
		::MoleMole::HackEntrySubSystem* _hackEntrySubSystem; // 0x10
		::MoleMole::Config::ConfigHack* _configHack; // 0x18
		::Class_1_2BEAA93324417DF4* _generalEventCollection; // 0x20
		::System::Boolean _isNewOpenHackEntrySubSystem; // 0x28

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
