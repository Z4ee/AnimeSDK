#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_352A8B3482C80E7D_14;
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

#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_COPYBOOKTEXTJOIN_OFFSET UNITYSDK_OFFSET(0x9660500)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETBUFFDATA_OFFSET UNITYSDK_OFFSET(0x965E400)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETCHAPTERDATA_OFFSET UNITYSDK_OFFSET(0x965E1C0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETPARAGRAPHDATA_OFFSET UNITYSDK_OFFSET(0x965E270)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTBUFFDATA_OFFSET UNITYSDK_OFFSET(0x965F2A0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTDATA_OFFSET UNITYSDK_OFFSET(0x965E320)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTEQUIPBUFFID_OFFSET UNITYSDK_OFFSET(0x965F860)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTSTAGEBUFFDATA_OFFSET UNITYSDK_OFFSET(0x965F580)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDBUFFDATA_OFFSET UNITYSDK_OFFSET(0x965EC90)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDBUFFSLOTDATA_OFFSET UNITYSDK_OFFSET(0x965F080)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDCHAPTERDATA_OFFSET UNITYSDK_OFFSET(0x965E4B0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDPARAGRAPHDATA_OFFSET UNITYSDK_OFFSET(0x965E870)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_ALLPARAGRAPHID_OFFSET UNITYSDK_OFFSET(0x9663FA0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_BUFFDATAIDINSLOT_OFFSET UNITYSDK_OFFSET(0x9663F90)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_LASTBATTLEPARAGRAPHID_OFFSET UNITYSDK_OFFSET(0x9663FB0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_LASTBATTLESCORE_OFFSET UNITYSDK_OFFSET(0x9663FC0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_PARAGRAPHFINISHSCORE_OFFSET UNITYSDK_OFFSET(0x9664010)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_RANKMINSCORE_OFFSET UNITYSDK_OFFSET(0x9663FE0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_STORYID_OFFSET UNITYSDK_OFFSET(0x9663FD0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_UNLOCKBUFF_OFFSET UNITYSDK_OFFSET(0x965C5E0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_UNLOCKCHAPTER_OFFSET UNITYSDK_OFFSET(0x965C5D0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_UNLOCKPARAGRAPH_OFFSET UNITYSDK_OFFSET(0x965C5C0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9660870)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_SENDGETMISSIONDATAREQ_OFFSET UNITYSDK_OFFSET(0x965FC10)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_SLOTEQUIPBUFFDATA_OFFSET UNITYSDK_OFFSET(0x965F990)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_SLOTREMOVEBUFFDATA_OFFSET UNITYSDK_OFFSET(0x965FB70)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9660390)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_TRYENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x965FCB0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9661870)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9661750)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9664060)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9664040)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__GETAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9663CE0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITBUFFDATA_OFFSET UNITYSDK_OFFSET(0x9661130)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITBUFFSLOTDATA_OFFSET UNITYSDK_OFFSET(0x9661330)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITCHAPTERDATA_OFFSET UNITYSDK_OFFSET(0x9660CC0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITPARAGRAPHDATA_OFFSET UNITYSDK_OFFSET(0x9660ED0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITRANKMINSCORE_OFFSET UNITYSDK_OFFSET(0x9661530)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKBUFF_OFFSET UNITYSDK_OFFSET(0x965CAF0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKCHAPTER_OFFSET UNITYSDK_OFFSET(0x965C8B0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0x965C5F0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKPARAGRAPH_OFFSET UNITYSDK_OFFSET(0x965C6F0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET UNITYSDK_OFFSET(0x96636A0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONBUFFUNLOCKSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0x965DCC0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONCHAPTERUNLOCKSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0x965D1C0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONENTERFANTASTICSTORYACTIVITYSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x9663430)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONFANTASTICACTIVITYDATASCHEDULESTART_OFFSET UNITYSDK_OFFSET(0x965DEA0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONFANTASTICSTORYACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9663270)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0x9663580)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONGETFANTASTICSTORYACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9661E30)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONPARAGRAPHUNLOCKSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0x965D740)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0x965DF00)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONTEXTJOINBATCHSAVESCRSP_OFFSET UNITYSDK_OFFSET(0x9661A10)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__PREPAREBATTLEAVATARLIST_OFFSET UNITYSDK_OFFSET(0x9663750)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__PREPAREBATTLEBUFFLIST_OFFSET UNITYSDK_OFFSET(0x9663B50)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERACTIVITYUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x965DD20)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERBUFFUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x965D7A0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERCHAPTERUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x965CCA0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERPARAGRAPHUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x965D220)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SAVESELECTAVATARDATA_OFFSET UNITYSDK_OFFSET(0x96639B0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SENDTEXTJOINBEFOREBATTLE_OFFSET UNITYSDK_OFFSET(0x9660040)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SYNBATTLECACHEBUFF_OFFSET UNITYSDK_OFFSET(0x9662F80)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__TRIGGERENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x965FE70)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x96641B0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x96642A0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9664240)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___INITUNLOCKDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0x9664180)

namespace RPG::Client
{
	inline static constexpr unsigned int FantasticStoryActivityModule_TypeDefinitionIndex = 51889;

	class FantasticStoryActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::Il2CppArray<::RPG::Client::TextID>** StaticGet_RankText()
		{
			return (::Il2CppArray<::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(FantasticStoryActivityModule_TypeDefinitionIndex)->GetStaticField(0x47B30);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet__RankMinScore()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FantasticStoryActivityModule_TypeDefinitionIndex)->GetStaticField(0x47B38);
		}
		static ::System::UInt32* StaticGet__ParagraphFinishScore()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FantasticStoryActivityModule_TypeDefinitionIndex)->GetStaticField(0x129F0);
		}
		::RPG::Client::ScheduleTask* _WaitActivityScheduleTask; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*>* _BuffDataIDInSlot; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FantasticStoryBuffSlotData*>* _BuffSlotDataDic; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _AvatarIDList; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _PreparedMainMissionIDList; // 0x30
		::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleData*>* _BuffWaitOpenScheduleData; // 0x38
		::RPG::Client::ScheduleTask* _WaitBuffScheduleTask; // 0x40
		::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleData*>* _ParagraphWaitOpenScheduleData; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FantasticStoryParagraphData*>* _ParagraphDataDic; // 0x50
		::RPG::Client::ScheduleTask* _WaitChapterScheduleTask; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FantasticStoryBuffData*>* _BuffDataDic; // 0x60
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockChapter; // 0x68
		::RPG::Client::ScheduleTask* _WaitParagraphScheduleTask; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FantasticStoryChapterData*>* _ChapterDataDic; // 0x78
		::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleData*>* _ChapterWaitOpenScheduleData; // 0x80
		::System::Collections::Generic::HashSet_1<::System::UInt32>* BuffSlotEquipedBuff; // 0x88
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockBuff; // 0x90
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockParagraph; // 0x98
		::System::Collections::Generic::List_1<::System::UInt32>* _AllParagraphID; // 0xA0
		::System::Nullable_1<::System::UInt32> AutoShowParagraphID; // 0xA8
		::System::Boolean BookRecieved; // 0xB0
		::System::Boolean _TextJoinCopySend; // 0xB1
		::System::Boolean _ActivityFirstStart; // 0xB2
		::System::Boolean _TextJoinPreBattleSetSend; // 0xB3
		::System::UInt32 _LastBattleScore; // 0xB4
		::System::UInt32 _LastBattleParagraphID; // 0xB8
		::System::UInt32 _StoryID; // 0xBC
		::System::Boolean LastBattleNewRecord; // 0xC0
		::System::Boolean ChallengePageShowByBattleExit; // 0xC1
		::System::Boolean _EnterBattle; // 0xC2
		::System::Boolean _InitUnlockDataFinish; // 0xC3

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

		::System::Void _SaveSelectAvatarData(::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_14*>* avatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_14*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SAVESELECTAVATARDATA_OFFSET))(this, avatarList);
		}

		::RPG::Client::IAvatarInfoProvider* _GetAvatarData(::Class_1_352A8B3482C80E7D_14* avatar)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::Class_1_352A8B3482C80E7D_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__GETAVATARDATA_OFFSET))(this, avatar);
		}

		::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_14*>* _PrepareBattleAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_14*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__PREPAREBATTLEAVATARLIST_OFFSET))(this);
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
