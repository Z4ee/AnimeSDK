#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_73AC9E6E21F4A41B_OFFSET UNITYSDK_OFFSET(0x1AE5D630)
#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_9EA752198751D561_OFFSET UNITYSDK_OFFSET(0x1AE5D770)
#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_A0C735BCF3A5BF98_OFFSET UNITYSDK_OFFSET(0x1AE5D7A0)
#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_E4E8F2C898C13E48_OFFSET UNITYSDK_OFFSET(0x1AE5D5F0)
#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5D620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureIsTriggerBattleByNpcMonster_TypeDefinitionIndex = 20863;

	class AdventureIsTriggerBattleByNpcMonster : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E4E8F2C898C13E48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_E4E8F2C898C13E48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_73AC9E6E21F4A41B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_73AC9E6E21F4A41B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9EA752198751D561(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_9EA752198751D561_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A0C735BCF3A5BF98(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_A0C735BCF3A5BF98_OFFSET))(a1, a2);
		}
	};
}
