#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class Class_1_35D50070BC469EAB;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_INTERACTENTRYMODECHAT_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x153D0EB0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODECHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x153D0FC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntryModeChat_TypeDefinitionIndex = 64807;

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

		::Class_1_35D50070BC469EAB* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::Class_1_35D50070BC469EAB*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODECHAT_CREATEINSTANCE_OFFSET))(this, entry);
		}
	};
}
