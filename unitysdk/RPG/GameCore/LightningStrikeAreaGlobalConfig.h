#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class LightningStrikeAreaAchievementConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_LIGHTNINGSTRIKEAREAGLOBALCONFIG_METHOD_2_5FCC1CF643C3824D_OFFSET UNITYSDK_OFFSET(0x1B08C300)
#define RPG_GAMECORE_LIGHTNINGSTRIKEAREAGLOBALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B08C420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LightningStrikeAreaGlobalConfig_TypeDefinitionIndex = 16157;

	class LightningStrikeAreaGlobalConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x10
		::RPG::GameCore::LightningStrikeAreaAchievementConfig* AchievementConfig; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHitPlayer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTNINGSTRIKEAREAGLOBALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5FCC1CF643C3824D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LightningStrikeAreaGlobalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LightningStrikeAreaGlobalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTNINGSTRIKEAREAGLOBALCONFIG_METHOD_2_5FCC1CF643C3824D_OFFSET))(a1, a2);
		}
	};
}
