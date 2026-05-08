#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerFightingBuffItemWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12F4CFD0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__SWITCHOUTACTION_B__0_OFFSET UNITYSDK_OFFSET(0x12F4CFE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerFightingBuffItemWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 59387;

	class UIBabeltowerFightingBuffItemWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerFightingBuffItemWidgetController* __4__this; // 0x10
		::System::Action* onSwitch; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchOutAction_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__SWITCHOUTACTION_B__0_OFFSET))(this);
		}
	};
}
