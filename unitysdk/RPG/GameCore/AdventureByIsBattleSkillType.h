#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_0E5D77B248BC52D4_OFFSET UNITYSDK_OFFSET(0x1CDE4F20)
#define RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_AE03D74CB5F8B134_OFFSET UNITYSDK_OFFSET(0x1CDE50A0)
#define RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_CCC9D051C97D975B_OFFSET UNITYSDK_OFFSET(0x1CDE50D0)
#define RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_DB3B0E5DBCCC2551_OFFSET UNITYSDK_OFFSET(0x1CDE4EE0)
#define RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE4F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsBattleSkillType_TypeDefinitionIndex = 21573;

	class AdventureByIsBattleSkillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DB3B0E5DBCCC2551(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsBattleSkillType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsBattleSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_DB3B0E5DBCCC2551_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0E5D77B248BC52D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsBattleSkillType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsBattleSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_0E5D77B248BC52D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AE03D74CB5F8B134(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattleSkillType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattleSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_AE03D74CB5F8B134_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CCC9D051C97D975B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattleSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattleSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_CCC9D051C97D975B_OFFSET))(a1, a2);
		}
	};
}
