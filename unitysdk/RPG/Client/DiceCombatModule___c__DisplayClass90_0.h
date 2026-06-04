#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS90_0__BUYMULTISHOPGOODS_B__0_OFFSET UNITYSDK_OFFSET(0xB7EDD10)
#define RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS90_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB7EDD00)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatModule___c__DisplayClass90_0_TypeDefinitionIndex = 59485;

	class DiceCombatModule___c__DisplayClass90_0 : public ::System::Object
	{
	public:
		::System::Action* showAddItemDialogDelegate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS90_0__CTOR_OFFSET))(this);
		}

		::System::Void _BuyMultiShopGoods_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS90_0__BUYMULTISHOPGOODS_B__0_OFFSET))(this);
		}
	};
}
