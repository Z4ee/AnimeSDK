#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS108_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8D7C20)
#define RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS108_0___GENSHOWADDITEMDIALOGDELEGATE_B__0_OFFSET UNITYSDK_OFFSET(0x1B8D81B0)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatModule___c__DisplayClass108_0_TypeDefinitionIndex = 63621;

	class DiceCombatModule___c__DisplayClass108_0 : public ::System::Object
	{
	public:
		::System::Object* itemConfig; // 0x10
		::System::Boolean isNewItem; // 0x18
		::System::Boolean isAvatar; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS108_0__CTOR_OFFSET))(this);
		}

		::System::Void __GenShowAddItemDialogDelegate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS108_0___GENSHOWADDITEMDIALOGDELEGATE_B__0_OFFSET))(this);
		}
	};
}
