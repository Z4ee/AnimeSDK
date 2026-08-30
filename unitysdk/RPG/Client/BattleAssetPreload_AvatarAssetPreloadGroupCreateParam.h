#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleAssetPreload_AssetPreloadGroupCreateParam.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_AVATARASSETPRELOADGROUPCREATEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC8D7840)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_AvatarAssetPreloadGroupCreateParam_TypeDefinitionIndex = 59790;

	class BattleAssetPreload_AvatarAssetPreloadGroupCreateParam : public ::RPG::Client::BattleAssetPreload_AssetPreloadGroupCreateParam
	{
	public:
		::System::String* OverrideModelPath; // 0x10
		::RPG::AvatarSystem::IAvatar* AvatarData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_AVATARASSETPRELOADGROUPCREATEPARAM__CTOR_OFFSET))(this);
		}
	};
}
