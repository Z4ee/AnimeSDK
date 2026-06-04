#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/HeliobusSNSPostPhase.h"
#include "unitysdk/System/Object.h"

class Class_1_325963497EC7CBB4_1;
namespace RPG::Client { class HeliobusSNSAccountBeforeData; }
namespace RPG::Client { class HeliobusSNSPostData; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::GameCore { class HeliobusSpecialPostRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSSNSDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD13E90)
#define RPG_CLIENT_HELIOBUSSNSDATA_GETALLPOSTMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xBD1B640)
#define RPG_CLIENT_HELIOBUSSNSDATA_GETANCHROPOSTCANTAKE_OFFSET UNITYSDK_OFFSET(0xBD123C0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GETPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0xBD1BB40)
#define RPG_CLIENT_HELIOBUSSNSDATA_GETPOSTINPROGRESS_OFFSET UNITYSDK_OFFSET(0xBD1BC90)
#define RPG_CLIENT_HELIOBUSSNSDATA_GETSPPOSTDATACANSEND_OFFSET UNITYSDK_OFFSET(0xBD1B440)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_ACTIONDAY_OFFSET UNITYSDK_OFFSET(0xBD1C160)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_ALLHELIOBUSSNSPOSTDATADICT_OFFSET UNITYSDK_OFFSET(0xBD1C2D0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_FANS_OFFSET UNITYSDK_OFFSET(0xBD1C140)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_HELIOBUSSNSACCOUNTBEFOREDATA_OFFSET UNITYSDK_OFFSET(0xBD1C290)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_INCOMELEVEL_OFFSET UNITYSDK_OFFSET(0xBD1C1A0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_INCOMES_OFFSET UNITYSDK_OFFSET(0xBD130D0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_ISMISSIONPREPARED_OFFSET UNITYSDK_OFFSET(0xBD1C330)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_ISSENDINGLIKE_OFFSET UNITYSDK_OFFSET(0xBD1C310)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_LASTPOSTMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0xBD1C270)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_MAXINCOMELEVEL_OFFSET UNITYSDK_OFFSET(0xBD1C1C0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_PLAYERUSERID_OFFSET UNITYSDK_OFFSET(0xBD1C2F0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_POPPHASE_OFFSET UNITYSDK_OFFSET(0xBD1C180)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xBD1C2B0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0xBD1C250)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTPHASE_OFFSET UNITYSDK_OFFSET(0xBD1C1E0)
#define RPG_CLIENT_HELIOBUSSNSDATA_INIT_OFFSET UNITYSDK_OFFSET(0xBD137F0)
#define RPG_CLIENT_HELIOBUSSNSDATA_ISALLMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xBD1B9F0)
#define RPG_CLIENT_HELIOBUSSNSDATA_PREPAREALLMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xBD15D80)
#define RPG_CLIENT_HELIOBUSSNSDATA_REFRESHTAKENMISSIONINFO_OFFSET UNITYSDK_OFFSET(0xBD142E0)
#define RPG_CLIENT_HELIOBUSSNSDATA_RESETBEFOREFANSDATA_OFFSET UNITYSDK_OFFSET(0xBD1BE30)
#define RPG_CLIENT_HELIOBUSSNSDATA_SETPOSTISLIKE_OFFSET UNITYSDK_OFFSET(0xBD170A0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SETPOSTISREAD_OFFSET UNITYSDK_OFFSET(0xBD16E70)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_ACTIONDAY_OFFSET UNITYSDK_OFFSET(0xBD1C170)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_ALLHELIOBUSSNSPOSTDATADICT_OFFSET UNITYSDK_OFFSET(0xBD1C2E0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_FANS_OFFSET UNITYSDK_OFFSET(0xBD1C150)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_HELIOBUSSNSACCOUNTBEFOREDATA_OFFSET UNITYSDK_OFFSET(0xBD1C2A0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_INCOMELEVEL_OFFSET UNITYSDK_OFFSET(0xBD1C1B0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_ISSENDINGLIKE_OFFSET UNITYSDK_OFFSET(0xBD1C320)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_LASTPOSTMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0xBD1C280)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_MAXINCOMELEVEL_OFFSET UNITYSDK_OFFSET(0xBD1C1D0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_PLAYERUSERID_OFFSET UNITYSDK_OFFSET(0xBD1C300)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_POPPHASE_OFFSET UNITYSDK_OFFSET(0xBD1C190)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_POSTMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xBD1C2C0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_POSTMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0xBD1C260)
#define RPG_CLIENT_HELIOBUSSNSDATA_SYNCACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0xBD15CF0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SYNCACTIONDAY_OFFSET UNITYSDK_OFFSET(0xBD15980)
#define RPG_CLIENT_HELIOBUSSNSDATA_SYNCINCOMELEVEL_OFFSET UNITYSDK_OFFSET(0xBD15C90)
#define RPG_CLIENT_HELIOBUSSNSDATA_SYNCPOSTLIST_OFFSET UNITYSDK_OFFSET(0xBD159D0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SYNCSINGLEPOST_OFFSET UNITYSDK_OFFSET(0xBD16BB0)
#define RPG_CLIENT_HELIOBUSSNSDATA__CHECKISPOSTAVAILABLE_OFFSET UNITYSDK_OFFSET(0xBD1A5B0)
#define RPG_CLIENT_HELIOBUSSNSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBD13360)
#define RPG_CLIENT_HELIOBUSSNSDATA__GETPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0xBD1BBA0)
#define RPG_CLIENT_HELIOBUSSNSDATA__PREPAREALLMISSIONDATA_B__12_0_OFFSET UNITYSDK_OFFSET(0xBD1C340)
#define RPG_CLIENT_HELIOBUSSNSDATA__RECORDACCOUNTBEFORE_OFFSET UNITYSDK_OFFSET(0xBD1BE80)
#define RPG_CLIENT_HELIOBUSSNSDATA__REFRESHACCOUNTBEFORE_OFFSET UNITYSDK_OFFSET(0xBD1B0C0)
#define RPG_CLIENT_HELIOBUSSNSDATA__REFRESHTAKENMISSIONINFO_OFFSET UNITYSDK_OFFSET(0xBD1AD70)
#define RPG_CLIENT_HELIOBUSSNSDATA__SETMAXINCOMELEVEL_OFFSET UNITYSDK_OFFSET(0xBD1A460)
#define RPG_CLIENT_HELIOBUSSNSDATA__UPDATEALLPOSTLIKE_OFFSET UNITYSDK_OFFSET(0xBD1B320)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusSNSData_TypeDefinitionIndex = 61406;

	class HeliobusSNSData : public ::System::Object
	{
	public:
		// static const ::System::String* _IncomeItemString; // 0x0
		// static const ::System::String* _PlayerUserIDString; // 0x0
		::RPG::Client::MainMissionData* _PostMissionInProgress_k__BackingField; // 0x10
		::RPG::Client::HeliobusSNSAccountBeforeData* _RecordAccountBeforeData; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _PostMainMissionIDList_k__BackingField; // 0x20
		::RPG::Client::MainMissionData* _LastPostMissionInProgress_k__BackingField; // 0x28
		::RPG::Client::HeliobusSNSAccountBeforeData* _HeliobusSNSAccountBeforeData_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSPostData*>* _AllHeliobusSNSPostDataDict_k__BackingField; // 0x38
		::System::UInt32 _PopPhase_k__BackingField; // 0x40
		::System::UInt32 _IncomeItemID; // 0x44
		::System::UInt32 _MaxIncomeLevel_k__BackingField; // 0x48
		::System::UInt32 _Fans_k__BackingField; // 0x4C
		::System::UInt32 _PlayerUserID_k__BackingField; // 0x50
		::System::UInt32 _IncomeLevel_k__BackingField; // 0x54
		::System::Boolean _IsMissionPrepared; // 0x58
		::System::Boolean _IsSendingLike_k__BackingField; // 0x59
		::System::UInt32 _ActionDay_k__BackingField; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_INIT_OFFSET))(this);
		}

		::System::Void SyncPostList(::System::Collections::Generic::IList_1<::Class_1_325963497EC7CBB4_1*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_325963497EC7CBB4_1*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SYNCPOSTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void SyncSinglePost(::Class_1_325963497EC7CBB4_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_325963497EC7CBB4_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SYNCSINGLEPOST_OFFSET))(this, a1);
		}

		::System::Void SetPostIsRead(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SETPOSTISREAD_OFFSET))(this, a1, a2);
		}

		::System::Void SetPostIsLike(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SETPOSTISLIKE_OFFSET))(this, a1, a2);
		}

		::System::Void SyncActionDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SYNCACTIONDAY_OFFSET))(this, a1);
		}

		::System::Void SyncAccountInfo(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SYNCACCOUNTINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SyncIncomeLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SYNCINCOMELEVEL_OFFSET))(this, a1);
		}

		::RPG::GameCore::HeliobusSpecialPostRow* GetSPPostDataCanSend()
		{
			return ((::RPG::GameCore::HeliobusSpecialPostRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GETSPPOSTDATACANSEND_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllPostMainMissionID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GETALLPOSTMAINMISSIONID_OFFSET))(this);
		}

		::System::Void PrepareAllMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_PREPAREALLMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean IsAllMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_ISALLMISSIONFINISH_OFFSET))(this);
		}

		::System::Void RefreshTakenMissionInfo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_REFRESHTAKENMISSIONINFO_OFFSET))(this, a1);
		}

		::System::UInt32 GetPostCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GETPOSTCOUNT_OFFSET))(this);
		}

		::RPG::Client::HeliobusSNSPostData* GetPostInProgress()
		{
			return ((::RPG::Client::HeliobusSNSPostData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GETPOSTINPROGRESS_OFFSET))(this);
		}

		::RPG::Client::HeliobusSNSPostData* GetAnchroPostCanTake()
		{
			return ((::RPG::Client::HeliobusSNSPostData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GETANCHROPOSTCANTAKE_OFFSET))(this);
		}

		::System::Void ResetBeforeFansData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_RESETBEFOREFANSDATA_OFFSET))(this);
		}

		::System::Void _RefreshTakenMissionInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__REFRESHTAKENMISSIONINFO_OFFSET))(this);
		}

		::System::Void _RefreshAccountBefore(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__REFRESHACCOUNTBEFORE_OFFSET))(this, a1);
		}

		::System::Void _RecordAccountBefore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__RECORDACCOUNTBEFORE_OFFSET))(this);
		}

		::System::UInt32 _GetPostCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__GETPOSTCOUNT_OFFSET))(this);
		}

		::System::Boolean _CheckIsPostAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__CHECKISPOSTAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void _UpdateAllPostLike()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__UPDATEALLPOSTLIKE_OFFSET))(this);
		}

		::System::Void _SetMaxIncomeLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__SETMAXINCOMELEVEL_OFFSET))(this);
		}

		::System::UInt32 get_Fans()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_FANS_OFFSET))(this);
		}

		::System::Void set_Fans(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_FANS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_ACTIONDAY_OFFSET))(this);
		}

		::System::Void set_ActionDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_ACTIONDAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_PopPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_POPPHASE_OFFSET))(this);
		}

		::System::Void set_PopPhase(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_POPPHASE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Incomes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_INCOMES_OFFSET))(this);
		}

		::System::UInt32 get_IncomeLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_INCOMELEVEL_OFFSET))(this);
		}

		::System::Void set_IncomeLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_INCOMELEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxIncomeLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_MAXINCOMELEVEL_OFFSET))(this);
		}

		::System::Void set_MaxIncomeLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_MAXINCOMELEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::HeliobusSNSPostPhase get_PostPhase()
		{
			return ((::RPG::Client::HeliobusSNSPostPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTPHASE_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_PostMissionInProgress()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTMISSIONINPROGRESS_OFFSET))(this);
		}

		::System::Void set_PostMissionInProgress(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_POSTMISSIONINPROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::MainMissionData* get_LastPostMissionInProgress()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_LASTPOSTMISSIONINPROGRESS_OFFSET))(this);
		}

		::System::Void set_LastPostMissionInProgress(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_LASTPOSTMISSIONINPROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::HeliobusSNSAccountBeforeData* get_HeliobusSNSAccountBeforeData()
		{
			return ((::RPG::Client::HeliobusSNSAccountBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_HELIOBUSSNSACCOUNTBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_HeliobusSNSAccountBeforeData(::RPG::Client::HeliobusSNSAccountBeforeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeliobusSNSAccountBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_HELIOBUSSNSACCOUNTBEFOREDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PostMainMissionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTMAINMISSIONIDLIST_OFFSET))(this);
		}

		::System::Void set_PostMainMissionIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_POSTMAINMISSIONIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSPostData*>* get_AllHeliobusSNSPostDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSPostData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_ALLHELIOBUSSNSPOSTDATADICT_OFFSET))(this);
		}

		::System::Void set_AllHeliobusSNSPostDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSPostData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSPostData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_ALLHELIOBUSSNSPOSTDATADICT_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlayerUserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_PLAYERUSERID_OFFSET))(this);
		}

		::System::Void set_PlayerUserID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_PLAYERUSERID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSendingLike()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_ISSENDINGLIKE_OFFSET))(this);
		}

		::System::Void set_IsSendingLike(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_ISSENDINGLIKE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMissionPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_ISMISSIONPREPARED_OFFSET))(this);
		}

		::System::Void _PrepareAllMissionData_b__12_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__PREPAREALLMISSIONDATA_B__12_0_OFFSET))(this, a1);
		}
	};
}
