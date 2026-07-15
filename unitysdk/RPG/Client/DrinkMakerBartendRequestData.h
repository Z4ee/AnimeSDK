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

#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_CLEARINGREDIENTS_OFFSET UNITYSDK_OFFSET(0x1A015270)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_CONFIRMMAKINGDRINK_OFFSET UNITYSDK_OFFSET(0x1A0125E0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GETAVAILABLEINGREDIENTROWDATA_OFFSET UNITYSDK_OFFSET(0x1A014AF0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GETREQUESTID_OFFSET UNITYSDK_OFFSET(0x1A012B40)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A0155F0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_ISREQUESTSATISFIED_OFFSET UNITYSDK_OFFSET(0x1A0155D0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_ISSAVEONSERVER_OFFSET UNITYSDK_OFFSET(0x1A015630)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_RELATEDCHATID_OFFSET UNITYSDK_OFFSET(0x1A015610)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_REQUESTMODE_OFFSET UNITYSDK_OFFSET(0x1A0156B0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_REQUESTTYPE_OFFSET UNITYSDK_OFFSET(0x1A015690)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_TAGREQUESTS_OFFSET UNITYSDK_OFFSET(0x1A015670)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_TARGETDRINK_OFFSET UNITYSDK_OFFSET(0x1A015650)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_RESETALL_OFFSET UNITYSDK_OFFSET(0x1A015400)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SETISSAVEONSERVER_OFFSET UNITYSDK_OFFSET(0x1A014EA0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SETRELATEDCHATID_OFFSET UNITYSDK_OFFSET(0x1A014E50)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SETTARGETDRINK_OFFSET UNITYSDK_OFFSET(0x1A014DE0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A015600)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_ISREQUESTSATISFIED_OFFSET UNITYSDK_OFFSET(0x1A0155E0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_ISSAVEONSERVER_OFFSET UNITYSDK_OFFSET(0x1A015640)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_RELATEDCHATID_OFFSET UNITYSDK_OFFSET(0x1A015620)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_REQUESTMODE_OFFSET UNITYSDK_OFFSET(0x1A0156C0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_REQUESTTYPE_OFFSET UNITYSDK_OFFSET(0x1A0156A0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_TAGREQUESTS_OFFSET UNITYSDK_OFFSET(0x1A015680)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_TARGETDRINK_OFFSET UNITYSDK_OFFSET(0x1A015660)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_VERIFYSTEP_OFFSET UNITYSDK_OFFSET(0x1A014EF0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_VERIFYTAGS_OFFSET UNITYSDK_OFFSET(0x1A014F60)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__CHECKTAGCOMBINATION_OFFSET UNITYSDK_OFFSET(0x1A0150C0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__CHECKTARGETDRINK_OFFSET UNITYSDK_OFFSET(0x1A015550)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A014A40)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0146D0)
#define RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__INITTAGCOMBINATIONDATA_OFFSET UNITYSDK_OFFSET(0x1A014880)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartendRequestData_TypeDefinitionIndex = 60809;

	class DrinkMakerBartendRequestData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SpecifiedIngredientIDList; // 0x10
		::RPG::GameCore::DrinkMakerChallengeRow* _ChallengeRow; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* _TagRequests_k__BackingField; // 0x20
		::RPG::GameCore::DrinkMakerRequestRow* _RequestRow; // 0x28
		::RPG::Client::DrinkMakerBarDrink* _TargetDrink_k__BackingField; // 0x30
		::RPG::GameCore::DrinkMakerRequestMode _RequestMode_k__BackingField; // 0x38
		::System::UInt32 _RelatedChatID_k__BackingField; // 0x3C
		::System::Boolean _IsRequestSatisfied_k__BackingField; // 0x40
		::System::Boolean _IsSaveOnServer_k__BackingField; // 0x41
		::RPG::Client::DrinkMakerRequestSourceType _RequestType_k__BackingField; // 0x44
		::System::UInt32 _ID_k__BackingField; // 0x48

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::DrinkMakerRequestSourceType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerRequestSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIngredientRow*>* GetAvailableIngredientRowData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIngredientRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GETAVAILABLEINGREDIENTROWDATA_OFFSET))(this);
		}

		::System::Void SetTargetDrink(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SETTARGETDRINK_OFFSET))(this, a1);
		}

		::System::Void SetRelatedChatID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SETRELATEDCHATID_OFFSET))(this, a1);
		}

		::System::Void SetIsSaveOnServer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SETISSAVEONSERVER_OFFSET))(this, a1);
		}

		::System::Void VerifyStep(::RPG::Client::DrinkMakerBartendProcedure a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_VERIFYSTEP_OFFSET))(this, a1, a2);
		}

		::System::Void VerifyTags(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_VERIFYTAGS_OFFSET))(this, a1, a2);
		}

		::System::Void ClearIngredients()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_CLEARINGREDIENTS_OFFSET))(this);
		}

		::System::Void ResetAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_RESETALL_OFFSET))(this);
		}

		::System::Void ConfirmMakingDrink(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_CONFIRMMAKINGDRINK_OFFSET))(this, a1);
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

		::System::Void set_IsRequestSatisfied(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_ISREQUESTSATISFIED_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RelatedChatID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_RELATEDCHATID_OFFSET))(this);
		}

		::System::Void set_RelatedChatID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_RELATEDCHATID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSaveOnServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_ISSAVEONSERVER_OFFSET))(this);
		}

		::System::Void set_IsSaveOnServer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_ISSAVEONSERVER_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBarDrink* get_TargetDrink()
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_TARGETDRINK_OFFSET))(this);
		}

		::System::Void set_TargetDrink(::RPG::Client::DrinkMakerBarDrink* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBarDrink*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_TARGETDRINK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* get_TagRequests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_TAGREQUESTS_OFFSET))(this);
		}

		::System::Void set_TagRequests(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_TAGREQUESTS_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerRequestSourceType get_RequestType()
		{
			return ((::RPG::Client::DrinkMakerRequestSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_REQUESTTYPE_OFFSET))(this);
		}

		::System::Void set_RequestType(::RPG::Client::DrinkMakerRequestSourceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerRequestSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_REQUESTTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::DrinkMakerRequestMode get_RequestMode()
		{
			return ((::RPG::GameCore::DrinkMakerRequestMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_GET_REQUESTMODE_OFFSET))(this);
		}

		::System::Void set_RequestMode(::RPG::GameCore::DrinkMakerRequestMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerRequestMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDREQUESTDATA_SET_REQUESTMODE_OFFSET))(this, a1);
		}
	};
}
