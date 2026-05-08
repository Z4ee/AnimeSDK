#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_162;
class Class_2_F69D29AB796376C2;
namespace System { class String; }

#define MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16483B20)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelUnlockRowWidgetController_Context_TypeDefinitionIndex = 72393;

	class UICoopLevelUnlockRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_162* CoopQuestTemplate; // 0x28
		::System::String* TextKey; // 0x30
		::Class_2_F69D29AB796376C2* QuestTemplate; // 0x38
		::System::Boolean ShowStudy; // 0x40
		::System::Boolean ShowChallenge; // 0x41
		::System::Boolean ShowNightmare; // 0x42
		::System::Boolean ShowNormal; // 0x43

		::System::Void _ctor(::System::Int32 questId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, questId);
		}
	};
}
