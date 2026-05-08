#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIYorozuyaDifficultWidgetController; }

#define MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__DISPLAYCLASS8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12778D00)
#define MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__DISPLAYCLASS8_1__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x12778D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaDifficultWidgetController___c__DisplayClass8_1_TypeDefinitionIndex = 72876;

	class UIYorozuyaDifficultWidgetController___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::MoleMole::UIYorozuyaDifficultWidgetController* __4__this; // 0x10
		::System::Int32 chapterId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__DISPLAYCLASS8_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__DISPLAYCLASS8_1__ONUIOPEN_B__1_OFFSET))(this);
		}
	};
}
