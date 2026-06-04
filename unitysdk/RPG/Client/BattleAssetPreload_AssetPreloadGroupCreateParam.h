#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUPCREATEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB3C0BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_AssetPreloadGroupCreateParam_TypeDefinitionIndex = 55763;

	class BattleAssetPreload_AssetPreloadGroupCreateParam : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUPCREATEPARAM__CTOR_OFFSET))(this);
		}
	};
}
