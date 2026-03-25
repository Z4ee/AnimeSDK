#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DrinkMakerCheersTagUIState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerTag; }
namespace RPG::GameCore { class DrinkMakerTagCombinationRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_CLEARINGREDIENTS_OFFSET UNITYSDK_OFFSET(0x95011E0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GETALLSUBTAGFINISHSTATE_OFFSET UNITYSDK_OFFSET(0x951BCB0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GETCHEERSUISTATE_OFFSET UNITYSDK_OFFSET(0x951BD00)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_HASHINT_OFFSET UNITYSDK_OFFSET(0x951C020)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_HINTICONPATH_OFFSET UNITYSDK_OFFSET(0x951C0B0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_HINTTEXT_OFFSET UNITYSDK_OFFSET(0x951BF50)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ID_OFFSET UNITYSDK_OFFSET(0x951BFB0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISINGREDIENTSTAG_OFFSET UNITYSDK_OFFSET(0x951C270)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISSUCCESSLASTACTION_OFFSET UNITYSDK_OFFSET(0x951C000)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x951BFF0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_MIXTAG_OFFSET UNITYSDK_OFFSET(0x951BFD0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_REQUESTDESC_OFFSET UNITYSDK_OFFSET(0x951C030)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_RESET_OFFSET UNITYSDK_OFFSET(0x9501390)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ID_OFFSET UNITYSDK_OFFSET(0x951BFC0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISINGREDIENTSTAG_OFFSET UNITYSDK_OFFSET(0x951C280)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISSUCCESSLASTACTION_OFFSET UNITYSDK_OFFSET(0x951C010)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x951BC50)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_MIXTAG_OFFSET UNITYSDK_OFFSET(0x951BFE0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_VERIFY_OFFSET UNITYSDK_OFFSET(0x9500C70)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION__CTOR_OFFSET UNITYSDK_OFFSET(0x9501590)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION__HASHINT_OFFSET UNITYSDK_OFFSET(0x951BE70)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION__INIT_OFFSET UNITYSDK_OFFSET(0x951B690)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION__VERIFYSUBTAGS_OFFSET UNITYSDK_OFFSET(0x951B9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerTagCombination_TypeDefinitionIndex = 51685;

	class DrinkMakerTagCombination : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Boolean>* _IsSubTagRequestFinished; // 0x10
		::RPG::GameCore::DrinkMakerTagCombinationRow* _Row; // 0x18
		::RPG::Client::DrinkMakerTag* _MixTag_k__BackingField; // 0x20
		::System::Boolean _IsSuccessLastAction_k__BackingField; // 0x28
		::System::Boolean _IsShownTag; // 0x29
		::System::Boolean CanPlayFinishEff; // 0x2A
		::System::Boolean _IsIngredientsTag_k__BackingField; // 0x2B
		::System::Boolean _IsSuccess; // 0x2C
		::System::Boolean _HasAnyAction; // 0x2D
		::System::UInt32 _ID_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION__CTOR_OFFSET))(this, id);
		}

		::System::Void Verify(::System::Collections::Generic::List_1<::System::UInt32>* allTagIDs, ::System::Boolean hasIngredients)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_VERIFY_OFFSET))(this, allTagIDs, hasIngredients);
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

		::System::Void _VerifySubTags(::System::Collections::Generic::List_1<::System::UInt32>* allTagIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION__VERIFYSUBTAGS_OFFSET))(this, allTagIDs);
		}

		::System::Boolean _HasHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION__HASHINT_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::DrinkMakerTag* get_MixTag()
		{
			return ((::RPG::Client::DrinkMakerTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_MIXTAG_OFFSET))(this);
		}

		::System::Void set_MixTag(::RPG::Client::DrinkMakerTag* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_MIXTAG_OFFSET))(this, value);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Void set_IsSuccess(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISSUCCESS_OFFSET))(this, value);
		}

		::System::Boolean get_IsSuccessLastAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISSUCCESSLASTACTION_OFFSET))(this);
		}

		::System::Void set_IsSuccessLastAction(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISSUCCESSLASTACTION_OFFSET))(this, value);
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

		::System::Void set_IsIngredientsTag(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISINGREDIENTSTAG_OFFSET))(this, value);
		}
	};
}
