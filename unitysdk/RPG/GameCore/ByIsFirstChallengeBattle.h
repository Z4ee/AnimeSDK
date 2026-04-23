#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_METHOD_4_A793FAE4B9E74F89_OFFSET UNITYSDK_OFFSET(0x18752EF0)
#define RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_METHOD_4_D5067D9BA9721973_OFFSET UNITYSDK_OFFSET(0x18752FC0)
#define RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18752F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsFirstChallengeBattle_TypeDefinitionIndex = 21459;

	class ByIsFirstChallengeBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A793FAE4B9E74F89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFirstChallengeBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFirstChallengeBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_METHOD_4_A793FAE4B9E74F89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D5067D9BA9721973(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFirstChallengeBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFirstChallengeBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_METHOD_4_D5067D9BA9721973_OFFSET))(a1, a2);
		}
	};
}
