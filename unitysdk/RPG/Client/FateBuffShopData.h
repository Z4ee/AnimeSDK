#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_29;
class Class_1_ACA38760E7F8B37E_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateBuffShopGoodsItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEBUFFSHOPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9671760)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GETFATEBUFFRATEHINTINTROTEXT_OFFSET UNITYSDK_OFFSET(0x9671EF0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GETSHOPGOODSITEM_OFFSET UNITYSDK_OFFSET(0x96713F0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_GOODSLIST_OFFSET UNITYSDK_OFFSET(0x96717E0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_ISALLGOODSSOLDOUT_OFFSET UNITYSDK_OFFSET(0x9672A10)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_ISBONUS_OFFSET UNITYSDK_OFFSET(0x9672B30)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_ISGOODSLOCKED_OFFSET UNITYSDK_OFFSET(0x96729F0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_PERMANENTREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x9672AF0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_TIMELIMITEDREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x9672B10)
#define RPG_CLIENT_FATEBUFFSHOPDATA_ISCANBUYBUFF_OFFSET UNITYSDK_OFFSET(0x96718C0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SET_ISBONUS_OFFSET UNITYSDK_OFFSET(0x9672B40)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SET_ISGOODSLOCKED_OFFSET UNITYSDK_OFFSET(0x9672A00)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SET_PERMANENTREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x9672B00)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SET_TIMELIMITEDREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x9672B20)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCBUYGOODS_OFFSET UNITYSDK_OFFSET(0x9671360)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCISBONUS_OFFSET UNITYSDK_OFFSET(0x96716C0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCISLOCK_OFFSET UNITYSDK_OFFSET(0x9671710)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x9671300)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCREFRESHGOODS_OFFSET UNITYSDK_OFFSET(0x9671670)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCSELLGOODS_OFFSET UNITYSDK_OFFSET(0x96715A0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x9671130)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x96710D0)
#define RPG_CLIENT_FATEBUFFSHOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x96710C0)
#define RPG_CLIENT_FATEBUFFSHOPDATA__ISUSEDIFFICULTYBUFFWEIGHTARRAY_OFFSET UNITYSDK_OFFSET(0x9672730)
#define RPG_CLIENT_FATEBUFFSHOPDATA__REFRESHGOODSLIST_OFFSET UNITYSDK_OFFSET(0x96711E0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffShopData_TypeDefinitionIndex = 52039;

	class FateBuffShopData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateBuffShopGoodsItem*>* _GoodsList; // 0x10
		::System::Boolean _IsBonus_k__BackingField; // 0x18
		::System::Boolean _IsGoodsLocked_k__BackingField; // 0x19
		::System::UInt32 _Difficulty; // 0x1C
		::System::UInt32 _PermanentRefreshCount_k__BackingField; // 0x20
		::System::UInt32 _TimeLimitedRefreshCount_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_ACA38760E7F8B37E_1* proto, ::System::UInt32 difficulty)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNC_OFFSET))(this, proto, difficulty);
		}

		::System::Void SyncUpdate(::Class_1_ACA38760E7F8B37E_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCUPDATE_OFFSET))(this, proto);
		}

		::System::Void SyncBuyGoods(::System::UInt32 buyIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCBUYGOODS_OFFSET))(this, buyIndex);
		}

		::System::Void SyncSellGoods(::System::UInt32 sellIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCSELLGOODS_OFFSET))(this, sellIndex);
		}

		::System::Void SyncRefreshGoods(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_29*>* protoGoodsList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_29*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCREFRESHGOODS_OFFSET))(this, protoGoodsList);
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

		::System::Void _RefreshGoodsList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_29*>* protoGoodsList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_29*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA__REFRESHGOODSLIST_OFFSET))(this, protoGoodsList);
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
