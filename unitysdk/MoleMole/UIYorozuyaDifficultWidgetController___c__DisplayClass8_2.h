#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIYorozuyaDifficultWidgetController; }

#define MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__DISPLAYCLASS8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE5260)
#define MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__DISPLAYCLASS8_2__ONUIOPEN_B__2_OFFSET UNITYSDK_OFFSET(0x11BE5270)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaDifficultWidgetController___c__DisplayClass8_2_TypeDefinitionIndex = 51047;

	class UIYorozuyaDifficultWidgetController___c__DisplayClass8_2 : public ::System::Object
	{
	public:
		::MoleMole::UIYorozuyaDifficultWidgetController* __4__this; // 0x10
		::System::Int32 entranceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__DISPLAYCLASS8_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__DISPLAYCLASS8_2__ONUIOPEN_B__2_OFFSET))(this);
		}
	};
}
