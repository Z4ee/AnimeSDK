#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DrinkMakerBartendProcedure.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerIngredientRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GETINGREDIENTROW_OFFSET UNITYSDK_OFFSET(0x94AB550)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GETSTEPDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x94AAD10)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GETSUBSTEPFINISHSTATE_OFFSET UNITYSDK_OFFSET(0x94AB390)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_HASSUBSTEP_OFFSET UNITYSDK_OFFSET(0x94ABA10)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_ISCURSUCCESS_OFFSET UNITYSDK_OFFSET(0x94AB9D0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_ISSTEPFINISHED_OFFSET UNITYSDK_OFFSET(0x94AB9F0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_MATERIALIDS_OFFSET UNITYSDK_OFFSET(0x94AB990)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_PROCEDURE_OFFSET UNITYSDK_OFFSET(0x94AB970)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_SUBSTEPMATERIALIDS_OFFSET UNITYSDK_OFFSET(0x94AB9B0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_RESETSTEP_OFFSET UNITYSDK_OFFSET(0x94A8EC0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_HASSUBSTEP_OFFSET UNITYSDK_OFFSET(0x94ABA20)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_ISCURSUCCESS_OFFSET UNITYSDK_OFFSET(0x94AB9E0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_ISSTEPFINISHED_OFFSET UNITYSDK_OFFSET(0x94ABA00)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_MATERIALIDS_OFFSET UNITYSDK_OFFSET(0x94AB9A0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_PROCEDURE_OFFSET UNITYSDK_OFFSET(0x94AB980)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_SUBSTEPMATERIALIDS_OFFSET UNITYSDK_OFFSET(0x94AB9C0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_VERIFY_OFFSET UNITYSDK_OFFSET(0x94A8A70)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP__CHECKSUBSTEP_OFFSET UNITYSDK_OFFSET(0x94AB5F0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP__CTOR_OFFSET UNITYSDK_OFFSET(0x94AA3A0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP__RESETUNCHECKEDMATID_OFFSET UNITYSDK_OFFSET(0x94AB6F0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarDrinkMakingStep_TypeDefinitionIndex = 51639;

	class DrinkMakerBarDrinkMakingStep : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _MaterialIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _UncheckedMatIDs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _SubStepMaterialIDs_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _UncheckedSubStepMatIDs; // 0x28
		::System::Boolean CanPlayFinishEff; // 0x30
		::System::Boolean _HasSubStep_k__BackingField; // 0x31
		::System::Boolean _IsCurSuccess_k__BackingField; // 0x32
		::System::Boolean _IsStepFinished_k__BackingField; // 0x33
		::System::Boolean _IsExclusiveSelection; // 0x34
		::RPG::Client::DrinkMakerBartendProcedure _Procedure_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::Client::DrinkMakerBartendProcedure procedure, ::Il2CppArray<::System::UInt32>* matIDs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP__CTOR_OFFSET))(this, procedure, matIDs);
		}

		::System::String* GetStepDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GETSTEPDESCRIPTION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Boolean>* GetSubStepFinishState()
		{
			return ((::System::Collections::Generic::List_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GETSUBSTEPFINISHSTATE_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerIngredientRow* GetIngredientRow(::System::UInt32 ingredientID)
		{
			return ((::RPG::GameCore::DrinkMakerIngredientRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GETINGREDIENTROW_OFFSET))(this, ingredientID);
		}

		::System::Void Verify(::RPG::Client::DrinkMakerBartendProcedure procedure, ::System::UInt32 matID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_VERIFY_OFFSET))(this, procedure, matID);
		}

		::System::Void ResetStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_RESETSTEP_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBartendProcedure get_Procedure()
		{
			return ((::RPG::Client::DrinkMakerBartendProcedure(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_PROCEDURE_OFFSET))(this);
		}

		::System::Void set_Procedure(::RPG::Client::DrinkMakerBartendProcedure value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_PROCEDURE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_MaterialIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_MATERIALIDS_OFFSET))(this);
		}

		::System::Void set_MaterialIDs(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_MATERIALIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_SubStepMaterialIDs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_SUBSTEPMATERIALIDS_OFFSET))(this);
		}

		::System::Void set_SubStepMaterialIDs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_SUBSTEPMATERIALIDS_OFFSET))(this, value);
		}

		::System::Boolean get_IsCurSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_ISCURSUCCESS_OFFSET))(this);
		}

		::System::Void set_IsCurSuccess(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_ISCURSUCCESS_OFFSET))(this, value);
		}

		::System::Boolean get_IsStepFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_ISSTEPFINISHED_OFFSET))(this);
		}

		::System::Void set_IsStepFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_ISSTEPFINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_HasSubStep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_HASSUBSTEP_OFFSET))(this);
		}

		::System::Void set_HasSubStep(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_HASSUBSTEP_OFFSET))(this, value);
		}

		::System::Void _ResetUncheckedMatID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP__RESETUNCHECKEDMATID_OFFSET))(this);
		}

		::System::Void _CheckSubStep(::System::UInt32 matID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP__CHECKSUBSTEP_OFFSET))(this, matID);
		}
	};
}
