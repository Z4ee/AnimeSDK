#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CharacterArtModelEffectBehavior_EffectFollow.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class CharacterArtModelEffectBehavior; }
namespace RPG::Client { class CharacterArtModelEffectBehavior_Class_0_16E7307DCC43CB2C_16; }

#define RPG_CLIENT_CHARACTERARTMODELEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x92FB280)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterArtModelEffect_TypeDefinitionIndex = 57506;

	class CharacterArtModelEffect : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::CharacterArtModelEffectBehavior*>
	{
	public:
		::Il2CppArray<::RPG::Client::CharacterArtModelEffectBehavior_EffectFollow>* ModelEffectFollows; // 0x30
		::Il2CppArray<::RPG::Client::CharacterArtModelEffectBehavior_Class_0_16E7307DCC43CB2C_16*>* ModelEffectAnimators; // 0x38
		::System::Boolean SyncAnimatorSpeed; // 0x40
		::System::Single TimeScale; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERARTMODELEFFECT__CTOR_OFFSET))(this);
		}
	};
}
