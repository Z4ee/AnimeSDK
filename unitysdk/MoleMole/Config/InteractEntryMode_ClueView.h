#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class Class_1_816D4E2238E8C24A;
namespace MoleMole::Config { class InteractEntry; }

#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1B4E9370)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B4E9260)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E9430)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1B4E9440)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntryMode_ClueView_TypeDefinitionIndex = 61047;

	class InteractEntryMode_ClueView : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::Int32 ClueTemplateId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW__CTOR_OFFSET))(this);
		}

		::Class_1_816D4E2238E8C24A* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::Class_1_816D4E2238E8C24A*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW_CREATEINSTANCE_OFFSET))(this, entry);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::Void __base_CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW___BASE_CHECKACTIONCONTENT_OFFSET))(this);
		}
	};
}
