#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInterKnotMissionWidgetController; }

#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18385E20)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS21_0__ONUIINIT_B__0_OFFSET UNITYSDK_OFFSET(0x18385E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotMissionWidgetController___c__DisplayClass21_0_TypeDefinitionIndex = 91289;

	class UIInterKnotMissionWidgetController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInterKnotMissionWidgetController* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS21_0__ONUIINIT_B__0_OFFSET))(this);
		}
	};
}
