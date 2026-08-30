#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_1CBA230307F9C289_26;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class FantasticStoryBuffData; }
namespace RPG::Client { class FantasticStoryBuffSlotData; }
namespace RPG::Client { class FantasticStoryChapterData; }
namespace RPG::Client { class FantasticStoryParagraphData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_COPYBOOKTEXTJOIN_OFFSET UNITYSDK_OFFSET(0x1B8AE340)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1B8AB890)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETCHAPTERDATA_OFFSET UNITYSDK_OFFSET(0x1B8AB620)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETPARAGRAPHDATA_OFFSET UNITYSDK_OFFSET(0x1B8AB6E0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1B8ACE40)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTDATA_OFFSET UNITYSDK_OFFSET(0x1B8AB7A0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTEQUIPBUFFID_OFFSET UNITYSDK_OFFSET(0x1B8AD5C0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTSTAGEBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1B8AD220)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1B8AC5B0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDBUFFSLOTDATA_OFFSET UNITYSDK_OFFSET(0x1B8ACBB0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDCHAPTERDATA_OFFSET UNITYSDK_OFFSET(0x1B8AB950)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSORTEDPARAGRAPHDATA_OFFSET UNITYSDK_OFFSET(0x1B8ABF50)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_ALLPARAGRAPHID_OFFSET UNITYSDK_OFFSET(0x1B8B2C20)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_BUFFDATAIDINSLOT_OFFSET UNITYSDK_OFFSET(0x1B8B2BD0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_LASTBATTLEPARAGRAPHID_OFFSET UNITYSDK_OFFSET(0x1B8B2C60)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_LASTBATTLESCORE_OFFSET UNITYSDK_OFFSET(0x1B8B2CB0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_PARAGRAPHFINISHSCORE_OFFSET UNITYSDK_OFFSET(0x1B8B2DB0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_RANKMINSCORE_OFFSET UNITYSDK_OFFSET(0x1B8B2D50)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_STORYID_OFFSET UNITYSDK_OFFSET(0x1B8B2D00)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_UNLOCKBUFF_OFFSET UNITYSDK_OFFSET(0x1B8A9890)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_UNLOCKCHAPTER_OFFSET UNITYSDK_OFFSET(0x1B8A9840)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GET_UNLOCKPARAGRAPH_OFFSET UNITYSDK_OFFSET(0x1B8A9800)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B8AE6F0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_SENDGETMISSIONDATAREQ_OFFSET UNITYSDK_OFFSET(0x1B8ADAA0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_SLOTEQUIPBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1B8AD790)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_SLOTREMOVEBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1B8AD9C0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1B8AE1C0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_TRYENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1B8ADB40)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B8AFA40)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B8AF780)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8B2E30)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B2E10)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__GETAVATARDATA_OFFSET UNITYSDK_OFFSET(0x1B8B2990)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1B8AF0C0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITBUFFSLOTDATA_OFFSET UNITYSDK_OFFSET(0x1B8AF330)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITCHAPTERDATA_OFFSET UNITYSDK_OFFSET(0x1B8AEAF0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITPARAGRAPHDATA_OFFSET UNITYSDK_OFFSET(0x1B8AEDB0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITRANKMINSCORE_OFFSET UNITYSDK_OFFSET(0x1B8AF5A0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKBUFF_OFFSET UNITYSDK_OFFSET(0x1B8A9EE0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKCHAPTER_OFFSET UNITYSDK_OFFSET(0x1B8A9C30)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0x1B8A98D0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__INITUNLOCKPARAGRAPH_OFFSET UNITYSDK_OFFSET(0x1B8A99F0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET UNITYSDK_OFFSET(0x1B8B2070)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONBUFFUNLOCKSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0x1B8AB0A0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONCHAPTERUNLOCKSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0x1B8AA5A0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONENTERFANTASTICSTORYACTIVITYSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x1B8B1D90)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONFANTASTICACTIVITYDATASCHEDULESTART_OFFSET UNITYSDK_OFFSET(0x1B8AB290)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONFANTASTICSTORYACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B8B1BD0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0x1B8B1E40)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONGETFANTASTICSTORYACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1B8B0040)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONPARAGRAPHUNLOCKSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0x1B8AAB20)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0x1B8AB2F0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONTEXTJOINBATCHSAVESCRSP_OFFSET UNITYSDK_OFFSET(0x1B8AFC20)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__PREPAREBATTLEAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1B8B2120)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__PREPAREBATTLEBUFFLIST_OFFSET UNITYSDK_OFFSET(0x1B8B27C0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERACTIVITYUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B8AB100)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERBUFFUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B8AAB80)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERCHAPTERUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B8AA080)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERPARAGRAPHUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B8AA600)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SAVESELECTAVATARDATA_OFFSET UNITYSDK_OFFSET(0x1B8B23D0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SENDTEXTJOINBEFOREBATTLE_OFFSET UNITYSDK_OFFSET(0x1B8ADED0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SYNBATTLECACHEBUFF_OFFSET UNITYSDK_OFFSET(0x1B8B1880)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__TRIGGERENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1B8ADD00)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___INITUNLOCKDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0x1B8B2F40)

namespace RPG::Client
{
	inline static constexpr unsigned int FantasticStoryActivityModule_TypeDefinitionIndex = 64034;

	class FantasticStoryActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet__RankMinScore()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FantasticStoryActivityModule_TypeDefinitionIndex)->GetStaticField(0x64AE0);
		}
		static ::Il2CppArray<::RPG::Client::TextID>** StaticGet_RankText()
		{
			return (::Il2CppArray<::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(FantasticStoryActivityModule_TypeDefinitionIndex)->GetStaticField(0x64AE8);
		}
		static ::System::UInt32* StaticGet__ParagraphFinishScore()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FantasticStoryActivityModule_TypeDefinitionIndex)->GetStaticField(0x14C60);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FantasticStoryBuffData*>* _BuffDataDic; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FantasticStoryBuffSlotData*>* _BuffSlotDataDic; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockBuff; // 0x20
		::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleData*>* _ChapterWaitOpenScheduleData; // 0x28
		::RPG::Client::ScheduleTask* _WaitParagraphScheduleTask; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _AllParagraphID; // 0x38
		::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleData*>* _ParagraphWaitOpenScheduleData; // 0x40
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockParagraph; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FantasticStoryChapterData*>* _ChapterDataDic; // 0x50
		::RPG::Client::ScheduleTask* _WaitBuffScheduleTask; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FantasticStoryParagraphData*>* _ParagraphDataDic; // 0x60
		::RPG::Client::ScheduleTask* _WaitActivityScheduleTask; // 0x68
		::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleData*>* _BuffWaitOpenScheduleData; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* _PreparedMainMissionIDList; // 0x78
		::System::Collections::Generic::HashSet_1<::System::UInt32>* BuffSlotEquipedBuff; // 0x80
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockChapter; // 0x88
		::System::Collections::Generic::List_1<::System::UInt32>* _AvatarIDList; // 0x90
		::RPG::Client::ScheduleTask* _WaitChapterScheduleTask; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*>* _BuffDataIDInSlot; // 0xA0
		::System::UInt32 _LastBattleScore; // 0xA8
		::System::UInt32 _LastBattleParagraphID; // 0xAC
		::System::Boolean _EnterBattle; // 0xB0
		::System::Boolean BookRecieved; // 0xB1
		::System::Boolean _TextJoinCopySend; // 0xB2
		::System::Boolean _ActivityFirstStart; // 0xB3
		::System::Nullable_1<::System::UInt32> AutoShowParagraphID; // 0xB4
		::System::Boolean LastBattleNewRecord; // 0xBC
		::System::Boolean _InitUnlockDataFinish; // 0xBD
		::System::Boolean _TextJoinPreBattleSetSend; // 0xBE
		::System::Boolean ChallengePageShowByBattleExit; // 0xBF
		::System::UInt32 _StoryID; // 0xC0

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

		::System::Void _OnChapterUnlockScheduleStart(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONCHAPTERUNLOCKSCHEDULESTART_OFFSET))(this, a1);
		}

		::System::Void _RegisterParagraphUnlockSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERPARAGRAPHUNLOCKSCHEDULE_OFFSET))(this);
		}

		::System::Void _OnParagraphUnlockScheduleStart(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONPARAGRAPHUNLOCKSCHEDULESTART_OFFSET))(this, a1);
		}

		::System::Void _RegisterBuffUnlockSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERBUFFUNLOCKSCHEDULE_OFFSET))(this);
		}

		::System::Void _OnBuffUnlockScheduleStart(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONBUFFUNLOCKSCHEDULESTART_OFFSET))(this, a1);
		}

		::System::Void _RegisterActivityUnlockSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__REGISTERACTIVITYUNLOCKSCHEDULE_OFFSET))(this);
		}

		::System::Void _OnFantasticActivityDataScheduleStart(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONFANTASTICACTIVITYDATASCHEDULESTART_OFFSET))(this, a1);
		}

		::RPG::Client::FantasticStoryChapterData* GetChapterData(::System::UInt32 a1)
		{
			return ((::RPG::Client::FantasticStoryChapterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETCHAPTERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::FantasticStoryParagraphData* GetParagraphData(::System::UInt32 a1)
		{
			return ((::RPG::Client::FantasticStoryParagraphData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETPARAGRAPHDATA_OFFSET))(this, a1);
		}

		::RPG::Client::FantasticStoryBuffSlotData* GetSlotData(::System::UInt32 a1)
		{
			return ((::RPG::Client::FantasticStoryBuffSlotData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::FantasticStoryBuffData* GetBuffData(::System::UInt32 a1)
		{
			return ((::RPG::Client::FantasticStoryBuffData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETBUFFDATA_OFFSET))(this, a1);
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

		::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryBuffData*>* GetSlotBuffData(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryBuffData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTBUFFDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryBuffData*>* GetSlotStageBuffData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FantasticStoryBuffData*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTSTAGEBUFFDATA_OFFSET))(this, a1, a2);
		}

		::System::Nullable_1<::System::UInt32> GetSlotEquipBuffID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_GETSLOTEQUIPBUFFID_OFFSET))(this, a1, a2);
		}

		::System::Void SlotEquipBuffData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_SLOTEQUIPBUFFDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SlotRemoveBuffData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_SLOTREMOVEBUFFDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SendGetMissionDataReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_SENDGETMISSIONDATAREQ_OFFSET))(this);
		}

		::System::Void TryEnterBattle(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_TRYENTERBATTLE_OFFSET))(this, a1, a2);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void CopyBookTextJoin(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE_COPYBOOKTEXTJOIN_OFFSET))(this, a1, a2);
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

		::System::Void _OnTextJoinBatchSaveScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONTEXTJOINBATCHSAVESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetFantasticStoryActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONGETFANTASTICSTORYACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _SynBattleCacheBuff(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SYNBATTLECACHEBUFF_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFantasticStoryActivityBattleEndScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONFANTASTICSTORYACTIVITYBATTLEENDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEnterFantasticStoryActivityStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONENTERFANTASTICSTORYACTIVITYSTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, a1);
		}

		::System::Void _OnFinishedMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnBattleResultBeforePhase(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET))(this, a1);
		}

		::System::Void _SendTextJoinBeforeBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SENDTEXTJOINBEFOREBATTLE_OFFSET))(this);
		}

		::System::Void _TriggerEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__TRIGGERENTERBATTLE_OFFSET))(this);
		}

		::System::Void _SaveSelectAvatarData(::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_26*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_26*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__SAVESELECTAVATARDATA_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* _GetAvatarData(::Class_1_1CBA230307F9C289_26* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Class_1_1CBA230307F9C289_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__GETAVATARDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_26*>* _PrepareBattleAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_26*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE__PREPAREBATTLEAVATARLIST_OFFSET))(this);
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
	};
}
