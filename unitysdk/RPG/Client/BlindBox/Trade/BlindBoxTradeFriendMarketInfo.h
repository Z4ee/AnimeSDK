#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1359;
class Class_1_1B6145248FA53FF9;
class Class_1_7FF19F6206AF6DD7_18;
namespace RPG::Client::BlindBox::Trade { class BlindBoxOrderFilter; }
namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GETCURRENTORDERAT_OFFSET UNITYSDK_OFFSET(0xC899590)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GETCURRENTORDERCOUNT_OFFSET UNITYSDK_OFFSET(0xC899540)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET_CURRENTFILTER_OFFSET UNITYSDK_OFFSET(0xC899500)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET__CHIMERATYPE_OFFSET UNITYSDK_OFFSET(0xC89A9A0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET__RACCOONTYPE_OFFSET UNITYSDK_OFFSET(0xC89A8A0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET__RETURNEDORDERIDSCLEARINTERVALSECONDS_OFFSET UNITYSDK_OFFSET(0xC89A6C0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_ISFRIENDORDER_OFFSET UNITYSDK_OFFSET(0xC899E00)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_ISORDERTRADABLEBYPLAYER_OFFSET UNITYSDK_OFFSET(0xC899FD0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REBUILDCURRENTORDERS_OFFSET UNITYSDK_OFFSET(0xC8993A0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REFRESHCURRENTORDERS_OFFSET UNITYSDK_OFFSET(0xC898CB0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REFRESHNEXTBATCH_OFFSET UNITYSDK_OFFSET(0xC899110)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REMOVENONFRIENDORDERS_OFFSET UNITYSDK_OFFSET(0xC899C60)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REMOVEORDERANDREFILL_OFFSET UNITYSDK_OFFSET(0xC899610)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_SETFILTER_OFFSET UNITYSDK_OFFSET(0xC8993F0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_UPDATECURRENTORDERS_OFFSET UNITYSDK_OFFSET(0xC898C60)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__BUILDCURRENTORDERS_OFFSET UNITYSDK_OFFSET(0xC898EF0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__CLEARRETURNEDORDERIDS_OFFSET UNITYSDK_OFFSET(0xC89A360)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC898B50)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__FETCHANDSYNCCACHEORDERS_OFFSET UNITYSDK_OFFSET(0xC898DE0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__FINDCACHEDORDER_OFFSET UNITYSDK_OFFSET(0xC899990)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__ISCACHEEXPIRED_OFFSET UNITYSDK_OFFSET(0xC899250)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__PICKANDLOG_OFFSET UNITYSDK_OFFSET(0xC89A630)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__PICKPREFERREDANDFILL_OFFSET UNITYSDK_OFFSET(0xC89A1D0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__RECORDRETURNEDORDERS_OFFSET UNITYSDK_OFFSET(0xC89A4D0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__REMOVEORDERBYID_OFFSET UNITYSDK_OFFSET(0xC89A7A0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__REMOVEORDER_OFFSET UNITYSDK_OFFSET(0xC899900)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__TRYCLEARRETURNEDORDERIDSBYINTERVAL_OFFSET UNITYSDK_OFFSET(0xC89A040)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___FETCHANDSYNCCACHEORDERS_B__22_0_OFFSET UNITYSDK_OFFSET(0xC89AAA0)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeFriendMarketInfo_TypeDefinitionIndex = 74855;

	class BlindBoxTradeFriendMarketInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt64 _FetchCD = 0x3C; // 0x0
		// static const ::System::UInt32 _OrderShowCount = 0x6; // 0x0
		// static const ::System::Int32 _PreferRaccoonOrderCount = 0x2; // 0x0
		// static const ::System::Int32 _PreferChimeraOrderCount = 0x2; // 0x0
		// static const ::System::String* _ReturnedOrderIdsClearIntervalConstKey; // 0x0
		::Class_0_16E4307DCC419505_1359* _NetworkService; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* CurrentOrders; // 0x18
		::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter* _CurrentFilter; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt64>* _ReturnedOrderIds; // 0x28
		::Class_1_1B6145248FA53FF9* _OrderPickContext; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* CacheOrders; // 0x38
		::System::UInt64 _LastReturnedOrderIdsClearTime; // 0x40
		::System::UInt64 _LastUpdateTime; // 0x48

		::System::Void _ctor(::Class_0_16E4307DCC419505_1359* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1359*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* UpdateCurrentOrders()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_UPDATECURRENTORDERS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RefreshCurrentOrders()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REFRESHCURRENTORDERS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RefreshNextBatch()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REFRESHNEXTBATCH_OFFSET))(this);
		}

		::System::Void RebuildCurrentOrders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REBUILDCURRENTORDERS_OFFSET))(this);
		}

		::System::Void SetFilter(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_SETFILTER_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter* get_CurrentFilter()
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET_CURRENTFILTER_OFFSET))(this);
		}

		::System::Int32 GetCurrentOrderCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GETCURRENTORDERCOUNT_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* GetCurrentOrderAt(::System::Int32 a1)
		{
			return ((::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GETCURRENTORDERAT_OFFSET))(this, a1);
		}

		::System::Void RemoveOrderAndRefill(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REMOVEORDERANDREFILL_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveNonFriendOrders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_REMOVENONFRIENDORDERS_OFFSET))(this);
		}

		::System::Boolean IsOrderTradableByPlayer(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_ISORDERTRADABLEBYPLAYER_OFFSET))(this, a1);
		}

		::System::Boolean IsFriendOrder(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_ISFRIENDORDER_OFFSET))(this, a1);
		}

		::System::Void _BuildCurrentOrders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__BUILDCURRENTORDERS_OFFSET))(this);
		}

		::System::Void _PickPreferredAndFill(::Class_1_1B6145248FA53FF9* a1, ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1B6145248FA53FF9*, ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__PICKPREFERREDANDFILL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RecordReturnedOrders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__RECORDRETURNEDORDERS_OFFSET))(this);
		}

		::System::Void _TryClearReturnedOrderIdsByInterval()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__TRYCLEARRETURNEDORDERIDSBYINTERVAL_OFFSET))(this);
		}

		::System::Void _ClearReturnedOrderIds(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__CLEARRETURNEDORDERIDS_OFFSET))(this, a1);
		}

		::System::Void _PickAndLog(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__PICKANDLOG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* _FetchAndSyncCacheOrders()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__FETCHANDSYNCCACHEORDERS_OFFSET))(this);
		}

		::System::Boolean _IsCacheExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__ISCACHEEXPIRED_OFFSET))(this);
		}

		::System::Void _RemoveOrder(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__REMOVEORDER_OFFSET))(this, a1);
		}

		static ::System::Void _RemoveOrderById(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__REMOVEORDERBYID_OFFSET))(a1, a2);
		}

		::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* _FindCachedOrder(::System::Collections::Generic::HashSet_1<::System::UInt64>* a1, ::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter* a2)
		{
			return ((::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt64>*, ::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO__FINDCACHEDORDER_OFFSET))(this, a1, a2);
		}

		static ::System::UInt64 get__ReturnedOrderIdsClearIntervalSeconds()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET__RETURNEDORDERIDSCLEARINTERVALSECONDS_OFFSET))();
		}

		::RPG::Client::Pet::BlindBox::BlindBoxPetType get__RaccoonType()
		{
			return ((::RPG::Client::Pet::BlindBox::BlindBoxPetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET__RACCOONTYPE_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::BlindBoxPetType get__ChimeraType()
		{
			return ((::RPG::Client::Pet::BlindBox::BlindBoxPetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO_GET__CHIMERATYPE_OFFSET))(this);
		}

		::System::Void __FetchAndSyncCacheOrders_b__22_0(::Class_1_7FF19F6206AF6DD7_18* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___FETCHANDSYNCCACHEORDERS_B__22_0_OFFSET))(this, a1);
		}
	};
}
