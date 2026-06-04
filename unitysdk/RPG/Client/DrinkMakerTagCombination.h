#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DrinkMakerCheersTagUIState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerTag; }
namespace RPG::GameCore { class DrinkMakerTagCombinationRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_CLEARINGREDIENTS_OFFSET UNITYSDK_OFFSET(0xB8200D0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GETALLSUBTAGFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xB8201B0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GETCHEERSUISTATE_OFFSET UNITYSDK_OFFSET(0xB820200)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_HASHINT_OFFSET UNITYSDK_OFFSET(0xB820520)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_HINTICONPATH_OFFSET UNITYSDK_OFFSET(0xB8205B0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_HINTTEXT_OFFSET UNITYSDK_OFFSET(0xB820450)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ID_OFFSET UNITYSDK_OFFSET(0xB8204B0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISINGREDIENTSTAG_OFFSET UNITYSDK_OFFSET(0xB820770)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISSUCCESSLASTACTION_OFFSET UNITYSDK_OFFSET(0xB820500)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0xB8204F0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_MIXTAG_OFFSET UNITYSDK_OFFSET(0xB8204D0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_REQUESTDESC_OFFSET UNITYSDK_OFFSET(0xB820530)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_RESET_OFFSET UNITYSDK_OFFSET(0xB820120)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ID_OFFSET UNITYSDK_OFFSET(0xB8204C0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISINGREDIENTSTAG_OFFSET UNITYSDK_OFFSET(0xB820780)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISSUCCESSLASTACTION_OFFSET UNITYSDK_OFFSET(0xB820510)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0xB820070)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_MIXTAG_OFFSET UNITYSDK_OFFSET(0xB8204E0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_VERIFY_OFFSET UNITYSDK_OFFSET(0xB81FA50)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION__CTOR_OFFSET UNITYSDK_OFFSET(0xB81F6E0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION__HASHINT_OFFSET UNITYSDK_OFFSET(0xB820370)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION__INIT_OFFSET UNITYSDK_OFFSET(0xB81F720)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION__VERIFYSUBTAGS_OFFSET UNITYSDK_OFFSET(0xB81FD50)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerTagCombination_TypeDefinitionIndex = 59563;

	class DrinkMakerTagCombination : public ::System::Object
	{
	public:
		::RPG::Client::DrinkMakerTag* _MixTag_k__BackingField; // 0x10
		::RPG::GameCore::DrinkMakerTagCombinationRow* _Row; // 0x18
		::System::Collections::Generic::List_1<::System::Boolean>* _IsSubTagRequestFinished; // 0x20
		::System::Boolean _IsIngredientsTag_k__BackingField; // 0x28
		::System::Boolean _IsShownTag; // 0x29
		::System::Boolean CanPlayFinishEff; // 0x2A
		::System::Boolean _HasAnyAction; // 0x2B
		::System::Boolean _IsSuccessLastAction_k__BackingField; // 0x2C
		::System::Boolean _IsSuccess; // 0x2D
		::System::UInt32 _ID_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION__CTOR_OFFSET))(this, a1);
		}

		::System::Void Verify(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_VERIFY_OFFSET))(this, a1, a2);
		}

		::System::Void ClearIngredients()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_CLEARINGREDIENTS_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_RESET_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Boolean>* GetAllSubTagFinishState()
		{
			return ((::System::Collections::Generic::List_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GETALLSUBTAGFINISHSTATE_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerCheersTagUIState GetCheersUIState()
		{
			return ((::RPG::Client::DrinkMakerCheersTagUIState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GETCHEERSUISTATE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION__INIT_OFFSET))(this);
		}

		::System::Void _VerifySubTags(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION__VERIFYSUBTAGS_OFFSET))(this, a1);
		}

		::System::Boolean _HasHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION__HASHINT_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerTag* get_MixTag()
		{
			return ((::RPG::Client::DrinkMakerTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_MIXTAG_OFFSET))(this);
		}

		::System::Void set_MixTag(::RPG::Client::DrinkMakerTag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_MIXTAG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Void set_IsSuccess(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISSUCCESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSuccessLastAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISSUCCESSLASTACTION_OFFSET))(this);
		}

		::System::Void set_IsSuccessLastAction(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISSUCCESSLASTACTION_OFFSET))(this, a1);
		}

		::System::Boolean get_HasHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_HASHINT_OFFSET))(this);
		}

		::RPG::Client::TextID get_RequestDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_REQUESTDESC_OFFSET))(this);
		}

		::System::String* get_HintText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_HINTTEXT_OFFSET))(this);
		}

		::System::String* get_HintIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_HINTICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsIngredientsTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISINGREDIENTSTAG_OFFSET))(this);
		}

		::System::Void set_IsIngredientsTag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISINGREDIENTSTAG_OFFSET))(this, a1);
		}
	};
}
