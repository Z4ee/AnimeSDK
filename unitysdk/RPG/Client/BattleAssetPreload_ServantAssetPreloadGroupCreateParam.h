#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleAssetPreload_AssetPreloadGroupCreateParam.h"

#define RPG_CLIENT_BATTLEASSETPRELOAD_SERVANTASSETPRELOADGROUPCREATEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB3D13D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_ServantAssetPreloadGroupCreateParam_TypeDefinitionIndex = 55775;

	class BattleAssetPreload_ServantAssetPreloadGroupCreateParam : public ::RPG::Client::BattleAssetPreload_AssetPreloadGroupCreateParam
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_SERVANTASSETPRELOADGROUPCREATEPARAM__CTOR_OFFSET))(this);
		}
	};
}
