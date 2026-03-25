#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DrinkMakerBartendProcedure.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_0D91A65E12C64271_1;
namespace RPG::Client { class DrinkMakerBarDrinkMakingStep; }
namespace RPG::Client { class DrinkMakerTag; }
namespace RPG::GameCore { class DrinkMakerFormulaRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBARDRINK_CLEARINGREDIENTS_OFFSET UNITYSDK_OFFSET(0x94A8D50)
#define RPG_CLIENT_DRINKMAKERBARDRINK_CREATECUSTOMDRINK_OFFSET UNITYSDK_OFFSET(0x94A78B0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_CREATE_OFFSET UNITYSDK_OFFSET(0x94A81D0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GETCURPROCEDUREMAKINGSTEP_OFFSET UNITYSDK_OFFSET(0x94A8780)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_ALLTAGID_OFFSET UNITYSDK_OFFSET(0x94AAB50)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_CUPID_OFFSET UNITYSDK_OFFSET(0x94AAC10)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_DECOID_OFFSET UNITYSDK_OFFSET(0x94AAC50)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_DESC_OFFSET UNITYSDK_OFFSET(0x94AABB0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_DRINKTAGS_OFFSET UNITYSDK_OFFSET(0x94AAB30)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_FORMULAID_OFFSET UNITYSDK_OFFSET(0x94AAAC0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_ICEID_OFFSET UNITYSDK_OFFSET(0x94AAC30)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x94AABD0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_INGREDIENTLIST_OFFSET UNITYSDK_OFFSET(0x94AAC90)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_ISCUSTOM_OFFSET UNITYSDK_OFFSET(0x94AAB70)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x94AAAE0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_MAKINGSTEPS_OFFSET UNITYSDK_OFFSET(0x94AAB10)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_MIXRATE_OFFSET UNITYSDK_OFFSET(0x94AAC70)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x94AAB90)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_ROW_OFFSET UNITYSDK_OFFSET(0x94AAAF0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x94AABF0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_ISDRINKMAKINGFINISHED_OFFSET UNITYSDK_OFFSET(0x94A9070)
#define RPG_CLIENT_DRINKMAKERBARDRINK_RESETALL_OFFSET UNITYSDK_OFFSET(0x94A8F10)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_ALLTAGID_OFFSET UNITYSDK_OFFSET(0x94AAB60)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_CUPID_OFFSET UNITYSDK_OFFSET(0x94AAC20)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_DECOID_OFFSET UNITYSDK_OFFSET(0x94AAC60)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_DESC_OFFSET UNITYSDK_OFFSET(0x94AABC0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_DRINKTAGS_OFFSET UNITYSDK_OFFSET(0x94AAB40)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_FORMULAID_OFFSET UNITYSDK_OFFSET(0x94AAAD0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_ICEID_OFFSET UNITYSDK_OFFSET(0x94AAC40)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x94AABE0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_INGREDIENTLIST_OFFSET UNITYSDK_OFFSET(0x94AACA0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_ISCUSTOM_OFFSET UNITYSDK_OFFSET(0x94AAB80)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_MAKINGSTEPS_OFFSET UNITYSDK_OFFSET(0x94AAB20)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_MIXRATE_OFFSET UNITYSDK_OFFSET(0x94AAC80)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x94AABA0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_ROW_OFFSET UNITYSDK_OFFSET(0x94AAB00)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x94AAC00)
#define RPG_CLIENT_DRINKMAKERBARDRINK_VERIFY_OFFSET UNITYSDK_OFFSET(0x94A88E0)
#define RPG_CLIENT_DRINKMAKERBARDRINK__CCTOR_OFFSET UNITYSDK_OFFSET(0x94AACB0)
#define RPG_CLIENT_DRINKMAKERBARDRINK__CTOR_OFFSET UNITYSDK_OFFSET(0x94A8720)
#define RPG_CLIENT_DRINKMAKERBARDRINK__GETCURSTEP_OFFSET UNITYSDK_OFFSET(0x94A8BC0)
#define RPG_CLIENT_DRINKMAKERBARDRINK__INIT_OFFSET UNITYSDK_OFFSET(0x94A8730)
#define RPG_CLIENT_DRINKMAKERBARDRINK__ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x94AA950)
#define RPG_CLIENT_DRINKMAKERBARDRINK__SETUPMAKINGSTEPS_OFFSET UNITYSDK_OFFSET(0x94A9100)
#define RPG_CLIENT_DRINKMAKERBARDRINK__SETUPTAGS_OFFSET UNITYSDK_OFFSET(0x94A96F0)
#define RPG_CLIENT_DRINKMAKERBARDRINK__SPLITCONSECUTIVEMATS_OFFSET UNITYSDK_OFFSET(0x94AA670)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarDrink_TypeDefinitionIndex = 51637;

	class DrinkMakerBarDrink : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet__CUSTOM_DRINK_NAME()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBarDrink_TypeDefinitionIndex)->GetStaticField(0x11DD0);
		}
		static ::RPG::Client::TextID* StaticGet__CUSTOM_DRINK_DESC()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBarDrink_TypeDefinitionIndex)->GetStaticField(0x11DE0);
		}
		// static const ::System::String* _CUSTOM_DRINK_ICON_KEY; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* _DrinkTags_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _IngredientList_k__BackingField; // 0x18
		::RPG::GameCore::DrinkMakerFormulaRow* _Row_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _AllTagID_k__BackingField; // 0x28
		::System::String* _IconPath_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>* _MakingSteps_k__BackingField; // 0x38
		::System::String* _SmallIconPath_k__BackingField; // 0x40
		::System::UInt32 _DecoID_k__BackingField; // 0x48
		::System::Boolean _IsCustom_k__BackingField; // 0x4C
		::RPG::Client::TextID _Desc_k__BackingField; // 0x50
		::System::UInt32 _FormulaID_k__BackingField; // 0x60
		::System::UInt32 _IceID_k__BackingField; // 0x64
		::System::UInt32 _MixRate_k__BackingField; // 0x68
		::System::UInt32 _CupID_k__BackingField; // 0x6C
		::RPG::Client::TextID _Name_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK__CCTOR_OFFSET))();
		}

		static ::RPG::Client::DrinkMakerBarDrink* Create(::System::UInt32 formulaID)
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_CREATE_OFFSET))(formulaID);
		}

		static ::RPG::Client::DrinkMakerBarDrink* CreateCustomDrink(::Class_1_0D91A65E12C64271_1* customDrink)
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::Class_1_0D91A65E12C64271_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_CREATECUSTOMDRINK_OFFSET))(customDrink);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>* GetCurProcedureMakingStep(::RPG::Client::DrinkMakerBartendProcedure curProcedure)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>*(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GETCURPROCEDUREMAKINGSTEP_OFFSET))(this, curProcedure);
		}

		::System::Void Verify(::RPG::Client::DrinkMakerBartendProcedure curProcedure, ::System::UInt32 matID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_VERIFY_OFFSET))(this, curProcedure, matID);
		}

		::System::Void ClearIngredients()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_CLEARINGREDIENTS_OFFSET))(this);
		}

		::System::Void ResetAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_RESETALL_OFFSET))(this);
		}

		::System::Boolean IsDrinkMakingFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_ISDRINKMAKINGFINISHED_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK__INIT_OFFSET))(this);
		}

		::System::Void _SetupTags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK__SETUPTAGS_OFFSET))(this);
		}

		::System::Void _SetupMakingSteps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK__SETUPMAKINGSTEPS_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBarDrinkMakingStep* _GetCurStep(::RPG::Client::DrinkMakerBartendProcedure curProcedure)
		{
			return ((::RPG::Client::DrinkMakerBarDrinkMakingStep*(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK__GETCURSTEP_OFFSET))(this, curProcedure);
		}

		::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* _SplitConsecutiveMats(::Il2CppArray<::System::UInt32>* array)
		{
			return ((::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK__SPLITCONSECUTIVEMATS_OFFSET))(this, array);
		}

		::System::Boolean _IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK__ISUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_FormulaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_FORMULAID_OFFSET))(this);
		}

		::System::Void set_FormulaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_FORMULAID_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_ISUNLOCK_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerFormulaRow* get_Row()
		{
			return ((::RPG::GameCore::DrinkMakerFormulaRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::DrinkMakerFormulaRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerFormulaRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_ROW_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>* get_MakingSteps()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_MAKINGSTEPS_OFFSET))(this);
		}

		::System::Void set_MakingSteps(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_MAKINGSTEPS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* get_DrinkTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_DRINKTAGS_OFFSET))(this);
		}

		::System::Void set_DrinkTags(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_DRINKTAGS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AllTagID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_ALLTAGID_OFFSET))(this);
		}

		::System::Void set_AllTagID(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_ALLTAGID_OFFSET))(this, value);
		}

		::System::Boolean get_IsCustom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_ISCUSTOM_OFFSET))(this);
		}

		::System::Void set_IsCustom(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_ISCUSTOM_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_NAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_DESC_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_ICONPATH_OFFSET))(this, value);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::Void set_SmallIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_SMALLICONPATH_OFFSET))(this, value);
		}

		::System::UInt32 get_CupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_CUPID_OFFSET))(this);
		}

		::System::Void set_CupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_CUPID_OFFSET))(this, value);
		}

		::System::UInt32 get_IceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_ICEID_OFFSET))(this);
		}

		::System::Void set_IceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_ICEID_OFFSET))(this, value);
		}

		::System::UInt32 get_DecoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_DECOID_OFFSET))(this);
		}

		::System::Void set_DecoID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_DECOID_OFFSET))(this, value);
		}

		::System::UInt32 get_MixRate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_MIXRATE_OFFSET))(this);
		}

		::System::Void set_MixRate(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_MIXRATE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_IngredientList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_INGREDIENTLIST_OFFSET))(this);
		}

		::System::Void set_IngredientList(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_INGREDIENTLIST_OFFSET))(this, value);
		}
	};
}
