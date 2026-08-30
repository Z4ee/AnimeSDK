#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPUMANORBREWARDCONFIG_METHOD_3_162E7A79548BC34B_OFFSET UNITYSDK_OFFSET(0x1EEFC4F0)
#define RPG_GAMECORE_ROGUEMODIFIERPUMANORBREWARDCONFIG_METHOD_3_6AA1245D2D386F4F_OFFSET UNITYSDK_OFFSET(0x1EEFC540)
#define RPG_GAMECORE_ROGUEMODIFIERPUMANORBREWARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFC530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPumanOrbRewardConfig_TypeDefinitionIndex = 17553;

	class RogueModifierPumanOrbRewardConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPUMANORBREWARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_162E7A79548BC34B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPumanOrbRewardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPumanOrbRewardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPUMANORBREWARDCONFIG_METHOD_3_162E7A79548BC34B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6AA1245D2D386F4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPumanOrbRewardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPumanOrbRewardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPUMANORBREWARDCONFIG_METHOD_3_6AA1245D2D386F4F_OFFSET))(a1, a2);
		}
	};
}
