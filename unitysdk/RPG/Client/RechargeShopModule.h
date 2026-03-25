#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_66C869DF1F46CC10_2;
namespace RPG::Client { class PayModule; }
namespace RPG::Client { class Product; }
namespace RPG::Client { class RechargeGiftData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_RECHARGESHOPMODULE_BUYGIFT_OFFSET UNITYSDK_OFFSET(0xA28C100)
#define RPG_CLIENT_RECHARGESHOPMODULE_CLAIMGIFTREWARD_OFFSET UNITYSDK_OFFSET(0xA28C2A0)
#define RPG_CLIENT_RECHARGESHOPMODULE_GETGIFTDATA_OFFSET UNITYSDK_OFFSET(0xA28AFA0)
#define RPG_CLIENT_RECHARGESHOPMODULE_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0xA289980)
#define RPG_CLIENT_RECHARGESHOPMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA28ABA0)
#define RPG_CLIENT_RECHARGESHOPMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA28AF20)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTCLEARSEENGIFTRECORDS_OFFSET UNITYSDK_OFFSET(0xA28AAA0)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTHASANYTHINGNEW_OFFSET UNITYSDK_OFFSET(0xA289880)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTHASANYTHINGNORMAL_OFFSET UNITYSDK_OFFSET(0xA2899E0)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTISGIFTNEW_OFFSET UNITYSDK_OFFSET(0xA28A270)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTISGIFTREWARDING_OFFSET UNITYSDK_OFFSET(0xA28A550)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTSETGIFTSEEN_OFFSET UNITYSDK_OFFSET(0xA28A730)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTVISITREWARDINGGIFTPACKS_OFFSET UNITYSDK_OFFSET(0xA289AE0)
#define RPG_CLIENT_RECHARGESHOPMODULE_REQUESTDATA_OFFSET UNITYSDK_OFFSET(0xA28B320)
#define RPG_CLIENT_RECHARGESHOPMODULE_REQUESTGIFTDATAONLY_OFFSET UNITYSDK_OFFSET(0xA28AE80)
#define RPG_CLIENT_RECHARGESHOPMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA28ACE0)
#define RPG_CLIENT_RECHARGESHOPMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA28AD80)
#define RPG_CLIENT_RECHARGESHOPMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA28C610)
#define RPG_CLIENT_RECHARGESHOPMODULE__GETDISPLAYPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0xA28B220)
#define RPG_CLIENT_RECHARGESHOPMODULE__GETPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0xA28B020)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONDAILYREFRESHNOTIFY_OFFSET UNITYSDK_OFFSET(0xA28BBD0)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONGETRECHARGEGIFTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA28BC20)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0xA28AE30)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONPRODUCTDATAUPDATED_OFFSET UNITYSDK_OFFSET(0xA28BAE0)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONREQUESTDATACOMPLETED_OFFSET UNITYSDK_OFFSET(0xA28BEA0)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONTAKERECHARGEGIFTREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA28C490)
#define RPG_CLIENT_RECHARGESHOPMODULE__REQUESTDATA_OFFSET UNITYSDK_OFFSET(0xA28B460)
#define RPG_CLIENT_RECHARGESHOPMODULE__REQUESTGIFTDATAONLY_B__23_0_OFFSET UNITYSDK_OFFSET(0xA28C6A0)
#define RPG_CLIENT_RECHARGESHOPMODULE__REQUESTGIFTDATA_OFFSET UNITYSDK_OFFSET(0xA28B6F0)
#define RPG_CLIENT_RECHARGESHOPMODULE__REQUESTPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0xA28B960)
#define RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA28C7F0)
#define RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA28C940)
#define RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA28C880)
#define RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA28C8E0)
#define RPG_CLIENT_RECHARGESHOPMODULE___REQUESTDATA_B__24_0_OFFSET UNITYSDK_OFFSET(0xA28C6E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeShopModule_TypeDefinitionIndex = 54349;

	class RechargeShopModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_66C869DF1F46CC10_2*>* _ServerGiftData; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>* _GiftDataOfType; // 0x18
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _IsWaitingForGiftData; // 0x20
		::RPG::Client::PayModule* _PayModule; // 0x28
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _IsWaitingForProductData; // 0x30

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

		::System::Void ReddotVisitRewardingGiftPacks(::System::Action_1<::System::UInt32>* visitor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTVISITREWARDINGGIFTPACKS_OFFSET))(this, visitor);
		}

		::System::Boolean ReddotIsGiftNew(::System::UInt32 giftType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTISGIFTNEW_OFFSET))(this, giftType);
		}

		::System::Boolean ReddotIsGiftRewarding(::System::UInt32 giftType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTISGIFTREWARDING_OFFSET))(this, giftType);
		}

		::System::Void ReddotSetGiftSeen(::System::UInt32 giftType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTSETGIFTSEEN_OFFSET))(this, giftType);
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

		::RPG::Client::RechargeGiftData* GetGiftData(::System::UInt32 giftType)
		{
			return ((::RPG::Client::RechargeGiftData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_GETGIFTDATA_OFFSET))(this, giftType);
		}

		::RPG::Client::Product* _GetProductData(::System::UInt32 giftType)
		{
			return ((::RPG::Client::Product*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__GETPRODUCTDATA_OFFSET))(this, giftType);
		}

		::RPG::Client::Product* _GetdisplayProductData(::System::UInt32 giftType)
		{
			return ((::RPG::Client::Product*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__GETDISPLAYPRODUCTDATA_OFFSET))(this, giftType);
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

		::System::Void _OnProductDataUpdated(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONPRODUCTDATAUPDATED_OFFSET))(this, o);
		}

		::System::Void _OnDailyRefreshNotify(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONDAILYREFRESHNOTIFY_OFFSET))(this, _);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _RequestGiftData()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__REQUESTGIFTDATA_OFFSET))(this);
		}

		::System::Void _OnGetRechargeGiftInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONGETRECHARGEGIFTINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnRequestDataCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONREQUESTDATACOMPLETED_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::Boolean>* BuyGift(::System::UInt32 giftType)
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_BUYGIFT_OFFSET))(this, giftType);
		}

		::System::Void ClaimGiftReward(::System::UInt32 giftType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_CLAIMGIFTREWARD_OFFSET))(this, giftType);
		}

		::System::Void _OnTakeRechargeGiftRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONTAKERECHARGEGIFTREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _RequestGiftDataOnly_b__23_0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__REQUESTGIFTDATAONLY_B__23_0_OFFSET))(this, success);
		}

		::System::Boolean __RequestData_b__24_0(::System::Collections::Generic::IEnumerable_1<::System::Boolean>* results)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___REQUESTDATA_B__24_0_OFFSET))(this, results);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
