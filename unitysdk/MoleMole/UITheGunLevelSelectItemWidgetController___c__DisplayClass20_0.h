#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITheGunLevelSelectItemWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UITHEGUNLEVELSELECTITEMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16196110)
#define MOLEMOLE_UITHEGUNLEVELSELECTITEMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__PLAYUNLOCKANIM_B__0_OFFSET UNITYSDK_OFFSET(0x16196120)

namespace MoleMole
{
	inline static constexpr unsigned int UITheGunLevelSelectItemWidgetController___c__DisplayClass20_0_TypeDefinitionIndex = 42726;

	class UITheGunLevelSelectItemWidgetController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Action* onUnlockAnimEnd; // 0x10
		::MoleMole::UITheGunLevelSelectItemWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNLEVELSELECTITEMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayUnlockAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNLEVELSELECTITEMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__PLAYUNLOCKANIM_B__0_OFFSET))(this);
		}
	};
}
