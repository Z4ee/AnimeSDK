#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_461EA6EB56C0C4CC_OFFSET UNITYSDK_OFFSET(0x1944EDA0)
#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_73AC9E6E21F4A41B_OFFSET UNITYSDK_OFFSET(0x1944EC60)
#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_8D9E61A88CC2C1A4_OFFSET UNITYSDK_OFFSET(0x1944EE20)
#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_EB80B1E91AF07061_OFFSET UNITYSDK_OFFSET(0x1944EB90)
#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1944EC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureIsTriggerBattleByNpcMonster_TypeDefinitionIndex = 20448;

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

		static ::System::Void Method_4_461EA6EB56C0C4CC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_461EA6EB56C0C4CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8D9E61A88CC2C1A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_METHOD_4_8D9E61A88CC2C1A4_OFFSET))(a1, a2);
		}
	};
}
