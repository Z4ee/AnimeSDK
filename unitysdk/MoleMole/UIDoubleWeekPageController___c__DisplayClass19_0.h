#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_31FA216B8128BBFD_5;

#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C1E7A0)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_0__ONSELECTGRID_B__0_OFFSET UNITYSDK_OFFSET(0x14C1E7B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleWeekPageController___c__DisplayClass19_0_TypeDefinitionIndex = 52187;

	class UIDoubleWeekPageController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::Class_3_31FA216B8128BBFD_5* grid; // 0x10
		::System::Int32 idx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectGrid_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_0__ONSELECTGRID_B__0_OFFSET))(this);
		}
	};
}
