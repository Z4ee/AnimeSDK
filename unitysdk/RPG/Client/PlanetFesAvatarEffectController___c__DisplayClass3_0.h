#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesAvatarEffect; }
namespace RPG::Client { class PlanetFesAvatarEffectController; }

#define RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xACA79A0)
#define RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER___C__DISPLAYCLASS3_0__SHOWAVATARAPPEAREFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xACA8290)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarEffectController___c__DisplayClass3_0_TypeDefinitionIndex = 61233;

	class PlanetFesAvatarEffectController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesAvatarEffect* appearEffect; // 0x10
		::RPG::Client::PlanetFesAvatarEffectController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAvatarAppearEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECTCONTROLLER___C__DISPLAYCLASS3_0__SHOWAVATARAPPEAREFFECT_B__0_OFFSET))(this);
		}
	};
}
