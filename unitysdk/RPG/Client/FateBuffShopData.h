#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_33;
class Class_1_ACA38760E7F8B37E;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateBuffShopGoodsItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEBUFFSHOPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9821C0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GETFATEBUFFRATEHINTINTROTEXT_OFFSET UNITYSDK_OFFSET(0xB9829F0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GETSHOPGOODSITEM_OFFSET UNITYSDK_OFFSET(0xB981E30)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_GOODSLIST_OFFSET UNITYSDK_OFFSET(0xB982260)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_ISALLGOODSSOLDOUT_OFFSET UNITYSDK_OFFSET(0xB9834C0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_ISBONUS_OFFSET UNITYSDK_OFFSET(0xB9835D0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_ISGOODSLOCKED_OFFSET UNITYSDK_OFFSET(0xB9834A0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_PERMANENTREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xB983590)
#define RPG_CLIENT_FATEBUFFSHOPDATA_GET_TIMELIMITEDREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xB9835B0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_ISCANBUYBUFF_OFFSET UNITYSDK_OFFSET(0xB9822F0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SET_ISBONUS_OFFSET UNITYSDK_OFFSET(0xB9835E0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SET_ISGOODSLOCKED_OFFSET UNITYSDK_OFFSET(0xB9834B0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SET_PERMANENTREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xB9835A0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SET_TIMELIMITEDREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xB9835C0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCBUYGOODS_OFFSET UNITYSDK_OFFSET(0xB981DA0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCISBONUS_OFFSET UNITYSDK_OFFSET(0xB982120)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCISLOCK_OFFSET UNITYSDK_OFFSET(0xB982170)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xB981D40)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCREFRESHGOODS_OFFSET UNITYSDK_OFFSET(0xB9820D0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCSELLGOODS_OFFSET UNITYSDK_OFFSET(0xB982000)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xB981AB0)
#define RPG_CLIENT_FATEBUFFSHOPDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB981A50)
#define RPG_CLIENT_FATEBUFFSHOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB981A40)
#define RPG_CLIENT_FATEBUFFSHOPDATA__ISUSEDIFFICULTYBUFFWEIGHTARRAY_OFFSET UNITYSDK_OFFSET(0xB9831E0)
#define RPG_CLIENT_FATEBUFFSHOPDATA__REFRESHGOODSLIST_OFFSET UNITYSDK_OFFSET(0xB981B60)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffShopData_TypeDefinitionIndex = 59918;

	class FateBuffShopData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateBuffShopGoodsItem*>* _GoodsList; // 0x10
		::System::UInt32 _TimeLimitedRefreshCount_k__BackingField; // 0x18
		::System::UInt32 _Difficulty; // 0x1C
		::System::Boolean _IsBonus_k__BackingField; // 0x20
		::System::Boolean _IsGoodsLocked_k__BackingField; // 0x21
		::System::UInt32 _PermanentRefreshCount_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_ACA38760E7F8B37E* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void SyncUpdate(::Class_1_ACA38760E7F8B37E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncBuyGoods(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCBUYGOODS_OFFSET))(this, a1);
		}

		::System::Void SyncSellGoods(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCSELLGOODS_OFFSET))(this, a1);
		}

		::System::Void SyncRefreshGoods(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_33*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_33*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCREFRESHGOODS_OFFSET))(this, a1);
		}

		::System::Void SyncIsBonus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCISBONUS_OFFSET))(this, a1);
		}

		::System::Void SyncIsLock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCISLOCK_OFFSET))(this, a1);
		}

		::System::Void SyncRefreshCount(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SYNCREFRESHCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::FateBuffShopGoodsItem* GetShopGoodsItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateBuffShopGoodsItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_GETSHOPGOODSITEM_OFFSET))(this, a1);
		}

		::System::Boolean IsCanBuyBuff(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_ISCANBUYBUFF_OFFSET))(this, a1);
		}

		::System::String* GetFateBuffRateHintIntroText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_GETFATEBUFFRATEHINTINTROTEXT_OFFSET))(this);
		}

		::System::Void _RefreshGoodsList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_33*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_33*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA__REFRESHGOODSLIST_OFFSET))(this, a1);
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

		::System::Void set_IsGoodsLocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SET_ISGOODSLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllGoodsSoldOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_GET_ISALLGOODSSOLDOUT_OFFSET))(this);
		}

		::System::UInt32 get_PermanentRefreshCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_GET_PERMANENTREFRESHCOUNT_OFFSET))(this);
		}

		::System::Void set_PermanentRefreshCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SET_PERMANENTREFRESHCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TimeLimitedRefreshCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_GET_TIMELIMITEDREFRESHCOUNT_OFFSET))(this);
		}

		::System::Void set_TimeLimitedRefreshCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SET_TIMELIMITEDREFRESHCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_GET_ISBONUS_OFFSET))(this);
		}

		::System::Void set_IsBonus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA_SET_ISBONUS_OFFSET))(this, a1);
		}
	};
}
