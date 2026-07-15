#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarAssetPreloadStrategy.h"
#include "unitysdk/RPG/GameCore/DeviceSettingConfigItemBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARASSETPRELOADCONFIG_METHOD_3_1C15388CFD2AAE6A_OFFSET UNITYSDK_OFFSET(0x1A06E6D0)
#define RPG_GAMECORE_AVATARASSETPRELOADCONFIG_METHOD_3_4A4FEFEBDA2817B3_OFFSET UNITYSDK_OFFSET(0x1A06E720)
#define RPG_GAMECORE_AVATARASSETPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A06E710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarAssetPreloadConfig_TypeDefinitionIndex = 15823;

	class AvatarAssetPreloadConfig : public ::RPG::GameCore::DeviceSettingConfigItemBase
	{
	public:
		::RPG::GameCore::AvatarAssetPreloadStrategy MazeSkill; // 0x18
		::RPG::GameCore::AvatarAssetPreloadStrategy BattleSkill; // 0x1A
		::RPG::GameCore::AvatarAssetPreloadStrategy BattleUltraSkill; // 0x1C
		::RPG::GameCore::AvatarAssetPreloadStrategy BattleSpecialSkill; // 0x1E
		::RPG::GameCore::AvatarAssetPreloadStrategy OtherAssets; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARASSETPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1C15388CFD2AAE6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarAssetPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarAssetPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARASSETPRELOADCONFIG_METHOD_3_1C15388CFD2AAE6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4A4FEFEBDA2817B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarAssetPreloadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarAssetPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARASSETPRELOADCONFIG_METHOD_3_4A4FEFEBDA2817B3_OFFSET))(a1, a2);
		}
	};
}
