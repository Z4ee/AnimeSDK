#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfDeliverCustomerRecipeInfo; }
namespace RPG::Client { class ElfOrderInfo; }
namespace RPG::Client { class ElfRequestInfoCollector; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace RPG::Client { class ElfRestaurantViewModel; }
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_ADDCUSTOMERBYSELECTEVENT_OFFSET UNITYSDK_OFFSET(0x18D6A680)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18D696A0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKABLEFOODCNT_1_OFFSET UNITYSDK_OFFSET(0x18D6A1B0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKABLEFOODCNT_OFFSET UNITYSDK_OFFSET(0x18D6A0F0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKEDFOODCNT_OFFSET UNITYSDK_OFFSET(0x18D69C00)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKINGRECIPECNT_OFFSET UNITYSDK_OFFSET(0x18D69EC0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_COSTTIME_OFFSET UNITYSDK_OFFSET(0x18D6A9E0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_EATENCUSTOMER_OFFSET UNITYSDK_OFFSET(0x18D6A880)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_GUIDEQUEST_OFFSET UNITYSDK_OFFSET(0x18D6A960)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_LOSTCUSTOMER_OFFSET UNITYSDK_OFFSET(0x18D6A8E0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_MAXTIME_OFFSET UNITYSDK_OFFSET(0x18D6A9C0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_NOSERVERCUSTOMER_OFFSET UNITYSDK_OFFSET(0x18D6A8C0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_PROFITQUEST_OFFSET UNITYSDK_OFFSET(0x18D6A940)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_REQUESTINFOCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x18D6A9A0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_SKILLUSECNT_OFFSET UNITYSDK_OFFSET(0x18D6A980)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_TOTALCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0x18D6A8A0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_HASPREFECTFOOD_OFFSET UNITYSDK_OFFSET(0x18D6A4A0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_INIT_OFFSET UNITYSDK_OFFSET(0x18D68ED0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_COSTTIME_OFFSET UNITYSDK_OFFSET(0x18D6A9F0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_EATENCUSTOMER_OFFSET UNITYSDK_OFFSET(0x18D6A890)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_GUIDEQUEST_OFFSET UNITYSDK_OFFSET(0x18D6A970)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_MAXTIME_OFFSET UNITYSDK_OFFSET(0x18D6A9D0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_NOSERVERCUSTOMER_OFFSET UNITYSDK_OFFSET(0x18D6A8D0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_PROFITQUEST_OFFSET UNITYSDK_OFFSET(0x18D6A950)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_REQUESTINFOCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x18D6A9B0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_SKILLUSECNT_OFFSET UNITYSDK_OFFSET(0x18D6A990)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_TOTALCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0x18D6A8B0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18D6AA00)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL__INITQUEST_OFFSET UNITYSDK_OFFSET(0x18D693F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantManageGameplayModel_TypeDefinitionIndex = 60950;

	class ElfRestaurantManageGameplayModel : public ::System::Object
	{
	public:
		::RPG::Client::ElfRestaurantViewModel* ViewModel; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* UsedItemDict; // 0x18
		::RPG::Client::ElfRequestInfoCollector* _RequestInfoCollector_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::ElfDeliverCustomerRecipeInfo*>* DeliverCustomerRecipeInfos; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ElfOrderInfo*>* OrderQueue; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* CookUsedItemDict; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* PendingDeliverFoodList; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ElfOrderInfo*>* CookingOrderList; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* FoodList; // 0x50
		::RPG::Client::QuestData* _ProfitQuest_k__BackingField; // 0x58
		::RPG::Client::QuestData* _GuideQuest_k__BackingField; // 0x60
		::System::UInt32 _SkillUseCnt_k__BackingField; // 0x68
		::System::Int32 AvailableDrinkCount; // 0x6C
		::System::Single _CostTime_k__BackingField; // 0x70
		::System::Int32 TotalDrinkCount; // 0x74
		::System::UInt32 _NoServerCustomer_k__BackingField; // 0x78
		::System::UInt32 BeforeManageCurrency; // 0x7C
		::System::Single _MaxTime_k__BackingField; // 0x80
		::System::UInt32 _EatenCustomer_k__BackingField; // 0x84
		::System::Int32 DrinkCount; // 0x88
		::System::UInt32 _TotalCustomerCnt_k__BackingField; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _InitQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL__INITQUEST_OFFSET))(this);
		}

		::System::Int32 GetCookedFoodCnt(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKEDFOODCNT_OFFSET))(this, a1);
		}

		::System::Int32 GetCookingRecipeCnt(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKINGRECIPECNT_OFFSET))(this, a1);
		}

		::System::Int32 GetCookableFoodCnt(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKABLEFOODCNT_OFFSET))(this, a1);
		}

		::System::Int32 GetCookableFoodCnt_1(::RPG::Client::ElfRestaurantRecipeData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKABLEFOODCNT_1_OFFSET))(this, a1);
		}

		::System::Boolean HasPrefectFood(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_HASPREFECTFOOD_OFFSET))(this, a1);
		}

		::System::Void AddCustomerBySelectEvent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_ADDCUSTOMERBYSELECTEVENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_EatenCustomer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_EATENCUSTOMER_OFFSET))(this);
		}

		::System::Void set_EatenCustomer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_EATENCUSTOMER_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalCustomerCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_TOTALCUSTOMERCNT_OFFSET))(this);
		}

		::System::Void set_TotalCustomerCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_TOTALCUSTOMERCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_NoServerCustomer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_NOSERVERCUSTOMER_OFFSET))(this);
		}

		::System::Void set_NoServerCustomer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_NOSERVERCUSTOMER_OFFSET))(this, a1);
		}

		::System::UInt32 get_LostCustomer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_LOSTCUSTOMER_OFFSET))(this);
		}

		::RPG::Client::QuestData* get_ProfitQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_PROFITQUEST_OFFSET))(this);
		}

		::System::Void set_ProfitQuest(::RPG::Client::QuestData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_PROFITQUEST_OFFSET))(this, a1);
		}

		::RPG::Client::QuestData* get_GuideQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_GUIDEQUEST_OFFSET))(this);
		}

		::System::Void set_GuideQuest(::RPG::Client::QuestData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_GUIDEQUEST_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillUseCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_SKILLUSECNT_OFFSET))(this);
		}

		::System::Void set_SkillUseCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_SKILLUSECNT_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRequestInfoCollector* get_RequestInfoCollector()
		{
			return ((::RPG::Client::ElfRequestInfoCollector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_REQUESTINFOCOLLECTOR_OFFSET))(this);
		}

		::System::Void set_RequestInfoCollector(::RPG::Client::ElfRequestInfoCollector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRequestInfoCollector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_REQUESTINFOCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Single get_MaxTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_MAXTIME_OFFSET))(this);
		}

		::System::Void set_MaxTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_MAXTIME_OFFSET))(this, a1);
		}

		::System::Single get_CostTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_COSTTIME_OFFSET))(this);
		}

		::System::Void set_CostTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_COSTTIME_OFFSET))(this, a1);
		}
	};
}
