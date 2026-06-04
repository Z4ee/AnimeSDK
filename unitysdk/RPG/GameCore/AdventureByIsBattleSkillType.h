#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_0E5D77B248BC52D4_OFFSET UNITYSDK_OFFSET(0x194431F0)
#define RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_3226D662A6D7BF14_OFFSET UNITYSDK_OFFSET(0x194433F0)
#define RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_6AA4D2737211964A_OFFSET UNITYSDK_OFFSET(0x19443120)
#define RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_A4228E7AE7D1DF09_OFFSET UNITYSDK_OFFSET(0x19443370)
#define RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x194431A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsBattleSkillType_TypeDefinitionIndex = 20600;

	class AdventureByIsBattleSkillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6AA4D2737211964A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsBattleSkillType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsBattleSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_6AA4D2737211964A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0E5D77B248BC52D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsBattleSkillType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsBattleSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_0E5D77B248BC52D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A4228E7AE7D1DF09(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattleSkillType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattleSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_A4228E7AE7D1DF09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3226D662A6D7BF14(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattleSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattleSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_3226D662A6D7BF14_OFFSET))(a1, a2);
		}
	};
}
