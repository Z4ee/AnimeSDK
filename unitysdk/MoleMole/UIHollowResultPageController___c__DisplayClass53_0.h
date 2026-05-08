#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowResultPageController; }

#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x169CE8F0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS53_0__REFRESHBOSSRUSHVIEW_B__4_OFFSET UNITYSDK_OFFSET(0x169CE900)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS53_0__REFRESHBOSSRUSHVIEW_G__ONPROGRESS_0_OFFSET UNITYSDK_OFFSET(0x169CEB50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController___c__DisplayClass53_0_TypeDefinitionIndex = 80798;

	class UIHollowResultPageController___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowResultPageController* __4__this; // 0x10
		::System::UInt32 curTotal; // 0x18
		::System::Single timer; // 0x1C
		::System::UInt32 curRemain; // 0x20
		::System::Single realExpProgressDuration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBossRushView_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS53_0__REFRESHBOSSRUSHVIEW_B__4_OFFSET))(this);
		}

		::System::Void _RefreshBossRushView_g__OnProgress_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS53_0__REFRESHBOSSRUSHVIEW_G__ONPROGRESS_0_OFFSET))(this, progress);
		}
	};
}
