#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowResultPageController___c__DisplayClass53_0; }

#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS53_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15A3F160)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS53_1__REFRESHBOSSRUSHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x15A3F170)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS53_1__REFRESHBOSSRUSHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x15A3F230)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController___c__DisplayClass53_1_TypeDefinitionIndex = 80795;

	class UIHollowResultPageController___c__DisplayClass53_1 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowResultPageController___c__DisplayClass53_0* CS___8__locals1; // 0x10
		::System::Single prvRatio; // 0x18
		::System::Single curRatio; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS53_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBossRushView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS53_1__REFRESHBOSSRUSHVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshBossRushView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS53_1__REFRESHBOSSRUSHVIEW_B__2_OFFSET))(this);
		}
	};
}
