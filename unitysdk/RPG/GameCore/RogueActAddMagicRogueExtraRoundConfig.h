#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_METHOD_6_6B17F084C7F2E4F2_OFFSET UNITYSDK_OFFSET(0x1EE84740)
#define RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_METHOD_6_859A79DB37E26F16_OFFSET UNITYSDK_OFFSET(0x1EE846F0)
#define RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE84730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActAddMagicRogueExtraRoundConfig_TypeDefinitionIndex = 19460;

	class RogueActAddMagicRogueExtraRoundConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_859A79DB37E26F16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_METHOD_6_859A79DB37E26F16_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_6B17F084C7F2E4F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_METHOD_6_6B17F084C7F2E4F2_OFFSET))(a1, a2);
		}
	};
}
