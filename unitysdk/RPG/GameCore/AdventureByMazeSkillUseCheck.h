#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_36FE640D24138C17_OFFSET UNITYSDK_OFFSET(0x1CBB09B0)
#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_3F21A508368587A6_OFFSET UNITYSDK_OFFSET(0x1CBB09F0)
#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_A9588FD40DC8C97C_OFFSET UNITYSDK_OFFSET(0x1CBB0BA0)
#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_F6C6BDF8ACE1DC72_OFFSET UNITYSDK_OFFSET(0x1CBB0B70)
#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB09E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByMazeSkillUseCheck_TypeDefinitionIndex = 19804;

	class AdventureByMazeSkillUseCheck : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_36FE640D24138C17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_36FE640D24138C17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3F21A508368587A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_3F21A508368587A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F6C6BDF8ACE1DC72(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_F6C6BDF8ACE1DC72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A9588FD40DC8C97C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_A9588FD40DC8C97C_OFFSET))(a1, a2);
		}
	};
}
