#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/RechargeGiftStatus.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_875AA3E31F445B46_2;
namespace RPG::Client { class Product; }
namespace RPG::Client { class RechargeGiftRewardData; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RechargeGiftConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_RECHARGEGIFTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC6BD010)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_COLLECTEDREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xC6BC660)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_DISCOUNT_OFFSET UNITYSDK_OFFSET(0xC6BCCE0)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_GIFTTYPE_OFFSET UNITYSDK_OFFSET(0xC6BC9C0)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_ISPRODUCTINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC6BCAB0)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_ISREWARDINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC6BCB10)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTBUYTIMES_OFFSET UNITYSDK_OFFSET(0xC6BCF10)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTENDTIME_OFFSET UNITYSDK_OFFSET(0xC6BCDC0)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0xC6BCEB0)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTMAXBUYTIMES_OFFSET UNITYSDK_OFFSET(0xC6BCF60)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTORIGINALPRICE_OFFSET UNITYSDK_OFFSET(0xC6BCD60)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTSHOWPRICE_OFFSET UNITYSDK_OFFSET(0xC6BCD00)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0xC6BCFB0)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_REWARDENDTIME_OFFSET UNITYSDK_OFFSET(0xC6BC640)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_REWARDOFDAY_OFFSET UNITYSDK_OFFSET(0xC6BC650)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC6BC670)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET__DISPLAYPRODUCTREF_OFFSET UNITYSDK_OFFSET(0xC6BC620)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET__GIFTROW_OFFSET UNITYSDK_OFFSET(0xC6BC600)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET__ISPRODUCTSOLDOUT_OFFSET UNITYSDK_OFFSET(0xC6BCC50)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET__PRODUCTREF_OFFSET UNITYSDK_OFFSET(0xC6BC610)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET__REWARDREF_OFFSET UNITYSDK_OFFSET(0xC6BC630)
#define RPG_CLIENT_RECHARGEGIFTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC6BD0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeGiftData_TypeDefinitionIndex = 62440;

	class RechargeGiftData : public ::System::Object
	{
	public:
		::Class_1_875AA3E31F445B46_2* __RewardRef_k__BackingField; // 0x10
		::RPG::GameCore::RechargeGiftConfigRow* __GiftRow_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _CollectedRewardItems_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>* _RewardOfDay_k__BackingField; // 0x28
		::RPG::Client::Product* __ProductRef_k__BackingField; // 0x30
		::RPG::Client::Product* __DisplayProductRef_k__BackingField; // 0x38
		::RPG::Client::DateTimePro _RewardEndTime_k__BackingField; // 0x40

		::System::Void _ctor(::RPG::GameCore::RechargeGiftConfigRow* a1, ::RPG::Client::Product* a2, ::Class_1_875AA3E31F445B46_2* a3, ::RPG::Client::Product* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RechargeGiftConfigRow*, ::RPG::Client::Product*, ::Class_1_875AA3E31F445B46_2*, ::RPG::Client::Product*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::RechargeGiftConfigRow* get__GiftRow()
		{
			return ((::RPG::GameCore::RechargeGiftConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET__GIFTROW_OFFSET))(this);
		}

		::RPG::Client::Product* get__ProductRef()
		{
			return ((::RPG::Client::Product*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET__PRODUCTREF_OFFSET))(this);
		}

		::RPG::Client::Product* get__DisplayProductRef()
		{
			return ((::RPG::Client::Product*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET__DISPLAYPRODUCTREF_OFFSET))(this);
		}

		::Class_1_875AA3E31F445B46_2* get__RewardRef()
		{
			return ((::Class_1_875AA3E31F445B46_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET__REWARDREF_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_RewardEndTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_REWARDENDTIME_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>* get_RewardOfDay()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_REWARDOFDAY_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_CollectedRewardItems()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_COLLECTEDREWARDITEMS_OFFSET))(this);
		}

		::RPG::Client::RechargeGiftStatus get_Status()
		{
			return ((::RPG::Client::RechargeGiftStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_STATUS_OFFSET))(this);
		}

		::System::UInt32 get_GiftType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_GIFTTYPE_OFFSET))(this);
		}

		::System::Single get_Discount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_DISCOUNT_OFFSET))(this);
		}

		::System::String* get_ProductShowPrice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTSHOWPRICE_OFFSET))(this);
		}

		::System::String* get_ProductOriginalPrice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTORIGINALPRICE_OFFSET))(this);
		}

		::System::Boolean get_IsProductInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_ISPRODUCTINSCHEDULE_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_ProductEndTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTENDTIME_OFFSET))(this);
		}

		::System::String* get_ProductID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTID_OFFSET))(this);
		}

		::System::UInt32 get_ProductBuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTBUYTIMES_OFFSET))(this);
		}

		::System::UInt32 get_ProductMaxBuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTMAXBUYTIMES_OFFSET))(this);
		}

		::System::Boolean get__IsProductSoldOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET__ISPRODUCTSOLDOUT_OFFSET))(this);
		}

		::System::Nullable_1<::System::UInt32> get_ProductVersion()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTVERSION_OFFSET))(this);
		}

		::System::Boolean get_IsRewardInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_ISREWARDINSCHEDULE_OFFSET))(this);
		}

		static ::RPG::Client::RechargeGiftData* Create(::System::UInt32 a1, ::RPG::Client::Product* a2, ::Class_1_875AA3E31F445B46_2* a3, ::RPG::Client::Product* a4)
		{
			return ((::RPG::Client::RechargeGiftData*(*)(::System::UInt32, ::RPG::Client::Product*, ::Class_1_875AA3E31F445B46_2*, ::RPG::Client::Product*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_CREATE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
