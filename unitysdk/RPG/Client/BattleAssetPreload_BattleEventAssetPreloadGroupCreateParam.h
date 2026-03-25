#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleAssetPreload_AssetPreloadGroupCreateParam.h"

#define RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUPCREATEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9180020)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_BattleEventAssetPreloadGroupCreateParam_TypeDefinitionIndex = 48288;

	class BattleAssetPreload_BattleEventAssetPreloadGroupCreateParam : public ::RPG::Client::BattleAssetPreload_AssetPreloadGroupCreateParam
	{
	public:
		::System::Boolean IsDynamicPreload; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUPCREATEPARAM__CTOR_OFFSET))(this);
		}
	};
}
