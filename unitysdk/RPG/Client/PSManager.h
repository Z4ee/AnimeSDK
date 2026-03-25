#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MHYSDKC_Console_JoinRestriction.h"
#include "unitysdk/MiHoYo/SDK/MHYSDKC_Console_MemberType.h"
#include "unitysdk/System/Object.h"

class Class_1_04477E61F1A460E6;
class Class_1_046D7E7D73E44996;
class Class_1_7D41D5D948382242;
class Class_1_83C58EAE6C396595;
namespace RPG::Client { class AchievementData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PSMANAGER_CREATESESSION_OFFSET UNITYSDK_OFFSET(0x9EC3220)
#define RPG_CLIENT_PSMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EC0D20)
#define RPG_CLIENT_PSMANAGER_FORCESHOWPSSTOREICON_OFFSET UNITYSDK_OFFSET(0x9EC0E90)
#define RPG_CLIENT_PSMANAGER_GETPSSESSIONDATAWITHSESSIONID_OFFSET UNITYSDK_OFFSET(0x9EC3620)
#define RPG_CLIENT_PSMANAGER_GET_ISFROMACTIVITY_OFFSET UNITYSDK_OFFSET(0x9EC3F20)
#define RPG_CLIENT_PSMANAGER_GET_ISFROMSESSION_OFFSET UNITYSDK_OFFSET(0x9EC3F40)
#define RPG_CLIENT_PSMANAGER_GET_ISPSNLOGIN_OFFSET UNITYSDK_OFFSET(0x9EC1840)
#define RPG_CLIENT_PSMANAGER_GET_ISRESTRICTED_OFFSET UNITYSDK_OFFSET(0x9EC3F80)
#define RPG_CLIENT_PSMANAGER_GET_NEEDAUTOLOGIN_OFFSET UNITYSDK_OFFSET(0x9EC3EC0)
#define RPG_CLIENT_PSMANAGER_GET_RESTRICTINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9EC3FA0)
#define RPG_CLIENT_PSMANAGER_GET_STARTUPSESSIONDATA_OFFSET UNITYSDK_OFFSET(0x9EC3F60)
#define RPG_CLIENT_PSMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x9EC0CE0)
#define RPG_CLIENT_PSMANAGER_ISINSESSION_OFFSET UNITYSDK_OFFSET(0x9EC3A70)
#define RPG_CLIENT_PSMANAGER_ISPREMIUM_OFFSET UNITYSDK_OFFSET(0x9EC11C0)
#define RPG_CLIENT_PSMANAGER_JOINSESSION_OFFSET UNITYSDK_OFFSET(0x9EC3740)
#define RPG_CLIENT_PSMANAGER_LEAVESESSION_OFFSET UNITYSDK_OFFSET(0x9EC3960)
#define RPG_CLIENT_PSMANAGER_NOTIFYPREMIUMFEATURE_OFFSET UNITYSDK_OFFSET(0x9EC3C50)
#define RPG_CLIENT_PSMANAGER_ONGETFRIENDLIST_OFFSET UNITYSDK_OFFSET(0x9EC27A0)
#define RPG_CLIENT_PSMANAGER_PAYPREMIUM_OFFSET UNITYSDK_OFFSET(0x9EC1380)
#define RPG_CLIENT_PSMANAGER_REFRESHBLACKLISTPROMISE_OFFSET UNITYSDK_OFFSET(0x9EC2160)
#define RPG_CLIENT_PSMANAGER_REFRESHFRIENDLIST_OFFSET UNITYSDK_OFFSET(0x9EC26E0)
#define RPG_CLIENT_PSMANAGER_SESSIONDESTROY_OFFSET UNITYSDK_OFFSET(0x9EC3170)
#define RPG_CLIENT_PSMANAGER_SESSIONINIT_OFFSET UNITYSDK_OFFSET(0x9EC2FE0)
#define RPG_CLIENT_PSMANAGER_SET_ISFROMACTIVITY_OFFSET UNITYSDK_OFFSET(0x9EC3F30)
#define RPG_CLIENT_PSMANAGER_SET_ISFROMSESSION_OFFSET UNITYSDK_OFFSET(0x9EC3F50)
#define RPG_CLIENT_PSMANAGER_SET_ISPSNLOGIN_OFFSET UNITYSDK_OFFSET(0x9EC1850)
#define RPG_CLIENT_PSMANAGER_SET_ISRESTRICTED_OFFSET UNITYSDK_OFFSET(0x9EC3F90)
#define RPG_CLIENT_PSMANAGER_SET_RESTRICTINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9EC3FB0)
#define RPG_CLIENT_PSMANAGER_SET_STARTUPSESSIONDATA_OFFSET UNITYSDK_OFFSET(0x9EC3F70)
#define RPG_CLIENT_PSMANAGER_TRYFINISHONEOBJECT_OFFSET UNITYSDK_OFFSET(0x9EC1050)
#define RPG_CLIENT_PSMANAGER_TRYGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0x9EC0F10)
#define RPG_CLIENT_PSMANAGER_TRYGETCOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x9EC0FB0)
#define RPG_CLIENT_PSMANAGER_TRYGETNICKNAME_OFFSET UNITYSDK_OFFSET(0x9EC0F60)
#define RPG_CLIENT_PSMANAGER_TRYHIDEPSSTOREICON_OFFSET UNITYSDK_OFFSET(0x9EC0ED0)
#define RPG_CLIENT_PSMANAGER_TRYINITIALIZERESTRICTSTATUS_OFFSET UNITYSDK_OFFSET(0x9EC2B50)
#define RPG_CLIENT_PSMANAGER_TRYINVITEPLAYER_OFFSET UNITYSDK_OFFSET(0x9EC3B60)
#define RPG_CLIENT_PSMANAGER_TRYJOINMULTIPLAYERGAME_OFFSET UNITYSDK_OFFSET(0x9EC10A0)
#define RPG_CLIENT_PSMANAGER_TRYSETTROPHY_OFFSET UNITYSDK_OFFSET(0x9EC20D0)
#define RPG_CLIENT_PSMANAGER_TRYSHOWPSSTOREICON_OFFSET UNITYSDK_OFFSET(0x9EC0E50)
#define RPG_CLIENT_PSMANAGER_TRYSTARTONETASK_OFFSET UNITYSDK_OFFSET(0x9EC1000)
#define RPG_CLIENT_PSMANAGER_TRYSYNCALLACTIVITYPROGRESS_OFFSET UNITYSDK_OFFSET(0x9EC1600)
#define RPG_CLIENT_PSMANAGER_TRYSYNCALLTROPHY_OFFSET UNITYSDK_OFFSET(0x9EC2120)
#define RPG_CLIENT_PSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC3FC0)
#define RPG_CLIENT_PSMANAGER__INITPSTROPHY_OFFSET UNITYSDK_OFFSET(0x9EC17C0)
#define RPG_CLIENT_PSMANAGER__ONBLACKLISTUPDATE_OFFSET UNITYSDK_OFFSET(0x9EC2E30)
#define RPG_CLIENT_PSMANAGER__ONCOMMUNICATIONRESTRICTIONSTATUSCALLBACK_OFFSET UNITYSDK_OFFSET(0x9EC2C00)
#define RPG_CLIENT_PSMANAGER__ONFRIENDLISTUPDATE_OFFSET UNITYSDK_OFFSET(0x9EC2C90)
#define RPG_CLIENT_PSMANAGER__ONGAMEINTENTGETACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9EC1C60)
#define RPG_CLIENT_PSMANAGER__ONGAMEINTENTGETSESSIONID_OFFSET UNITYSDK_OFFSET(0x9EC1A10)
#define RPG_CLIENT_PSMANAGER__ONGETBLACKLIST_OFFSET UNITYSDK_OFFSET(0x9EC2220)
#define RPG_CLIENT_PSMANAGER__ONNPSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x9EC1860)
#define RPG_CLIENT_PSMANAGER__ONPAYPREMIUMCALLBACK_OFFSET UNITYSDK_OFFSET(0x9EC2F90)
#define RPG_CLIENT_PSMANAGER__TRYAVAILABLEONEACTIVITY_OFFSET UNITYSDK_OFFSET(0x9EC1450)
#define RPG_CLIENT_PSMANAGER__TRYCOMPLETEONEACTIVITY_OFFSET UNITYSDK_OFFSET(0x9EC1640)
#define RPG_CLIENT_PSMANAGER__TRYDISPOSEPSACTIVITY_OFFSET UNITYSDK_OFFSET(0x9EC0E10)
#define RPG_CLIENT_PSMANAGER__TRYINITPSACTIVITY_OFFSET UNITYSDK_OFFSET(0x9EC1800)
#define RPG_CLIENT_PSMANAGER__TRYQUERY_OFFSET UNITYSDK_OFFSET(0x9EC25D0)
#define RPG_CLIENT_PSMANAGER__TRYREGISTBLACKLISTUPDATE_OFFSET UNITYSDK_OFFSET(0x9EC2DF0)
#define RPG_CLIENT_PSMANAGER__TRYREGISTERFRIENDUPDATE_OFFSET UNITYSDK_OFFSET(0x9EC2C50)

namespace RPG::Client
{
	inline static constexpr unsigned int PSManager_TypeDefinitionIndex = 54292;

	class PSManager : public ::System::Object
	{
	public:
		// static const ::System::String* TrueValue; // 0x0
		// static const ::System::Int32 _MAX_TRY_TIMES = 0x3; // 0x0
		// static const ::System::UInt32 _NEXT_TRY_DELAY_IN_SECONDS = 0x5; // 0x0
		::System::String* RMP_None; // 0x10
		::Class_1_83C58EAE6C396595* _PSActivityManager; // 0x18
		::Class_1_7D41D5D948382242* _StartUpSessionData_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>* _BlackList; // 0x28
		::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>* _FriendList; // 0x30
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>* _RefreshFriendListPromise; // 0x38
		::Class_1_04477E61F1A460E6* _QueryOnlineIdProcessor; // 0x40
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>* _RefreshBlackListPromise; // 0x48
		::System::String* RMP_CrocssPlatformPlay; // 0x50
		::System::Boolean _IsFromSession_k__BackingField; // 0x58
		::System::Boolean IsSessionInit; // 0x59
		::System::Int32 _RegisterFriendListUpdateTryTimes; // 0x5C
		::System::Int32 _RegisterBlackListUpdateTryTimes; // 0x60
		::System::Boolean _IsFromActivity_k__BackingField; // 0x64
		::System::Boolean _IsPsnLogIn_k__BackingField; // 0x65
		::System::Boolean _IsRestricted_k__BackingField; // 0x66
		::System::Boolean _RestrictInitialized_k__BackingField; // 0x67

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void TryShowPSStoreIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYSHOWPSSTOREICON_OFFSET))(this);
		}

		::System::Void ForceShowPSStoreIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_FORCESHOWPSSTOREICON_OFFSET))(this);
		}

		::System::Void TryHidePSStoreIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYHIDEPSSTOREICON_OFFSET))(this);
		}

		::System::String* TryGetAccountID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYGETACCOUNTID_OFFSET))(this);
		}

		::System::String* TryGetNickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYGETNICKNAME_OFFSET))(this);
		}

		::System::String* TryGetCountryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYGETCOUNTRYCODE_OFFSET))(this);
		}

		::System::Void TryStartOneTask(::System::UInt32 missionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYSTARTONETASK_OFFSET))(this, missionID);
		}

		::System::Void TryFinishOneObject(::System::UInt32 missionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYFINISHONEOBJECT_OFFSET))(this, missionID);
		}

		::System::Boolean TryJoinMultiplayerGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYJOINMULTIPLAYERGAME_OFFSET))(this);
		}

		::System::Void _TryAvailableOneActivity(::System::String* activityID, ::System::Boolean available)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__TRYAVAILABLEONEACTIVITY_OFFSET))(this, activityID, available);
		}

		::System::Void TrySyncAllActivityProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYSYNCALLACTIVITYPROGRESS_OFFSET))(this);
		}

		::System::Void _TryCompleteOneActivity(::System::UInt32 activityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__TRYCOMPLETEONEACTIVITY_OFFSET))(this, activityID);
		}

		::System::Void _InitPSTrophy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__INITPSTROPHY_OFFSET))(this);
		}

		::System::Void _TryInitPSActivity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__TRYINITPSACTIVITY_OFFSET))(this);
		}

		::System::Void _TryDisposePSActivity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__TRYDISPOSEPSACTIVITY_OFFSET))(this);
		}

		::System::Boolean get_IsPsnLogIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_GET_ISPSNLOGIN_OFFSET))(this);
		}

		::System::Void set_IsPsnLogIn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SET_ISPSNLOGIN_OFFSET))(this, value);
		}

		::System::Void _OnNPStateChanged(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONNPSTATECHANGED_OFFSET))(this, responseString);
		}

		::System::Void _OnGameIntentGetSessionId(::System::String* responese)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONGAMEINTENTGETSESSIONID_OFFSET))(this, responese);
		}

		::System::Void _OnGameIntentGetActivityId(::System::String* responese)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONGAMEINTENTGETACTIVITYID_OFFSET))(this, responese);
		}

		::System::Void TrySetTrophy(::RPG::Client::AchievementData* achievementData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYSETTROPHY_OFFSET))(this, achievementData);
		}

		::System::Void TrySyncAllTrophy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYSYNCALLTROPHY_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>* RefreshBlackListPromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_REFRESHBLACKLISTPROMISE_OFFSET))(this);
		}

		::System::Void _OnGetBlackList(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONGETBLACKLIST_OFFSET))(this, responseString);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>* RefreshFriendList()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_REFRESHFRIENDLIST_OFFSET))(this);
		}

		::System::Void OnGetFriendList(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_ONGETFRIENDLIST_OFFSET))(this, responseString);
		}

		::System::Void _TryQuery(::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>* queryList, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>* promise)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__TRYQUERY_OFFSET))(this, queryList, promise);
		}

		::System::Void TryInitializeRestrictStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYINITIALIZERESTRICTSTATUS_OFFSET))(this);
		}

		::System::Void _OnCommunicationRestrictionStatusCallback(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONCOMMUNICATIONRESTRICTIONSTATUSCALLBACK_OFFSET))(this, responseString);
		}

		::System::Void _TryRegisterFriendUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__TRYREGISTERFRIENDUPDATE_OFFSET))(this);
		}

		::System::Void _OnFriendListUpdate(::System::String* retCodeString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONFRIENDLISTUPDATE_OFFSET))(this, retCodeString);
		}

		::System::Void _TryRegistBlackListUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__TRYREGISTBLACKLISTUPDATE_OFFSET))(this);
		}

		::System::Void _OnBlackListUpdate(::System::String* retCodeString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONBLACKLISTUPDATE_OFFSET))(this, retCodeString);
		}

		::System::Boolean IsPremium()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_ISPREMIUM_OFFSET))(this);
		}

		::System::Void PayPremium()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_PAYPREMIUM_OFFSET))(this);
		}

		::System::Void _OnPayPremiumCallback(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONPAYPREMIUMCALLBACK_OFFSET))(this, response);
		}

		::System::Void SessionInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SESSIONINIT_OFFSET))(this);
		}

		::System::Void SessionDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SESSIONDESTROY_OFFSET))(this);
		}

		::System::Void CreateSession(::System::String* customData, ::System::Int32 maxPlayerNum, ::System::Int32 maxSpectorNum, ::System::Action_1<::System::Boolean>* callback, ::MiHoYo::SDK::MHYSDKC_Console_JoinRestriction restriction)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Action_1<::System::Boolean>*, ::MiHoYo::SDK::MHYSDKC_Console_JoinRestriction))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_CREATESESSION_OFFSET))(this, customData, maxPlayerNum, maxSpectorNum, callback, restriction);
		}

		::System::Void GetPSSessionDataWithSessionID(::System::String* sessionId, ::System::Action_1<::Class_1_7D41D5D948382242*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_7D41D5D948382242*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_GETPSSESSIONDATAWITHSESSIONID_OFFSET))(this, sessionId, callback);
		}

		::System::Void JoinSession(::System::String* sessionID, ::MiHoYo::SDK::MHYSDKC_Console_MemberType memberType, ::System::Action_1<::System::Boolean>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::MHYSDKC_Console_MemberType, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_JOINSESSION_OFFSET))(this, sessionID, memberType, action);
		}

		::System::Void LeaveSession(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_LEAVESESSION_OFFSET))(this, callback);
		}

		::System::Boolean IsInSession()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_ISINSESSION_OFFSET))(this);
		}

		::System::Void TryInvitePlayer(::System::String* AccountID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYINVITEPLAYER_OFFSET))(this, AccountID);
		}

		::System::Void NotifyPremiumFeature()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_NOTIFYPREMIUMFEATURE_OFFSET))(this);
		}

		::System::Boolean get_NeedAutoLogin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_GET_NEEDAUTOLOGIN_OFFSET))(this);
		}

		::System::Boolean get_IsFromActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_GET_ISFROMACTIVITY_OFFSET))(this);
		}

		::System::Void set_IsFromActivity(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SET_ISFROMACTIVITY_OFFSET))(this, value);
		}

		::System::Boolean get_IsFromSession()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_GET_ISFROMSESSION_OFFSET))(this);
		}

		::System::Void set_IsFromSession(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SET_ISFROMSESSION_OFFSET))(this, value);
		}

		::Class_1_7D41D5D948382242* get_StartUpSessionData()
		{
			return ((::Class_1_7D41D5D948382242*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_GET_STARTUPSESSIONDATA_OFFSET))(this);
		}

		::System::Void set_StartUpSessionData(::Class_1_7D41D5D948382242* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D41D5D948382242*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SET_STARTUPSESSIONDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsRestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_GET_ISRESTRICTED_OFFSET))(this);
		}

		::System::Void set_IsRestricted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SET_ISRESTRICTED_OFFSET))(this, value);
		}

		::System::Boolean get_RestrictInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_GET_RESTRICTINITIALIZED_OFFSET))(this);
		}

		::System::Void set_RestrictInitialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SET_RESTRICTINITIALIZED_OFFSET))(this, value);
		}
	};
}
