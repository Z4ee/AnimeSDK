#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_10.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIHOUSERHYTHMLEVELRESULTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17329BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmLevelResultPopWindowController_Context_TypeDefinitionIndex = 70735;

	class UIHouseRhythmLevelResultPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* restartAction; // 0x28
		::System::Action* closeAction; // 0x30
		::System::Int32 good; // 0x38
		::System::Int32 perfect; // 0x3C
		::System::Int32 score; // 0x40
		::System::Single accuracy; // 0x44
		::System::Int32 gameLevelID; // 0x48
		::Enum_3_96F6662CA3713095_10 rank; // 0x4C
		::System::Int32 combo; // 0x50
		::System::Int32 miss; // 0x54
		::System::Int32 characterID; // 0x58
		::System::Boolean fullCombo; // 0x5C
		::System::Boolean isDie; // 0x5D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMLEVELRESULTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
