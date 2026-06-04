#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6954D6F458B1D0FF;
class Class_1_6BD41257D23618B4_4;
class Class_1_7E9AC8675DA072FB;
class Class_1_98E26A5B2BD7AB20;
namespace RPG::Client { class DrinkMakerBarDrink; }
namespace RPG::Client { class DrinkMakerBarRequest; }
namespace RPG::GameCore { class DrinkMakerChatRow; }
namespace RPG::GameCore { class DrinkMakerDayRow; }
namespace RPG::GameCore { class DrinkMakerGuestRow; }
namespace RPG::GameCore { class DrinkMakerGuestSequenceRow; }
namespace RPG::GameCore { class DrinkMakerRequestRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBAR_BACKTOBUSINESSDAYBARTEND_OFFSET UNITYSDK_OFFSET(0xB7F95D0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CHATID_OFFSET UNITYSDK_OFFSET(0xB7F8A20)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURCHATROW_OFFSET UNITYSDK_OFFSET(0xB7F9940)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURDAYROW_OFFSET UNITYSDK_OFFSET(0xB7F9860)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURGUESTROW_OFFSET UNITYSDK_OFFSET(0xB7F99B0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURREQUESTROW_OFFSET UNITYSDK_OFFSET(0xB7F9960)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURSEQUENCEINDEX_OFFSET UNITYSDK_OFFSET(0xB7F9A40)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURSEQUENCEROW_OFFSET UNITYSDK_OFFSET(0xB7F98D0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CUSTOMDRINK_OFFSET UNITYSDK_OFFSET(0xB7F9A80)
#define RPG_CLIENT_DRINKMAKERBAR_GET_DAY_OFFSET UNITYSDK_OFFSET(0xB7F89D0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_FREEPHASEMISSIONID_OFFSET UNITYSDK_OFFSET(0xB7F9AC0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISFREEPHASE_OFFSET UNITYSDK_OFFSET(0xB7F9B00)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISINGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0xB7F9CA0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISMIXTAGUNLOCK_OFFSET UNITYSDK_OFFSET(0xB7F9BD0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISTODAYFINISHED_OFFSET UNITYSDK_OFFSET(0xB7F9A60)
#define RPG_CLIENT_DRINKMAKERBAR_GET_LASTSEQUENCEID_OFFSET UNITYSDK_OFFSET(0xB7F9AA0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_LASTSERVICERESULTS_OFFSET UNITYSDK_OFFSET(0xB7F9A20)
#define RPG_CLIENT_DRINKMAKERBAR_GET_MIXTAGUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xB7F9AE0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_SEQUENCEID_OFFSET UNITYSDK_OFFSET(0xB7F8980)
#define RPG_CLIENT_DRINKMAKERBAR_GET_TODAYGUESTROWS_OFFSET UNITYSDK_OFFSET(0xB7F9A00)
#define RPG_CLIENT_DRINKMAKERBAR_ISCURBUSINESSDAYGUESTFINISH_OFFSET UNITYSDK_OFFSET(0xB7F8A70)
#define RPG_CLIENT_DRINKMAKERBAR_REFRESHCUSTOMDRINK_OFFSET UNITYSDK_OFFSET(0xB7F9610)
#define RPG_CLIENT_DRINKMAKERBAR_SETGUIDEMISSIONBARTENDDATA_OFFSET UNITYSDK_OFFSET(0xB7F9490)
#define RPG_CLIENT_DRINKMAKERBAR_SET_CURCHATROW_OFFSET UNITYSDK_OFFSET(0xB7F9950)
#define RPG_CLIENT_DRINKMAKERBAR_SET_CURSEQUENCEINDEX_OFFSET UNITYSDK_OFFSET(0xB7F9A50)
#define RPG_CLIENT_DRINKMAKERBAR_SET_CUSTOMDRINK_OFFSET UNITYSDK_OFFSET(0xB7F9A90)
#define RPG_CLIENT_DRINKMAKERBAR_SET_FREEPHASEMISSIONID_OFFSET UNITYSDK_OFFSET(0xB7F9AD0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_ISINGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0xB7F9CB0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_ISTODAYFINISHED_OFFSET UNITYSDK_OFFSET(0xB7F9A70)
#define RPG_CLIENT_DRINKMAKERBAR_SET_LASTSEQUENCEID_OFFSET UNITYSDK_OFFSET(0xB7F9AB0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_LASTSERVICERESULTS_OFFSET UNITYSDK_OFFSET(0xB7F9A30)
#define RPG_CLIENT_DRINKMAKERBAR_SET_MIXTAGUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xB7F9AF0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_TODAYGUESTROWS_OFFSET UNITYSDK_OFFSET(0xB7F9A10)
#define RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_1_OFFSET UNITYSDK_OFFSET(0xB7F8F70)
#define RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_2_OFFSET UNITYSDK_OFFSET(0xB7F8FE0)
#define RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xB7F8AC0)
#define RPG_CLIENT_DRINKMAKERBAR__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F8870)
#define RPG_CLIENT_DRINKMAKERBAR__ISFREEPHASEUNLOCK_OFFSET UNITYSDK_OFFSET(0xB7F9B10)
#define RPG_CLIENT_DRINKMAKERBAR__ISMIXTAGUNLOCK_OFFSET UNITYSDK_OFFSET(0xB7F9BE0)
#define RPG_CLIENT_DRINKMAKERBAR__UPDATEGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB7F8B10)
#define RPG_CLIENT_DRINKMAKERBAR__UPDATERESULTDATA_OFFSET UNITYSDK_OFFSET(0xB7F90B0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBar_TypeDefinitionIndex = 59513;

	class DrinkMakerBar : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerGuestRow* _GuideMissionGuestRow; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>* _LastServiceResults_k__BackingField; // 0x18
		::RPG::GameCore::DrinkMakerGuestRow* _BusinessDayGuestRow; // 0x20
		::Class_1_6954D6F458B1D0FF* _ServerData; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>* _TodayGuestRows_k__BackingField; // 0x30
		::RPG::GameCore::DrinkMakerChatRow* _CurChatRow_k__BackingField; // 0x38
		::RPG::Client::DrinkMakerBarDrink* _CustomDrink_k__BackingField; // 0x40
		::RPG::GameCore::DrinkMakerRequestRow* _GuideMissionRequestRow; // 0x48
		::RPG::GameCore::DrinkMakerRequestRow* _BusinessDayRequestRow; // 0x50
		::System::UInt32 _LastSequenceID_k__BackingField; // 0x58
		::System::UInt32 _MixTagUnlockSubMissionID_k__BackingField; // 0x5C
		::System::Boolean _IsInGuideMission_k__BackingField; // 0x60
		::System::Boolean _IsTodayFinished_k__BackingField; // 0x61
		::System::UInt32 _CurSequenceIndex_k__BackingField; // 0x64
		::System::UInt32 _FreePhaseMissionID_k__BackingField; // 0x68

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

		::System::Void UpdateData(::Class_1_6954D6F458B1D0FF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6954D6F458B1D0FF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateData_1(::Class_1_6BD41257D23618B4_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6BD41257D23618B4_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_1_OFFSET))(this, a1);
		}

		::System::Void UpdateData_2(::Class_1_98E26A5B2BD7AB20* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98E26A5B2BD7AB20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_2_OFFSET))(this, a1);
		}

		::System::Void SetGuideMissionBartendData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SETGUIDEMISSIONBARTENDDATA_OFFSET))(this, a1);
		}

		::System::Void BackToBusinessDayBartend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_BACKTOBUSINESSDAYBARTEND_OFFSET))(this);
		}

		::System::Void RefreshCustomDrink(::Class_1_7E9AC8675DA072FB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7E9AC8675DA072FB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_REFRESHCUSTOMDRINK_OFFSET))(this, a1);
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

		::System::Void set_CurChatRow(::RPG::GameCore::DrinkMakerChatRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerChatRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_CURCHATROW_OFFSET))(this, a1);
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

		::System::Void set_TodayGuestRows(::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_TODAYGUESTROWS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>* get_LastServiceResults()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_LASTSERVICERESULTS_OFFSET))(this);
		}

		::System::Void set_LastServiceResults(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_LASTSERVICERESULTS_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurSequenceIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURSEQUENCEINDEX_OFFSET))(this);
		}

		::System::Void set_CurSequenceIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_CURSEQUENCEINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTodayFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_ISTODAYFINISHED_OFFSET))(this);
		}

		::System::Void set_IsTodayFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_ISTODAYFINISHED_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBarDrink* get_CustomDrink()
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CUSTOMDRINK_OFFSET))(this);
		}

		::System::Void set_CustomDrink(::RPG::Client::DrinkMakerBarDrink* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBarDrink*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_CUSTOMDRINK_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastSequenceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_LASTSEQUENCEID_OFFSET))(this);
		}

		::System::Void set_LastSequenceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_LASTSEQUENCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FreePhaseMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_FREEPHASEMISSIONID_OFFSET))(this);
		}

		::System::Void set_FreePhaseMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_FREEPHASEMISSIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MixTagUnlockSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_MIXTAGUNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::System::Void set_MixTagUnlockSubMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_MIXTAGUNLOCKSUBMISSIONID_OFFSET))(this, a1);
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

		::System::Void set_IsInGuideMission(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_ISINGUIDEMISSION_OFFSET))(this, a1);
		}

		::System::Void _UpdateGameplayData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__UPDATEGAMEPLAYDATA_OFFSET))(this);
		}

		::System::Void _UpdateResultData(::Class_1_98E26A5B2BD7AB20* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98E26A5B2BD7AB20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__UPDATERESULTDATA_OFFSET))(this, a1);
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
