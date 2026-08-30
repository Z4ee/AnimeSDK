#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_METHOD_4_65681BD6565BE029_OFFSET UNITYSDK_OFFSET(0x1CDA10C0)
#define RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_METHOD_4_8B1063C577C937E0_OFFSET UNITYSDK_OFFSET(0x1CDA0F40)
#define RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_METHOD_4_D5067D9BA9721973_OFFSET UNITYSDK_OFFSET(0x1CDA0F80)
#define RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_METHOD_4_E95879087FB799A0_OFFSET UNITYSDK_OFFSET(0x1CDA10F0)
#define RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA0F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsFirstChallengeBattle_TypeDefinitionIndex = 22324;

	class ByIsFirstChallengeBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8B1063C577C937E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFirstChallengeBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFirstChallengeBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_METHOD_4_8B1063C577C937E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D5067D9BA9721973(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFirstChallengeBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFirstChallengeBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_METHOD_4_D5067D9BA9721973_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_65681BD6565BE029(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstChallengeBattle*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstChallengeBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_METHOD_4_65681BD6565BE029_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E95879087FB799A0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstChallengeBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstChallengeBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_METHOD_4_E95879087FB799A0_OFFSET))(a1, a2);
		}
	};
}
