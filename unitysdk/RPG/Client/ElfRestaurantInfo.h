#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1FF62FAE312BC49_3;
class Class_1_D17272E82AE804C2_265;
namespace RPG::Client { class ElfRecipeEditor; }
namespace RPG::Client { class ElfRestaurantCustomerData; }
namespace RPG::Client { class ElfRestaurantDrinkRecipeData; }
namespace RPG::Client { class ElfRestaurantManageGameplayModel; }
namespace RPG::Client { class ElfRestaurantManageStatistics; }
namespace RPG::Client { class ElfRestaurantMediator; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace RPG::Client { class ElfRestaurantSpecialCustomerData; }
namespace RPG::Client { class ElfRestaurantTagData; }
namespace RPG::Client { class IElfRecipeEditable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTINFO_CHECKSELECTRECIPES_OFFSET UNITYSDK_OFFSET(0xB8BE570)
#define RPG_CLIENT_ELFRESTAURANTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8E4360)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETALLNEWUNLOCKRECIPES_OFFSET UNITYSDK_OFFSET(0xB8CFDE0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETALLPRICEUPRECIPES_OFFSET UNITYSDK_OFFSET(0xB8E4CC0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETALLPROGRESSUNLOCKRECIPES_OFFSET UNITYSDK_OFFSET(0xB8E4F50)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETALLRECIPES_OFFSET UNITYSDK_OFFSET(0xB8E5210)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETALLUNLOCKRECIPES_OFFSET UNITYSDK_OFFSET(0xB8E4A00)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETCUSTOMERDATA_OFFSET UNITYSDK_OFFSET(0xB8E47F0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETMOSTEXPENSIVEUSABLERECIPE_OFFSET UNITYSDK_OFFSET(0xB8E6EA0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETNOFINISHEDTARGETRECIPE_OFFSET UNITYSDK_OFFSET(0xB8E6660)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETRECIPEDATA_OFFSET UNITYSDK_OFFSET(0xB8B8F30)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETSPECIALCUSTOMERDATA_OFFSET UNITYSDK_OFFSET(0xB8E48A0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETTAGDATA_OFFSET UNITYSDK_OFFSET(0xB8E4950)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETTODAYMENURECIPESTORAGE_OFFSET UNITYSDK_OFFSET(0xB8E5490)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_AVAILABLERECIPEDATADICT_OFFSET UNITYSDK_OFFSET(0xB8E65B0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_COOKABLERECIPEDATADICT_OFFSET UNITYSDK_OFFSET(0xB8E7370)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_DRINKINGRECIPEDATA_OFFSET UNITYSDK_OFFSET(0xB8E7420)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_HASAVAILABLERECIPEDATA_OFFSET UNITYSDK_OFFSET(0xB8E7260)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_RECIPEEDITOR_OFFSET UNITYSDK_OFFSET(0xB8D1420)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_SELECTRECIPEDICT_OFFSET UNITYSDK_OFFSET(0xB8D1370)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_SPECIALTY_OFFSET UNITYSDK_OFFSET(0xB8E7240)
#define RPG_CLIENT_ELFRESTAURANTINFO_HASEMPTYRECIPESLOT_OFFSET UNITYSDK_OFFSET(0xB8E6960)
#define RPG_CLIENT_ELFRESTAURANTINFO_HASEXPENSIVERECIPE_OFFSET UNITYSDK_OFFSET(0xB8E6B40)
#define RPG_CLIENT_ELFRESTAURANTINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB8E37F0)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISFOODLISTEMPTY_OFFSET UNITYSDK_OFFSET(0xB8E7560)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISMATERIALSUSEDUP_OFFSET UNITYSDK_OFFSET(0xB8E7430)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPECOOKABLE_1_OFFSET UNITYSDK_OFFSET(0xB8E68F0)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPECOOKABLE_OFFSET UNITYSDK_OFFSET(0xB8E6840)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPEINSLOTS_OFFSET UNITYSDK_OFFSET(0xB8E66F0)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISTODAYMENUEMPTY_OFFSET UNITYSDK_OFFSET(0xB8E45E0)
#define RPG_CLIENT_ELFRESTAURANTINFO_RESETDRINKINGRECIPEDATA_OFFSET UNITYSDK_OFFSET(0xB8C9DD0)
#define RPG_CLIENT_ELFRESTAURANTINFO_SETSELECTRECIPES_OFFSET UNITYSDK_OFFSET(0xB8CC8E0)
#define RPG_CLIENT_ELFRESTAURANTINFO_SET_AVAILABLERECIPEDATADICT_OFFSET UNITYSDK_OFFSET(0xB8E7250)
#define RPG_CLIENT_ELFRESTAURANTINFO_SET_COOKABLERECIPEDATADICT_OFFSET UNITYSDK_OFFSET(0xB8E7360)
#define RPG_CLIENT_ELFRESTAURANTINFO_SET_RECIPEEDITOR_OFFSET UNITYSDK_OFFSET(0xB8E7210)
#define RPG_CLIENT_ELFRESTAURANTINFO_SET_SELECTRECIPEDICT_OFFSET UNITYSDK_OFFSET(0xB8E7220)
#define RPG_CLIENT_ELFRESTAURANTINFO_SET_SPECIALTY_OFFSET UNITYSDK_OFFSET(0xB8E7230)
#define RPG_CLIENT_ELFRESTAURANTINFO_SYNCPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB8E5AA0)
#define RPG_CLIENT_ELFRESTAURANTINFO_SYNCRECIPELEVELUPGRADE_OFFSET UNITYSDK_OFFSET(0xB8E5640)
#define RPG_CLIENT_ELFRESTAURANTINFO_SYNCRECIPE_OFFSET UNITYSDK_OFFSET(0xB8E56E0)
#define RPG_CLIENT_ELFRESTAURANTINFO_TRYGETMANAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0xB8E7030)
#define RPG_CLIENT_ELFRESTAURANTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E7600)
#define RPG_CLIENT_ELFRESTAURANTINFO__INITCUSTOMERDATA_OFFSET UNITYSDK_OFFSET(0xB8E3B50)
#define RPG_CLIENT_ELFRESTAURANTINFO__INITRECIPEDATA_OFFSET UNITYSDK_OFFSET(0xB8E38A0)
#define RPG_CLIENT_ELFRESTAURANTINFO__INITSPECIALCUSTOMERDATA_OFFSET UNITYSDK_OFFSET(0xB8E3E00)
#define RPG_CLIENT_ELFRESTAURANTINFO__INITTAGDATA_OFFSET UNITYSDK_OFFSET(0xB8E40B0)
#define RPG_CLIENT_ELFRESTAURANTINFO__ISPRICEEXPENSIVETHANSLOT_OFFSET UNITYSDK_OFFSET(0xB8E6CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantInfo_TypeDefinitionIndex = 59663;

	class ElfRestaurantInfo : public ::System::Object
	{
	public:
		::RPG::Client::ElfRestaurantManageStatistics* _ManageStatistics; // 0x10
		::RPG::Client::ElfRestaurantRecipeData* _Specialty_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* _SelectRecipeDict; // 0x20
		::RPG::Client::ElfRestaurantDrinkRecipeData* _DrinkingRecipeData; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* RecipeDataDict; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* _CookableRecipeDataDict; // 0x38
		::RPG::Client::ElfRestaurantMediator* Mediator; // 0x40
		::RPG::Client::ElfRecipeEditor* _RecipeEditor; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* RecentDayEarnedGolds; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantSpecialCustomerData*>* SpecialCustomerDataDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* _AvailableRecipeDataDict; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantTagData*>* TagDataDict; // 0x68
		::RPG::Client::ElfRestaurantManageGameplayModel* ManageGameplayModel; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantCustomerData*>* CustomerDataDict; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsTodayMenuEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_ISTODAYMENUEMPTY_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantRecipeData* GetRecipeData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETRECIPEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRestaurantCustomerData* GetCustomerData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantCustomerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETCUSTOMERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRestaurantSpecialCustomerData* GetSpecialCustomerData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantSpecialCustomerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETSPECIALCUSTOMERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRestaurantTagData* GetTagData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantTagData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETTAGDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetAllUnlockRecipes(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETALLUNLOCKRECIPES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetAllNewUnlockRecipes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETALLNEWUNLOCKRECIPES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetAllPriceUpRecipes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETALLPRICEUPRECIPES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetAllProgressUnlockRecipes(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETALLPROGRESSUNLOCKRECIPES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetAllRecipes(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETALLRECIPES_OFFSET))(this, a1);
		}

		::System::UInt32 GetTodayMenuRecipeStorage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETTODAYMENURECIPESTORAGE_OFFSET))(this);
		}

		::System::Void SyncRecipeLevelUpgrade(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SYNCRECIPELEVELUPGRADE_OFFSET))(this, a1, a2);
		}

		::System::Void SyncRecipe(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_265*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_265*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SYNCRECIPE_OFFSET))(this, a1);
		}

		::System::Void SyncPlayData(::Class_1_B1FF62FAE312BC49_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SYNCPLAYDATA_OFFSET))(this, a1);
		}

		::System::Void SetSelectRecipes(::System::Collections::Generic::List_1<::RPG::Client::IElfRecipeEditable*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IElfRecipeEditable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SETSELECTRECIPES_OFFSET))(this, a1);
		}

		::System::Void CheckSelectRecipes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_CHECKSELECTRECIPES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNoFinishedTargetRecipe()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETNOFINISHEDTARGETRECIPE_OFFSET))(this);
		}

		::System::Boolean IsRecipeInSlots(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPEINSLOTS_OFFSET))(this, a1);
		}

		::System::Boolean IsRecipeCookable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPECOOKABLE_OFFSET))(this, a1);
		}

		::System::Boolean IsRecipeCookable_1(::RPG::Client::ElfRestaurantRecipeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPECOOKABLE_1_OFFSET))(this, a1);
		}

		::System::Boolean HasEmptyRecipeSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_HASEMPTYRECIPESLOT_OFFSET))(this);
		}

		::System::Boolean HasExpensiveRecipe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_HASEXPENSIVERECIPE_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantRecipeData* GetMostExpensiveUsableRecipe()
		{
			return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETMOSTEXPENSIVEUSABLERECIPE_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantManageStatistics* TryGetManageStatistics()
		{
			return ((::RPG::Client::ElfRestaurantManageStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_TRYGETMANAGESTATISTICS_OFFSET))(this);
		}

		::System::Boolean _IsPriceExpensiveThanSlot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO__ISPRICEEXPENSIVETHANSLOT_OFFSET))(this, a1);
		}

		::System::Void _InitRecipeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO__INITRECIPEDATA_OFFSET))(this);
		}

		::System::Void _InitCustomerData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO__INITCUSTOMERDATA_OFFSET))(this);
		}

		::System::Void _InitSpecialCustomerData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO__INITSPECIALCUSTOMERDATA_OFFSET))(this);
		}

		::System::Void _InitTagData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO__INITTAGDATA_OFFSET))(this);
		}

		::System::Void set_RecipeEditor(::RPG::Client::ElfRecipeEditor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRecipeEditor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SET_RECIPEEDITOR_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRecipeEditor* get_RecipeEditor()
		{
			return ((::RPG::Client::ElfRecipeEditor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_RECIPEEDITOR_OFFSET))(this);
		}

		::System::Void set_SelectRecipeDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SET_SELECTRECIPEDICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* get_SelectRecipeDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_SELECTRECIPEDICT_OFFSET))(this);
		}

		::System::Void set_Specialty(::RPG::Client::ElfRestaurantRecipeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SET_SPECIALTY_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRestaurantRecipeData* get_Specialty()
		{
			return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_SPECIALTY_OFFSET))(this);
		}

		::System::Void set_AvailableRecipeDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SET_AVAILABLERECIPEDATADICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* get_AvailableRecipeDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_AVAILABLERECIPEDATADICT_OFFSET))(this);
		}

		::System::Boolean get_HasAvailableRecipeData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_HASAVAILABLERECIPEDATA_OFFSET))(this);
		}

		::System::Void set_CookableRecipeDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SET_COOKABLERECIPEDATADICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* get_CookableRecipeDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_COOKABLERECIPEDATADICT_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantDrinkRecipeData* get_DrinkingRecipeData()
		{
			return ((::RPG::Client::ElfRestaurantDrinkRecipeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_DRINKINGRECIPEDATA_OFFSET))(this);
		}

		::System::Void ResetDrinkingRecipeData(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_RESETDRINKINGRECIPEDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsMaterialsUsedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_ISMATERIALSUSEDUP_OFFSET))(this);
		}

		::System::Boolean IsFoodListEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_ISFOODLISTEMPTY_OFFSET))(this);
		}
	};
}
