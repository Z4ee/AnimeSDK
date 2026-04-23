#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleAssetPreload_AssetPreloadGroupCreateParam.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_AVATARASSETPRELOADGROUPCREATEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9DE5400)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_AvatarAssetPreloadGroupCreateParam_TypeDefinitionIndex = 55031;

	class BattleAssetPreload_AvatarAssetPreloadGroupCreateParam : public ::RPG::Client::BattleAssetPreload_AssetPreloadGroupCreateParam
	{
	public:
		::System::String* OverrideModelPath; // 0x10
		::RPG::Client::IAvatarInfoProvider* AvatarData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_AVATARASSETPRELOADGROUPCREATEPARAM__CTOR_OFFSET))(this);
		}
	};
}
