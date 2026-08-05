#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class Class_1_816D4E2238E8C24A;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_INTERACTENTRYMODECHAT_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B922240)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODECHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B922350)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntryModeChat_TypeDefinitionIndex = 49175;

	class InteractEntryModeChat : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::String* storyModuleID; // 0x20
		::System::String* Speaker; // 0x28
		::System::Int32 performID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODECHAT__CTOR_OFFSET))(this);
		}

		::Class_1_816D4E2238E8C24A* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::Class_1_816D4E2238E8C24A*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODECHAT_CREATEINSTANCE_OFFSET))(this, entry);
		}
	};
}
