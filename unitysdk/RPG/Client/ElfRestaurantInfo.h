#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2E57B88467AF63C8_5;
class Class_1_D17272E82AE804C2_251;
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

#define RPG_CLIENT_ELFRESTAURANTINFO_CHECKSELECTRECIPES_OFFSET UNITYSDK_OFFSET(0xA262160)
#define RPG_CLIENT_ELFRESTAURANTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA25F160)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETALLNEWUNLOCKRECIPES_OFFSET UNITYSDK_OFFSET(0xA25FBC0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETALLPRICEUPRECIPES_OFFSET UNITYSDK_OFFSET(0xA25FDA0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETALLPROGRESSUNLOCKRECIPES_OFFSET UNITYSDK_OFFSET(0xA2602D0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETALLRECIPES_OFFSET UNITYSDK_OFFSET(0xA260830)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETALLUNLOCKRECIPES_OFFSET UNITYSDK_OFFSET(0xA25F890)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETCUSTOMERDATA_OFFSET UNITYSDK_OFFSET(0xA25F5F0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETMOSTEXPENSIVEUSABLERECIPE_OFFSET UNITYSDK_OFFSET(0xA262E70)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETNOFINISHEDTARGETRECIPE_OFFSET UNITYSDK_OFFSET(0xA262350)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETRECIPEDATA_OFFSET UNITYSDK_OFFSET(0xA24B6B0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETSPECIALCUSTOMERDATA_OFFSET UNITYSDK_OFFSET(0xA25F6D0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETTAGDATA_OFFSET UNITYSDK_OFFSET(0xA25F7B0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETTODAYMENURECIPESTORAGE_OFFSET UNITYSDK_OFFSET(0xA260A00)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_AVAILABLERECIPEDATADICT_OFFSET UNITYSDK_OFFSET(0xA2620B0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_COOKABLERECIPEDATADICT_OFFSET UNITYSDK_OFFSET(0xA263440)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_DRINKINGRECIPEDATA_OFFSET UNITYSDK_OFFSET(0xA2634F0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_HASAVAILABLERECIPEDATA_OFFSET UNITYSDK_OFFSET(0xA263330)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_RECIPEEDITOR_OFFSET UNITYSDK_OFFSET(0xA24ACE0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_SELECTRECIPEDICT_OFFSET UNITYSDK_OFFSET(0xA24AC30)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_SPECIALTY_OFFSET UNITYSDK_OFFSET(0xA263310)
#define RPG_CLIENT_ELFRESTAURANTINFO_HASEMPTYRECIPESLOT_OFFSET UNITYSDK_OFFSET(0xA262670)
#define RPG_CLIENT_ELFRESTAURANTINFO_HASEXPENSIVERECIPE_OFFSET UNITYSDK_OFFSET(0xA262840)
#define RPG_CLIENT_ELFRESTAURANTINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA25E760)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISFOODLISTEMPTY_OFFSET UNITYSDK_OFFSET(0xA263660)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISMATERIALSUSEDUP_OFFSET UNITYSDK_OFFSET(0xA263500)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPECOOKABLE_1_OFFSET UNITYSDK_OFFSET(0xA262600)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPECOOKABLE_OFFSET UNITYSDK_OFFSET(0xA262550)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPEINSLOTS_OFFSET UNITYSDK_OFFSET(0xA2623E0)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISTODAYMENUEMPTY_OFFSET UNITYSDK_OFFSET(0xA25F410)
#define RPG_CLIENT_ELFRESTAURANTINFO_RESETDRINKINGRECIPEDATA_OFFSET UNITYSDK_OFFSET(0xA25B870)
#define RPG_CLIENT_ELFRESTAURANTINFO_SETSELECTRECIPES_OFFSET UNITYSDK_OFFSET(0xA261B10)
#define RPG_CLIENT_ELFRESTAURANTINFO_SET_AVAILABLERECIPEDATADICT_OFFSET UNITYSDK_OFFSET(0xA263320)
#define RPG_CLIENT_ELFRESTAURANTINFO_SET_COOKABLERECIPEDATADICT_OFFSET UNITYSDK_OFFSET(0xA263430)
#define RPG_CLIENT_ELFRESTAURANTINFO_SET_RECIPEEDITOR_OFFSET UNITYSDK_OFFSET(0xA2632E0)
#define RPG_CLIENT_ELFRESTAURANTINFO_SET_SELECTRECIPEDICT_OFFSET UNITYSDK_OFFSET(0xA2632F0)
#define RPG_CLIENT_ELFRESTAURANTINFO_SET_SPECIALTY_OFFSET UNITYSDK_OFFSET(0xA263300)
#define RPG_CLIENT_ELFRESTAURANTINFO_SYNCPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA260FC0)
#define RPG_CLIENT_ELFRESTAURANTINFO_SYNCRECIPELEVELUPGRADE_OFFSET UNITYSDK_OFFSET(0xA260BA0)
#define RPG_CLIENT_ELFRESTAURANTINFO_SYNCRECIPE_OFFSET UNITYSDK_OFFSET(0xA260C90)
#define RPG_CLIENT_ELFRESTAURANTINFO_TRYGETMANAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0xA263000)
#define RPG_CLIENT_ELFRESTAURANTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA263720)
#define RPG_CLIENT_ELFRESTAURANTINFO__INITCUSTOMERDATA_OFFSET UNITYSDK_OFFSET(0xA25EA70)
#define RPG_CLIENT_ELFRESTAURANTINFO__INITRECIPEDATA_OFFSET UNITYSDK_OFFSET(0xA25E810)
#define RPG_CLIENT_ELFRESTAURANTINFO__INITSPECIALCUSTOMERDATA_OFFSET UNITYSDK_OFFSET(0xA25ECC0)
#define RPG_CLIENT_ELFRESTAURANTINFO__INITTAGDATA_OFFSET UNITYSDK_OFFSET(0xA25EF10)
#define RPG_CLIENT_ELFRESTAURANTINFO__ISPRICEEXPENSIVETHANSLOT_OFFSET UNITYSDK_OFFSET(0xA262CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantInfo_TypeDefinitionIndex = 58733;

	class ElfRestaurantInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RecentDayEarnedGolds; // 0x10
		::RPG::Client::ElfRestaurantDrinkRecipeData* _DrinkingRecipeData; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantTagData*>* TagDataDict; // 0x20
		::RPG::Client::ElfRestaurantRecipeData* _Specialty_k__BackingField; // 0x28
		::RPG::Client::ElfRestaurantManageStatistics* _ManageStatistics; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantCustomerData*>* CustomerDataDict; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* _CookableRecipeDataDict; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantSpecialCustomerData*>* SpecialCustomerDataDict; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* RecipeDataDict; // 0x50
		::RPG::Client::ElfRecipeEditor* _RecipeEditor; // 0x58
		::RPG::Client::ElfRestaurantManageGameplayModel* ManageGameplayModel; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* _SelectRecipeDict; // 0x68
		::RPG::Client::ElfRestaurantMediator* Mediator; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* _AvailableRecipeDataDict; // 0x78

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

		::RPG::Client::ElfRestaurantRecipeData* GetRecipeData(::System::UInt32 recipeID)
		{
			return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETRECIPEDATA_OFFSET))(this, recipeID);
		}

		::RPG::Client::ElfRestaurantCustomerData* GetCustomerData(::System::UInt32 customerID)
		{
			return ((::RPG::Client::ElfRestaurantCustomerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETCUSTOMERDATA_OFFSET))(this, customerID);
		}

		::RPG::Client::ElfRestaurantSpecialCustomerData* GetSpecialCustomerData(::System::UInt32 specialCustomerID)
		{
			return ((::RPG::Client::ElfRestaurantSpecialCustomerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETSPECIALCUSTOMERDATA_OFFSET))(this, specialCustomerID);
		}

		::RPG::Client::ElfRestaurantTagData* GetTagData(::System::UInt32 tagID)
		{
			return ((::RPG::Client::ElfRestaurantTagData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETTAGDATA_OFFSET))(this, tagID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetAllUnlockRecipes(::System::Boolean isExceptDefaultRecipe)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETALLUNLOCKRECIPES_OFFSET))(this, isExceptDefaultRecipe);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetAllNewUnlockRecipes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETALLNEWUNLOCKRECIPES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetAllPriceUpRecipes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETALLPRICEUPRECIPES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetAllProgressUnlockRecipes(::System::Boolean isExceptDefaultRecipe)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETALLPROGRESSUNLOCKRECIPES_OFFSET))(this, isExceptDefaultRecipe);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetAllRecipes(::System::Boolean isExceptDefaultRecipe)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETALLRECIPES_OFFSET))(this, isExceptDefaultRecipe);
		}

		::System::UInt32 GetTodayMenuRecipeStorage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETTODAYMENURECIPESTORAGE_OFFSET))(this);
		}

		::System::Void SyncRecipeLevelUpgrade(::System::UInt32 recipeID, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SYNCRECIPELEVELUPGRADE_OFFSET))(this, recipeID, level);
		}

		::System::Void SyncRecipe(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_251*>* recipes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_251*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SYNCRECIPE_OFFSET))(this, recipes);
		}

		::System::Void SyncPlayData(::Class_1_2E57B88467AF63C8_5* playData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SYNCPLAYDATA_OFFSET))(this, playData);
		}

		::System::Void SetSelectRecipes(::System::Collections::Generic::List_1<::RPG::Client::IElfRecipeEditable*>* slots)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IElfRecipeEditable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SETSELECTRECIPES_OFFSET))(this, slots);
		}

		::System::Void CheckSelectRecipes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_CHECKSELECTRECIPES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNoFinishedTargetRecipe()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETNOFINISHEDTARGETRECIPE_OFFSET))(this);
		}

		::System::Boolean IsRecipeInSlots(::System::UInt32 recipeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPEINSLOTS_OFFSET))(this, recipeID);
		}

		::System::Boolean IsRecipeCookable(::System::UInt32 recipeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPECOOKABLE_OFFSET))(this, recipeID);
		}

		::System::Boolean IsRecipeCookable_1(::RPG::Client::ElfRestaurantRecipeData* recipeData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPECOOKABLE_1_OFFSET))(this, recipeData);
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

		::System::Boolean _IsPriceExpensiveThanSlot(::System::UInt32 price)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO__ISPRICEEXPENSIVETHANSLOT_OFFSET))(this, price);
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

		::System::Void set_RecipeEditor(::RPG::Client::ElfRecipeEditor* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRecipeEditor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SET_RECIPEEDITOR_OFFSET))(this, value);
		}

		::RPG::Client::ElfRecipeEditor* get_RecipeEditor()
		{
			return ((::RPG::Client::ElfRecipeEditor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_RECIPEEDITOR_OFFSET))(this);
		}

		::System::Void set_SelectRecipeDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SET_SELECTRECIPEDICT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* get_SelectRecipeDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_SELECTRECIPEDICT_OFFSET))(this);
		}

		::System::Void set_Specialty(::RPG::Client::ElfRestaurantRecipeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SET_SPECIALTY_OFFSET))(this, value);
		}

		::RPG::Client::ElfRestaurantRecipeData* get_Specialty()
		{
			return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_SPECIALTY_OFFSET))(this);
		}

		::System::Void set_AvailableRecipeDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SET_AVAILABLERECIPEDATADICT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* get_AvailableRecipeDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_AVAILABLERECIPEDATADICT_OFFSET))(this);
		}

		::System::Boolean get_HasAvailableRecipeData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_HASAVAILABLERECIPEDATA_OFFSET))(this);
		}

		::System::Void set_CookableRecipeDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SET_COOKABLERECIPEDATADICT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* get_CookableRecipeDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_COOKABLERECIPEDATADICT_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantDrinkRecipeData* get_DrinkingRecipeData()
		{
			return ((::RPG::Client::ElfRestaurantDrinkRecipeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_DRINKINGRECIPEDATA_OFFSET))(this);
		}

		::System::Void ResetDrinkingRecipeData(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_RESETDRINKINGRECIPEDATA_OFFSET))(this, level);
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
