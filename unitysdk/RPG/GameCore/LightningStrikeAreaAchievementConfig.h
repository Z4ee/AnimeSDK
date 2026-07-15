#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LIGHTNINGSTRIKEAREAACHIEVEMENTCONFIG_METHOD_2_E07D806DB34CD608_OFFSET UNITYSDK_OFFSET(0x1B08BD40)
#define RPG_GAMECORE_LIGHTNINGSTRIKEAREAACHIEVEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B08BDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LightningStrikeAreaAchievementConfig_TypeDefinitionIndex = 16156;

	class LightningStrikeAreaAchievementConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 HitByLightningAchievementID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTNINGSTRIKEAREAACHIEVEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E07D806DB34CD608(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LightningStrikeAreaAchievementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LightningStrikeAreaAchievementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTNINGSTRIKEAREAACHIEVEMENTCONFIG_METHOD_2_E07D806DB34CD608_OFFSET))(a1, a2);
		}
	};
}
