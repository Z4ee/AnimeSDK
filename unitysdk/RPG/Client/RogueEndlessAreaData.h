#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_26.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_5A58B1D113B4F87B;
class Class_1_A272ECC07A17819C_9;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueMiracleData; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RoguePickAvatarInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityRogueAreaConfigRow; }
namespace RPG::GameCore { class RogueAreaConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEENDLESSAREADATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC779D60)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTAVATARS_OFFSET UNITYSDK_OFFSET(0xC77A320)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTBUFFS_OFFSET UNITYSDK_OFFSET(0xC77A700)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTMIRACLES_OFFSET UNITYSDK_OFFSET(0xC77A7A0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTSELFAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC77A220)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTTRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC77A2A0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETENDLESSWAVEIDS_OFFSET UNITYSDK_OFFSET(0xC77AA70)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETENDLESSWAVEMONSTERDATAS_OFFSET UNITYSDK_OFFSET(0xC77ACA0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETREWARDQUESTIDS_OFFSET UNITYSDK_OFFSET(0xC77A9D0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ACTIVITYAREAROW_OFFSET UNITYSDK_OFFSET(0xC77B740)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xC77B6E0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_AREAROW_OFFSET UNITYSDK_OFFSET(0xC77B720)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC77BA00)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC77B790)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xC77BC10)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDRANK_OFFSET UNITYSDK_OFFSET(0xC77BC50)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDSCORE_OFFSET UNITYSDK_OFFSET(0xC77BC30)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0xC77B980)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENTRANCEIMAGE_OFFSET UNITYSDK_OFFSET(0xC77B7C0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENTRANCELOCKEDIMAGE_OFFSET UNITYSDK_OFFSET(0xC77B7E0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_FREEBUFFDATAS_OFFSET UNITYSDK_OFFSET(0xC77B9E0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_FREEMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xC77A9B0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0xC77BB50)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASENTEREDENDLESS_OFFSET UNITYSDK_OFFSET(0xC77BB60)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0xC77BAF0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISDOING_OFFSET UNITYSDK_OFFSET(0xC77BAA0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISNORMALFINISHED_OFFSET UNITYSDK_OFFSET(0xC77BB80)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC779D00)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_MECHANISMTEXTS_OFFSET UNITYSDK_OFFSET(0xC77B240)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC77B760)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALACHIEVEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xC77BBD0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALCURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0xC77BBF0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0xC77B960)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALSTATUS_OFFSET UNITYSDK_OFFSET(0xC77BA80)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_PICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0xC77BD00)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0xC77B800)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_RECOMMENDTYPES_OFFSET UNITYSDK_OFFSET(0xC77B940)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xC77BCF0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ROGUEMAPID_OFFSET UNITYSDK_OFFSET(0xC77B700)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xC77B100)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_ISFREEBUFF_OFFSET UNITYSDK_OFFSET(0xC77A840)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_ISFREEMIRACLE_OFFSET UNITYSDK_OFFSET(0xC77A940)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_REGISTERSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC7794D0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ACTIVITYAREAROW_OFFSET UNITYSDK_OFFSET(0xC77B750)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xC77B6F0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_AREAROW_OFFSET UNITYSDK_OFFSET(0xC77B730)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ENDLESSACHIEVEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xC77BC20)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ENDLESSACHIEVEDSCORE_OFFSET UNITYSDK_OFFSET(0xC77BC40)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_FREEBUFFDATAS_OFFSET UNITYSDK_OFFSET(0xC77B9F0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_HASENTEREDENDLESS_OFFSET UNITYSDK_OFFSET(0xC77BB70)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALACHIEVEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xC77BBE0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALCURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0xC77BC00)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0xC77B970)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALSTATUS_OFFSET UNITYSDK_OFFSET(0xC77BA90)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC77A0A0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC779FB0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA__GETENDLESSSTAGEINFINITEGROUPID_OFFSET UNITYSDK_OFFSET(0xC77AB00)
#define RPG_CLIENT_ROGUEENDLESSAREADATA__ONSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0xC77B1E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessAreaData_TypeDefinitionIndex = 63082;

	class RogueEndlessAreaData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _FreeBuffDatas_k__BackingField; // 0x10
		::RPG::Client::RogueMiracleInfo* _CurrentMiracleInfo; // 0x18
		::RPG::Client::RoguePickAvatarInfo* _CurrentPickAvatarInfo; // 0x20
		::RPG::GameCore::ActivityRogueAreaConfigRow* _ActivityAreaRow_k__BackingField; // 0x28
		::RPG::GameCore::RogueAreaConfigRow* _AreaRow_k__BackingField; // 0x30
		::Class_1_5A58B1D113B4F87B* _CurrentBuffInfo; // 0x38
		::RPG::Client::RogueReviveAvatarInfo* _CurrentReviveAvatarInfo; // 0x40
		::System::UInt32 _EndlessAchievedProgress_k__BackingField; // 0x48
		::System::UInt32 _NormalCurrentProgress_k__BackingField; // 0x4C
		::System::UInt32 _NormalAchievedProgress_k__BackingField; // 0x50
		::System::UInt32 _AreaID_k__BackingField; // 0x54
		::Enum_3_4608E37A1B3D374A_26 _NormalStatus_k__BackingField; // 0x58
		::System::UInt32 _EndlessAchievedScore_k__BackingField; // 0x5C
		::System::UInt32 _RogueMapID; // 0x60
		::System::UInt32 _NormalMaxProgress_k__BackingField; // 0x64
		::System::Boolean hasRegisterSchedule; // 0x68
		::System::Boolean _HasEnteredEndless_k__BackingField; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueEndlessAreaData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueEndlessAreaData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_A272ECC07A17819C_9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A272ECC07A17819C_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCurrentSelfAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTSELFAVATARIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCurrentTrialAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTTRIALAVATARIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetCurrentAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* GetCurrentBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTBUFFS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* GetCurrentMiracles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTMIRACLES_OFFSET))(this);
		}

		::System::Boolean IsFreeBuff(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_ISFREEBUFF_OFFSET))(this, a1);
		}

		::System::Boolean IsFreeMiracle(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_ISFREEMIRACLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRewardQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETREWARDQUESTIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetEndlessWaveIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETENDLESSWAVEIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetEndlessWaveMonsterDatas(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETENDLESSWAVEMONSTERDATAS_OFFSET))(this, a1);
		}

		::System::Void RegisterSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_REGISTERSCHEDULE_OFFSET))(this);
		}

		::System::UInt32 _GetEndlessStageInfiniteGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA__GETENDLESSSTAGEINFINITEGROUPID_OFFSET))(this);
		}

		::System::Void _OnScheduleStart(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA__ONSCHEDULESTART_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_MechanismTexts()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_MECHANISMTEXTS_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_AREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RogueMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ROGUEMAPID_OFFSET))(this);
		}

		::RPG::GameCore::RogueAreaConfigRow* get_AreaRow()
		{
			return ((::RPG::GameCore::RogueAreaConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_AREAROW_OFFSET))(this);
		}

		::System::Void set_AreaRow(::RPG::GameCore::RogueAreaConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAreaConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_AREAROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityRogueAreaConfigRow* get_ActivityAreaRow()
		{
			return ((::RPG::GameCore::ActivityRogueAreaConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ACTIVITYAREAROW_OFFSET))(this);
		}

		::System::Void set_ActivityAreaRow(::RPG::GameCore::ActivityRogueAreaConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityRogueAreaConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ACTIVITYAREAROW_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_EntranceImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENTRANCEIMAGE_OFFSET))(this);
		}

		::System::String* get_EntranceLockedImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENTRANCELOCKEDIMAGE_OFFSET))(this);
		}

		::System::UInt32 get_RecommendLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_RECOMMENDLEVEL_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_RecommendTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_RECOMMENDTYPES_OFFSET))(this);
		}

		::System::UInt32 get_NormalMaxProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALMAXPROGRESS_OFFSET))(this);
		}

		::System::Void set_NormalMaxProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALMAXPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndlessMaxProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSMAXPROGRESS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* get_FreeBuffDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_FREEBUFFDATAS_OFFSET))(this);
		}

		::System::Void set_FreeBuffDatas(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_FREEBUFFDATAS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_FreeMiracleIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_FREEMIRACLEIDS_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_26 get_NormalStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_26(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALSTATUS_OFFSET))(this);
		}

		::System::Void set_NormalStatus(::Enum_3_4608E37A1B3D374A_26 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_26))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALSTATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISDOING_OFFSET))(this);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::Boolean get_HasEnteredEndless()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASENTEREDENDLESS_OFFSET))(this);
		}

		::System::Void set_HasEnteredEndless(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_HASENTEREDENDLESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNormalFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISNORMALFINISHED_OFFSET))(this);
		}

		::System::Boolean get_HasEndlessScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASENDLESSSCORE_OFFSET))(this);
		}

		::System::UInt32 get_NormalAchievedProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALACHIEVEDPROGRESS_OFFSET))(this);
		}

		::System::Void set_NormalAchievedProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALACHIEVEDPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_NormalCurrentProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALCURRENTPROGRESS_OFFSET))(this);
		}

		::System::Void set_NormalCurrentProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALCURRENTPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndlessAchievedProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDPROGRESS_OFFSET))(this);
		}

		::System::Void set_EndlessAchievedProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ENDLESSACHIEVEDPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndlessAchievedScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDSCORE_OFFSET))(this);
		}

		::System::Void set_EndlessAchievedScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ENDLESSACHIEVEDSCORE_OFFSET))(this, a1);
		}

		::System::Int32 get_EndlessAchievedRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDRANK_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::RPG::Client::RoguePickAvatarInfo* get_PickAvatarInfo()
		{
			return ((::RPG::Client::RoguePickAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_PICKAVATARINFO_OFFSET))(this);
		}
	};
}
