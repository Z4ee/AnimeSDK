#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_30;
class Class_1_ACA38760E7F8B37E;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateBuffShopGoodsItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEBUFFSHOPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA330760)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GETFATEBUFFRATEHINTINTROTEXT_OFFSET UNITYSDK_OFFSET(0xA330C40)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GETSHOPGOODSITEM_OFFSET UNITYSDK_OFFSET(0xA3303F0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_GOODSLIST_OFFSET UNITYSDK_OFFSET(0xA3307E0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_ISALLGOODSSOLDOUT_OFFSET UNITYSDK_OFFSET(0xA331790)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_ISBONUS_OFFSET UNITYSDK_OFFSET(0xA3318B0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_ISGOODSLOCKED_OFFSET UNITYSDK_OFFSET(0xA331770)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_PERMANENTREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xA331870)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_TIMELIMITEDREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xA331890)
#define RPG_CLIENT_FATEBUFFSHOPDATA_ISCANBUYBUFF_OFFSET UNITYSDK_OFFSET(0xA330870)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SET_ISBONUS_OFFSET UNITYSDK_OFFSET(0xA3318C0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SET_ISGOODSLOCKED_OFFSET UNITYSDK_OFFSET(0xA331780)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SET_PERMANENTREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xA331880)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SET_TIMELIMITEDREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xA3318A0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCBUYGOODS_OFFSET UNITYSDK_OFFSET(0xA330360)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCISBONUS_OFFSET UNITYSDK_OFFSET(0xA3306C0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCISLOCK_OFFSET UNITYSDK_OFFSET(0xA330710)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xA330300)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCREFRESHGOODS_OFFSET UNITYSDK_OFFSET(0xA330670)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCSELLGOODS_OFFSET UNITYSDK_OFFSET(0xA3305A0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xA330130)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA3300D0)
#define RPG_CLIENT_FATEBUFFSHOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3300C0)
#define RPG_CLIENT_FATEBUFFSHOPDATA__ISUSEDIFFICULTYBUFFWEIGHTARRAY_OFFSET UNITYSDK_OFFSET(0xA3314B0)
#define RPG_CLIENT_FATEBUFFSHOPDATA__REFRESHGOODSLIST_OFFSET UNITYSDK_OFFSET(0xA3301E0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffShopData_TypeDefinitionIndex = 58988;

	class FateBuffShopData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateBuffShopGoodsItem*>* _GoodsList; // 0x10
		::System::UInt32 _TimeLimitedRefreshCount_k__BackingField; // 0x18
		::System::Boolean _IsBonus_k__BackingField; // 0x1C
		::System::Boolean _IsGoodsLocked_k__BackingField; // 0x1D
		::System::UInt32 _Difficulty; // 0x20
		::System::UInt32 _PermanentRefreshCount_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_ACA38760E7F8B37E* proto, ::System::UInt32 difficulty)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNC_OFFSET))(this, proto, difficulty);
		}

		::System::Void SyncUpdate(::Class_1_ACA38760E7F8B37E* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCUPDATE_OFFSET))(this, proto);
		}

		::System::Void SyncBuyGoods(::System::UInt32 buyIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCBUYGOODS_OFFSET))(this, buyIndex);
		}

		::System::Void SyncSellGoods(::System::UInt32 sellIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCSELLGOODS_OFFSET))(this, sellIndex);
		}

		::System::Void SyncRefreshGoods(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_30*>* protoGoodsList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_30*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCREFRESHGOODS_OFFSET))(this, protoGoodsList);
		}

		::System::Void SyncIsBonus(::System::Boolean isBonus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCISBONUS_OFFSET))(this, isBonus);
		}

		::System::Void SyncIsLock(::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCISLOCK_OFFSET))(this, isLock);
		}

		::System::Void SyncRefreshCount(::System::UInt32 permanentRefreshCount, ::System::UInt32 timeLimitedRefreshCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCREFRESHCOUNT_OFFSET))(this, permanentRefreshCount, timeLimitedRefreshCount);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::FateBuffShopGoodsItem* GetShopGoodsItem(::System::UInt32 index)
		{
			return ((::RPG::Client::FateBuffShopGoodsItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_GETSHOPGOODSITEM_OFFSET))(this, index);
		}

		::System::Boolean IsCanBuyBuff(::System::UInt32 buyIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_ISCANBUYBUFF_OFFSET))(this, buyIndex);
		}

		::System::String* GetFateBuffRateHintIntroText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_GETFATEBUFFRATEHINTINTROTEXT_OFFSET))(this);
		}

		::System::Void _RefreshGoodsList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_30*>* protoGoodsList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_30*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA__REFRESHGOODSLIST_OFFSET))(this, protoGoodsList);
		}

		::System::Boolean _IsUseDifficultyBuffWeightArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA__ISUSEDIFFICULTYBUFFWEIGHTARRAY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateBuffShopGoodsItem*>* get_GoodsList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateBuffShopGoodsItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_GET_GOODSLIST_OFFSET))(this);
		}

		::System::Boolean get_IsGoodsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_GET_ISGOODSLOCKED_OFFSET))(this);
		}

		::System::Void set_IsGoodsLocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SET_ISGOODSLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllGoodsSoldOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_GET_ISALLGOODSSOLDOUT_OFFSET))(this);
		}

		::System::UInt32 get_PermanentRefreshCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_GET_PERMANENTREFRESHCOUNT_OFFSET))(this);
		}

		::System::Void set_PermanentRefreshCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SET_PERMANENTREFRESHCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TimeLimitedRefreshCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_GET_TIMELIMITEDREFRESHCOUNT_OFFSET))(this);
		}

		::System::Void set_TimeLimitedRefreshCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SET_TIMELIMITEDREFRESHCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_GET_ISBONUS_OFFSET))(this);
		}

		::System::Void set_IsBonus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SET_ISBONUS_OFFSET))(this, value);
		}
	};
}
