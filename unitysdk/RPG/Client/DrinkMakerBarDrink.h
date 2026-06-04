#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DrinkMakerBartendProcedure.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7E9AC8675DA072FB;
namespace RPG::Client { class DrinkMakerBarDrinkMakingStep; }
namespace RPG::Client { class DrinkMakerTag; }
namespace RPG::GameCore { class DrinkMakerFormulaRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBARDRINK_CLEARINGREDIENTS_OFFSET UNITYSDK_OFFSET(0xB7FAB10)
#define RPG_CLIENT_DRINKMAKERBARDRINK_CREATECUSTOMDRINK_OFFSET UNITYSDK_OFFSET(0xB7F9690)
#define RPG_CLIENT_DRINKMAKERBARDRINK_CREATE_OFFSET UNITYSDK_OFFSET(0xB7F9F60)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GETCURPROCEDUREMAKINGSTEP_OFFSET UNITYSDK_OFFSET(0xB7FA500)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_ALLTAGID_OFFSET UNITYSDK_OFFSET(0xB7FCD90)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_CUPID_OFFSET UNITYSDK_OFFSET(0xB7FCE50)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_DECOID_OFFSET UNITYSDK_OFFSET(0xB7FCE90)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB7FCDF0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_DRINKTAGS_OFFSET UNITYSDK_OFFSET(0xB7FCD70)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_FORMULAID_OFFSET UNITYSDK_OFFSET(0xB7FCD00)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_ICEID_OFFSET UNITYSDK_OFFSET(0xB7FCE70)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB7FCE10)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_INGREDIENTLIST_OFFSET UNITYSDK_OFFSET(0xB7FCED0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_ISCUSTOM_OFFSET UNITYSDK_OFFSET(0xB7FCDB0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB7FCD20)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_MAKINGSTEPS_OFFSET UNITYSDK_OFFSET(0xB7FCD50)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_MIXRATE_OFFSET UNITYSDK_OFFSET(0xB7FCEB0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB7FCDD0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB7FCD30)
#define RPG_CLIENT_DRINKMAKERBARDRINK_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xB7FCE30)
#define RPG_CLIENT_DRINKMAKERBARDRINK_ISDRINKMAKINGFINISHED_OFFSET UNITYSDK_OFFSET(0xB7FAE10)
#define RPG_CLIENT_DRINKMAKERBARDRINK_RESETALL_OFFSET UNITYSDK_OFFSET(0xB7FACC0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_ALLTAGID_OFFSET UNITYSDK_OFFSET(0xB7FCDA0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_CUPID_OFFSET UNITYSDK_OFFSET(0xB7FCE60)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_DECOID_OFFSET UNITYSDK_OFFSET(0xB7FCEA0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB7FCE00)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_DRINKTAGS_OFFSET UNITYSDK_OFFSET(0xB7FCD80)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_FORMULAID_OFFSET UNITYSDK_OFFSET(0xB7FCD10)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_ICEID_OFFSET UNITYSDK_OFFSET(0xB7FCE80)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB7FCE20)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_INGREDIENTLIST_OFFSET UNITYSDK_OFFSET(0xB7FCEE0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_ISCUSTOM_OFFSET UNITYSDK_OFFSET(0xB7FCDC0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_MAKINGSTEPS_OFFSET UNITYSDK_OFFSET(0xB7FCD60)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_MIXRATE_OFFSET UNITYSDK_OFFSET(0xB7FCEC0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB7FCDE0)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_ROW_OFFSET UNITYSDK_OFFSET(0xB7FCD40)
#define RPG_CLIENT_DRINKMAKERBARDRINK_SET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xB7FCE40)
#define RPG_CLIENT_DRINKMAKERBARDRINK_VERIFY_OFFSET UNITYSDK_OFFSET(0xB7FA6D0)
#define RPG_CLIENT_DRINKMAKERBARDRINK__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7FCEF0)
#define RPG_CLIENT_DRINKMAKERBARDRINK__CTOR_OFFSET UNITYSDK_OFFSET(0xB7FA4A0)
#define RPG_CLIENT_DRINKMAKERBARDRINK__GETCURSTEP_OFFSET UNITYSDK_OFFSET(0xB7FA9D0)
#define RPG_CLIENT_DRINKMAKERBARDRINK__INIT_OFFSET UNITYSDK_OFFSET(0xB7FA4B0)
#define RPG_CLIENT_DRINKMAKERBARDRINK__ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB7FCB90)
#define RPG_CLIENT_DRINKMAKERBARDRINK__SETUPMAKINGSTEPS_OFFSET UNITYSDK_OFFSET(0xB7FAEA0)
#define RPG_CLIENT_DRINKMAKERBARDRINK__SETUPTAGS_OFFSET UNITYSDK_OFFSET(0xB7FB690)
#define RPG_CLIENT_DRINKMAKERBARDRINK__SPLITCONSECUTIVEMATS_OFFSET UNITYSDK_OFFSET(0xB7FC720)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarDrink_TypeDefinitionIndex = 59515;

	class DrinkMakerBarDrink : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet__CUSTOM_DRINK_DESC()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBarDrink_TypeDefinitionIndex)->GetStaticField(0x36A0);
		}
		static ::RPG::Client::TextID* StaticGet__CUSTOM_DRINK_NAME()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBarDrink_TypeDefinitionIndex)->GetStaticField(0x36B0);
		}
		// static const ::System::String* _CUSTOM_DRINK_ICON_KEY; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>* _MakingSteps_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* _DrinkTags_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _AllTagID_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _IngredientList_k__BackingField; // 0x28
		::RPG::GameCore::DrinkMakerFormulaRow* _Row_k__BackingField; // 0x30
		::System::String* _SmallIconPath_k__BackingField; // 0x38
		::System::String* _IconPath_k__BackingField; // 0x40
		::RPG::Client::TextID _Desc_k__BackingField; // 0x48
		::System::Boolean _IsCustom_k__BackingField; // 0x58
		::System::UInt32 _IceID_k__BackingField; // 0x5C
		::RPG::Client::TextID _Name_k__BackingField; // 0x60
		::System::UInt32 _DecoID_k__BackingField; // 0x70
		::System::UInt32 _FormulaID_k__BackingField; // 0x74
		::System::UInt32 _CupID_k__BackingField; // 0x78
		::System::UInt32 _MixRate_k__BackingField; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK__CCTOR_OFFSET))();
		}

		static ::RPG::Client::DrinkMakerBarDrink* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::DrinkMakerBarDrink* CreateCustomDrink(::Class_1_7E9AC8675DA072FB* a1)
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::Class_1_7E9AC8675DA072FB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_CREATECUSTOMDRINK_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>* GetCurProcedureMakingStep(::RPG::Client::DrinkMakerBartendProcedure a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>*(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GETCURPROCEDUREMAKINGSTEP_OFFSET))(this, a1);
		}

		::System::Void Verify(::RPG::Client::DrinkMakerBartendProcedure a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_VERIFY_OFFSET))(this, a1, a2);
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

		::RPG::Client::DrinkMakerBarDrinkMakingStep* _GetCurStep(::RPG::Client::DrinkMakerBartendProcedure a1)
		{
			return ((::RPG::Client::DrinkMakerBarDrinkMakingStep*(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK__GETCURSTEP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* _SplitConsecutiveMats(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK__SPLITCONSECUTIVEMATS_OFFSET))(this, a1);
		}

		::System::Boolean _IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK__ISUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_FormulaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_FORMULAID_OFFSET))(this);
		}

		::System::Void set_FormulaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_FORMULAID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_ISUNLOCK_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerFormulaRow* get_Row()
		{
			return ((::RPG::GameCore::DrinkMakerFormulaRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::DrinkMakerFormulaRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerFormulaRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_ROW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>* get_MakingSteps()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_MAKINGSTEPS_OFFSET))(this);
		}

		::System::Void set_MakingSteps(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_MAKINGSTEPS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* get_DrinkTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_DRINKTAGS_OFFSET))(this);
		}

		::System::Void set_DrinkTags(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_DRINKTAGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AllTagID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_ALLTAGID_OFFSET))(this);
		}

		::System::Void set_AllTagID(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_ALLTAGID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCustom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_ISCUSTOM_OFFSET))(this);
		}

		::System::Void set_IsCustom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_ISCUSTOM_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_DESC_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::Void set_SmallIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_SMALLICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_CupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_CUPID_OFFSET))(this);
		}

		::System::Void set_CupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_CUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_IceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_ICEID_OFFSET))(this);
		}

		::System::Void set_IceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_ICEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DecoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_DECOID_OFFSET))(this);
		}

		::System::Void set_DecoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_DECOID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MixRate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_MIXRATE_OFFSET))(this);
		}

		::System::Void set_MixRate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_MIXRATE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_IngredientList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_GET_INGREDIENTLIST_OFFSET))(this);
		}

		::System::Void set_IngredientList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINK_SET_INGREDIENTLIST_OFFSET))(this, a1);
		}
	};
}
