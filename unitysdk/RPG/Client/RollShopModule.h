#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_69F06BA11FF28429_4;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RollShopData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROLLSHOPMODULE_GETROLLSHOP_OFFSET UNITYSDK_OFFSET(0xA3F7E30)
#define RPG_CLIENT_ROLLSHOPMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA3F7BD0)
#define RPG_CLIENT_ROLLSHOPMODULE_REWARDID2ITEMDATA_OFFSET UNITYSDK_OFFSET(0xA3F80D0)
#define RPG_CLIENT_ROLLSHOPMODULE_SENDGACHAREQUEST_OFFSET UNITYSDK_OFFSET(0xA3F7F10)
#define RPG_CLIENT_ROLLSHOPMODULE_SETGACHARANDOM_OFFSET UNITYSDK_OFFSET(0xA3F8080)
#define RPG_CLIENT_ROLLSHOPMODULE_UPDATEROLLSHOPINFO_OFFSET UNITYSDK_OFFSET(0xA3F7FD0)
#define RPG_CLIENT_ROLLSHOPMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3F7DF0)
#define RPG_CLIENT_ROLLSHOPMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F8180)
#define RPG_CLIENT_ROLLSHOPMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA3F8210)
#define RPG_CLIENT_ROLLSHOPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3F82A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RollShopModule_TypeDefinitionIndex = 55390;

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

		::RPG::Client::RollShopData* GetRollShop(::System::UInt32 rollShopID)
		{
			return ((::RPG::Client::RollShopData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPMODULE_GETROLLSHOP_OFFSET))(this, rollShopID);
		}

		::System::Void SendGachaRequest(::System::UInt32 rollShopID, ::System::UInt32 gachaCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPMODULE_SENDGACHAREQUEST_OFFSET))(this, rollShopID, gachaCnt);
		}

		::System::Void UpdateRollShopInfo(::Class_1_69F06BA11FF28429_4* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_69F06BA11FF28429_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPMODULE_UPDATEROLLSHOPINFO_OFFSET))(this, rsp);
		}

		::System::Void SetGachaRandom(::System::UInt32 newGachaRandom)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPMODULE_SETGACHARANDOM_OFFSET))(this, newGachaRandom);
		}

		::RPG::Client::ItemData* RewardID2ItemData(::System::UInt32 rewardID)
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPMODULE_REWARDID2ITEMDATA_OFFSET))(this, rewardID);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
