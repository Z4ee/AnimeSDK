#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMonsterFantasyQteMissWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMONSTERFANTASYQTEMISSWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D89900)
#define MOLEMOLE_UIMONSTERFANTASYQTEMISSWIDGETCONTROLLER___C__DISPLAYCLASS4_0__PLAYANIM_B__0_OFFSET UNITYSDK_OFFSET(0x14D89910)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyQteMissWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 45634;

	class UIMonsterFantasyQteMissWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMonsterFantasyQteMissWidgetController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEMISSWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEMISSWIDGETCONTROLLER___C__DISPLAYCLASS4_0__PLAYANIM_B__0_OFFSET))(this);
		}
	};
}
