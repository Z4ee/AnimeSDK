#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MHYSDKC_Console_JoinRestriction.h"
#include "unitysdk/MiHoYo/SDK/MHYSDKC_Console_MemberType.h"
#include "unitysdk/System/Object.h"

class Class_1_7291C38274750BA2_2;
class Class_1_8D3D409EBF3F1CE0;
class Class_1_C81847022D648D73;
class Class_1_C88E9CDFBEAC50C3;
namespace RPG::Client { class AchievementData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PSMANAGER_CREATESESSION_OFFSET UNITYSDK_OFFSET(0xC329E50)
#define RPG_CLIENT_PSMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC327890)
#define RPG_CLIENT_PSMANAGER_FORCESHOWPSSTOREICON_OFFSET UNITYSDK_OFFSET(0xC327A00)
#define RPG_CLIENT_PSMANAGER_GETPSSESSIONDATAWITHSESSIONID_OFFSET UNITYSDK_OFFSET(0xC32A260)
#define RPG_CLIENT_PSMANAGER_GET_ISFROMACTIVITY_OFFSET UNITYSDK_OFFSET(0xC32AB90)
#define RPG_CLIENT_PSMANAGER_GET_ISFROMSESSION_OFFSET UNITYSDK_OFFSET(0xC32ABB0)
#define RPG_CLIENT_PSMANAGER_GET_ISPSNLOGIN_OFFSET UNITYSDK_OFFSET(0xC3282C0)
#define RPG_CLIENT_PSMANAGER_GET_ISRESTRICTED_OFFSET UNITYSDK_OFFSET(0xC32ABF0)
#define RPG_CLIENT_PSMANAGER_GET_NEEDAUTOLOGIN_OFFSET UNITYSDK_OFFSET(0xC32AB30)
#define RPG_CLIENT_PSMANAGER_GET_RESTRICTINITIALIZED_OFFSET UNITYSDK_OFFSET(0xC32AC10)
#define RPG_CLIENT_PSMANAGER_GET_STARTUPSESSIONDATA_OFFSET UNITYSDK_OFFSET(0xC32ABD0)
#define RPG_CLIENT_PSMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xC327850)
#define RPG_CLIENT_PSMANAGER_ISINSESSION_OFFSET UNITYSDK_OFFSET(0xC32A6E0)
#define RPG_CLIENT_PSMANAGER_ISPREMIUM_OFFSET UNITYSDK_OFFSET(0xC327C10)
#define RPG_CLIENT_PSMANAGER_JOINSESSION_OFFSET UNITYSDK_OFFSET(0xC32A390)
#define RPG_CLIENT_PSMANAGER_LEAVESESSION_OFFSET UNITYSDK_OFFSET(0xC32A5C0)
#define RPG_CLIENT_PSMANAGER_NOTIFYPREMIUMFEATURE_OFFSET UNITYSDK_OFFSET(0xC32A8C0)
#define RPG_CLIENT_PSMANAGER_ONGETFRIENDLIST_OFFSET UNITYSDK_OFFSET(0xC3292E0)
#define RPG_CLIENT_PSMANAGER_PAYPREMIUM_OFFSET UNITYSDK_OFFSET(0xC327DD0)
#define RPG_CLIENT_PSMANAGER_REFRESHBLACKLISTPROMISE_OFFSET UNITYSDK_OFFSET(0xC328C30)
#define RPG_CLIENT_PSMANAGER_REFRESHFRIENDLIST_OFFSET UNITYSDK_OFFSET(0xC329220)
#define RPG_CLIENT_PSMANAGER_SESSIONDESTROY_OFFSET UNITYSDK_OFFSET(0xC329DA0)
#define RPG_CLIENT_PSMANAGER_SESSIONINIT_OFFSET UNITYSDK_OFFSET(0xC329C20)
#define RPG_CLIENT_PSMANAGER_SET_ISFROMACTIVITY_OFFSET UNITYSDK_OFFSET(0xC32ABA0)
#define RPG_CLIENT_PSMANAGER_SET_ISFROMSESSION_OFFSET UNITYSDK_OFFSET(0xC32ABC0)
#define RPG_CLIENT_PSMANAGER_SET_ISPSNLOGIN_OFFSET UNITYSDK_OFFSET(0xC3282D0)
#define RPG_CLIENT_PSMANAGER_SET_ISRESTRICTED_OFFSET UNITYSDK_OFFSET(0xC32AC00)
#define RPG_CLIENT_PSMANAGER_SET_RESTRICTINITIALIZED_OFFSET UNITYSDK_OFFSET(0xC32AC20)
#define RPG_CLIENT_PSMANAGER_SET_STARTUPSESSIONDATA_OFFSET UNITYSDK_OFFSET(0xC32ABE0)
#define RPG_CLIENT_PSMANAGER_TRYFINISHONEOBJECT_OFFSET UNITYSDK_OFFSET(0xC327BC0)
#define RPG_CLIENT_PSMANAGER_TRYGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0xC327A80)
#define RPG_CLIENT_PSMANAGER_TRYGETCOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xC327B20)
#define RPG_CLIENT_PSMANAGER_TRYGETNICKNAME_OFFSET UNITYSDK_OFFSET(0xC327AD0)
#define RPG_CLIENT_PSMANAGER_TRYHIDEPSSTOREICON_OFFSET UNITYSDK_OFFSET(0xC327A40)
#define RPG_CLIENT_PSMANAGER_TRYINITIALIZERESTRICTSTATUS_OFFSET UNITYSDK_OFFSET(0xC329700)
#define RPG_CLIENT_PSMANAGER_TRYINVITEPLAYER_OFFSET UNITYSDK_OFFSET(0xC32A7D0)
#define RPG_CLIENT_PSMANAGER_TRYJOINMULTIPLAYERGAME_OFFSET UNITYSDK_OFFSET(0xC2FC490)
#define RPG_CLIENT_PSMANAGER_TRYSETTROPHY_OFFSET UNITYSDK_OFFSET(0xC328BA0)
#define RPG_CLIENT_PSMANAGER_TRYSHOWPSSTOREICON_OFFSET UNITYSDK_OFFSET(0xC3279C0)
#define RPG_CLIENT_PSMANAGER_TRYSTARTONETASK_OFFSET UNITYSDK_OFFSET(0xC327B70)
#define RPG_CLIENT_PSMANAGER_TRYSYNCALLACTIVITYPROGRESS_OFFSET UNITYSDK_OFFSET(0xC328080)
#define RPG_CLIENT_PSMANAGER_TRYSYNCALLTROPHY_OFFSET UNITYSDK_OFFSET(0xC328BF0)
#define RPG_CLIENT_PSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC32AC30)
#define RPG_CLIENT_PSMANAGER__INITPSTROPHY_OFFSET UNITYSDK_OFFSET(0xC328240)
#define RPG_CLIENT_PSMANAGER__ONBLACKLISTUPDATE_OFFSET UNITYSDK_OFFSET(0xC329A50)
#define RPG_CLIENT_PSMANAGER__ONCOMMUNICATIONRESTRICTIONSTATUSCALLBACK_OFFSET UNITYSDK_OFFSET(0xC329800)
#define RPG_CLIENT_PSMANAGER__ONFRIENDLISTUPDATE_OFFSET UNITYSDK_OFFSET(0xC329890)
#define RPG_CLIENT_PSMANAGER__ONGAMEINTENTGETACTIVITYID_OFFSET UNITYSDK_OFFSET(0xC3286F0)
#define RPG_CLIENT_PSMANAGER__ONGAMEINTENTGETSESSIONID_OFFSET UNITYSDK_OFFSET(0xC3284A0)
#define RPG_CLIENT_PSMANAGER__ONGETBLACKLIST_OFFSET UNITYSDK_OFFSET(0xC328CF0)
#define RPG_CLIENT_PSMANAGER__ONNPSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xC3282E0)
#define RPG_CLIENT_PSMANAGER__ONPAYPREMIUMCALLBACK_OFFSET UNITYSDK_OFFSET(0xC329BD0)
#define RPG_CLIENT_PSMANAGER__TRYAVAILABLEONEACTIVITY_OFFSET UNITYSDK_OFFSET(0xC327ED0)
#define RPG_CLIENT_PSMANAGER__TRYCOMPLETEONEACTIVITY_OFFSET UNITYSDK_OFFSET(0xC3280C0)
#define RPG_CLIENT_PSMANAGER__TRYDISPOSEPSACTIVITY_OFFSET UNITYSDK_OFFSET(0xC327980)
#define RPG_CLIENT_PSMANAGER__TRYINITPSACTIVITY_OFFSET UNITYSDK_OFFSET(0xC328280)
#define RPG_CLIENT_PSMANAGER__TRYQUERY_OFFSET UNITYSDK_OFFSET(0xC329110)
#define RPG_CLIENT_PSMANAGER__TRYREGISTBLACKLISTUPDATE_OFFSET UNITYSDK_OFFSET(0xC329A10)
#define RPG_CLIENT_PSMANAGER__TRYREGISTERFRIENDUPDATE_OFFSET UNITYSDK_OFFSET(0xC329850)

namespace RPG::Client
{
	inline static constexpr unsigned int PSManager_TypeDefinitionIndex = 62388;

	class PSManager : public ::System::Object
	{
	public:
		// static const ::System::String* TrueValue; // 0x0
		// static const ::System::Int32 _MAX_TRY_TIMES = 0x3; // 0x0
		// static const ::System::UInt32 _NEXT_TRY_DELAY_IN_SECONDS = 0x5; // 0x0
		::Class_1_8D3D409EBF3F1CE0* _QueryOnlineIdProcessor; // 0x10
		::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>* _FriendList; // 0x18
		::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>* _BlackList; // 0x20
		::Class_1_C88E9CDFBEAC50C3* _StartUpSessionData_k__BackingField; // 0x28
		::Class_1_C81847022D648D73* _PSActivityManager; // 0x30
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*>* _RefreshFriendListPromise; // 0x38
		::System::String* RMP_None; // 0x40
		::System::String* RMP_CrocssPlatformPlay; // 0x48
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*>* _RefreshBlackListPromise; // 0x50
		::System::Boolean _IsRestricted_k__BackingField; // 0x58
		::System::Boolean IsSessionInit; // 0x59
		::System::Boolean _IsPsnLogIn_k__BackingField; // 0x5A
		::System::Boolean _IsFromActivity_k__BackingField; // 0x5B
		::System::Int32 _RegisterBlackListUpdateTryTimes; // 0x5C
		::System::Boolean _RestrictInitialized_k__BackingField; // 0x60
		::System::Boolean _IsFromSession_k__BackingField; // 0x61
		::System::Int32 _RegisterFriendListUpdateTryTimes; // 0x64

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

		::System::Void TryStartOneTask(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYSTARTONETASK_OFFSET))(this, a1);
		}

		::System::Void TryFinishOneObject(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYFINISHONEOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean TryJoinMultiplayerGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYJOINMULTIPLAYERGAME_OFFSET))(this);
		}

		::System::Void _TryAvailableOneActivity(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__TRYAVAILABLEONEACTIVITY_OFFSET))(this, a1, a2);
		}

		::System::Void TrySyncAllActivityProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYSYNCALLACTIVITYPROGRESS_OFFSET))(this);
		}

		::System::Void _TryCompleteOneActivity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__TRYCOMPLETEONEACTIVITY_OFFSET))(this, a1);
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

		::System::Void set_IsPsnLogIn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SET_ISPSNLOGIN_OFFSET))(this, a1);
		}

		::System::Void _OnNPStateChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONNPSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnGameIntentGetSessionId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONGAMEINTENTGETSESSIONID_OFFSET))(this, a1);
		}

		::System::Void _OnGameIntentGetActivityId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONGAMEINTENTGETACTIVITYID_OFFSET))(this, a1);
		}

		::System::Void TrySetTrophy(::RPG::Client::AchievementData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYSETTROPHY_OFFSET))(this, a1);
		}

		::System::Void TrySyncAllTrophy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYSYNCALLTROPHY_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*>* RefreshBlackListPromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_REFRESHBLACKLISTPROMISE_OFFSET))(this);
		}

		::System::Void _OnGetBlackList(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONGETBLACKLIST_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*>* RefreshFriendList()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_REFRESHFRIENDLIST_OFFSET))(this);
		}

		::System::Void OnGetFriendList(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_ONGETFRIENDLIST_OFFSET))(this, a1);
		}

		::System::Void _TryQuery(::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>* a1, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__TRYQUERY_OFFSET))(this, a1, a2);
		}

		::System::Void TryInitializeRestrictStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYINITIALIZERESTRICTSTATUS_OFFSET))(this);
		}

		::System::Void _OnCommunicationRestrictionStatusCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONCOMMUNICATIONRESTRICTIONSTATUSCALLBACK_OFFSET))(this, a1);
		}

		::System::Void _TryRegisterFriendUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__TRYREGISTERFRIENDUPDATE_OFFSET))(this);
		}

		::System::Void _OnFriendListUpdate(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONFRIENDLISTUPDATE_OFFSET))(this, a1);
		}

		::System::Void _TryRegistBlackListUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__TRYREGISTBLACKLISTUPDATE_OFFSET))(this);
		}

		::System::Void _OnBlackListUpdate(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONBLACKLISTUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean IsPremium()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_ISPREMIUM_OFFSET))(this);
		}

		::System::Void PayPremium()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_PAYPREMIUM_OFFSET))(this);
		}

		::System::Void _OnPayPremiumCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER__ONPAYPREMIUMCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SessionInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SESSIONINIT_OFFSET))(this);
		}

		::System::Void SessionDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SESSIONDESTROY_OFFSET))(this);
		}

		::System::Void CreateSession(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Action_1<::System::Boolean>* a4, ::MiHoYo::SDK::MHYSDKC_Console_JoinRestriction a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Action_1<::System::Boolean>*, ::MiHoYo::SDK::MHYSDKC_Console_JoinRestriction))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_CREATESESSION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GetPSSessionDataWithSessionID(::System::String* a1, ::System::Action_1<::Class_1_C88E9CDFBEAC50C3*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_C88E9CDFBEAC50C3*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_GETPSSESSIONDATAWITHSESSIONID_OFFSET))(this, a1, a2);
		}

		::System::Void JoinSession(::System::String* a1, ::MiHoYo::SDK::MHYSDKC_Console_MemberType a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::MHYSDKC_Console_MemberType, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_JOINSESSION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LeaveSession(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_LEAVESESSION_OFFSET))(this, a1);
		}

		::System::Boolean IsInSession()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_ISINSESSION_OFFSET))(this);
		}

		::System::Void TryInvitePlayer(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_TRYINVITEPLAYER_OFFSET))(this, a1);
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

		::System::Void set_IsFromActivity(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SET_ISFROMACTIVITY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFromSession()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_GET_ISFROMSESSION_OFFSET))(this);
		}

		::System::Void set_IsFromSession(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SET_ISFROMSESSION_OFFSET))(this, a1);
		}

		::Class_1_C88E9CDFBEAC50C3* get_StartUpSessionData()
		{
			return ((::Class_1_C88E9CDFBEAC50C3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_GET_STARTUPSESSIONDATA_OFFSET))(this);
		}

		::System::Void set_StartUpSessionData(::Class_1_C88E9CDFBEAC50C3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C88E9CDFBEAC50C3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SET_STARTUPSESSIONDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_GET_ISRESTRICTED_OFFSET))(this);
		}

		::System::Void set_IsRestricted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SET_ISRESTRICTED_OFFSET))(this, a1);
		}

		::System::Boolean get_RestrictInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_GET_RESTRICTINITIALIZED_OFFSET))(this);
		}

		::System::Void set_RestrictInitialized(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER_SET_RESTRICTINITIALIZED_OFFSET))(this, a1);
		}
	};
}
