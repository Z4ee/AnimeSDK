#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleBuffListViewData; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC80D4F0)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA___C__DISPLAYCLASS8_0___CLASSIFYMODIFIERS_B__0_OFFSET UNITYSDK_OFFSET(0xC80DA40)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleBuffListViewData___c__DisplayClass8_0_TypeDefinitionIndex = 71516;

	class BattleBuffListViewData___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::BattleBuffListViewData* __4__this; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* buffs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void __ClassifyModifiers_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA___C__DISPLAYCLASS8_0___CLASSIFYMODIFIERS_B__0_OFFSET))(this, a1);
		}
	};
}
