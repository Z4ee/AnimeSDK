#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIYorozuyaDifficultWidgetController; }

#define MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C5C090)
#define MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x14C5C0A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaDifficultWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 72880;

	class UIYorozuyaDifficultWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIYorozuyaDifficultWidgetController* __4__this; // 0x10
		::System::Int32 entranceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONUIOPEN_B__0_OFFSET))(this);
		}
	};
}
