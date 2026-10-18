#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Trade/BlindBoxTradeOrderRepository_BlindBoxPetTradeAvailability.h"
#include "unitysdk/RPG/Client/BlindBox/Trade/BlindBoxTradeOrderRepository_PetTradeAvailabilitySummary.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1359;
class Class_1_51BA4980ED225F7B_2;
class Class_1_70373EC0EA5FDDDA;
class Class_1_AC819B79CD1B6B62;
class Class_1_C086E47345F86771_9;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradeModule; }
namespace RPG::Client::BlindBox::Trade { class IBlindBoxTradeOrder; }
namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetInstance; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_FINDCURRENTPRIVATEORDERBYPLAYERUID_OFFSET UNITYSDK_OFFSET(0xC8964C0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GETHISTORYORDERAT_OFFSET UNITYSDK_OFFSET(0xC896FC0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GETHISTORYORDERCOUNT_OFFSET UNITYSDK_OFFSET(0xC896F70)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GETMYCURRENTORDERAT_OFFSET UNITYSDK_OFFSET(0xC896210)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GETMYCURRENTORDERCOUNT_OFFSET UNITYSDK_OFFSET(0xC8961C0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GETPETINSTANCECDREMAININGSECONDS_OFFSET UNITYSDK_OFFSET(0xC899EE0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GETPETTRADEAVAILABILITY_OFFSET UNITYSDK_OFFSET(0xC899E60)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GET_CURRENTREQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0xC89B410)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GET_MAXHISTORYDISPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xC895F90)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GET_MAXPUBLISHORDERCOUNT_OFFSET UNITYSDK_OFFSET(0xC895E90)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_HASAVAILABLEPETINSTANCE_OFFSET UNITYSDK_OFFSET(0xC89B2B0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_HASPETINSTANCEINCD_OFFSET UNITYSDK_OFFSET(0xC899CD0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_HASPETINSTANCEINTRADE_OFFSET UNITYSDK_OFFSET(0xC89A870)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_ISOFFEREDPETINSTANCELOCKED_OFFSET UNITYSDK_OFFSET(0xC899C20)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_ISOFFEREDPETUIDLOCKED_OFFSET UNITYSDK_OFFSET(0xC899BB0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_ISORDERCHANGEGETANIMPLAYED_OFFSET UNITYSDK_OFFSET(0xC897630)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_ISORDERCHANGEREFRESHANIMPLAYED_OFFSET UNITYSDK_OFFSET(0xC8971C0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_ISORDERWAITGRANT_OFFSET UNITYSDK_OFFSET(0xC897040)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_ISPETINSTANCEINCD_OFFSET UNITYSDK_OFFSET(0xC899E00)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_LOADHISTORYORDERS_OFFSET UNITYSDK_OFFSET(0xC8960A0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xC8950F0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_RECORDORDERCHANGEGETANIMPLAYED_OFFSET UNITYSDK_OFFSET(0xC897890)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_RECORDORDERCHANGEREFRESHANIMPLAYED_OFFSET UNITYSDK_OFFSET(0xC897420)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_REFRESHMYORDERS_OFFSET UNITYSDK_OFFSET(0xC8904E0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_REFRESHPETTRADEINFO_OFFSET UNITYSDK_OFFSET(0xC890EF0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_REMOVEMYCURRENTORDER_OFFSET UNITYSDK_OFFSET(0xC896290)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_SYNCMYORDERLIST_OFFSET UNITYSDK_OFFSET(0xC894760)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__AREPETTRADEINFOSEQUAL_OFFSET UNITYSDK_OFFSET(0xC898A60)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__CTOR_OFFSET UNITYSDK_OFFSET(0xC894D80)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__GETMYCURRENTORDERSORTPRIORITY_OFFSET UNITYSDK_OFFSET(0xC8994A0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__GETMYCURRENTORDERTYPESORTPRIORITY_OFFSET UNITYSDK_OFFSET(0xC899350)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__GETPETINSTANCECDREMAININGSECONDS_OFFSET UNITYSDK_OFFSET(0xC89A730)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__GETPETTRADEAVAILABILITYSUMMARY_OFFSET UNITYSDK_OFFSET(0xC89A920)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__GETPETTRADECDDURATIONSECONDS_OFFSET UNITYSDK_OFFSET(0xC89B310)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__GETPETTRADECDENDTIME_OFFSET UNITYSDK_OFFSET(0xC89A810)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__ISCURRENTPRIVATEORDERAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC896640)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__ISORDERFORPLAYER_OFFSET UNITYSDK_OFFSET(0xC896B40)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__ISPETUIDINCD_OFFSET UNITYSDK_OFFSET(0xC89B0E0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__REFRESHPETTRADEINFO_B__14_0_OFFSET UNITYSDK_OFFSET(0xC89B460)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__SORTMYCURRENTORDERS_OFFSET UNITYSDK_OFFSET(0xC8991C0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__SYNCHISTORY_OFFSET UNITYSDK_OFFSET(0xC897AA0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__SYNCMYCURRENTORDERS_OFFSET UNITYSDK_OFFSET(0xC898BF0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__SYNCMYORDERLIST_OFFSET UNITYSDK_OFFSET(0xC8992D0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__SYNCPETTRADEINFOS_OFFSET UNITYSDK_OFFSET(0xC8983F0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__SYNCWAITGRANTORDERS_OFFSET UNITYSDK_OFFSET(0xC897F90)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___SORTMYCURRENTORDERS_B__33_0_OFFSET UNITYSDK_OFFSET(0xC89B500)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeOrderRepository_TypeDefinitionIndex = 74868;

	class BlindBoxTradeOrderRepository : public ::System::Object
	{
	public:
		// static const ::System::Int32 DefaultMaxPublishOrderCount = 0x5; // 0x0
		// static const ::System::Int32 DefaultMaxHistoryDisplayCount = 0x32; // 0x0
		// static const ::System::String* MaxPublishOrderCountConstKey; // 0x0
		// static const ::System::String* MaxHistoryDisplayCountConstKey; // 0x0
		// static const ::System::String* PetColdMinuteConstKey; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*>* MyCurrentRequestOrderList; // 0x10
		::Class_0_16E4307DCC419505_1359* _NetworkService; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt64>* _WaitGrantOrderUids; // 0x20
		::RPG::Client::BlindBox::Trade::BlindBoxTradeModule* _Owner; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::UInt64>* _OrderUidToOfferedPetUid; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::UInt64>* _PetUidToLastTradeTs; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*>* HistoryOrderList; // 0x40
		::System::UInt64 _MyOrderSyncVersion; // 0x48

		::System::Void _ctor(::Class_0_16E4307DCC419505_1359* a1, ::RPG::Client::BlindBox::Trade::BlindBoxTradeModule* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1359*, ::RPG::Client::BlindBox::Trade::BlindBoxTradeModule*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Int32 get_MaxPublishOrderCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GET_MAXPUBLISHORDERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_MaxHistoryDisplayCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GET_MAXHISTORYDISPLAYCOUNT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RefreshMyOrders()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_REFRESHMYORDERS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* LoadHistoryOrders(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_LOADHISTORYORDERS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* RefreshPetTradeInfo()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_REFRESHPETTRADEINFO_OFFSET))(this);
		}

		::System::Int32 GetMyCurrentOrderCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GETMYCURRENTORDERCOUNT_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* GetMyCurrentOrderAt(::System::Int32 a1)
		{
			return ((::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GETMYCURRENTORDERAT_OFFSET))(this, a1);
		}

		::System::Void RemoveMyCurrentOrder(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_REMOVEMYCURRENTORDER_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* FindCurrentPrivateOrderByPlayerUid(::System::UInt32 a1)
		{
			return ((::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_FINDCURRENTPRIVATEORDERBYPLAYERUID_OFFSET))(this, a1);
		}

		::System::Int32 GetHistoryOrderCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GETHISTORYORDERCOUNT_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* GetHistoryOrderAt(::System::Int32 a1)
		{
			return ((::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GETHISTORYORDERAT_OFFSET))(this, a1);
		}

		::System::Boolean IsOrderWaitGrant(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_ISORDERWAITGRANT_OFFSET))(this, a1);
		}

		::System::Boolean IsOrderChangeRefreshAnimPlayed(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_ISORDERCHANGEREFRESHANIMPLAYED_OFFSET))(this, a1);
		}

		::System::Void RecordOrderChangeRefreshAnimPlayed(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_RECORDORDERCHANGEREFRESHANIMPLAYED_OFFSET))(this, a1);
		}

		::System::Boolean IsOrderChangeGetAnimPlayed(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_ISORDERCHANGEGETANIMPLAYED_OFFSET))(this, a1);
		}

		::System::Void RecordOrderChangeGetAnimPlayed(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_RECORDORDERCHANGEGETANIMPLAYED_OFFSET))(this, a1);
		}

		::System::Void _SyncHistory(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_51BA4980ED225F7B_2*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_51BA4980ED225F7B_2*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__SYNCHISTORY_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncWaitGrantOrders(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__SYNCWAITGRANTORDERS_OFFSET))(this, a1);
		}

		::System::Void _SyncPetTradeInfos(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_9*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_9*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__SYNCPETTRADEINFOS_OFFSET))(this, a1);
		}

		static ::System::Boolean _ArePetTradeInfosEqual(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::UInt64>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::UInt64>* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::UInt64>*, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::UInt64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__AREPETTRADEINFOSEQUAL_OFFSET))(a1, a2);
		}

		::System::Void _SyncMyCurrentOrders(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_51BA4980ED225F7B_2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_51BA4980ED225F7B_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__SYNCMYCURRENTORDERS_OFFSET))(this, a1);
		}

		::System::Void SyncMyOrderList(::Class_1_70373EC0EA5FDDDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_70373EC0EA5FDDDA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_SYNCMYORDERLIST_OFFSET))(this, a1);
		}

		::System::Void _SyncMyOrderList(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_51BA4980ED225F7B_2*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_51BA4980ED225F7B_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__SYNCMYORDERLIST_OFFSET))(this, a1, a2);
		}

		::System::Void _SortMyCurrentOrders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__SORTMYCURRENTORDERS_OFFSET))(this);
		}

		static ::System::Int32 _GetMyCurrentOrderTypeSortPriority(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__GETMYCURRENTORDERTYPESORTPRIORITY_OFFSET))(a1);
		}

		::System::Int32 _GetMyCurrentOrderSortPriority(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__GETMYCURRENTORDERSORTPRIORITY_OFFSET))(this, a1);
		}

		static ::System::Boolean _IsCurrentPrivateOrderAvailable(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__ISCURRENTPRIVATEORDERAVAILABLE_OFFSET))(a1);
		}

		static ::System::Boolean _IsOrderForPlayer(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__ISORDERFORPLAYER_OFFSET))(a1, a2);
		}

		::System::Boolean IsOfferedPetUidLocked(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_ISOFFEREDPETUIDLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean IsOfferedPetInstanceLocked(::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_ISOFFEREDPETINSTANCELOCKED_OFFSET))(this, a1);
		}

		::System::Boolean HasPetInstanceInCd(::RPG::Client::Pet::IPet* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_HASPETINSTANCEINCD_OFFSET))(this, a1);
		}

		::System::UInt64 GetPetInstanceCdRemainingSeconds(::RPG::Client::Pet::IPet* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GETPETINSTANCECDREMAININGSECONDS_OFFSET))(this, a1);
		}

		::System::UInt64 _GetPetInstanceCdRemainingSeconds(::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* a1, ::System::UInt64 a2)
		{
			return ((::System::UInt64(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__GETPETINSTANCECDREMAININGSECONDS_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasPetInstanceInTrade(::RPG::Client::Pet::IPet* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_HASPETINSTANCEINTRADE_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository_BlindBoxPetTradeAvailability GetPetTradeAvailability(::RPG::Client::Pet::IPet* a1)
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository_BlindBoxPetTradeAvailability(*)(::PVOID, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GETPETTRADEAVAILABILITY_OFFSET))(this, a1);
		}

		::System::Boolean IsPetInstanceInCd(::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_ISPETINSTANCEINCD_OFFSET))(this, a1);
		}

		::System::Boolean HasAvailablePetInstance(::RPG::Client::Pet::IPet* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_HASAVAILABLEPETINSTANCE_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository_PetTradeAvailabilitySummary _GetPetTradeAvailabilitySummary(::RPG::Client::Pet::IPet* a1)
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository_PetTradeAvailabilitySummary(*)(::PVOID, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__GETPETTRADEAVAILABILITYSUMMARY_OFFSET))(this, a1);
		}

		static ::System::UInt64 _GetPetTradeCdDurationSeconds()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__GETPETTRADECDDURATIONSECONDS_OFFSET))();
		}

		::System::Boolean _IsPetUidInCd(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__ISPETUIDINCD_OFFSET))(this, a1);
		}

		static ::System::UInt64 _GetPetTradeCdEndTime(::System::UInt64 a1)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__GETPETTRADECDENDTIME_OFFSET))(a1);
		}

		::System::Int32 get_CurrentRequestCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY_GET_CURRENTREQUESTCOUNT_OFFSET))(this);
		}

		::System::Void _RefreshPetTradeInfo_b__14_0(::Class_1_AC819B79CD1B6B62* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AC819B79CD1B6B62*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY__REFRESHPETTRADEINFO_B__14_0_OFFSET))(this, a1);
		}

		::System::Int32 __SortMyCurrentOrders_b__33_0(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___SORTMYCURRENTORDERS_B__33_0_OFFSET))(this, a1, a2);
		}
	};
}
