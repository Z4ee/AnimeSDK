#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TarotBookVersion.h"
#include "unitysdk/System/Object.h"

class Class_1_A34ED85ACDC37804;
namespace RPG::Client { class TarotBookInteraction; }
namespace RPG::Client { class TarotBookModule; }
namespace RPG::Client { class TarotBookStory; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_BEGINPOOLEXHAUSTEDPROCESS_OFFSET UNITYSDK_OFFSET(0xC9E7A60)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CHECKCANSELECTINTERACTION_OFFSET UNITYSDK_OFFSET(0xC9E8E00)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CHECKCANTRIGGERINTERACTION_OFFSET UNITYSDK_OFFSET(0xC9E8EC0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CHECKHASNEWMAIL_OFFSET UNITYSDK_OFFSET(0xC9E9D20)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_DECREMENTREFERENCECOUNT_OFFSET UNITYSDK_OFFSET(0xC9E3710)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_DESTROY_OFFSET UNITYSDK_OFFSET(0xC9E3840)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENDPOOLEXHAUSTEDPROCESS_OFFSET UNITYSDK_OFFSET(0xC9E8CB0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENTERBOOKLETFROMMAINPAGE_OFFSET UNITYSDK_OFFSET(0xC9E9790)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENTERCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0xC9E98E0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_EXITBOOKLET_OFFSET UNITYSDK_OFFSET(0xC9E9830)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_EXITCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0xC9E99A0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETALLINTERACTIONS_OFFSET UNITYSDK_OFFSET(0xC9E91D0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETCHARACTERDETAILSHOWSECONDS_OFFSET UNITYSDK_OFFSET(0xC9E9A60)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETDEFAULTINTERACTION_OFFSET UNITYSDK_OFFSET(0xC9E9010)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETMAXSTORYFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0xC9E9AD0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETPOOLSTORYCOUNTOFCHARACTER_OFFSET UNITYSDK_OFFSET(0xC9E8D00)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETSORTEDINTERACTIONS_OFFSET UNITYSDK_OFFSET(0xC9E9260)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ACTIVEINTERACTION_OFFSET UNITYSDK_OFFSET(0xC9E8470)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_CANEXECUTEINTERACTION_OFFSET UNITYSDK_OFFSET(0xC9E85F0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_CANREMEMBER_OFFSET UNITYSDK_OFFSET(0xC9E8500)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_CANSWITCHREVEALEDSTATE_OFFSET UNITYSDK_OFFSET(0xC9E84F0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_EXECUTEDINTERACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC9E83B0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_HASCOVERSHOWN_OFFSET UNITYSDK_OFFSET(0xC9E8430)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_HASENTEREDBOOKLETFROMMAINPAGE_OFFSET UNITYSDK_OFFSET(0xC9E83D0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISCANDESTROY_OFFSET UNITYSDK_OFFSET(0xC9E37E0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISCUSTOMIZATION_OFFSET UNITYSDK_OFFSET(0xC9E8330)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISFINALVERSION_OFFSET UNITYSDK_OFFSET(0xC9E85E0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISFIRSTENTERBOOKLETFROMMAINPAGE_OFFSET UNITYSDK_OFFSET(0xC9E83F0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISINPOOLEXHAUSTED_OFFSET UNITYSDK_OFFSET(0xC9E8350)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISREVEALED_OFFSET UNITYSDK_OFFSET(0xC9E82D0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_LASTINTERACTION_OFFSET UNITYSDK_OFFSET(0xC9E8450)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_POOLSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0xC9E8360)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_REPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xC9E8410)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_INCREMENTREFERENCECOUNT_OFFSET UNITYSDK_OFFSET(0xC9E3470)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0xC9E33F0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKCOVERSHOWN_OFFSET UNITYSDK_OFFSET(0xC9E9880)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKREPLAYED_OFFSET UNITYSDK_OFFSET(0xC9E97E0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKSTORYFINISHED_OFFSET UNITYSDK_OFFSET(0xC9D7910)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_PLAYNOUSTALKPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC9E8980)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_RECORDINTERACTIONSELECTED_OFFSET UNITYSDK_OFFSET(0xC9E94B0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_EXECUTEDINTERACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC9E83C0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_HASCOVERSHOWN_OFFSET UNITYSDK_OFFSET(0xC9E8440)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_HASENTEREDBOOKLETFROMMAINPAGE_OFFSET UNITYSDK_OFFSET(0xC9E83E0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_ISCUSTOMIZATION_OFFSET UNITYSDK_OFFSET(0xC9E8340)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_ISFIRSTENTERBOOKLETFROMMAINPAGE_OFFSET UNITYSDK_OFFSET(0xC9E8400)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_REPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xC9E8420)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_STOPINTERACTION_OFFSET UNITYSDK_OFFSET(0xC9E9180)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SWITCHISSHOWREVEALED_OFFSET UNITYSDK_OFFSET(0xC9E9CD0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_TRYPLAYINTERACTION_OFFSET UNITYSDK_OFFSET(0xC9E90C0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_UNLOCKALLINTERACTIONS_OFFSET UNITYSDK_OFFSET(0xC9E9550)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC9E3360)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__GETBGMSTATE_OFFSET UNITYSDK_OFFSET(0xC9E9D90)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__ONINTERACTIONHASEXECUTED_OFFSET UNITYSDK_OFFSET(0xC9E9E50)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__STARTBGM_OFFSET UNITYSDK_OFFSET(0xC9E8600)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__STOPBGM_OFFSET UNITYSDK_OFFSET(0xC9E87E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookProcessContext_TypeDefinitionIndex = 63687;

	class TarotBookProcessContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>* _Interactions; // 0x10
		::Class_1_A34ED85ACDC37804* _InteractionPlayer; // 0x18
		::System::String* _CurrentBGMState; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HasFinishedStoryIDs; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>* _ExhaustedPoolStories; // 0x30
		::RPG::Client::TarotBookModule* _Module; // 0x38
		::System::UInt32 _ReplayCount_k__BackingField; // 0x40
		::System::Boolean _IsFirstEnterBookletFromMainPage_k__BackingField; // 0x44
		::System::Boolean _IsCustomization_k__BackingField; // 0x45
		::System::Boolean _HasEnteredBookletFromMainPage_k__BackingField; // 0x46
		::System::Boolean _IsFixedOldBGMState; // 0x47
		::System::UInt64 _ExitCharacterDetailMsTimeStamp; // 0x48
		::RPG::Client::TarotBookVersion _Version; // 0x50
		::System::UInt32 _ExecutedInteractionCount_k__BackingField; // 0x54
		::System::UInt64 _LastInteractionExecuteMsTimeStamp; // 0x58
		::System::UInt64 _EnterCharacterDetailMsTimeStamp; // 0x60
		::System::Boolean _IsInNousTalkPerformance; // 0x68
		::System::Boolean _HasCoverShown_k__BackingField; // 0x69
		::System::Boolean _IsShowRevealed; // 0x6A
		::System::UInt32 _ReferenceCount; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsRevealed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISREVEALED_OFFSET))(this);
		}

		::System::Boolean get_IsCustomization()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISCUSTOMIZATION_OFFSET))(this);
		}

		::System::Void set_IsCustomization(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_ISCUSTOMIZATION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInPoolExhausted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISINPOOLEXHAUSTED_OFFSET))(this);
		}

		::System::Int32 get_PoolStoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_POOLSTORYCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsCanDestroy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISCANDESTROY_OFFSET))(this);
		}

		::System::UInt32 get_ExecutedInteractionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_EXECUTEDINTERACTIONCOUNT_OFFSET))(this);
		}

		::System::Void set_ExecutedInteractionCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_EXECUTEDINTERACTIONCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_HasEnteredBookletFromMainPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_HASENTEREDBOOKLETFROMMAINPAGE_OFFSET))(this);
		}

		::System::Void set_HasEnteredBookletFromMainPage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_HASENTEREDBOOKLETFROMMAINPAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstEnterBookletFromMainPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISFIRSTENTERBOOKLETFROMMAINPAGE_OFFSET))(this);
		}

		::System::Void set_IsFirstEnterBookletFromMainPage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_ISFIRSTENTERBOOKLETFROMMAINPAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReplayCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_REPLAYCOUNT_OFFSET))(this);
		}

		::System::Void set_ReplayCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_REPLAYCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_HasCoverShown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_HASCOVERSHOWN_OFFSET))(this);
		}

		::System::Void set_HasCoverShown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_HASCOVERSHOWN_OFFSET))(this, a1);
		}

		::RPG::Client::TarotBookInteraction* get_LastInteraction()
		{
			return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_LASTINTERACTION_OFFSET))(this);
		}

		::RPG::Client::TarotBookInteraction* get_ActiveInteraction()
		{
			return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ACTIVEINTERACTION_OFFSET))(this);
		}

		::System::Boolean get_CanSwitchRevealedState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_CANSWITCHREVEALEDSTATE_OFFSET))(this);
		}

		::System::Boolean get_CanRemember()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_CANREMEMBER_OFFSET))(this);
		}

		::System::Boolean get_IsFinalVersion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISFINALVERSION_OFFSET))(this);
		}

		::System::Boolean get_CanExecuteInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_CANEXECUTEINTERACTION_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::TarotBookModule* a1, ::RPG::Client::TarotBookVersion a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookModule*, ::RPG::Client::TarotBookVersion))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_DESTROY_OFFSET))(this);
		}

		::System::Void IncrementReferenceCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_INCREMENTREFERENCECOUNT_OFFSET))(this);
		}

		::System::Void DecrementReferenceCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_DECREMENTREFERENCECOUNT_OFFSET))(this);
		}

		::System::Void PlayNousTalkPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_PLAYNOUSTALKPERFORMANCE_OFFSET))(this);
		}

		::System::Void BeginPoolExhaustedProcess(::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_BEGINPOOLEXHAUSTEDPROCESS_OFFSET))(this, a1);
		}

		::System::Void EndPoolExhaustedProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENDPOOLEXHAUSTEDPROCESS_OFFSET))(this);
		}

		::System::Int32 GetPoolStoryCountOfCharacter(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETPOOLSTORYCOUNTOFCHARACTER_OFFSET))(this, a1);
		}

		::System::Boolean CheckCanSelectInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CHECKCANSELECTINTERACTION_OFFSET))(this);
		}

		::System::Boolean CheckCanTriggerInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CHECKCANTRIGGERINTERACTION_OFFSET))(this);
		}

		::RPG::Client::TarotBookInteraction* GetDefaultInteraction()
		{
			return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETDEFAULTINTERACTION_OFFSET))(this);
		}

		::System::Boolean TryPlayInteraction(::RPG::Client::TarotBookInteraction* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_TRYPLAYINTERACTION_OFFSET))(this, a1);
		}

		::System::Void StopInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_STOPINTERACTION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>* GetAllInteractions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETALLINTERACTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>* GetSortedInteractions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETSORTEDINTERACTIONS_OFFSET))(this);
		}

		::System::Void RecordInteractionSelected(::RPG::Client::TarotBookInteraction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_RECORDINTERACTIONSELECTED_OFFSET))(this, a1);
		}

		::System::Void UnlockAllInteractions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_UNLOCKALLINTERACTIONS_OFFSET))(this);
		}

		::System::Void EnterBookletFromMainPage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENTERBOOKLETFROMMAINPAGE_OFFSET))(this, a1);
		}

		::System::Void MarkReplayed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKREPLAYED_OFFSET))(this);
		}

		::System::Void ExitBooklet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_EXITBOOKLET_OFFSET))(this);
		}

		::System::Void MarkCoverShown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKCOVERSHOWN_OFFSET))(this);
		}

		::System::Void MarkStoryFinished(::RPG::Client::TarotBookStory* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKSTORYFINISHED_OFFSET))(this, a1);
		}

		::System::Void EnterCharacterDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENTERCHARACTERDETAIL_OFFSET))(this);
		}

		::System::Void ExitCharacterDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_EXITCHARACTERDETAIL_OFFSET))(this);
		}

		::System::UInt32 GetCharacterDetailShowSeconds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETCHARACTERDETAILSHOWSECONDS_OFFSET))(this);
		}

		::System::UInt32 GetMaxStoryFinishedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETMAXSTORYFINISHEDCOUNT_OFFSET))(this);
		}

		::System::Void SwitchIsShowRevealed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SWITCHISSHOWREVEALED_OFFSET))(this);
		}

		::System::Boolean CheckHasNewMail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CHECKHASNEWMAIL_OFFSET))(this);
		}

		::System::String* _GetBGMState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__GETBGMSTATE_OFFSET))(this);
		}

		::System::Void _StartBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__STARTBGM_OFFSET))(this);
		}

		::System::Void _StopBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__STOPBGM_OFFSET))(this);
		}

		::System::Void _OnInteractionHasExecuted(::RPG::Client::TarotBookInteraction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__ONINTERACTIONHASEXECUTED_OFFSET))(this, a1);
		}
	};
}
