#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCANDIDATENUMCONFIG_METHOD_3_116053C0FE76E4AF_OFFSET UNITYSDK_OFFSET(0x19B999C0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCANDIDATENUMCONFIG_METHOD_3_DAAA8E3302456006_OFFSET UNITYSDK_OFFSET(0x19B99A90)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCANDIDATENUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B99A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaChangeStyleGiftSelectCandidateNumConfig_TypeDefinitionIndex = 16945;

	class RogueModifierPersonaChangeStyleGiftSelectCandidateNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCANDIDATENUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_116053C0FE76E4AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCandidateNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCandidateNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCANDIDATENUMCONFIG_METHOD_3_116053C0FE76E4AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DAAA8E3302456006(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCandidateNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCandidateNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCANDIDATENUMCONFIG_METHOD_3_DAAA8E3302456006_OFFSET))(a1, a2);
		}
	};
}
