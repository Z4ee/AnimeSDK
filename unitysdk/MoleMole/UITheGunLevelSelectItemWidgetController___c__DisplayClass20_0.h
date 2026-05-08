#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITheGunLevelSelectItemWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UITHEGUNLEVELSELECTITEMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x137ABF20)
#define MOLEMOLE_UITHEGUNLEVELSELECTITEMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__PLAYUNLOCKANIM_B__0_OFFSET UNITYSDK_OFFSET(0x137ABF30)

namespace MoleMole
{
	inline static constexpr unsigned int UITheGunLevelSelectItemWidgetController___c__DisplayClass20_0_TypeDefinitionIndex = 45341;

	class UITheGunLevelSelectItemWidgetController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UITheGunLevelSelectItemWidgetController* __4__this; // 0x10
		::System::Action* onUnlockAnimEnd; // 0x18

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
