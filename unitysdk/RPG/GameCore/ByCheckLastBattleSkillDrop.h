#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_09B07B68B696034A_OFFSET UNITYSDK_OFFSET(0x194FBE30)
#define RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_23402E3C2771B0A3_OFFSET UNITYSDK_OFFSET(0x194FC040)
#define RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_476754FBFF8ED3BF_OFFSET UNITYSDK_OFFSET(0x194FC0C0)
#define RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_738B6B88F908F570_OFFSET UNITYSDK_OFFSET(0x194FBF00)
#define RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP__CTOR_OFFSET UNITYSDK_OFFSET(0x194FBEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckLastBattleSkillDrop_TypeDefinitionIndex = 20544;

	class ByCheckLastBattleSkillDrop : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_09B07B68B696034A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_09B07B68B696034A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_738B6B88F908F570(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_738B6B88F908F570_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_23402E3C2771B0A3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_23402E3C2771B0A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_476754FBFF8ED3BF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_476754FBFF8ED3BF_OFFSET))(a1, a2);
		}
	};
}
