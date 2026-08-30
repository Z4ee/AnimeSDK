#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleAssetPreload_AssetPreloadGroupCreateParam.h"

#define RPG_CLIENT_BATTLEASSETPRELOAD_MONSTERASSETPRELOADGROUPCREATEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC8D7850)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_MonsterAssetPreloadGroupCreateParam_TypeDefinitionIndex = 59797;

	class BattleAssetPreload_MonsterAssetPreloadGroupCreateParam : public ::RPG::Client::BattleAssetPreload_AssetPreloadGroupCreateParam
	{
	public:
		::System::Boolean IsSummonMonster; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_MONSTERASSETPRELOADGROUPCREATEPARAM__CTOR_OFFSET))(this);
		}
	};
}
