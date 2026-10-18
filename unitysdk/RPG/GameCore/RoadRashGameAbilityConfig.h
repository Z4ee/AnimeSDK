#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROADRASHGAMEABILITYCONFIG_METHOD_3_2B9849094AEE90AC_OFFSET UNITYSDK_OFFSET(0x1D99C5F0)
#define RPG_GAMECORE_ROADRASHGAMEABILITYCONFIG_METHOD_3_6457488CEEEBDF66_OFFSET UNITYSDK_OFFSET(0x1D99C660)
#define RPG_GAMECORE_ROADRASHGAMEABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D99C650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoadRashGameAbilityConfig_TypeDefinitionIndex = 17006;

	class RoadRashGameAbilityConfig : public ::RPG::GameCore::LittleGameAbilityConfig
	{
	public:
		::RPG::GameCore::FixPoint MaxUsableCount; // 0x18
		::RPG::GameCore::FixPoint CoolDown; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMEABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2B9849094AEE90AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoadRashGameAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoadRashGameAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMEABILITYCONFIG_METHOD_3_2B9849094AEE90AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6457488CEEEBDF66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoadRashGameAbilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoadRashGameAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMEABILITYCONFIG_METHOD_3_6457488CEEEBDF66_OFFSET))(a1, a2);
		}
	};
}
