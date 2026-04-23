#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_73AC9E6E21F4A41B_OFFSET UNITYSDK_OFFSET(0x18676C20)
#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_EB80B1E91AF07061_OFFSET UNITYSDK_OFFSET(0x18676B50)
#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18676BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureIsTriggerBattleByNpcMonster_TypeDefinitionIndex = 20512;

	class AdventureIsTriggerBattleByNpcMonster : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EB80B1E91AF07061(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_EB80B1E91AF07061_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_73AC9E6E21F4A41B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_73AC9E6E21F4A41B_OFFSET))(a1, a2);
		}
	};
}
