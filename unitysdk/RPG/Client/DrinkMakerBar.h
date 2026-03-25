#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D91A65E12C64271_1;
class Class_1_3AD2528CD53B1639_5;
class Class_1_3AD2528CD53B1639_6;
class Class_1_E9FAC3539FD8861A_4;
namespace RPG::Client { class DrinkMakerBarDrink; }
namespace RPG::Client { class DrinkMakerBarRequest; }
namespace RPG::GameCore { class DrinkMakerChatRow; }
namespace RPG::GameCore { class DrinkMakerDayRow; }
namespace RPG::GameCore { class DrinkMakerGuestRow; }
namespace RPG::GameCore { class DrinkMakerGuestSequenceRow; }
namespace RPG::GameCore { class DrinkMakerRequestRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBAR_BACKTOBUSINESSDAYBARTEND_OFFSET UNITYSDK_OFFSET(0x94A77F0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CHATID_OFFSET UNITYSDK_OFFSET(0x94A6D60)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURCHATROW_OFFSET UNITYSDK_OFFSET(0x94A7B60)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURDAYROW_OFFSET UNITYSDK_OFFSET(0x94A7A80)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURGUESTROW_OFFSET UNITYSDK_OFFSET(0x94A7BD0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURREQUESTROW_OFFSET UNITYSDK_OFFSET(0x94A7B80)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURSEQUENCEINDEX_OFFSET UNITYSDK_OFFSET(0x94A7C60)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURSEQUENCEROW_OFFSET UNITYSDK_OFFSET(0x94A7AF0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CUSTOMDRINK_OFFSET UNITYSDK_OFFSET(0x94A7CA0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_DAY_OFFSET UNITYSDK_OFFSET(0x94A6D10)
#define RPG_CLIENT_DRINKMAKERBAR_GET_FREEPHASEMISSIONID_OFFSET UNITYSDK_OFFSET(0x94A7CE0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISFREEPHASE_OFFSET UNITYSDK_OFFSET(0x94A7D20)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISINGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0x94A7F00)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISMIXTAGUNLOCK_OFFSET UNITYSDK_OFFSET(0x94A7E30)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISTODAYFINISHED_OFFSET UNITYSDK_OFFSET(0x94A7C80)
#define RPG_CLIENT_DRINKMAKERBAR_GET_LASTSEQUENCEID_OFFSET UNITYSDK_OFFSET(0x94A7CC0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_LASTSERVICERESULTS_OFFSET UNITYSDK_OFFSET(0x94A7C40)
#define RPG_CLIENT_DRINKMAKERBAR_GET_MIXTAGUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x94A7D00)
#define RPG_CLIENT_DRINKMAKERBAR_GET_SEQUENCEID_OFFSET UNITYSDK_OFFSET(0x94A6CC0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_TODAYGUESTROWS_OFFSET UNITYSDK_OFFSET(0x94A7C20)
#define RPG_CLIENT_DRINKMAKERBAR_ISCURBUSINESSDAYGUESTFINISH_OFFSET UNITYSDK_OFFSET(0x94A6DB0)
#define RPG_CLIENT_DRINKMAKERBAR_REFRESHCUSTOMDRINK_OFFSET UNITYSDK_OFFSET(0x94A7830)
#define RPG_CLIENT_DRINKMAKERBAR_SETGUIDEMISSIONBARTENDDATA_OFFSET UNITYSDK_OFFSET(0x94A76B0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_CURCHATROW_OFFSET UNITYSDK_OFFSET(0x94A7B70)
#define RPG_CLIENT_DRINKMAKERBAR_SET_CURSEQUENCEINDEX_OFFSET UNITYSDK_OFFSET(0x94A7C70)
#define RPG_CLIENT_DRINKMAKERBAR_SET_CUSTOMDRINK_OFFSET UNITYSDK_OFFSET(0x94A7CB0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_FREEPHASEMISSIONID_OFFSET UNITYSDK_OFFSET(0x94A7CF0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_ISINGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0x94A7F10)
#define RPG_CLIENT_DRINKMAKERBAR_SET_ISTODAYFINISHED_OFFSET UNITYSDK_OFFSET(0x94A7C90)
#define RPG_CLIENT_DRINKMAKERBAR_SET_LASTSEQUENCEID_OFFSET UNITYSDK_OFFSET(0x94A7CD0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_LASTSERVICERESULTS_OFFSET UNITYSDK_OFFSET(0x94A7C50)
#define RPG_CLIENT_DRINKMAKERBAR_SET_MIXTAGUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x94A7D10)
#define RPG_CLIENT_DRINKMAKERBAR_SET_TODAYGUESTROWS_OFFSET UNITYSDK_OFFSET(0x94A7C30)
#define RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_1_OFFSET UNITYSDK_OFFSET(0x94A71F0)
#define RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_2_OFFSET UNITYSDK_OFFSET(0x94A7260)
#define RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x94A6E00)
#define RPG_CLIENT_DRINKMAKERBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x94A6BB0)
#define RPG_CLIENT_DRINKMAKERBAR__ISFREEPHASEUNLOCK_OFFSET UNITYSDK_OFFSET(0x94A7D30)
#define RPG_CLIENT_DRINKMAKERBAR__ISMIXTAGUNLOCK_OFFSET UNITYSDK_OFFSET(0x94A7E40)
#define RPG_CLIENT_DRINKMAKERBAR__UPDATEGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0x94A6E50)
#define RPG_CLIENT_DRINKMAKERBAR__UPDATERESULTDATA_OFFSET UNITYSDK_OFFSET(0x94A7330)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBar_TypeDefinitionIndex = 51635;

	class DrinkMakerBar : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerRequestRow* _BusinessDayRequestRow; // 0x10
		::Class_1_3AD2528CD53B1639_5* _ServerData; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>* _TodayGuestRows_k__BackingField; // 0x20
		::RPG::GameCore::DrinkMakerGuestRow* _GuideMissionGuestRow; // 0x28
		::RPG::GameCore::DrinkMakerGuestRow* _BusinessDayGuestRow; // 0x30
		::RPG::Client::DrinkMakerBarDrink* _CustomDrink_k__BackingField; // 0x38
		::RPG::GameCore::DrinkMakerChatRow* _CurChatRow_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>* _LastServiceResults_k__BackingField; // 0x48
		::RPG::GameCore::DrinkMakerRequestRow* _GuideMissionRequestRow; // 0x50
		::System::UInt32 _MixTagUnlockSubMissionID_k__BackingField; // 0x58
		::System::UInt32 _FreePhaseMissionID_k__BackingField; // 0x5C
		::System::UInt32 _LastSequenceID_k__BackingField; // 0x60
		::System::UInt32 _CurSequenceIndex_k__BackingField; // 0x64
		::System::Boolean _IsInGuideMission_k__BackingField; // 0x68
		::System::Boolean _IsTodayFinished_k__BackingField; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SequenceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_SEQUENCEID_OFFSET))(this);
		}

		::System::UInt32 get_Day()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_DAY_OFFSET))(this);
		}

		::System::UInt32 get_ChatID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CHATID_OFFSET))(this);
		}

		::System::Boolean IsCurBusinessDayGuestFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_ISCURBUSINESSDAYGUESTFINISH_OFFSET))(this);
		}

		::System::Void UpdateData(::Class_1_3AD2528CD53B1639_5* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_OFFSET))(this, rsp);
		}

		::System::Void UpdateData_1(::Class_1_E9FAC3539FD8861A_4* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9FAC3539FD8861A_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_1_OFFSET))(this, rsp);
		}

		::System::Void UpdateData_2(::Class_1_3AD2528CD53B1639_6* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_2_OFFSET))(this, rsp);
		}

		::System::Void SetGuideMissionBartendData(::System::UInt32 requestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SETGUIDEMISSIONBARTENDDATA_OFFSET))(this, requestID);
		}

		::System::Void BackToBusinessDayBartend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_BACKTOBUSINESSDAYBARTEND_OFFSET))(this);
		}

		::System::Void RefreshCustomDrink(::Class_1_0D91A65E12C64271_1* customDrink)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D91A65E12C64271_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_REFRESHCUSTOMDRINK_OFFSET))(this, customDrink);
		}

		::RPG::GameCore::DrinkMakerDayRow* get_CurDayRow()
		{
			return ((::RPG::GameCore::DrinkMakerDayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURDAYROW_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerGuestSequenceRow* get_CurSequenceRow()
		{
			return ((::RPG::GameCore::DrinkMakerGuestSequenceRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURSEQUENCEROW_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerChatRow* get_CurChatRow()
		{
			return ((::RPG::GameCore::DrinkMakerChatRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURCHATROW_OFFSET))(this);
		}

		::System::Void set_CurChatRow(::RPG::GameCore::DrinkMakerChatRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerChatRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_CURCHATROW_OFFSET))(this, value);
		}

		::RPG::GameCore::DrinkMakerRequestRow* get_CurRequestRow()
		{
			return ((::RPG::GameCore::DrinkMakerRequestRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURREQUESTROW_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerGuestRow* get_CurGuestRow()
		{
			return ((::RPG::GameCore::DrinkMakerGuestRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURGUESTROW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>* get_TodayGuestRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_TODAYGUESTROWS_OFFSET))(this);
		}

		::System::Void set_TodayGuestRows(::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_TODAYGUESTROWS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>* get_LastServiceResults()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_LASTSERVICERESULTS_OFFSET))(this);
		}

		::System::Void set_LastServiceResults(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_LASTSERVICERESULTS_OFFSET))(this, value);
		}

		::System::UInt32 get_CurSequenceIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURSEQUENCEINDEX_OFFSET))(this);
		}

		::System::Void set_CurSequenceIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_CURSEQUENCEINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_IsTodayFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_ISTODAYFINISHED_OFFSET))(this);
		}

		::System::Void set_IsTodayFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_ISTODAYFINISHED_OFFSET))(this, value);
		}

		::RPG::Client::DrinkMakerBarDrink* get_CustomDrink()
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CUSTOMDRINK_OFFSET))(this);
		}

		::System::Void set_CustomDrink(::RPG::Client::DrinkMakerBarDrink* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBarDrink*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_CUSTOMDRINK_OFFSET))(this, value);
		}

		::System::UInt32 get_LastSequenceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_LASTSEQUENCEID_OFFSET))(this);
		}

		::System::Void set_LastSequenceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_LASTSEQUENCEID_OFFSET))(this, value);
		}

		::System::UInt32 get_FreePhaseMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_FREEPHASEMISSIONID_OFFSET))(this);
		}

		::System::Void set_FreePhaseMissionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_FREEPHASEMISSIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_MixTagUnlockSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_MIXTAGUNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::System::Void set_MixTagUnlockSubMissionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_MIXTAGUNLOCKSUBMISSIONID_OFFSET))(this, value);
		}

		::System::Boolean get_IsFreePhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_ISFREEPHASE_OFFSET))(this);
		}

		::System::Boolean get_IsMixTagUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_ISMIXTAGUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsInGuideMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_ISINGUIDEMISSION_OFFSET))(this);
		}

		::System::Void set_IsInGuideMission(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_ISINGUIDEMISSION_OFFSET))(this, value);
		}

		::System::Void _UpdateGameplayData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__UPDATEGAMEPLAYDATA_OFFSET))(this);
		}

		::System::Void _UpdateResultData(::Class_1_3AD2528CD53B1639_6* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__UPDATERESULTDATA_OFFSET))(this, rsp);
		}

		::System::Boolean _IsFreePhaseUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__ISFREEPHASEUNLOCK_OFFSET))(this);
		}

		::System::Boolean _IsMixTagUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__ISMIXTAGUNLOCK_OFFSET))(this);
		}
	};
}
