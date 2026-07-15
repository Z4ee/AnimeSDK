#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_766E1CF11E204F43_5;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RollShopData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROLLSHOPMODULE_GETROLLSHOP_OFFSET UNITYSDK_OFFSET(0x184E9050)
#define RPG_CLIENT_ROLLSHOPMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x184E8DC0)
#define RPG_CLIENT_ROLLSHOPMODULE_REWARDID2ITEMDATA_OFFSET UNITYSDK_OFFSET(0x184E9310)
#define RPG_CLIENT_ROLLSHOPMODULE_SENDGACHAREQUEST_OFFSET UNITYSDK_OFFSET(0x184E9100)
#define RPG_CLIENT_ROLLSHOPMODULE_SETGACHARANDOM_OFFSET UNITYSDK_OFFSET(0x184E92C0)
#define RPG_CLIENT_ROLLSHOPMODULE_UPDATEROLLSHOPINFO_OFFSET UNITYSDK_OFFSET(0x184E91C0)
#define RPG_CLIENT_ROLLSHOPMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x184E9010)
#define RPG_CLIENT_ROLLSHOPMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x184E93C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RollShopModule_TypeDefinitionIndex = 64881;

	class RollShopModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RollShopData*>* _RollShops; // 0x10
		::System::UInt32 _GachaRandom; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::RPG::Client::RollShopData* GetRollShop(::System::UInt32 a1)
		{
			return ((::RPG::Client::RollShopData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPMODULE_GETROLLSHOP_OFFSET))(this, a1);
		}

		::System::Void SendGachaRequest(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPMODULE_SENDGACHAREQUEST_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateRollShopInfo(::Class_1_766E1CF11E204F43_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPMODULE_UPDATEROLLSHOPINFO_OFFSET))(this, a1);
		}

		::System::Void SetGachaRandom(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPMODULE_SETGACHARANDOM_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* RewardID2ItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPMODULE_REWARDID2ITEMDATA_OFFSET))(this, a1);
		}
	};
}
