#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DrinkMakerBartendProcedure.h"
#include "unitysdk/RPG/Client/DrinkMakerRequestSourceType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerRequestMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerCheersBartendDrinkDataExtend; }
namespace RPG::Client { class DrinkMakerCheersGroupData; }
namespace RPG::Client { class DrinkMakerTagCombination; }
namespace RPG::GameCore { class DrinkMakerCheersGuestRow; }
namespace RPG::GameCore { class DrinkMakerIngredientRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_CANFINISHINGREDIENTPROCEDURE_OFFSET UNITYSDK_OFFSET(0xCCE4A10)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_CANMAKEDRINKFORTHISREQUEST_OFFSET UNITYSDK_OFFSET(0xCCE4680)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_CLEARINGREDIENTS_OFFSET UNITYSDK_OFFSET(0xCCE3F30)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GETAVAILABLEINGREDIENTROWDATA_OFFSET UNITYSDK_OFFSET(0xCCE4960)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GETCURRENTCHEERSDRINKID_OFFSET UNITYSDK_OFFSET(0xCCCF610)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GETTAGCOMBINATIONSBYPROCEDURE_OFFSET UNITYSDK_OFFSET(0xCCE4350)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_AVATARREQUESTICONPATH_OFFSET UNITYSDK_OFFSET(0xCCE4F60)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_AVATARREQUESTTEXTID_OFFSET UNITYSDK_OFFSET(0xCCE5050)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_CHEERSCANMOVENEXTININGREDIENT_OFFSET UNITYSDK_OFFSET(0xCCE5730)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_GROUPDATA_OFFSET UNITYSDK_OFFSET(0xCCE4590)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xCCDC620)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_INVITEGUESTGROUPID_OFFSET UNITYSDK_OFFSET(0xCCE4F40)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_ISINVITEGUEST_OFFSET UNITYSDK_OFFSET(0xCCE4F20)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_ISNOREQUEST_OFFSET UNITYSDK_OFFSET(0xCCE5910)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_ISPOSITIVE_OFFSET UNITYSDK_OFFSET(0xCCE4D20)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_MODE_OFFSET UNITYSDK_OFFSET(0xCCE2B70)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_NEGATIVEALLTAGREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4E40)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_NEGATIVECUPICEREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4E60)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_NEGATIVECUPREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4E80)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_NEGATIVEDECOREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4EE0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_NEGATIVEICEREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4EA0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_NEGATIVEINGREDIENTREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4EC0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_POSITIVEALLTAGREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4D80)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_POSITIVECUPICEREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4DA0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_POSITIVECUPREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4DC0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_POSITIVEDECOREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4E20)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_POSITIVEICEREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4DE0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_POSITIVEINGREDIENTREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4E00)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_REQUESTTITLETXT_OFFSET UNITYSDK_OFFSET(0xCCE53D0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_REQUESTTYPE_OFFSET UNITYSDK_OFFSET(0xCCE58C0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_TARGETDRINKDATA_OFFSET UNITYSDK_OFFSET(0xCCE4B60)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_TARGETDRINKID_OFFSET UNITYSDK_OFFSET(0xCCE4F00)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET__GUESTROW_OFFSET UNITYSDK_OFFSET(0xCCE51A0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_ISSATISFIEDFORPROCEDURE_OFFSET UNITYSDK_OFFSET(0xCCE4410)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_ISTAGCOMBINATIONSSATISFIED_OFFSET UNITYSDK_OFFSET(0xCCE47C0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_PROCESSALLTAGREQUESTSBYTAGSONINIT_OFFSET UNITYSDK_OFFSET(0xCCE2BF0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_PROCESSTAGREQUESTSFORPROCEDURES_OFFSET UNITYSDK_OFFSET(0xCCE3150)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_RESETALL_OFFSET UNITYSDK_OFFSET(0xCCE4190)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_INVITEGUESTGROUPID_OFFSET UNITYSDK_OFFSET(0xCCE4F50)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_ISINVITEGUEST_OFFSET UNITYSDK_OFFSET(0xCCE4F30)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_NEGATIVEALLTAGREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4E50)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_NEGATIVECUPICEREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4E70)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_NEGATIVECUPREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4E90)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_NEGATIVEDECOREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4EF0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_NEGATIVEICEREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4EB0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_NEGATIVEINGREDIENTREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4ED0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_POSITIVEALLTAGREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4D90)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_POSITIVECUPICEREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4DB0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_POSITIVECUPREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4DD0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_POSITIVEDECOREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4E30)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_POSITIVEICEREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4DF0)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_POSITIVEINGREDIENTREQUESTS_OFFSET UNITYSDK_OFFSET(0xCCE4E10)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_TARGETDRINKID_OFFSET UNITYSDK_OFFSET(0xCCE4F10)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_VERIFYTAGS_OFFSET UNITYSDK_OFFSET(0xCCE3D30)
#define RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCCD94B0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersBartendRequestData_TypeDefinitionIndex = 63616;

	class DrinkMakerCheersBartendRequestData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* _PositiveCupIceRequests_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* _PositiveDecoRequests_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* _NegativeAllTagRequests_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* _NegativeIngredientRequests_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* _PositiveIngredientRequests_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* _PositiveIceRequests_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* _NegativeCupIceRequests_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* _NegativeCupRequests_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* _PositiveCupRequests_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* _PositiveAllTagRequests_k__BackingField; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* _NegativeDecoRequests_k__BackingField; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* _NegativeIceRequests_k__BackingField; // 0x68
		::System::UInt32 _InviteGuestGroupId_k__BackingField; // 0x70
		::System::Boolean _IsInviteGuest_k__BackingField; // 0x74
		::System::UInt32 _TargetDrinkId_k__BackingField; // 0x78

		::System::Void _ctor(::System::UInt32 a1, ::System::Nullable_1<::System::UInt32> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void VerifyTags(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_VERIFYTAGS_OFFSET))(this, a1, a2);
		}

		::System::Void ClearIngredients()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_CLEARINGREDIENTS_OFFSET))(this);
		}

		::System::Void ResetAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_RESETALL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* GetTagCombinationsByProcedure(::RPG::Client::DrinkMakerBartendProcedure a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GETTAGCOMBINATIONSBYPROCEDURE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsSatisfiedForProcedure(::RPG::Client::DrinkMakerBartendProcedure a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_ISSATISFIEDFORPROCEDURE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIngredientRow*>* GetAvailableIngredientRowData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIngredientRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GETAVAILABLEINGREDIENTROWDATA_OFFSET))(this);
		}

		::System::UInt32 GetCurrentCheersDrinkId(::RPG::Client::DrinkMakerBartendProcedure a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GETCURRENTCHEERSDRINKID_OFFSET))(this, a1);
		}

		::System::Boolean CanFinishIngredientProcedure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_CANFINISHINGREDIENTPROCEDURE_OFFSET))(this);
		}

		::System::Boolean CanMakeDrinkForThisRequest(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_CANMAKEDRINKFORTHISREQUEST_OFFSET))(this, a1);
		}

		::System::Boolean IsTagCombinationsSatisfied(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_ISTAGCOMBINATIONSSATISFIED_OFFSET))(this, a1);
		}

		::System::Void ProcessAllTagRequestsByTagsOnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_PROCESSALLTAGREQUESTSBYTAGSONINIT_OFFSET))(this);
		}

		::System::Void ProcessTagRequestsForProcedures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_PROCESSTAGREQUESTSFORPROCEDURES_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerRequestMode get_Mode()
		{
			return ((::RPG::GameCore::DrinkMakerRequestMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_MODE_OFFSET))(this);
		}

		::System::Boolean get_IsPositive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_ISPOSITIVE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* get_PositiveAllTagRequests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_POSITIVEALLTAGREQUESTS_OFFSET))(this);
		}

		::System::Void set_PositiveAllTagRequests(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_POSITIVEALLTAGREQUESTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* get_PositiveCupIceRequests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_POSITIVECUPICEREQUESTS_OFFSET))(this);
		}

		::System::Void set_PositiveCupIceRequests(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_POSITIVECUPICEREQUESTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* get_PositiveCupRequests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_POSITIVECUPREQUESTS_OFFSET))(this);
		}

		::System::Void set_PositiveCupRequests(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_POSITIVECUPREQUESTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* get_PositiveIceRequests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_POSITIVEICEREQUESTS_OFFSET))(this);
		}

		::System::Void set_PositiveIceRequests(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_POSITIVEICEREQUESTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* get_PositiveIngredientRequests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_POSITIVEINGREDIENTREQUESTS_OFFSET))(this);
		}

		::System::Void set_PositiveIngredientRequests(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_POSITIVEINGREDIENTREQUESTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* get_PositiveDecoRequests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_POSITIVEDECOREQUESTS_OFFSET))(this);
		}

		::System::Void set_PositiveDecoRequests(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_POSITIVEDECOREQUESTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* get_NegativeAllTagRequests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_NEGATIVEALLTAGREQUESTS_OFFSET))(this);
		}

		::System::Void set_NegativeAllTagRequests(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_NEGATIVEALLTAGREQUESTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* get_NegativeCupIceRequests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_NEGATIVECUPICEREQUESTS_OFFSET))(this);
		}

		::System::Void set_NegativeCupIceRequests(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_NEGATIVECUPICEREQUESTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* get_NegativeCupRequests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_NEGATIVECUPREQUESTS_OFFSET))(this);
		}

		::System::Void set_NegativeCupRequests(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_NEGATIVECUPREQUESTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* get_NegativeIceRequests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_NEGATIVEICEREQUESTS_OFFSET))(this);
		}

		::System::Void set_NegativeIceRequests(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_NEGATIVEICEREQUESTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* get_NegativeIngredientRequests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_NEGATIVEINGREDIENTREQUESTS_OFFSET))(this);
		}

		::System::Void set_NegativeIngredientRequests(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_NEGATIVEINGREDIENTREQUESTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* get_NegativeDecoRequests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_NEGATIVEDECOREQUESTS_OFFSET))(this);
		}

		::System::Void set_NegativeDecoRequests(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTagCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_NEGATIVEDECOREQUESTS_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_TargetDrinkId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_TARGETDRINKID_OFFSET))(this);
		}

		::System::Void set_TargetDrinkId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_TARGETDRINKID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInviteGuest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_ISINVITEGUEST_OFFSET))(this);
		}

		::System::Void set_IsInviteGuest(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_ISINVITEGUEST_OFFSET))(this, a1);
		}

		::System::UInt32 get_InviteGuestGroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_INVITEGUESTGROUPID_OFFSET))(this);
		}

		::System::Void set_InviteGuestGroupId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_SET_INVITEGUESTGROUPID_OFFSET))(this, a1);
		}

		::System::String* get_AvatarRequestIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_AVATARREQUESTICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_AvatarRequestTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_AVATARREQUESTTEXTID_OFFSET))(this);
		}

		::System::String* get_RequestTitleTxt()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_REQUESTTITLETXT_OFFSET))(this);
		}

		::System::Boolean get_CheersCanMoveNextInIngredient()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_CHEERSCANMOVENEXTININGREDIENT_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerCheersGroupData* get_GroupData()
		{
			return ((::RPG::Client::DrinkMakerCheersGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_GROUPDATA_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerRequestSourceType get_RequestType()
		{
			return ((::RPG::Client::DrinkMakerRequestSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_REQUESTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsNoRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_ISNOREQUEST_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* get_TargetDrinkData()
		{
			return ((::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET_TARGETDRINKDATA_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerCheersGuestRow* get__GuestRow()
		{
			return ((::RPG::GameCore::DrinkMakerCheersGuestRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBARTENDREQUESTDATA_GET__GUESTROW_OFFSET))(this);
		}
	};
}
