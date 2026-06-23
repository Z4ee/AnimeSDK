#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerFightingBuffItemWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD8250)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___C__DISPLAYCLASS8_0__SWITCHINACTION_B__0_OFFSET UNITYSDK_OFFSET(0x14BD8260)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerFightingBuffItemWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 71657;

	class UIBabeltowerFightingBuffItemWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action* onSwitch; // 0x10
		::MoleMole::UIBabeltowerFightingBuffItemWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchInAction_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFITEMWIDGETCONTROLLER___C__DISPLAYCLASS8_0__SWITCHINACTION_B__0_OFFSET))(this);
		}
	};
}
