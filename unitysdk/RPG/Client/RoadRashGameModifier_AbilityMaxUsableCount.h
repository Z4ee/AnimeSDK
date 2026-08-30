#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYMAXUSABLECOUNT_METHOD_4_19A643B58C5DE7D7_OFFSET UNITYSDK_OFFSET(0x1D3193B0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYMAXUSABLECOUNT_METHOD_4_B76836E1151C70D2_OFFSET UNITYSDK_OFFSET(0x1D319370)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYMAXUSABLECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3193A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_AbilityMaxUsableCount_TypeDefinitionIndex = 10286;

	class RoadRashGameModifier_AbilityMaxUsableCount : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::System::String* AbilityName; // 0x18
		::RPG::GameCore::FixPoint Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYMAXUSABLECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B76836E1151C70D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_AbilityMaxUsableCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_AbilityMaxUsableCount*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYMAXUSABLECOUNT_METHOD_4_B76836E1151C70D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_19A643B58C5DE7D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_AbilityMaxUsableCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_AbilityMaxUsableCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYMAXUSABLECOUNT_METHOD_4_19A643B58C5DE7D7_OFFSET))(a1, a2);
		}
	};
}
