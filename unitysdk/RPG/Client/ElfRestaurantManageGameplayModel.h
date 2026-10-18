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

#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_ADDCUSTOMERBYSELECTEVENT_OFFSET UNITYSDK_OFFSET(0xCDCA3C0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCDC1750)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKABLEFOODCNT_1_OFFSET UNITYSDK_OFFSET(0xCDC9F90)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKABLEFOODCNT_OFFSET UNITYSDK_OFFSET(0xCDC9ED0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKEDFOODCNT_OFFSET UNITYSDK_OFFSET(0xCDC99E0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKINGRECIPECNT_OFFSET UNITYSDK_OFFSET(0xCDC9CA0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_COSTTIME_OFFSET UNITYSDK_OFFSET(0xCDCA720)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_EATENCUSTOMER_OFFSET UNITYSDK_OFFSET(0xCDCA5C0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_GUIDEQUEST_OFFSET UNITYSDK_OFFSET(0xCDCA6A0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_LOSTCUSTOMER_OFFSET UNITYSDK_OFFSET(0xCDCA620)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_MAXTIME_OFFSET UNITYSDK_OFFSET(0xCDCA700)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_NOSERVERCUSTOMER_OFFSET UNITYSDK_OFFSET(0xCDCA600)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_PROFITQUEST_OFFSET UNITYSDK_OFFSET(0xCDCA680)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_REQUESTINFOCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xCDCA6E0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_SKILLUSECNT_OFFSET UNITYSDK_OFFSET(0xCDCA6C0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_TOTALCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0xCDCA5E0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_HASPREFECTFOOD_OFFSET UNITYSDK_OFFSET(0xCDCA1E0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_INIT_OFFSET UNITYSDK_OFFSET(0xCDC0F20)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_COSTTIME_OFFSET UNITYSDK_OFFSET(0xCDCA730)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_EATENCUSTOMER_OFFSET UNITYSDK_OFFSET(0xCDCA5D0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_GUIDEQUEST_OFFSET UNITYSDK_OFFSET(0xCDCA6B0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_MAXTIME_OFFSET UNITYSDK_OFFSET(0xCDCA710)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_NOSERVERCUSTOMER_OFFSET UNITYSDK_OFFSET(0xCDCA610)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_PROFITQUEST_OFFSET UNITYSDK_OFFSET(0xCDCA690)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_REQUESTINFOCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xCDCA6F0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_SKILLUSECNT_OFFSET UNITYSDK_OFFSET(0xCDCA6D0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_TOTALCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0xCDCA5F0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCDC0F10)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL__INITQUEST_OFFSET UNITYSDK_OFFSET(0xCDC95A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantManageGameplayModel_TypeDefinitionIndex = 63741;

	class ElfRestaurantManageGameplayModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElfOrderInfo*>* CookingOrderList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* CookUsedItemDict; // 0x18
		::RPG::Client::ElfRequestInfoCollector* _RequestInfoCollector_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ElfOrderInfo*>* OrderQueue; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* UsedItemDict; // 0x30
		::RPG::Client::QuestData* _ProfitQuest_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::ElfDeliverCustomerRecipeInfo*>* DeliverCustomerRecipeInfos; // 0x40
		::RPG::Client::QuestData* _GuideQuest_k__BackingField; // 0x48
		::RPG::Client::ElfRestaurantViewModel* ViewModel; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* PendingDeliverFoodList; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* FoodList; // 0x60
		::System::Single _MaxTime_k__BackingField; // 0x68
		::System::Int32 AvailableDrinkCount; // 0x6C
		::System::UInt32 _EatenCustomer_k__BackingField; // 0x70
		::System::UInt32 _TotalCustomerCnt_k__BackingField; // 0x74
		::System::Int32 DrinkCount; // 0x78
		::System::Single _CostTime_k__BackingField; // 0x7C
		::System::Int32 TotalDrinkCount; // 0x80
		::System::UInt32 _NoServerCustomer_k__BackingField; // 0x84
		::System::UInt32 _SkillUseCnt_k__BackingField; // 0x88
		::System::UInt32 BeforeManageCurrency; // 0x8C

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
