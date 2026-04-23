#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_1CBA230307F9C289_17;
namespace RPG::Client { class FantasticStoryBuffData; }
namespace RPG::Client { class FantasticStoryBuffSlotData; }
namespace RPG::Client { class FantasticStoryChapterData; }
namespace RPG::Client { class FantasticStoryParagraphData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_COPYBOOKTEXTJOIN_OFFSET UNITYSDK_OFFSET(0xA31F670)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA31D580)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETCHAPTERDATA_OFFSET UNITYSDK_OFFSET(0xA31D340)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETPARAGRAPHDATA_OFFSET UNITYSDK_OFFSET(0xA31D3F0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA31E420)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTDATA_OFFSET UNITYSDK_OFFSET(0xA31D4A0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTEQUIPBUFFID_OFFSET UNITYSDK_OFFSET(0xA31E9E0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTSTAGEBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA31E700)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA31DE10)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDBUFFSLOTDATA_OFFSET UNITYSDK_OFFSET(0xA31E200)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDCHAPTERDATA_OFFSET UNITYSDK_OFFSET(0xA31D630)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDPARAGRAPHDATA_OFFSET UNITYSDK_OFFSET(0xA31D9F0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_ALLPARAGRAPHID_OFFSET UNITYSDK_OFFSET(0xA323080)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_BUFFDATAIDINSLOT_OFFSET UNITYSDK_OFFSET(0xA323070)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_LASTBATTLEPARAGRAPHID_OFFSET UNITYSDK_OFFSET(0xA323090)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_LASTBATTLESCORE_OFFSET UNITYSDK_OFFSET(0xA3230A0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_PARAGRAPHFINISHSCORE_OFFSET UNITYSDK_OFFSET(0xA3230F0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_RANKMINSCORE_OFFSET UNITYSDK_OFFSET(0xA3230C0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_STORYID_OFFSET UNITYSDK_OFFSET(0xA3230B0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_UNLOCKBUFF_OFFSET UNITYSDK_OFFSET(0xA31B750)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_UNLOCKCHAPTER_OFFSET UNITYSDK_OFFSET(0xA31B740)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_UNLOCKPARAGRAPH_OFFSET UNITYSDK_OFFSET(0xA31B730)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA31F9E0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_SENDGETMISSIONDATAREQ_OFFSET UNITYSDK_OFFSET(0xA31ED80)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_SLOTEQUIPBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA31EB10)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_SLOTREMOVEBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA31ECE0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xA31F500)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_TRYENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xA31EE20)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3209F0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3208D0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA323140)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA323120)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__GETAVATARDATA_OFFSET UNITYSDK_OFFSET(0xA322DC0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA3202B0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITBUFFSLOTDATA_OFFSET UNITYSDK_OFFSET(0xA3204B0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITCHAPTERDATA_OFFSET UNITYSDK_OFFSET(0xA31FE30)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITPARAGRAPHDATA_OFFSET UNITYSDK_OFFSET(0xA320050)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITRANKMINSCORE_OFFSET UNITYSDK_OFFSET(0xA3206B0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKBUFF_OFFSET UNITYSDK_OFFSET(0xA31BC70)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKCHAPTER_OFFSET UNITYSDK_OFFSET(0xA31BA20)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xA31B760)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKPARAGRAPH_OFFSET UNITYSDK_OFFSET(0xA31B870)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET UNITYSDK_OFFSET(0xA322780)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONBUFFUNLOCKSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0xA31CE40)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONCHAPTERUNLOCKSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0xA31C340)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONENTERFANTASTICSTORYACTIVITYSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xA3225B0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONFANTASTICACTIVITYDATASCHEDULESTART_OFFSET UNITYSDK_OFFSET(0xA31D020)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONFANTASTICSTORYACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3223F0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0xA322660)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONGETFANTASTICSTORYACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA320FB0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONPARAGRAPHUNLOCKSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0xA31C8C0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0xA31D080)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONTEXTJOINBATCHSAVESCRSP_OFFSET UNITYSDK_OFFSET(0xA320B90)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__PREPAREBATTLEAVATARLIST_OFFSET UNITYSDK_OFFSET(0xA322830)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__PREPAREBATTLEBUFFLIST_OFFSET UNITYSDK_OFFSET(0xA322C30)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERACTIVITYUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA31CEA0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERBUFFUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA31C920)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERCHAPTERUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA31BE20)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERPARAGRAPHUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA31C3A0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SAVESELECTAVATARDATA_OFFSET UNITYSDK_OFFSET(0xA322A90)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SENDTEXTJOINBEFOREBATTLE_OFFSET UNITYSDK_OFFSET(0xA31F1A0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SYNBATTLECACHEBUFF_OFFSET UNITYSDK_OFFSET(0xA322100)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__TRIGGERENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xA31EFE0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA3232C0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3233B0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA323350)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___INITUNLOCKDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0xA323290)

namespace RPG::Client
{
	inline static constexpr unsigned int FantasticStoryActivityModule_TypeDefinitionIndex = 58838;

	class FantasticStoryActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet__RankMinScore()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FantasticStoryActivityModule_TypeDefinitionIndex)->GetStaticField(0xD6F0);
		}
		static ::Il2CppArray<::RPG::Client::TextID>** StaticGet_RankText()
		{
			return (::Il2CppArray<::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(FantasticStoryActivityModule_TypeDefinitionIndex)->GetStaticField(0xD6F8);
		}
		static ::System::UInt32* StaticGet__ParagraphFinishScore()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FantasticStoryActivityModule_TypeDefinitionIndex)->GetStaticField(0x5040);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FantasticStoryBuffSlotData*>* _BuffSlotDataDic; // 0x10
		::RPG::Client::ScheduleTask* _WaitBuffScheduleTask; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleData*>* _ChapterWaitOpenScheduleData; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FantasticStoryBuffData*>* _BuffDataDic; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*>* _BuffDataIDInSlot; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _AllParagraphID; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* BuffSlotEquipedBuff; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FantasticStoryParagraphData*>* _ParagraphDataDic; // 0x48
		::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleData*>* _ParagraphWaitOpenScheduleData; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FantasticStoryChapterData*>* _ChapterDataDic; // 0x58
		::RPG::Client::ScheduleTask* _WaitChapterScheduleTask; // 0x60
		::RPG::Client::ScheduleTask* _WaitActivityScheduleTask; // 0x68
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockParagraph; // 0x70
		::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleData*>* _BuffWaitOpenScheduleData; // 0x78
		::RPG::Client::ScheduleTask* _WaitParagraphScheduleTask; // 0x80
		::System::Collections::Generic::List_1<::System::UInt32>* _PreparedMainMissionIDList; // 0x88
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockBuff; // 0x90
		::System::Collections::Generic::List_1<::System::UInt32>* _AvatarIDList; // 0x98
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockChapter; // 0xA0
		::System::Boolean _InitUnlockDataFinish; // 0xA8
		::System::Boolean ChallengePageShowByBattleExit; // 0xA9
		::System::Boolean _TextJoinPreBattleSetSend; // 0xAA
		::System::Boolean BookRecieved; // 0xAB
		::System::UInt32 _StoryID; // 0xAC
		::System::Nullable_1<::System::UInt32> AutoShowParagraphID; // 0xB0
		::System::UInt32 _LastBattleParagraphID; // 0xB8
		::System::Boolean _TextJoinCopySend; // 0xBC
		::System::Boolean _EnterBattle; // 0xBD
		::System::Boolean LastBattleNewRecord; // 0xBE
		::System::Boolean _ActivityFirstStart; // 0xBF
		::System::UInt32 _LastBattleScore; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_UnlockParagraph()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_UNLOCKPARAGRAPH_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_UnlockChapter()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_UNLOCKCHAPTER_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_UnlockBuff()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_UNLOCKBUFF_OFFSET))(this);
		}

		::System::Void _InitUnlockData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKDATA_OFFSET))(this);
		}

		::System::Void _InitUnlockParagraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKPARAGRAPH_OFFSET))(this);
		}

		::System::Void _InitUnlockChapter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKCHAPTER_OFFSET))(this);
		}

		::System::Void _InitUnlockBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKBUFF_OFFSET))(this);
		}

		::System::Void _RegisterChapterUnlockSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERCHAPTERUNLOCKSCHEDULE_OFFSET))(this);
		}

		::System::Void _OnChapterUnlockScheduleStart(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONCHAPTERUNLOCKSCHEDULESTART_OFFSET))(this, data);
		}

		::System::Void _RegisterParagraphUnlockSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERPARAGRAPHUNLOCKSCHEDULE_OFFSET))(this);
		}

		::System::Void _OnParagraphUnlockScheduleStart(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONPARAGRAPHUNLOCKSCHEDULESTART_OFFSET))(this, data);
		}

		::System::Void _RegisterBuffUnlockSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERBUFFUNLOCKSCHEDULE_OFFSET))(this);
		}

		::System::Void _OnBuffUnlockScheduleStart(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONBUFFUNLOCKSCHEDULESTART_OFFSET))(this, data);
		}

		::System::Void _RegisterActivityUnlockSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERACTIVITYUNLOCKSCHEDULE_OFFSET))(this);
		}

		::System::Void _OnFantasticActivityDataScheduleStart(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONFANTASTICACTIVITYDATASCHEDULESTART_OFFSET))(this, data);
		}

		::RPG::Client::FantasticStoryChapterData* GetChapterData(::System::UInt32 ChapterID)
		{
			return ((::RPG::Client::FantasticStoryChapterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETCHAPTERDATA_OFFSET))(this, ChapterID);
		}

		::RPG::Client::FantasticStoryParagraphData* GetParagraphData(::System::UInt32 ParagraphID)
		{
			return ((::RPG::Client::FantasticStoryParagraphData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETPARAGRAPHDATA_OFFSET))(this, ParagraphID);
		}

		::RPG::Client::FantasticStoryBuffSlotData* GetSlotData(::System::UInt32 SlotID)
		{
			return ((::RPG::Client::FantasticStoryBuffSlotData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTDATA_OFFSET))(this, SlotID);
		}

		::RPG::Client::FantasticStoryBuffData* GetBuffData(::System::UInt32 BuffID)
		{
			return ((::RPG::Client::FantasticStoryBuffData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETBUFFDATA_OFFSET))(this, BuffID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryChapterData*>* GetSortedChapterData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryChapterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDCHAPTERDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryParagraphData*>* GetSortedParagraphData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryParagraphData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDPARAGRAPHDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryBuffData*>* GetSortedBuffData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDBUFFDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryBuffSlotData*>* GetSortedBuffSlotData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryBuffSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDBUFFSLOTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryBuffData*>* GetSlotBuffData(::System::UInt32 SlotID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryBuffData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTBUFFDATA_OFFSET))(this, SlotID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryBuffData*>* GetSlotStageBuffData(::System::UInt32 SlotID, ::System::UInt32 ParagraphID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryBuffData*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTSTAGEBUFFDATA_OFFSET))(this, SlotID, ParagraphID);
		}

		::System::Nullable_1<::System::UInt32> GetSlotEquipBuffID(::System::UInt32 SlotID, ::System::UInt32 ParagraphID)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTEQUIPBUFFID_OFFSET))(this, SlotID, ParagraphID);
		}

		::System::Void SlotEquipBuffData(::System::UInt32 SlotID, ::System::UInt32 ParagraphID, ::System::UInt32 BuffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_SLOTEQUIPBUFFDATA_OFFSET))(this, SlotID, ParagraphID, BuffID);
		}

		::System::Void SlotRemoveBuffData(::System::UInt32 SlotID, ::System::UInt32 ParagraphID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_SLOTREMOVEBUFFDATA_OFFSET))(this, SlotID, ParagraphID);
		}

		::System::Void SendGetMissionDataReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_SENDGETMISSIONDATAREQ_OFFSET))(this);
		}

		::System::Void TryEnterBattle(::System::Collections::Generic::List_1<::System::UInt32>* avatarID, ::System::UInt32 battleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_TRYENTERBATTLE_OFFSET))(this, avatarID, battleID);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void CopyBookTextJoin(::System::Boolean originToChange, ::System::UInt32 paragraphID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_COPYBOOKTEXTJOIN_OFFSET))(this, originToChange, paragraphID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnTextJoinBatchSaveScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONTEXTJOINBATCHSAVESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetFantasticStoryActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONGETFANTASTICSTORYACTIVITYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SynBattleCacheBuff(::System::UInt32 paragraphID, ::System::UInt32 buffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SYNBATTLECACHEBUFF_OFFSET))(this, paragraphID, buffID);
		}

		::System::Void _OnFantasticStoryActivityBattleEndScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONFANTASTICSTORYACTIVITYBATTLEENDSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnEnterFantasticStoryActivityStageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONENTERFANTASTICSTORYACTIVITYSTAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnFinishedMainMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnBattleResultBeforePhase(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET))(this, obj);
		}

		::System::Void _SendTextJoinBeforeBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SENDTEXTJOINBEFOREBATTLE_OFFSET))(this);
		}

		::System::Void _TriggerEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__TRIGGERENTERBATTLE_OFFSET))(this);
		}

		::System::Void _SaveSelectAvatarData(::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_17*>* avatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_17*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SAVESELECTAVATARDATA_OFFSET))(this, avatarList);
		}

		::RPG::Client::IAvatarInfoProvider* _GetAvatarData(::Class_1_1CBA230307F9C289_17* avatar)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::Class_1_1CBA230307F9C289_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__GETAVATARDATA_OFFSET))(this, avatar);
		}

		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_17*>* _PrepareBattleAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_17*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__PREPAREBATTLEAVATARLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _PrepareBattleBuffList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__PREPAREBATTLEBUFFLIST_OFFSET))(this);
		}

		::System::Void _InitChapterData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITCHAPTERDATA_OFFSET))(this);
		}

		::System::Void _InitParagraphData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITPARAGRAPHDATA_OFFSET))(this);
		}

		::System::Void _InitBuffData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITBUFFDATA_OFFSET))(this);
		}

		::System::Void _InitBuffSlotData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITBUFFSLOTDATA_OFFSET))(this);
		}

		::System::Void _InitRankMinScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITRANKMINSCORE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*>* get_BuffDataIDInSlot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_BUFFDATAIDINSLOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AllParagraphID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_ALLPARAGRAPHID_OFFSET))(this);
		}

		::System::UInt32 get_LastBattleParagraphID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_LASTBATTLEPARAGRAPHID_OFFSET))(this);
		}

		::System::UInt32 get_LastBattleScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_LASTBATTLESCORE_OFFSET))(this);
		}

		::System::UInt32 get_StoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_STORYID_OFFSET))(this);
		}

		static ::Il2CppArray<::System::UInt32>* get_RankMinScore()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_RANKMINSCORE_OFFSET))();
		}

		static ::System::UInt32 get_ParagraphFinishScore()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_PARAGRAPHFINISHSCORE_OFFSET))();
		}

		::System::Void __InitUnlockData_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___INITUNLOCKDATA_B__6_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
