#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TarotBookVersion.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_5762E7F7BCE162A6;
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class TarotBookBooklet; }
namespace RPG::Client { class TarotBookCard; }
namespace RPG::Client { class TarotBookCharacter; }
namespace RPG::Client { class TarotBookClue; }
namespace RPG::Client { class TarotBookDeleteData; }
namespace RPG::Client { class TarotBookExperimentContext; }
namespace RPG::Client { class TarotBookInteraction; }
namespace RPG::Client { class TarotBookMailManager; }
namespace RPG::Client { class TarotBookProcessContext; }
namespace RPG::Client { class TarotBookReadReward; }
namespace RPG::Client { class TarotBookStory; }
namespace RPG::Client { class TarotBookWikiManager; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTBOOKMODULE_ADDRECONNECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B4236A0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKALLEIDOLONSHASGOT_OFFSET UNITYSDK_OFFSET(0x1B41F880)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKCANTAKECOLLECTREWARD_OFFSET UNITYSDK_OFFSET(0x1B41E790)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKCANTAKEREADREWARD_OFFSET UNITYSDK_OFFSET(0x1B41E600)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKCANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1B41E5A0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKCHARACTERHASUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B422390)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKFINALPACKHASOPENED_OFFSET UNITYSDK_OFFSET(0x1B4231D0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKFINALSTORYHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B423230)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKFINALVERSIONHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B4237F0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKHASEXTENDCOLLECTREWARD_OFFSET UNITYSDK_OFFSET(0x1B41EFA0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKHASEXTENDREADREWARD_OFFSET UNITYSDK_OFFSET(0x1B41E8D0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKINTERACTIONHASFINISHED_OFFSET UNITYSDK_OFFSET(0x1B422750)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKISCURRENTSTORYLINECANUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B4200E0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKISENTRANCESHOW_OFFSET UNITYSDK_OFFSET(0x1B41FEE0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKISFIRSTENTERBOOKLETFROMENTRANCE_OFFSET UNITYSDK_OFFSET(0x1B4204A0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKISSPECIALCOLLECTQUEST_OFFSET UNITYSDK_OFFSET(0x1B41FB60)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKSTORYHASFINISHED_OFFSET UNITYSDK_OFFSET(0x1B4224C0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKSTORYHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B422430)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKUPDATEDVERSIONHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B4238D0)
#define RPG_CLIENT_TAROTBOOKMODULE_FILLINTERACTIONSTO_OFFSET UNITYSDK_OFFSET(0x1B422520)
#define RPG_CLIENT_TAROTBOOKMODULE_FILLNEWSTORYIDSTO_OFFSET UNITYSDK_OFFSET(0x1B4209D0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETALLCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1B41D770)
#define RPG_CLIENT_TAROTBOOKMODULE_GETALLREADREWARD_OFFSET UNITYSDK_OFFSET(0x1B41F4E0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETALLSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1B420930)
#define RPG_CLIENT_TAROTBOOKMODULE_GETBOOKLET_OFFSET UNITYSDK_OFFSET(0x1B420FB0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCARDPACKHINT_OFFSET UNITYSDK_OFFSET(0x1B422FA0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCARD_OFFSET UNITYSDK_OFFSET(0x1B41DEA0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCHARACTER_OFFSET UNITYSDK_OFFSET(0x1B414820)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCLUESLISTBYCARD_OFFSET UNITYSDK_OFFSET(0x1B421950)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCLUE_OFFSET UNITYSDK_OFFSET(0x1B420980)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCOLLECTQUESTDATALIST_OFFSET UNITYSDK_OFFSET(0x1B41F940)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTCARDS_OFFSET UNITYSDK_OFFSET(0x1B41D840)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTCLUES_OFFSET UNITYSDK_OFFSET(0x1B41DF40)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTMAILMANAGER_OFFSET UNITYSDK_OFFSET(0x1B422F60)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTWIKIMANAGER_OFFSET UNITYSDK_OFFSET(0x1B422F20)
#define RPG_CLIENT_TAROTBOOKMODULE_GETDELETEDATALIST_OFFSET UNITYSDK_OFFSET(0x1B423450)
#define RPG_CLIENT_TAROTBOOKMODULE_GETENERGY_OFFSET UNITYSDK_OFFSET(0x1B421020)
#define RPG_CLIENT_TAROTBOOKMODULE_GETEXTENDCOLLECTQUESTIDS_OFFSET UNITYSDK_OFFSET(0x1B41F120)
#define RPG_CLIENT_TAROTBOOKMODULE_GETEXTENDREADREWARDIDS_OFFSET UNITYSDK_OFFSET(0x1B41EAB0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETINTERACTION_OFFSET UNITYSDK_OFFSET(0x1B422640)
#define RPG_CLIENT_TAROTBOOKMODULE_GETLASTCARDPACKHINT_OFFSET UNITYSDK_OFFSET(0x1B423110)
#define RPG_CLIENT_TAROTBOOKMODULE_GETNEWSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1B420860)
#define RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEEXPERIMENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B422C80)
#define RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEMAILMANAGER_OFFSET UNITYSDK_OFFSET(0x1B422D50)
#define RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEPROCESSCONTEXTWITHVERSION_OFFSET UNITYSDK_OFFSET(0x1B4229E0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEPROCESSCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B4227C0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEWIKIMANAGER_OFFSET UNITYSDK_OFFSET(0x1B422E40)
#define RPG_CLIENT_TAROTBOOKMODULE_GETPROCESSCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B416820)
#define RPG_CLIENT_TAROTBOOKMODULE_GETRELATIVEAVATARID_OFFSET UNITYSDK_OFFSET(0x1B4232E0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETSTARPANELLOCKEDIMGBYPOSITION_OFFSET UNITYSDK_OFFSET(0x1B421070)
#define RPG_CLIENT_TAROTBOOKMODULE_GETSTORY_OFFSET UNITYSDK_OFFSET(0x1B415C40)
#define RPG_CLIENT_TAROTBOOKMODULE_GETUNIQUECARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B41DEF0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETUNLOCKEDSTORYCOUNTBYCHARACTER_OFFSET UNITYSDK_OFFSET(0x1B420800)
#define RPG_CLIENT_TAROTBOOKMODULE_GETUNLOCKEDSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4208B0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETUNLOCKSTORYBYCARD_OFFSET UNITYSDK_OFFSET(0x1B4211B0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETVERSION_OFFSET UNITYSDK_OFFSET(0x1B41D5A0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_ALLEIDOLONSHASGOTQUESTID_OFFSET UNITYSDK_OFFSET(0x1B41C470)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_CHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B41C8C0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_CRYSTALGUIDELINETIME_OFFSET UNITYSDK_OFFSET(0x1B41BDE0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_EPILOGUEUNLOCKID_OFFSET UNITYSDK_OFFSET(0x1B414B00)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_FEMALESPECIALCOLLECTQUESTID_OFFSET UNITYSDK_OFFSET(0x1B41C380)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_FINALPACKID_OFFSET UNITYSDK_OFFSET(0x1B41D2F0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_FINALSTORYID_OFFSET UNITYSDK_OFFSET(0x1B41D400)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_FINALVERSIONSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1B41C660)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_GOODBYEINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1B41C0E0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HASCARD_OFFSET UNITYSDK_OFFSET(0x1B41B750)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HASENERGY_OFFSET UNITYSDK_OFFSET(0x1B41B8D0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HASNEWREWARD_OFFSET UNITYSDK_OFFSET(0x1B41C910)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HASNEWSTORY_OFFSET UNITYSDK_OFFSET(0x1B41B930)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B41CB00)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDNAME_OFFSET UNITYSDK_OFFSET(0x1B41C950)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B41CE60)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDSUBDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B41CCB0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_INTERACTIONUNLOCKMAXATTEMPTTIMES_OFFSET UNITYSDK_OFFSET(0x1B41C560)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_ISUPDATEDVERSION_OFFSET UNITYSDK_OFFSET(0x1B41D510)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_MALESPECIALCOLLECTQUESTID_OFFSET UNITYSDK_OFFSET(0x1B41C290)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_MARKSECTIONHASREADDELAYSECONDS_OFFSET UNITYSDK_OFFSET(0x1B41BFE0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_NOUSTALKMASKCHARACTER_OFFSET UNITYSDK_OFFSET(0x1B41D040)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_NOUSTALKPERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x1B41D1E0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_STARPAGEFILLSECONDS_OFFSET UNITYSDK_OFFSET(0x1B41C720)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_STARPAGEHINTHOLDSECONDS_OFFSET UNITYSDK_OFFSET(0x1B41BEE0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_TALKPROTECTTIME_OFFSET UNITYSDK_OFFSET(0x1B41BA80)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_TALKTEXTSPEED_OFFSET UNITYSDK_OFFSET(0x1B41BB90)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_TALKTRIGGERCD_OFFSET UNITYSDK_OFFSET(0x1B41BCD0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_UNLOCKEDCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B41C770)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_UPDATEDVERSIONSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1B41C1D0)
#define RPG_CLIENT_TAROTBOOKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B4239B0)
#define RPG_CLIENT_TAROTBOOKMODULE_ISTAROTBOOKFILTERAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B420350)
#define RPG_CLIENT_TAROTBOOKMODULE_MARKALLCOLLECTREWARDSHAVESHOWN_OFFSET UNITYSDK_OFFSET(0x1B41F320)
#define RPG_CLIENT_TAROTBOOKMODULE_MARKALLREADREWARDSHAVESHOWN_OFFSET UNITYSDK_OFFSET(0x1B41ED80)
#define RPG_CLIENT_TAROTBOOKMODULE_MARKEXPERIMENTSEEN_OFFSET UNITYSDK_OFFSET(0x1B420700)
#define RPG_CLIENT_TAROTBOOKMODULE_MARKINTERACTIONSUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B4225E0)
#define RPG_CLIENT_TAROTBOOKMODULE_MARKNEWVERSIONREVEALED_OFFSET UNITYSDK_OFFSET(0x1B420600)
#define RPG_CLIENT_TAROTBOOKMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1B425570)
#define RPG_CLIENT_TAROTBOOKMODULE_OPENPACK_OFFSET UNITYSDK_OFFSET(0x1B421110)
#define RPG_CLIENT_TAROTBOOKMODULE_QUICKUNLOCKALLSTORIES_OFFSET UNITYSDK_OFFSET(0x1B421160)
#define RPG_CLIENT_TAROTBOOKMODULE_REMOVERECONNECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B423780)
#define RPG_CLIENT_TAROTBOOKMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x1B41D600)
#define RPG_CLIENT_TAROTBOOKMODULE_SETISFIRSTENTERBOOKLETFROMENTRANCE_OFFSET UNITYSDK_OFFSET(0x1B420550)
#define RPG_CLIENT_TAROTBOOKMODULE_TAKEALLCOLLECTREWARDS_OFFSET UNITYSDK_OFFSET(0x1B41FBE0)
#define RPG_CLIENT_TAROTBOOKMODULE_TAKEALLREADREWARDS_OFFSET UNITYSDK_OFFSET(0x1B41F570)
#define RPG_CLIENT_TAROTBOOKMODULE_TRYCONSUMEUNLOCKHINTFLAG_OFFSET UNITYSDK_OFFSET(0x1B416380)
#define RPG_CLIENT_TAROTBOOKMODULE_TRYDESTROYPROCESSCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B422B30)
#define RPG_CLIENT_TAROTBOOKMODULE_UNLOCKSTORY_OFFSET UNITYSDK_OFFSET(0x1B422140)
#define RPG_CLIENT_TAROTBOOKMODULE__ADDELEMENTTOLISTMAP_OFFSET UNITYSDK_OFFSET(0x1B426E20)
#define RPG_CLIENT_TAROTBOOKMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B4254A0)
#define RPG_CLIENT_TAROTBOOKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B424F00)
#define RPG_CLIENT_TAROTBOOKMODULE__AUTOFILLDEFAULTSHOWNCOLLECTQUESTIDS_OFFSET UNITYSDK_OFFSET(0x1B426C00)
#define RPG_CLIENT_TAROTBOOKMODULE__AUTOFILLDEFAULTSHOWNREADREWARDIDS_OFFSET UNITYSDK_OFFSET(0x1B4269E0)
#define RPG_CLIENT_TAROTBOOKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B427000)
#define RPG_CLIENT_TAROTBOOKMODULE__FILLCURRENTCARDSTO_OFFSET UNITYSDK_OFFSET(0x1B41D8D0)
#define RPG_CLIENT_TAROTBOOKMODULE__FILLCURRENTCLUESTO_OFFSET UNITYSDK_OFFSET(0x1B41DFD0)
#define RPG_CLIENT_TAROTBOOKMODULE__HANDLEPOOLEXHAUSTED_OFFSET UNITYSDK_OFFSET(0x1B426020)
#define RPG_CLIENT_TAROTBOOKMODULE__INITCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1B4243E0)
#define RPG_CLIENT_TAROTBOOKMODULE__INITCOLLECTQUESTIDS_OFFSET UNITYSDK_OFFSET(0x1B424D20)
#define RPG_CLIENT_TAROTBOOKMODULE__INITINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x1B4246A0)
#define RPG_CLIENT_TAROTBOOKMODULE__INITREADREWARDS_OFFSET UNITYSDK_OFFSET(0x1B424AA0)
#define RPG_CLIENT_TAROTBOOKMODULE__ONSERVERPREFREFRESH_OFFSET UNITYSDK_OFFSET(0x1B426980)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKFINISHINTERACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0x1B426660)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKFINISHSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x1B426410)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1B4256D0)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKMODIFYENERGYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B4265C0)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKMULTIOPENPACKANDUNLOCKSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x1B4268F0)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKOPENPACKSCRSP_OFFSET UNITYSDK_OFFSET(0x1B425880)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKSYNCDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B4257F0)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKUNLOCKINTERACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0x1B426740)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKUNLOCKSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x1B4259F0)
#define RPG_CLIENT_TAROTBOOKMODULE__PREPARERELATIVESUBMISSIONS_OFFSET UNITYSDK_OFFSET(0x1B41D660)
#define RPG_CLIENT_TAROTBOOKMODULE__PREPROCESSPOOLS_OFFSET UNITYSDK_OFFSET(0x1B423A50)
#define RPG_CLIENT_TAROTBOOKMODULE__PREPROCESSSTARPANELIMG_OFFSET UNITYSDK_OFFSET(0x1B4241A0)
#define RPG_CLIENT_TAROTBOOKMODULE__PREPROCESSSTORIES_OFFSET UNITYSDK_OFFSET(0x1B423DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookModule_TypeDefinitionIndex = 68062;

	class TarotBookModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::TarotBookMailManager* _MailManager; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _PoolToStoriesMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _StarPanelLockedImgMap; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::TarotBookReadReward*>* _ReadRewards; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::TarotBookCharacter*>* _Characters; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockStoryHintFlags; // 0x38
		::RPG::Client::TarotBookWikiManager* _WikiManager; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _CardToStoriesMap; // 0x48
		::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::Client::TarotBookStory*>* _Stories; // 0x50
		::RPG::Client::TarotBookExperimentContext* _ExperimentContext; // 0x58
		::RPG::Client::TarotBookProcessContext* _CurrentProcessContext; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _StoryToPoolMap; // 0x68
		::System::Collections::Generic::List_1<::System::Action*>* _ReconnectCallbacks; // 0x70
		::Class_1_5762E7F7BCE162A6* _ServerAgent; // 0x78
		::System::Collections::Generic::List_1<::System::UInt32>* _CollectQuestIDs; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>* _Interactions; // 0x88
		::System::Nullable_1<::System::UInt32> _EpilogueUnlockID; // 0x90
		::System::Nullable_1<::System::UInt32> _NousTalkPerformanceID; // 0x98
		::System::Nullable_1<::System::Char> _NousReplaceCharacter; // 0xA0
		::System::Nullable_1<::System::UInt32> _FinalPackID; // 0xA4
		::System::Nullable_1<::System::UInt32> _FinalStoryID; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasCard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HASCARD_OFFSET))(this);
		}

		::System::Boolean get_HasEnergy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HASENERGY_OFFSET))(this);
		}

		::System::Boolean get_HasNewStory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HASNEWSTORY_OFFSET))(this);
		}

		::System::Single get_TalkProtectTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_TALKPROTECTTIME_OFFSET))(this);
		}

		::System::Single get_TalkTextSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_TALKTEXTSPEED_OFFSET))(this);
		}

		::System::Single get_TalkTriggerCD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_TALKTRIGGERCD_OFFSET))(this);
		}

		::System::Single get_CrystalGuideLineTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_CRYSTALGUIDELINETIME_OFFSET))(this);
		}

		::System::Single get_StarPageHintHoldSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_STARPAGEHINTHOLDSECONDS_OFFSET))(this);
		}

		::System::Single get_MarkSectionHasReadDelaySeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_MARKSECTIONHASREADDELAYSECONDS_OFFSET))(this);
		}

		::System::UInt32 get_GoodbyeInteractionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_GOODBYEINTERACTIONID_OFFSET))(this);
		}

		::System::UInt32 get_UpdatedVersionSubmissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_UPDATEDVERSIONSUBMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get_MaleSpecialCollectQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_MALESPECIALCOLLECTQUESTID_OFFSET))(this);
		}

		::System::UInt32 get_FemaleSpecialCollectQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_FEMALESPECIALCOLLECTQUESTID_OFFSET))(this);
		}

		::System::UInt32 get_AllEidolonsHasGotQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_ALLEIDOLONSHASGOTQUESTID_OFFSET))(this);
		}

		::System::UInt32 get_InteractionUnlockMaxAttemptTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_INTERACTIONUNLOCKMAXATTEMPTTIMES_OFFSET))(this);
		}

		::System::UInt32 get_FinalVersionSubmissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_FINALVERSIONSUBMISSIONID_OFFSET))(this);
		}

		::System::Single get_StarPageFillSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_STARPAGEFILLSECONDS_OFFSET))(this);
		}

		::System::Int32 get_UnlockedCharacterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_UNLOCKEDCHARACTERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_CharacterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_CHARACTERCOUNT_OFFSET))(this);
		}

		::System::Boolean get_HasNewReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HASNEWREWARD_OFFSET))(this);
		}

		::RPG::Client::TextID get_HeroCardName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_HeroCardDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDDESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::TextID get_HeroCardSubDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDSUBDESCRIPTION_OFFSET))(this);
		}

		::System::String* get_HeroCardPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDPREFABPATH_OFFSET))(this);
		}

		::System::UInt32 get_EpilogueUnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_EPILOGUEUNLOCKID_OFFSET))(this);
		}

		::System::Char get_NousTalkMaskCharacter()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_NOUSTALKMASKCHARACTER_OFFSET))(this);
		}

		::System::UInt32 get_NousTalkPerformanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_NOUSTALKPERFORMANCEID_OFFSET))(this);
		}

		::System::UInt32 get_FinalPackID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_FINALPACKID_OFFSET))(this);
		}

		::System::UInt32 get_FinalStoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_FINALSTORYID_OFFSET))(this);
		}

		::System::Boolean get_IsUpdatedVersion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_ISUPDATEDVERSION_OFFSET))(this);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::TarotBookCharacter* GetCharacter(::System::UInt32 a1)
		{
			return ((::RPG::Client::TarotBookCharacter*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCHARACTER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookCharacter*>* GetAllCharacters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookCharacter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETALLCHARACTERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookCard*>* GetCurrentCards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTCARDS_OFFSET))(this);
		}

		::RPG::Client::TarotBookCard* GetCard(::System::UInt32 a1)
		{
			return ((::RPG::Client::TarotBookCard*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCARD_OFFSET))(this, a1);
		}

		::System::UInt32 GetUniqueCardCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETUNIQUECARDCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookClue*>* GetCurrentClues()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookClue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTCLUES_OFFSET))(this);
		}

		::System::Boolean CheckCanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKCANTAKEREWARD_OFFSET))(this);
		}

		::System::Boolean CheckHasExtendReadReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKHASEXTENDREADREWARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetExtendReadRewardIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETEXTENDREADREWARDIDS_OFFSET))(this);
		}

		::System::Void MarkAllReadRewardsHaveShown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_MARKALLREADREWARDSHAVESHOWN_OFFSET))(this);
		}

		::System::Boolean CheckCanTakeReadReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKCANTAKEREADREWARD_OFFSET))(this);
		}

		::System::Boolean CheckHasExtendCollectReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKHASEXTENDCOLLECTREWARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetExtendCollectQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETEXTENDCOLLECTQUESTIDS_OFFSET))(this);
		}

		::System::Void MarkAllCollectRewardsHaveShown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_MARKALLCOLLECTREWARDSHAVESHOWN_OFFSET))(this);
		}

		::System::Boolean CheckCanTakeCollectReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKCANTAKECOLLECTREWARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookReadReward*>* GetAllReadReward()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookReadReward*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETALLREADREWARD_OFFSET))(this);
		}

		::System::Void TakeAllReadRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_TAKEALLREADREWARDS_OFFSET))(this);
		}

		::System::Boolean CheckAllEidolonsHasGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKALLEIDOLONSHASGOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetCollectQuestDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCOLLECTQUESTDATALIST_OFFSET))(this);
		}

		::System::Boolean CheckIsSpecialCollectQuest(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKISSPECIALCOLLECTQUEST_OFFSET))(this, a1);
		}

		::System::Void TakeAllCollectRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_TAKEALLCOLLECTREWARDS_OFFSET))(this);
		}

		::System::Boolean CheckIsEntranceShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKISENTRANCESHOW_OFFSET))(this);
		}

		::System::Boolean CheckIsCurrentStoryLineCanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKISCURRENTSTORYLINECANUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsTarotBookFilterAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_ISTAROTBOOKFILTERAVAILABLE_OFFSET))(this);
		}

		::System::Boolean CheckIsFirstEnterBookletFromEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKISFIRSTENTERBOOKLETFROMENTRANCE_OFFSET))(this);
		}

		::System::Void SetIsFirstEnterBookletFromEntrance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_SETISFIRSTENTERBOOKLETFROMENTRANCE_OFFSET))(this, a1);
		}

		::System::Void MarkNewVersionRevealed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_MARKNEWVERSIONREVEALED_OFFSET))(this);
		}

		::System::Void MarkExperimentSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_MARKEXPERIMENTSEEN_OFFSET))(this);
		}

		::System::Int32 GetUnlockedStoryCountByCharacter(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETUNLOCKEDSTORYCOUNTBYCHARACTER_OFFSET))(this, a1);
		}

		::System::UInt32 GetNewStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETNEWSTORYCOUNT_OFFSET))(this);
		}

		::System::Int32 GetUnlockedStoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETUNLOCKEDSTORYCOUNT_OFFSET))(this);
		}

		::System::Int32 GetAllStoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETALLSTORYCOUNT_OFFSET))(this);
		}

		::RPG::Client::TarotBookClue* GetClue(::System::UInt32 a1)
		{
			return ((::RPG::Client::TarotBookClue*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCLUE_OFFSET))(this, a1);
		}

		::RPG::Client::TarotBookStory* GetStory(::System::UInt32 a1)
		{
			return ((::RPG::Client::TarotBookStory*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETSTORY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* FillNewStoryIDsTo(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_FILLNEWSTORYIDSTO_OFFSET))(this, a1);
		}

		::RPG::Client::TarotBookBooklet* GetBooklet()
		{
			return ((::RPG::Client::TarotBookBooklet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETBOOKLET_OFFSET))(this);
		}

		::System::UInt32 GetEnergy()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETENERGY_OFFSET))(this);
		}

		::System::String* GetStarPanelLockedImgByPosition(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETSTARPANELLOCKEDIMGBYPOSITION_OFFSET))(this, a1);
		}

		::System::Void OpenPack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_OPENPACK_OFFSET))(this);
		}

		::System::Void QuickUnlockAllStories()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_QUICKUNLOCKALLSTORIES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>* GetUnlockStoryByCard(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETUNLOCKSTORYBYCARD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookClue*>* GetCluesListByCard(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookClue*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCLUESLISTBYCARD_OFFSET))(this, a1);
		}

		::System::Void UnlockStory(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_UNLOCKSTORY_OFFSET))(this, a1);
		}

		::System::Boolean CheckCharacterHasUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKCHARACTERHASUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean CheckStoryHasUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKSTORYHASUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean CheckStoryHasFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKSTORYHASFINISHED_OFFSET))(this, a1);
		}

		::System::Void FillInteractionsTo(::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_FILLINTERACTIONSTO_OFFSET))(this, a1);
		}

		::System::Void MarkInteractionsUnlocked(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_MARKINTERACTIONSUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::TarotBookInteraction* GetInteraction(::System::UInt32 a1)
		{
			return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETINTERACTION_OFFSET))(this, a1);
		}

		::System::Boolean CheckInteractionHasFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKINTERACTIONHASFINISHED_OFFSET))(this, a1);
		}

		::RPG::Client::TarotBookProcessContext* GetProcessContext()
		{
			return ((::RPG::Client::TarotBookProcessContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETPROCESSCONTEXT_OFFSET))(this);
		}

		::RPG::Client::TarotBookProcessContext* GetOrCreateProcessContext()
		{
			return ((::RPG::Client::TarotBookProcessContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEPROCESSCONTEXT_OFFSET))(this);
		}

		::RPG::Client::TarotBookProcessContext* GetOrCreateProcessContextWithVersion(::RPG::Client::TarotBookVersion a1)
		{
			return ((::RPG::Client::TarotBookProcessContext*(*)(::PVOID, ::RPG::Client::TarotBookVersion))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEPROCESSCONTEXTWITHVERSION_OFFSET))(this, a1);
		}

		::System::Boolean TryDestroyProcessContext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_TRYDESTROYPROCESSCONTEXT_OFFSET))(this);
		}

		::RPG::Client::TarotBookExperimentContext* GetOrCreateExperimentContext()
		{
			return ((::RPG::Client::TarotBookExperimentContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEEXPERIMENTCONTEXT_OFFSET))(this);
		}

		::RPG::Client::TarotBookMailManager* GetOrCreateMailManager()
		{
			return ((::RPG::Client::TarotBookMailManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEMAILMANAGER_OFFSET))(this);
		}

		::RPG::Client::TarotBookWikiManager* GetOrCreateWikiManager()
		{
			return ((::RPG::Client::TarotBookWikiManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEWIKIMANAGER_OFFSET))(this);
		}

		::RPG::Client::TarotBookWikiManager* GetCurrentWikiManager()
		{
			return ((::RPG::Client::TarotBookWikiManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTWIKIMANAGER_OFFSET))(this);
		}

		::RPG::Client::TarotBookMailManager* GetCurrentMailManager()
		{
			return ((::RPG::Client::TarotBookMailManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTMAILMANAGER_OFFSET))(this);
		}

		::RPG::Client::TextID GetCardPackHint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCARDPACKHINT_OFFSET))(this);
		}

		::RPG::Client::TextID GetLastCardPackHint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETLASTCARDPACKHINT_OFFSET))(this);
		}

		::System::Boolean CheckFinalPackHasOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKFINALPACKHASOPENED_OFFSET))(this);
		}

		::System::Boolean CheckFinalStoryHasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKFINALSTORYHASUNLOCKED_OFFSET))(this);
		}

		::System::Boolean TryConsumeUnlockHintFlag(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_TRYCONSUMEUNLOCKHINTFLAG_OFFSET))(this, a1);
		}

		::System::UInt32 GetRelativeAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETRELATIVEAVATARID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookDeleteData*>* GetDeleteDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookDeleteData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETDELETEDATALIST_OFFSET))(this);
		}

		::System::Void AddReconnectCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_ADDRECONNECTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RemoveReconnectCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_REMOVERECONNECTCALLBACK_OFFSET))(this, a1);
		}

		::RPG::Client::TarotBookVersion GetVersion()
		{
			return ((::RPG::Client::TarotBookVersion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETVERSION_OFFSET))(this);
		}

		::System::Boolean CheckUpdatedVersionHasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKUPDATEDVERSIONHASUNLOCKED_OFFSET))(this);
		}

		::System::Boolean CheckFinalVersionHasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKFINALVERSIONHASUNLOCKED_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _OnTarotBookGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTarotBookSyncDataScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKSYNCDATASCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTarotBookOpenPackScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKOPENPACKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTarotBookUnlockStoryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKUNLOCKSTORYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTarotBookFinishStoryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKFINISHSTORYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTarotBookModifyEnergyScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKMODIFYENERGYSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTarotBookFinishInteractionScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKFINISHINTERACTIONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTarotBookUnlockInteractionScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKUNLOCKINTERACTIONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTarotBookMultiOpenPackAndUnlockStoryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKMULTIOPENPACKANDUNLOCKSTORYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnServerPrefRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONSERVERPREFREFRESH_OFFSET))(this, a1);
		}

		::System::Void _InitCharacters(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__INITCHARACTERS_OFFSET))(this, a1);
		}

		::System::Void _InitInteractions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__INITINTERACTIONS_OFFSET))(this);
		}

		::System::Void _FillCurrentCardsTo(::System::Collections::Generic::List_1<::RPG::Client::TarotBookCard*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TarotBookCard*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__FILLCURRENTCARDSTO_OFFSET))(this, a1);
		}

		::System::Void _FillCurrentCluesTo(::System::Collections::Generic::List_1<::RPG::Client::TarotBookClue*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TarotBookClue*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__FILLCURRENTCLUESTO_OFFSET))(this, a1);
		}

		::System::Void _HandlePoolExhausted(::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__HANDLEPOOLEXHAUSTED_OFFSET))(this, a1);
		}

		static ::System::Void _PreprocessPools(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*& a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__PREPROCESSPOOLS_OFFSET))(a1, a2);
		}

		::System::Void _PreprocessStories(::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::Client::TarotBookStory*>*& a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*& a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::Client::TarotBookStory*>*&, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*&, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__PREPROCESSSTORIES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _InitReadRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__INITREADREWARDS_OFFSET))(this);
		}

		::System::Void _InitCollectQuestIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__INITCOLLECTQUESTIDS_OFFSET))(this);
		}

		::System::Void _PrepareRelativeSubmissions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__PREPARERELATIVESUBMISSIONS_OFFSET))(this);
		}

		::System::Void _AutoFillDefaultShownReadRewardIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__AUTOFILLDEFAULTSHOWNREADREWARDIDS_OFFSET))(this);
		}

		::System::Void _AutoFillDefaultShownCollectQuestIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__AUTOFILLDEFAULTSHOWNCOLLECTQUESTIDS_OFFSET))(this);
		}

		static ::System::Void _PreprocessStarPanelImg(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*& a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__PREPROCESSSTARPANELIMG_OFFSET))(a1);
		}

		static ::System::Void _AddElementToListMap(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ADDELEMENTTOLISTMAP_OFFSET))(a1, a2, a3);
		}
	};
}
