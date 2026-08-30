#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_EF89D87B2C044B50_1;
namespace RPG::Client { class PayModule; }
namespace RPG::Client { class Product; }
namespace RPG::Client { class RechargeGiftData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RECHARGESHOPMODULE_BUYGIFT_OFFSET UNITYSDK_OFFSET(0x1B64BC30)
#define RPG_CLIENT_RECHARGESHOPMODULE_CLAIMGIFTREWARD_OFFSET UNITYSDK_OFFSET(0x1B64BE50)
#define RPG_CLIENT_RECHARGESHOPMODULE_GETGIFTDATABYREWARDID_OFFSET UNITYSDK_OFFSET(0x1B64A7B0)
#define RPG_CLIENT_RECHARGESHOPMODULE_GETGIFTDATA_OFFSET UNITYSDK_OFFSET(0x1B64A700)
#define RPG_CLIENT_RECHARGESHOPMODULE_GETSHOPGIFTSBYSHOPID_OFFSET UNITYSDK_OFFSET(0x1B64C230)
#define RPG_CLIENT_RECHARGESHOPMODULE_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1B648760)
#define RPG_CLIENT_RECHARGESHOPMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B64A210)
#define RPG_CLIENT_RECHARGESHOPMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1B64A680)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTCLEARSEENGIFTRECORDS_OFFSET UNITYSDK_OFFSET(0x1B64A110)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTHASANYTHINGNEWINSHOP_OFFSET UNITYSDK_OFFSET(0x1B649D50)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTHASANYTHINGNEW_OFFSET UNITYSDK_OFFSET(0x1B6485B0)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTHASANYTHINGNORMAL_OFFSET UNITYSDK_OFFSET(0x1B6487C0)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTISGIFTNEW_OFFSET UNITYSDK_OFFSET(0x1B6493B0)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTISGIFTREWARDING_OFFSET UNITYSDK_OFFSET(0x1B6496A0)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTSETGIFTSEEN_OFFSET UNITYSDK_OFFSET(0x1B6499C0)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTVISITREWARDINGGIFTPACKS_OFFSET UNITYSDK_OFFSET(0x1B648970)
#define RPG_CLIENT_RECHARGESHOPMODULE_REQUESTDATA_OFFSET UNITYSDK_OFFSET(0x1B64ACB0)
#define RPG_CLIENT_RECHARGESHOPMODULE_REQUESTGIFTDATAONLY_OFFSET UNITYSDK_OFFSET(0x1B64A5D0)
#define RPG_CLIENT_RECHARGESHOPMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B64A310)
#define RPG_CLIENT_RECHARGESHOPMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B64A3F0)
#define RPG_CLIENT_RECHARGESHOPMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B64C710)
#define RPG_CLIENT_RECHARGESHOPMODULE__GETDISPLAYPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0x1B64ABC0)
#define RPG_CLIENT_RECHARGESHOPMODULE__GETPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0x1B64AB10)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONDAILYREFRESHNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B64B660)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONGETRECHARGEGIFTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1B64B6B0)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0x1B64A580)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONPRODUCTDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x1B64B570)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONREQUESTDATACOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B64B960)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONTAKERECHARGEGIFTREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1B64C0B0)
#define RPG_CLIENT_RECHARGESHOPMODULE__REQUESTDATA_OFFSET UNITYSDK_OFFSET(0x1B64AE30)
#define RPG_CLIENT_RECHARGESHOPMODULE__REQUESTGIFTDATAONLY_B__25_0_OFFSET UNITYSDK_OFFSET(0x1B64C7A0)
#define RPG_CLIENT_RECHARGESHOPMODULE__REQUESTGIFTDATA_OFFSET UNITYSDK_OFFSET(0x1B64B180)
#define RPG_CLIENT_RECHARGESHOPMODULE__REQUESTPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0x1B64B3F0)
#define RPG_CLIENT_RECHARGESHOPMODULE___REQUESTDATA_B__26_0_OFFSET UNITYSDK_OFFSET(0x1B64C7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeShopModule_TypeDefinitionIndex = 66796;

	class RechargeShopModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _IsWaitingForGiftData; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EF89D87B2C044B50_1*>* _ServerGiftData; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>* _GiftDataOfType; // 0x20
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _IsWaitingForProductData; // 0x28
		::RPG::Client::PayModule* _PayModule; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__CTOR_OFFSET))(this);
		}

		::System::Boolean ReddotHasAnythingNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTHASANYTHINGNEW_OFFSET))(this);
		}

		::System::Boolean ReddotHasAnythingNormal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTHASANYTHINGNORMAL_OFFSET))(this);
		}

		::System::Void ReddotVisitRewardingGiftPacks(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTVISITREWARDINGGIFTPACKS_OFFSET))(this, a1);
		}

		::System::Boolean ReddotIsGiftNew(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTISGIFTNEW_OFFSET))(this, a1);
		}

		::System::Boolean ReddotIsGiftRewarding(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTISGIFTREWARDING_OFFSET))(this, a1);
		}

		::System::Void ReddotSetGiftSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTSETGIFTSEEN_OFFSET))(this, a1);
		}

		::System::Boolean ReddotHasAnythingNewInShop(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTHASANYTHINGNEWINSHOP_OFFSET))(this, a1);
		}

		::System::Void ReddotClearSeenGiftRecords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTCLEARSEENGIFTRECORDS_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnModuleInitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONMODULEINITREQ_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_ONRECONNECT_OFFSET))(this);
		}

		::RPG::Client::RechargeGiftData* GetGiftData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RechargeGiftData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_GETGIFTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RechargeGiftData* GetGiftDataByRewardID(::System::UInt32 a1)
		{
			return ((::RPG::Client::RechargeGiftData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_GETGIFTDATABYREWARDID_OFFSET))(this, a1);
		}

		::RPG::Client::Product* _GetProductData(::System::UInt32 a1)
		{
			return ((::RPG::Client::Product*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__GETPRODUCTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Product* _GetdisplayProductData(::System::UInt32 a1)
		{
			return ((::RPG::Client::Product*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__GETDISPLAYPRODUCTDATA_OFFSET))(this, a1);
		}

		::System::Void RequestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REQUESTDATA_OFFSET))(this);
		}

		::System::Void RequestGiftDataOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REQUESTGIFTDATAONLY_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _RequestData()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__REQUESTDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::Boolean>* _RequestProductData()
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__REQUESTPRODUCTDATA_OFFSET))(this);
		}

		::System::Void _OnProductDataUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONPRODUCTDATAUPDATED_OFFSET))(this, a1);
		}

		::System::Void _OnDailyRefreshNotify(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONDAILYREFRESHNOTIFY_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _RequestGiftData()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__REQUESTGIFTDATA_OFFSET))(this);
		}

		::System::Void _OnGetRechargeGiftInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONGETRECHARGEGIFTINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRequestDataCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONREQUESTDATACOMPLETED_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::Boolean>* BuyGift(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_BUYGIFT_OFFSET))(this, a1);
		}

		::System::Void ClaimGiftReward(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_CLAIMGIFTREWARD_OFFSET))(this, a1);
		}

		::System::Void _OnTakeRechargeGiftRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONTAKERECHARGEGIFTREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RechargeGiftData*>* GetShopGiftsByShopID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RechargeGiftData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_GETSHOPGIFTSBYSHOPID_OFFSET))(this, a1);
		}

		::System::Void _RequestGiftDataOnly_b__25_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__REQUESTGIFTDATAONLY_B__25_0_OFFSET))(this, a1);
		}

		::System::Boolean __RequestData_b__26_0(::System::Collections::Generic::IEnumerable_1<::System::Boolean>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___REQUESTDATA_B__26_0_OFFSET))(this, a1);
		}
	};
}
