#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class Class_1_816D4E2238E8C24A;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x11714630)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CHECKVALUECONTENT_OFFSET UNITYSDK_OFFSET(0x117146D0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x11714590)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_GETEFFINTERACTRANGE_OFFSET UNITYSDK_OFFSET(0x11714520)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11714740)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x11714DF0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x11714E00)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_CHECKVALUECONTENT_OFFSET UNITYSDK_OFFSET(0x11714E90)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_GETEFFINTERACTRANGE_OFFSET UNITYSDK_OFFSET(0x11714F20)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11714FC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntryModeDomain_TypeDefinitionIndex = 75845;

	class InteractEntryModeDomain : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::Single monsterInteractionTime; // 0x20
		::System::Single occupyNormalRatio; // 0x24
		::System::Single monsterInterruptRatio; // 0x28
		::System::Single occupyInterruptRatio; // 0x2C
		::System::Single occupyDuration; // 0x30
		::System::Single effRange; // 0x34
		::System::Boolean useFairyImage; // 0x38
		::System::Boolean allowOccupyRatioToNegative; // 0x39
		::System::Boolean ShowOccupyProgressBar; // 0x3A
		::System::Boolean IsPlayerOutPause; // 0x3B
		::System::Single range; // 0x3C
		::System::Single monsterInterruptMaxRatio; // 0x40
		::System::Single targetResource; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN__CTOR_OFFSET))(this);
		}

		::System::Boolean GetEffInteractRange(::System::Single& effRadius)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_GETEFFINTERACTRANGE_OFFSET))(this, effRadius);
		}

		::Class_1_816D4E2238E8C24A* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::Class_1_816D4E2238E8C24A*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CREATEINSTANCE_OFFSET))(this, entry);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::Void CheckValueContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CHECKVALUECONTENT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_TOSTRING_OFFSET))(this);
		}

		::System::Void __base_CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::Void __base_CheckValueContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_CHECKVALUECONTENT_OFFSET))(this);
		}

		::System::Boolean __base_GetEffInteractRange(::System::Single& P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_GETEFFINTERACTRANGE_OFFSET))(this, P0);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
