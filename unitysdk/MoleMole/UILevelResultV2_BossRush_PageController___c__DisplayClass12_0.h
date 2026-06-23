#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILevelResultV2_BossRush_PageController; }

#define MOLEMOLE_UILEVELRESULTV2_BOSSRUSH_PAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C06830)
#define MOLEMOLE_UILEVELRESULTV2_BOSSRUSH_PAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHBOSSRUSHVIEW_B__4_OFFSET UNITYSDK_OFFSET(0x16C06840)
#define MOLEMOLE_UILEVELRESULTV2_BOSSRUSH_PAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHBOSSRUSHVIEW_G__ONPROGRESS_0_OFFSET UNITYSDK_OFFSET(0x16C06A90)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_BossRush_PageController___c__DisplayClass12_0_TypeDefinitionIndex = 77305;

	class UILevelResultV2_BossRush_PageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UILevelResultV2_BossRush_PageController* __4__this; // 0x10
		::System::UInt32 curRemain; // 0x18
		::System::Single timer; // 0x1C
		::System::UInt32 curTotal; // 0x20
		::System::Single realExpProgressDuration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_BOSSRUSH_PAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBossRushView_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_BOSSRUSH_PAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHBOSSRUSHVIEW_B__4_OFFSET))(this);
		}

		::System::Void _RefreshBossRushView_g__OnProgress_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_BOSSRUSH_PAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHBOSSRUSHVIEW_G__ONPROGRESS_0_OFFSET))(this, progress);
		}
	};
}
