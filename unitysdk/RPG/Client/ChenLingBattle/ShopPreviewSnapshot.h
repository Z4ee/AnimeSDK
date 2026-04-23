#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/PreviewSnapshot.h"

namespace RPG::Client::ChenLingBattle { class ShopRefreshInfo; }

#define RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT_CREATESHOPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9FB18D0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT_GET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0x9FB1960)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT_SET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0x9FB1970)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x9FB1950)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ShopPreviewSnapshot_TypeDefinitionIndex = 70059;

	class ShopPreviewSnapshot : public ::RPG::Client::ChenLingBattle::PreviewSnapshot
	{
	public:
		::RPG::Client::ChenLingBattle::ShopRefreshInfo* _PhaseInfo_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 currentSelectCardIndex, ::RPG::Client::ChenLingBattle::ShopRefreshInfo* phaseInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT__CTOR_OFFSET))(this, currentSelectCardIndex, phaseInfo);
		}

		static ::RPG::Client::ChenLingBattle::ShopPreviewSnapshot* CreateShopSnapshot(::System::Int32 currentSelectCardIndex, ::RPG::Client::ChenLingBattle::ShopRefreshInfo* actoinInfo)
		{
			return ((::RPG::Client::ChenLingBattle::ShopPreviewSnapshot*(*)(::System::Int32, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT_CREATESHOPSNAPSHOT_OFFSET))(currentSelectCardIndex, actoinInfo);
		}

		::RPG::Client::ChenLingBattle::ShopRefreshInfo* get_PhaseInfo()
		{
			return ((::RPG::Client::ChenLingBattle::ShopRefreshInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT_GET_PHASEINFO_OFFSET))(this);
		}

		::System::Void set_PhaseInfo(::RPG::Client::ChenLingBattle::ShopRefreshInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT_SET_PHASEINFO_OFFSET))(this, value);
		}
	};
}
