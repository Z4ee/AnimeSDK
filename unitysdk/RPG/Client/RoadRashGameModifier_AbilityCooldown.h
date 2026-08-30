#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYCOOLDOWN_METHOD_4_083811227F4A5B16_OFFSET UNITYSDK_OFFSET(0x1D319190)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYCOOLDOWN_METHOD_4_ECB254136D6AFCCB_OFFSET UNITYSDK_OFFSET(0x1D3191D0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYCOOLDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3191C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_AbilityCooldown_TypeDefinitionIndex = 10287;

	class RoadRashGameModifier_AbilityCooldown : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::System::String* AbilityName; // 0x18
		::RPG::GameCore::FixPoint Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYCOOLDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_083811227F4A5B16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_AbilityCooldown*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_AbilityCooldown*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYCOOLDOWN_METHOD_4_083811227F4A5B16_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ECB254136D6AFCCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_AbilityCooldown* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_AbilityCooldown*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYCOOLDOWN_METHOD_4_ECB254136D6AFCCB_OFFSET))(a1, a2);
		}
	};
}
