#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/PreviewSnapshot.h"

namespace RPG::Client::ChenLingBattle { class ShopRefreshInfo; }

#define RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT_CREATESHOPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1AFE4420)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT_GET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0x1AFE44B0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT_SET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0x1AFE44C0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE44A0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ShopPreviewSnapshot_TypeDefinitionIndex = 72384;

	class ShopPreviewSnapshot : public ::RPG::Client::ChenLingBattle::PreviewSnapshot
	{
	public:
		::RPG::Client::ChenLingBattle::ShopRefreshInfo* _PhaseInfo_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::ChenLingBattle::ShopRefreshInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ChenLingBattle::ShopPreviewSnapshot* CreateShopSnapshot(::System::Int32 a1, ::RPG::Client::ChenLingBattle::ShopRefreshInfo* a2)
		{
			return ((::RPG::Client::ChenLingBattle::ShopPreviewSnapshot*(*)(::System::Int32, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT_CREATESHOPSNAPSHOT_OFFSET))(a1, a2);
		}

		::RPG::Client::ChenLingBattle::ShopRefreshInfo* get_PhaseInfo()
		{
			return ((::RPG::Client::ChenLingBattle::ShopRefreshInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT_GET_PHASEINFO_OFFSET))(this);
		}

		::System::Void set_PhaseInfo(::RPG::Client::ChenLingBattle::ShopRefreshInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPREVIEWSNAPSHOT_SET_PHASEINFO_OFFSET))(this, a1);
		}
	};
}
