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

#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_ADDCUSTOMERBYSELECTEVENT_OFFSET UNITYSDK_OFFSET(0xA264C10)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA25C170)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKABLEFOODCNT_1_OFFSET UNITYSDK_OFFSET(0xA264710)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKABLEFOODCNT_OFFSET UNITYSDK_OFFSET(0xA264650)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKEDFOODCNT_OFFSET UNITYSDK_OFFSET(0xA264120)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKINGRECIPECNT_OFFSET UNITYSDK_OFFSET(0xA264410)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_COSTTIME_OFFSET UNITYSDK_OFFSET(0xA264FA0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_EATENCUSTOMER_OFFSET UNITYSDK_OFFSET(0xA264E40)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_GUIDEQUEST_OFFSET UNITYSDK_OFFSET(0xA264F20)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_LOSTCUSTOMER_OFFSET UNITYSDK_OFFSET(0xA264EA0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_MAXTIME_OFFSET UNITYSDK_OFFSET(0xA264F80)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_NOSERVERCUSTOMER_OFFSET UNITYSDK_OFFSET(0xA264E80)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_PROFITQUEST_OFFSET UNITYSDK_OFFSET(0xA264F00)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_REQUESTINFOCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xA264F60)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_SKILLUSECNT_OFFSET UNITYSDK_OFFSET(0xA264F40)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_TOTALCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0xA264E60)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_HASPREFECTFOOD_OFFSET UNITYSDK_OFFSET(0xA2649F0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_INIT_OFFSET UNITYSDK_OFFSET(0xA25BA00)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_COSTTIME_OFFSET UNITYSDK_OFFSET(0xA264FB0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_EATENCUSTOMER_OFFSET UNITYSDK_OFFSET(0xA264E50)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_GUIDEQUEST_OFFSET UNITYSDK_OFFSET(0xA264F30)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_MAXTIME_OFFSET UNITYSDK_OFFSET(0xA264F90)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_NOSERVERCUSTOMER_OFFSET UNITYSDK_OFFSET(0xA264E90)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_PROFITQUEST_OFFSET UNITYSDK_OFFSET(0xA264F10)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_REQUESTINFOCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xA264F70)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_SKILLUSECNT_OFFSET UNITYSDK_OFFSET(0xA264F50)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_TOTALCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0xA264E70)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA25B9F0)
#define RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL__INITQUEST_OFFSET UNITYSDK_OFFSET(0xA263C70)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantManageGameplayModel_TypeDefinitionIndex = 58735;

	class ElfRestaurantManageGameplayModel : public ::System::Object
	{
	public:
		::RPG::Client::QuestData* _GuideQuest_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ElfOrderInfo*>* CookingOrderList; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* FoodList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* CookUsedItemDict; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::ElfDeliverCustomerRecipeInfo*>* DeliverCustomerRecipeInfos; // 0x30
		::RPG::Client::QuestData* _ProfitQuest_k__BackingField; // 0x38
		::RPG::Client::ElfRequestInfoCollector* _RequestInfoCollector_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* PendingDeliverFoodList; // 0x48
		::RPG::Client::ElfRestaurantViewModel* ViewModel; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* UsedItemDict; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::ElfOrderInfo*>* OrderQueue; // 0x60
		::System::Int32 TotalDrinkCount; // 0x68
		::System::UInt32 _EatenCustomer_k__BackingField; // 0x6C
		::System::Int32 AvailableDrinkCount; // 0x70
		::System::UInt32 _TotalCustomerCnt_k__BackingField; // 0x74
		::System::Single _CostTime_k__BackingField; // 0x78
		::System::UInt32 _SkillUseCnt_k__BackingField; // 0x7C
		::System::Single _MaxTime_k__BackingField; // 0x80
		::System::UInt32 _NoServerCustomer_k__BackingField; // 0x84
		::System::UInt32 BeforeManageCurrency; // 0x88
		::System::Int32 DrinkCount; // 0x8C

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

		::System::Int32 GetCookedFoodCnt(::System::UInt32 recipeID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKEDFOODCNT_OFFSET))(this, recipeID);
		}

		::System::Int32 GetCookingRecipeCnt(::System::UInt32 recipeID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKINGRECIPECNT_OFFSET))(this, recipeID);
		}

		::System::Int32 GetCookableFoodCnt(::System::UInt32 recipeID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKABLEFOODCNT_OFFSET))(this, recipeID);
		}

		::System::Int32 GetCookableFoodCnt_1(::RPG::Client::ElfRestaurantRecipeData* recipeData)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GETCOOKABLEFOODCNT_1_OFFSET))(this, recipeData);
		}

		::System::Boolean HasPrefectFood(::System::UInt32 recipeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_HASPREFECTFOOD_OFFSET))(this, recipeID);
		}

		::System::Void AddCustomerBySelectEvent(::System::Int32 customerRuntimeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_ADDCUSTOMERBYSELECTEVENT_OFFSET))(this, customerRuntimeID);
		}

		::System::UInt32 get_EatenCustomer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_EATENCUSTOMER_OFFSET))(this);
		}

		::System::Void set_EatenCustomer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_EATENCUSTOMER_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalCustomerCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_TOTALCUSTOMERCNT_OFFSET))(this);
		}

		::System::Void set_TotalCustomerCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_TOTALCUSTOMERCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_NoServerCustomer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_NOSERVERCUSTOMER_OFFSET))(this);
		}

		::System::Void set_NoServerCustomer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_NOSERVERCUSTOMER_OFFSET))(this, value);
		}

		::System::UInt32 get_LostCustomer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_LOSTCUSTOMER_OFFSET))(this);
		}

		::RPG::Client::QuestData* get_ProfitQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_PROFITQUEST_OFFSET))(this);
		}

		::System::Void set_ProfitQuest(::RPG::Client::QuestData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_PROFITQUEST_OFFSET))(this, value);
		}

		::RPG::Client::QuestData* get_GuideQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_GUIDEQUEST_OFFSET))(this);
		}

		::System::Void set_GuideQuest(::RPG::Client::QuestData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_GUIDEQUEST_OFFSET))(this, value);
		}

		::System::UInt32 get_SkillUseCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_SKILLUSECNT_OFFSET))(this);
		}

		::System::Void set_SkillUseCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_SKILLUSECNT_OFFSET))(this, value);
		}

		::RPG::Client::ElfRequestInfoCollector* get_RequestInfoCollector()
		{
			return ((::RPG::Client::ElfRequestInfoCollector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_REQUESTINFOCOLLECTOR_OFFSET))(this);
		}

		::System::Void set_RequestInfoCollector(::RPG::Client::ElfRequestInfoCollector* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRequestInfoCollector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_REQUESTINFOCOLLECTOR_OFFSET))(this, value);
		}

		::System::Single get_MaxTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_MAXTIME_OFFSET))(this);
		}

		::System::Void set_MaxTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_MAXTIME_OFFSET))(this, value);
		}

		::System::Single get_CostTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_GET_COSTTIME_OFFSET))(this);
		}

		::System::Void set_CostTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGEGAMEPLAYMODEL_SET_COSTTIME_OFFSET))(this, value);
		}
	};
}
