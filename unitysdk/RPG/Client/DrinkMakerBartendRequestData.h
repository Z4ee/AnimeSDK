#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DrinkMakerBartendProcedure.h"
#include "unitysdk/RPG/Client/DrinkMakerRequestSourceType.h"
#include "unitysdk/RPG/GameCore/DrinkMakerRequestMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerBarDrink; }
namespace RPG::Client { class DrinkMakerTagCombination; }
namespace RPG::GameCore { class DrinkMakerChallengeRow; }
namespace RPG::GameCore { class DrinkMakerIngredientRow; }
namespace RPG::GameCore { class DrinkMakerRequestRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_CLEARINGREDIENTS_OFFSET UNITYSDK_OFFSET(0xA183140)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_CONFIRMMAKINGDRINK_OFFSET UNITYSDK_OFFSET(0xA180910)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GETAVAILABLEINGREDIENTROWDATA_OFFSET UNITYSDK_OFFSET(0xA182A20)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GETREQUESTID_OFFSET UNITYSDK_OFFSET(0xA180DF0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA1834F0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_ISREQUESTSATISFIED_OFFSET UNITYSDK_OFFSET(0xA1834D0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_ISSAVEONSERVER_OFFSET UNITYSDK_OFFSET(0xA183530)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_RELATEDCHATID_OFFSET UNITYSDK_OFFSET(0xA183510)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_REQUESTMODE_OFFSET UNITYSDK_OFFSET(0xA1835B0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_REQUESTTYPE_OFFSET UNITYSDK_OFFSET(0xA183590)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_TAGREQUESTS_OFFSET UNITYSDK_OFFSET(0xA183570)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_TARGETDRINK_OFFSET UNITYSDK_OFFSET(0xA183550)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_RESETALL_OFFSET UNITYSDK_OFFSET(0xA1832E0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SETISSAVEONSERVER_OFFSET UNITYSDK_OFFSET(0xA182DA0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SETRELATEDCHATID_OFFSET UNITYSDK_OFFSET(0xA182D50)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SETTARGETDRINK_OFFSET UNITYSDK_OFFSET(0xA182CE0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA183500)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_ISREQUESTSATISFIED_OFFSET UNITYSDK_OFFSET(0xA1834E0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_ISSAVEONSERVER_OFFSET UNITYSDK_OFFSET(0xA183540)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_RELATEDCHATID_OFFSET UNITYSDK_OFFSET(0xA183520)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_REQUESTMODE_OFFSET UNITYSDK_OFFSET(0xA1835C0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_REQUESTTYPE_OFFSET UNITYSDK_OFFSET(0xA1835A0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_TAGREQUESTS_OFFSET UNITYSDK_OFFSET(0xA183580)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_TARGETDRINK_OFFSET UNITYSDK_OFFSET(0xA183560)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_VERIFYSTEP_OFFSET UNITYSDK_OFFSET(0xA182DF0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_VERIFYTAGS_OFFSET UNITYSDK_OFFSET(0xA182E60)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__CHECKTAGCOMBINATION_OFFSET UNITYSDK_OFFSET(0xA182FE0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__CHECKTARGETDRINK_OFFSET UNITYSDK_OFFSET(0xA183440)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA182970)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA182650)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__INITTAGCOMBINATIONDATA_OFFSET UNITYSDK_OFFSET(0xA182800)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartendRequestData_TypeDefinitionIndex = 58595;

	class DrinkMakerBartendRequestData : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerChallengeRow* _ChallengeRow; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* _TagRequests_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _SpecifiedIngredientIDList; // 0x20
		::RPG::GameCore::DrinkMakerRequestRow* _RequestRow; // 0x28
		::RPG::Client::DrinkMakerBarDrink* _TargetDrink_k__BackingField; // 0x30
		::RPG::GameCore::DrinkMakerRequestMode _RequestMode_k__BackingField; // 0x38
		::RPG::Client::DrinkMakerRequestSourceType _RequestType_k__BackingField; // 0x3C
		::System::Boolean _IsRequestSatisfied_k__BackingField; // 0x40
		::System::Boolean _IsSaveOnServer_k__BackingField; // 0x41
		::System::UInt32 _ID_k__BackingField; // 0x44
		::System::UInt32 _RelatedChatID_k__BackingField; // 0x48

		::System::Void _ctor(::System::UInt32 id, ::RPG::Client::DrinkMakerRequestSourceType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerRequestSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__CTOR_OFFSET))(this, id, type);
		}

		::System::Void _ctor_1(::System::UInt32 formulaID, ::Il2CppArray<::System::UInt32>* ingredientIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__CTOR_1_OFFSET))(this, formulaID, ingredientIDList);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIngredientRow*>* GetAvailableIngredientRowData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIngredientRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GETAVAILABLEINGREDIENTROWDATA_OFFSET))(this);
		}

		::System::Void SetTargetDrink(::System::UInt32 drinkFormulaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SETTARGETDRINK_OFFSET))(this, drinkFormulaID);
		}

		::System::Void SetRelatedChatID(::System::UInt32 relatedChatID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SETRELATEDCHATID_OFFSET))(this, relatedChatID);
		}

		::System::Void SetIsSaveOnServer(::System::Boolean isSave)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SETISSAVEONSERVER_OFFSET))(this, isSave);
		}

		::System::Void VerifyStep(::RPG::Client::DrinkMakerBartendProcedure curProcedure, ::System::UInt32 matID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_VERIFYSTEP_OFFSET))(this, curProcedure, matID);
		}

		::System::Void VerifyTags(::System::Collections::Generic::List_1<::System::UInt32>* curTags, ::System::Boolean hasIngredients)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_VERIFYTAGS_OFFSET))(this, curTags, hasIngredients);
		}

		::System::Void ClearIngredients()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_CLEARINGREDIENTS_OFFSET))(this);
		}

		::System::Void ResetAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_RESETALL_OFFSET))(this);
		}

		::System::Void ConfirmMakingDrink(::System::Collections::Generic::List_1<::System::UInt32>* allTagIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_CONFIRMMAKINGDRINK_OFFSET))(this, allTagIDs);
		}

		::System::UInt32 GetRequestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GETREQUESTID_OFFSET))(this);
		}

		::System::Void _InitTagCombinationData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__INITTAGCOMBINATIONDATA_OFFSET))(this);
		}

		::System::Void _CheckTargetDrink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__CHECKTARGETDRINK_OFFSET))(this);
		}

		::System::Void _CheckTagCombination()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__CHECKTAGCOMBINATION_OFFSET))(this);
		}

		::System::Boolean get_IsRequestSatisfied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_ISREQUESTSATISFIED_OFFSET))(this);
		}

		::System::Void set_IsRequestSatisfied(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_ISREQUESTSATISFIED_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_RelatedChatID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_RELATEDCHATID_OFFSET))(this);
		}

		::System::Void set_RelatedChatID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_RELATEDCHATID_OFFSET))(this, value);
		}

		::System::Boolean get_IsSaveOnServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_ISSAVEONSERVER_OFFSET))(this);
		}

		::System::Void set_IsSaveOnServer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_ISSAVEONSERVER_OFFSET))(this, value);
		}

		::RPG::Client::DrinkMakerBarDrink* get_TargetDrink()
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_TARGETDRINK_OFFSET))(this);
		}

		::System::Void set_TargetDrink(::RPG::Client::DrinkMakerBarDrink* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBarDrink*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_TARGETDRINK_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* get_TagRequests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_TAGREQUESTS_OFFSET))(this);
		}

		::System::Void set_TagRequests(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_TAGREQUESTS_OFFSET))(this, value);
		}

		::RPG::Client::DrinkMakerRequestSourceType get_RequestType()
		{
			return ((::RPG::Client::DrinkMakerRequestSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_REQUESTTYPE_OFFSET))(this);
		}

		::System::Void set_RequestType(::RPG::Client::DrinkMakerRequestSourceType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerRequestSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_REQUESTTYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::DrinkMakerRequestMode get_RequestMode()
		{
			return ((::RPG::GameCore::DrinkMakerRequestMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_REQUESTMODE_OFFSET))(this);
		}

		::System::Void set_RequestMode(::RPG::GameCore::DrinkMakerRequestMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerRequestMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_REQUESTMODE_OFFSET))(this, value);
		}
	};
}
