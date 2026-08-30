#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Enchant; }
namespace RPG::Client::ChenLingBattle { class Soldier; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERENCHANTCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC36BC0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierEnchantChangeData_TypeDefinitionIndex = 75767;

	class SoldierEnchantChangeData : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::Soldier* Soldier; // 0x10
		::RPG::Client::ChenLingBattle::Enchant* Enchant; // 0x18

		::System::Void _ctor(::RPG::Client::ChenLingBattle::Soldier* a1, ::RPG::Client::ChenLingBattle::Enchant* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*, ::RPG::Client::ChenLingBattle::Enchant*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERENCHANTCHANGEDATA__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
