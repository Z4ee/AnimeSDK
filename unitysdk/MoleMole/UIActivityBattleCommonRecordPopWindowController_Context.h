#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIActivityBattleCommonRecordPopWindowController_RecordData; }

#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x173CC420)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleCommonRecordPopWindowController_Context_TypeDefinitionIndex = 71841;

	class UIActivityBattleCommonRecordPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordData* lastRecordData; // 0x28
		::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordData* bestRecordData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
