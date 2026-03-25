#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesAvatarEffect; }
namespace RPG::Client { class PlanetFesAvatarEffectController; }

#define RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F82DE0)
#define RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER___C__DISPLAYCLASS4_0__SHOWAVATARGENBUFFEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x9F834A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarEffectController___c__DisplayClass4_0_TypeDefinitionIndex = 54071;

	class PlanetFesAvatarEffectController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesAvatarEffectController* __4__this; // 0x10
		::RPG::Client::PlanetFesAvatarEffect* appearEffect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAvatarGenBuffEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER___C__DISPLAYCLASS4_0__SHOWAVATARGENBUFFEFFECT_B__0_OFFSET))(this);
		}
	};
}
