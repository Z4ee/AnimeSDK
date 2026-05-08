#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_643;

#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1578FF20)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_1__ONSELECTGRID_B__1_OFFSET UNITYSDK_OFFSET(0x1578FF30)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleWeekPageController___c__DisplayClass19_1_TypeDefinitionIndex = 73441;

	class UIDoubleWeekPageController___c__DisplayClass19_1 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_643* weeklyQuestConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectGrid_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_1__ONSELECTGRID_B__1_OFFSET))(this);
		}
	};
}
