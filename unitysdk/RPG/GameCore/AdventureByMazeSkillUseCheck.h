#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_229E077AB261C1AA_OFFSET UNITYSDK_OFFSET(0x19446E80)
#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_3F21A508368587A6_OFFSET UNITYSDK_OFFSET(0x19446C80)
#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_98F78F0591A79AF8_OFFSET UNITYSDK_OFFSET(0x19446BB0)
#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_C661BB51A53A13CB_OFFSET UNITYSDK_OFFSET(0x19446E00)
#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x19446C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByMazeSkillUseCheck_TypeDefinitionIndex = 18913;

	class AdventureByMazeSkillUseCheck : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_98F78F0591A79AF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_98F78F0591A79AF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3F21A508368587A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_3F21A508368587A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C661BB51A53A13CB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_C661BB51A53A13CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_229E077AB261C1AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_229E077AB261C1AA_OFFSET))(a1, a2);
		}
	};
}
