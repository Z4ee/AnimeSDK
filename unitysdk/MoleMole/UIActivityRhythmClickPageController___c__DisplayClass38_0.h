#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityRhythmClickPageController; }

#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181BB6A0)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS38_0__TRIGGERCLICKGUIDESTARTFADEINUIACTIONWHENAUDIOVIDEOMODIFY_B__0_OFFSET UNITYSDK_OFFSET(0x181BB6B0)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS38_0__TRIGGERCLICKGUIDESTARTFADEINUIACTIONWHENAUDIOVIDEOMODIFY_B__1_OFFSET UNITYSDK_OFFSET(0x181BB700)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRhythmClickPageController___c__DisplayClass38_0_TypeDefinitionIndex = 81301;

	class UIActivityRhythmClickPageController___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityRhythmClickPageController* __4__this; // 0x10
		::System::Single endFadeOutTime; // 0x18
		::System::Boolean isOddClickEvent; // 0x1C
		::System::Int32 realBeatIdx; // 0x20
		::System::Single startTriggerBeatTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerClickGuideStartFadeInUIActionWhenAudioVideoModify_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS38_0__TRIGGERCLICKGUIDESTARTFADEINUIACTIONWHENAUDIOVIDEOMODIFY_B__0_OFFSET))(this);
		}

		::System::Void _TriggerClickGuideStartFadeInUIActionWhenAudioVideoModify_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS38_0__TRIGGERCLICKGUIDESTARTFADEINUIACTIONWHENAUDIOVIDEOMODIFY_B__1_OFFSET))(this);
		}
	};
}
