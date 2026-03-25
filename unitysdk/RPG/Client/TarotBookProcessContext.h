#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TarotBookVersion.h"
#include "unitysdk/System/Object.h"

class Class_1_4E0C019392D6B057;
namespace RPG::Client { class TarotBookInteraction; }
namespace RPG::Client { class TarotBookModule; }
namespace RPG::Client { class TarotBookStory; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_BEGINPOOLEXHAUSTEDPROCESS_OFFSET UNITYSDK_OFFSET(0xA55BF00)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CHECKCANSELECTINTERACTION_OFFSET UNITYSDK_OFFSET(0xA55D120)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CHECKCANTRIGGERINTERACTION_OFFSET UNITYSDK_OFFSET(0xA55D290)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CHECKHASNEWMAIL_OFFSET UNITYSDK_OFFSET(0xA55E060)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_DECREMENTREFERENCECOUNT_OFFSET UNITYSDK_OFFSET(0xA5584C0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_DESTROY_OFFSET UNITYSDK_OFFSET(0xA5585F0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENDPOOLEXHAUSTEDPROCESS_OFFSET UNITYSDK_OFFSET(0xA55CFE0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENTERBOOKLETFROMMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA55DAB0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENTERCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0xA55DC00)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_EXITBOOKLET_OFFSET UNITYSDK_OFFSET(0xA55DB50)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_EXITCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0xA55DCC0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETALLINTERACTIONS_OFFSET UNITYSDK_OFFSET(0xA55D5A0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETCHARACTERDETAILSHOWSECONDS_OFFSET UNITYSDK_OFFSET(0xA55DD80)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETDEFAULTINTERACTION_OFFSET UNITYSDK_OFFSET(0xA55D3E0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETMAXSTORYFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0xA55DDF0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETPOOLSTORYCOUNTOFCHARACTER_OFFSET UNITYSDK_OFFSET(0xA55D030)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETSORTEDINTERACTIONS_OFFSET UNITYSDK_OFFSET(0xA55D630)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ACTIVEINTERACTION_OFFSET UNITYSDK_OFFSET(0xA55C840)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_CANEXECUTEINTERACTION_OFFSET UNITYSDK_OFFSET(0xA55C980)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_CANREMEMBER_OFFSET UNITYSDK_OFFSET(0xA55C8D0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_CANSWITCHREVEALEDSTATE_OFFSET UNITYSDK_OFFSET(0xA55C8C0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_EXECUTEDINTERACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA55C780)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_HASCOVERSHOWN_OFFSET UNITYSDK_OFFSET(0xA55C800)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_HASENTEREDBOOKLETFROMMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA55C7A0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISCANDESTROY_OFFSET UNITYSDK_OFFSET(0xA558590)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISCUSTOMIZATION_OFFSET UNITYSDK_OFFSET(0xA55C700)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISFINALVERSION_OFFSET UNITYSDK_OFFSET(0xA55C970)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISFIRSTENTERBOOKLETFROMMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA55C7C0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISINPOOLEXHAUSTED_OFFSET UNITYSDK_OFFSET(0xA55C720)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISREVEALED_OFFSET UNITYSDK_OFFSET(0xA55C6A0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_LASTINTERACTION_OFFSET UNITYSDK_OFFSET(0xA55C820)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_POOLSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0xA55C730)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_REPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xA55C7E0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_INCREMENTREFERENCECOUNT_OFFSET UNITYSDK_OFFSET(0xA5582A0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0xA558180)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKCOVERSHOWN_OFFSET UNITYSDK_OFFSET(0xA55DBA0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKREPLAYED_OFFSET UNITYSDK_OFFSET(0xA55DB00)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKSTORYFINISHED_OFFSET UNITYSDK_OFFSET(0xA54C8A0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_PLAYNOUSTALKPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA55CD00)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_RECORDINTERACTIONSELECTED_OFFSET UNITYSDK_OFFSET(0xA55D7F0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_EXECUTEDINTERACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA55C790)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_HASCOVERSHOWN_OFFSET UNITYSDK_OFFSET(0xA55C810)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_HASENTEREDBOOKLETFROMMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA55C7B0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_ISCUSTOMIZATION_OFFSET UNITYSDK_OFFSET(0xA55C710)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_ISFIRSTENTERBOOKLETFROMMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA55C7D0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_REPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xA55C7F0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_STOPINTERACTION_OFFSET UNITYSDK_OFFSET(0xA55D550)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SWITCHISSHOWREVEALED_OFFSET UNITYSDK_OFFSET(0xA55E010)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_TRYPLAYINTERACTION_OFFSET UNITYSDK_OFFSET(0xA55D4A0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_UNLOCKALLINTERACTIONS_OFFSET UNITYSDK_OFFSET(0xA55D890)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA5580F0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__GETBGMSTATE_OFFSET UNITYSDK_OFFSET(0xA55E0D0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__ONINTERACTIONHASEXECUTED_OFFSET UNITYSDK_OFFSET(0xA55E190)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__STARTBGM_OFFSET UNITYSDK_OFFSET(0xA55C990)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__STOPBGM_OFFSET UNITYSDK_OFFSET(0xA55CB70)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookProcessContext_TypeDefinitionIndex = 55560;

	class TarotBookProcessContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HasFinishedStoryIDs; // 0x10
		::Class_1_4E0C019392D6B057* _InteractionPlayer; // 0x18
		::RPG::Client::TarotBookModule* _Module; // 0x20
		::System::String* _CurrentBGMState; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>* _Interactions; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>* _ExhaustedPoolStories; // 0x38
		::System::UInt32 _ReplayCount_k__BackingField; // 0x40
		::System::UInt32 _ReferenceCount; // 0x44
		::System::UInt64 _EnterCharacterDetailMsTimeStamp; // 0x48
		::System::Boolean _IsFixedOldBGMState; // 0x50
		::System::Boolean _HasEnteredBookletFromMainPage_k__BackingField; // 0x51
		::System::Boolean _IsInNousTalkPerformance; // 0x52
		::RPG::Client::TarotBookVersion _Version; // 0x54
		::System::UInt64 _ExitCharacterDetailMsTimeStamp; // 0x58
		::System::UInt32 _ExecutedInteractionCount_k__BackingField; // 0x60
		::System::Boolean _HasCoverShown_k__BackingField; // 0x64
		::System::Boolean _IsFirstEnterBookletFromMainPage_k__BackingField; // 0x65
		::System::Boolean _IsShowRevealed; // 0x66
		::System::Boolean _IsCustomization_k__BackingField; // 0x67
		::System::UInt64 _LastInteractionExecuteMsTimeStamp; // 0x68

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

		::System::Void set_IsCustomization(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_ISCUSTOMIZATION_OFFSET))(this, value);
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

		::System::Void set_ExecutedInteractionCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_EXECUTEDINTERACTIONCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_HasEnteredBookletFromMainPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_HASENTEREDBOOKLETFROMMAINPAGE_OFFSET))(this);
		}

		::System::Void set_HasEnteredBookletFromMainPage(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_HASENTEREDBOOKLETFROMMAINPAGE_OFFSET))(this, value);
		}

		::System::Boolean get_IsFirstEnterBookletFromMainPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISFIRSTENTERBOOKLETFROMMAINPAGE_OFFSET))(this);
		}

		::System::Void set_IsFirstEnterBookletFromMainPage(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_ISFIRSTENTERBOOKLETFROMMAINPAGE_OFFSET))(this, value);
		}

		::System::UInt32 get_ReplayCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_REPLAYCOUNT_OFFSET))(this);
		}

		::System::Void set_ReplayCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_REPLAYCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_HasCoverShown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_HASCOVERSHOWN_OFFSET))(this);
		}

		::System::Void set_HasCoverShown(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_HASCOVERSHOWN_OFFSET))(this, value);
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

		::System::Void Init(::RPG::Client::TarotBookModule* module, ::RPG::Client::TarotBookVersion version)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookModule*, ::RPG::Client::TarotBookVersion))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_INIT_OFFSET))(this, module, version);
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

		::System::Void BeginPoolExhaustedProcess(::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>* stories)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_BEGINPOOLEXHAUSTEDPROCESS_OFFSET))(this, stories);
		}

		::System::Void EndPoolExhaustedProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENDPOOLEXHAUSTEDPROCESS_OFFSET))(this);
		}

		::System::Int32 GetPoolStoryCountOfCharacter(::System::UInt32 characterID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETPOOLSTORYCOUNTOFCHARACTER_OFFSET))(this, characterID);
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

		::System::Boolean TryPlayInteraction(::RPG::Client::TarotBookInteraction* interaction)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_TRYPLAYINTERACTION_OFFSET))(this, interaction);
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

		::System::Void RecordInteractionSelected(::RPG::Client::TarotBookInteraction* interaction)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_RECORDINTERACTIONSELECTED_OFFSET))(this, interaction);
		}

		::System::Void UnlockAllInteractions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_UNLOCKALLINTERACTIONS_OFFSET))(this);
		}

		::System::Void EnterBookletFromMainPage(::System::Boolean isFirst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENTERBOOKLETFROMMAINPAGE_OFFSET))(this, isFirst);
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

		::System::Void MarkStoryFinished(::RPG::Client::TarotBookStory* story)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKSTORYFINISHED_OFFSET))(this, story);
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

		::System::Void _OnInteractionHasExecuted(::RPG::Client::TarotBookInteraction* interaction)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__ONINTERACTIONHASEXECUTED_OFFSET))(this, interaction);
		}
	};
}
