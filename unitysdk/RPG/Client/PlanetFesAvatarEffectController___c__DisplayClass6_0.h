#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesAvatarEffect; }
namespace RPG::Client { class PlanetFesAvatarEffectController; }

#define RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDB35240)
#define RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER___C__DISPLAYCLASS6_0__SHOWAVATAREMOJIEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDB35340)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarEffectController___c__DisplayClass6_0_TypeDefinitionIndex = 66511;

	class PlanetFesAvatarEffectController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesAvatarEffect* effect; // 0x10
		::RPG::Client::PlanetFesAvatarEffectController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAvatarEmojiEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER___C__DISPLAYCLASS6_0__SHOWAVATAREMOJIEFFECT_B__0_OFFSET))(this);
		}
	};
}
