#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_26635392C024E4B3_OFFSET UNITYSDK_OFFSET(0x19CC6470)
#define RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_738B6B88F908F570_OFFSET UNITYSDK_OFFSET(0x19CC64B0)
#define RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_833F7A3BB8CC7326_OFFSET UNITYSDK_OFFSET(0x19CC65F0)
#define RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_83FD88BADF0C5F9B_OFFSET UNITYSDK_OFFSET(0x19CC6620)
#define RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC64A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckLastBattleSkillDrop_TypeDefinitionIndex = 20959;

	class ByCheckLastBattleSkillDrop : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_26635392C024E4B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_26635392C024E4B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_738B6B88F908F570(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_738B6B88F908F570_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_833F7A3BB8CC7326(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_833F7A3BB8CC7326_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_83FD88BADF0C5F9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLASTBATTLESKILLDROP_METHOD_4_83FD88BADF0C5F9B_OFFSET))(a1, a2);
		}
	};
}
