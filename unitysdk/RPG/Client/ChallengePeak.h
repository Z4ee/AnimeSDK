#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7F6A638FBAAEC90B_4;
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class ChallengePeakTag; }
namespace RPG::Client { class ChallengePeakTarget; }
namespace RPG::Client { class ChallengePeak_IServerAgent; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ChallengePeakConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAK_CHECKTARGETHASFINISHED_OFFSET UNITYSDK_OFFSET(0x1AD4DE40)
#define RPG_CLIENT_CHALLENGEPEAK_CREATE_OFFSET UNITYSDK_OFFSET(0x1AD4D760)
#define RPG_CLIENT_CHALLENGEPEAK_FILLAVATARSNAPSHOTSTO_OFFSET UNITYSDK_OFFSET(0x1AD4E800)
#define RPG_CLIENT_CHALLENGEPEAK_FILLLINEUPAVATARBASEIDSTO_OFFSET UNITYSDK_OFFSET(0x1AD4E6F0)
#define RPG_CLIENT_CHALLENGEPEAK_GETBESTRECORDLINEUPAVATARICONPATHS_OFFSET UNITYSDK_OFFSET(0x1AD4E9F0)
#define RPG_CLIENT_CHALLENGEPEAK_GETBOSS_OFFSET UNITYSDK_OFFSET(0x1AD4E9A0)
#define RPG_CLIENT_CHALLENGEPEAK_GETCOUNTOFPASSEDTARGETSINBESTRECORD_OFFSET UNITYSDK_OFFSET(0x1AD4E360)
#define RPG_CLIENT_CHALLENGEPEAK_GETCOUNTOFPASSEDTARGETS_OFFSET UNITYSDK_OFFSET(0x1AD4E180)
#define RPG_CLIENT_CHALLENGEPEAK_GETMINUSETURNINBESTRECORD_OFFSET UNITYSDK_OFFSET(0x1AD4EF50)
#define RPG_CLIENT_CHALLENGEPEAK_GETMINUSETURN_OFFSET UNITYSDK_OFFSET(0x1AD4EDF0)
#define RPG_CLIENT_CHALLENGEPEAK_GETMONSTERBYINDEX_OFFSET UNITYSDK_OFFSET(0x1AD4E910)
#define RPG_CLIENT_CHALLENGEPEAK_GETTAGBYINDEX_OFFSET UNITYSDK_OFFSET(0x1AD4E660)
#define RPG_CLIENT_CHALLENGEPEAK_GETTARGETBYINDEX_OFFSET UNITYSDK_OFFSET(0x1AD4E0F0)
#define RPG_CLIENT_CHALLENGEPEAK_GETTARGETINDEXBYID_OFFSET UNITYSDK_OFFSET(0x1AD4E530)
#define RPG_CLIENT_CHALLENGEPEAK_GET_COUNTOFMONSTERS_OFFSET UNITYSDK_OFFSET(0x18C329D0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_COUNTOFTAGS_OFFSET UNITYSDK_OFFSET(0x18C32A20)
#define RPG_CLIENT_CHALLENGEPEAK_GET_COUNTOFTARGETS_OFFSET UNITYSDK_OFFSET(0x18C32980)
#define RPG_CLIENT_CHALLENGEPEAK_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x18C320C0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_EVENTIDLIST_OFFSET UNITYSDK_OFFSET(0x18C32110)
#define RPG_CLIENT_CHALLENGEPEAK_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x18C31E90)
#define RPG_CLIENT_CHALLENGEPEAK_GET_HPPROGRESSVALUELIST_OFFSET UNITYSDK_OFFSET(0x18C32450)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ID_OFFSET UNITYSDK_OFFSET(0x18C31EA0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x18C324A0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x18C31F60)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ISLOCKEDTEAM_OFFSET UNITYSDK_OFFSET(0x18C32B60)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ISPASSEDINBESTRECORD_OFFSET UNITYSDK_OFFSET(0x18C32740)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0x18C325E0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ISPERFECTPASSED_OFFSET UNITYSDK_OFFSET(0x1AD4D620)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ISQUICKPASSED_OFFSET UNITYSDK_OFFSET(0x18C328A0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_KILLPROGRESSVALUELIST_OFFSET UNITYSDK_OFFSET(0x18C32400)
#define RPG_CLIENT_CHALLENGEPEAK_GET_MONSTERICONPATH_OFFSET UNITYSDK_OFFSET(0x18C32540)
#define RPG_CLIENT_CHALLENGEPEAK_GET_NORMALTARGETLIST_OFFSET UNITYSDK_OFFSET(0x18C32070)
#define RPG_CLIENT_CHALLENGEPEAK_GET_TEAMMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x18C32BB0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x18C31EF0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_TURNLIMIT_OFFSET UNITYSDK_OFFSET(0x18C32A70)
#define RPG_CLIENT_CHALLENGEPEAK_GET_VORACITYINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0x18C32160)
#define RPG_CLIENT_CHALLENGEPEAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD4D8C0)
#define RPG_CLIENT_CHALLENGEPEAK__GET_ISPERFECTPASSED_B__50_0_OFFSET UNITYSDK_OFFSET(0x1AD4F260)
#define RPG_CLIENT_CHALLENGEPEAK__INITMONSTERS_OFFSET UNITYSDK_OFFSET(0x1AD4DBD0)
#define RPG_CLIENT_CHALLENGEPEAK__INITTAGS_OFFSET UNITYSDK_OFFSET(0x1AD4DCE0)
#define RPG_CLIENT_CHALLENGEPEAK__INITTARGETS_OFFSET UNITYSDK_OFFSET(0x1AD4D970)
#define RPG_CLIENT_CHALLENGEPEAK___INITTARGETS_B__66_0_OFFSET UNITYSDK_OFFSET(0x1AD4F320)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeak_TypeDefinitionIndex = 63218;

	class ChallengePeak : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakTag*>* _Tags; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakTarget*>* _Targets; // 0x18
		::RPG::GameCore::ChallengePeakConfigRow* _Meta; // 0x20
		::RPG::Client::ChallengePeak_IServerAgent* _ServerAgent; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* _Monsters; // 0x30
		::RPG::Client::ChallengePeakGroup* _Group_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::GameCore::ChallengePeakConfigRow* a1, ::RPG::Client::ChallengePeak_IServerAgent* a2, ::RPG::Client::ChallengePeakGroup* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengePeakConfigRow*, ::RPG::Client::ChallengePeak_IServerAgent*, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ChallengePeakGroup* get_Group()
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_GROUP_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_TITLE_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_INDEX_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_NormalTargetList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_NORMALTARGETLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_DamageType()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_DAMAGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_EventIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_EVENTIDLIST_OFFSET))(this);
		}

		::System::Int32 get_VoracityInvasionLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_VORACITYINVASIONLEVEL_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_KillProgressValueList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_KILLPROGRESSVALUELIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_HPProgressValueList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_HPPROGRESSVALUELIST_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::String* get_MonsterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_MONSTERICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_ISPASSED_OFFSET))(this);
		}

		::System::Boolean get_IsPassedInBestRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_ISPASSEDINBESTRECORD_OFFSET))(this);
		}

		::System::Boolean get_IsQuickPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_ISQUICKPASSED_OFFSET))(this);
		}

		::System::Int32 get_CountOfTargets()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_COUNTOFTARGETS_OFFSET))(this);
		}

		::System::Int32 get_CountOfMonsters()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_COUNTOFMONSTERS_OFFSET))(this);
		}

		::System::Int32 get_CountOfTags()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_COUNTOFTAGS_OFFSET))(this);
		}

		::System::UInt32 get_TurnLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_TURNLIMIT_OFFSET))(this);
		}

		::System::Boolean get_IsLockedTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_ISLOCKEDTEAM_OFFSET))(this);
		}

		::System::UInt32 get_TeamMazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_TEAMMAZEBUFFID_OFFSET))(this);
		}

		::System::Boolean get_IsPerfectPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_ISPERFECTPASSED_OFFSET))(this);
		}

		static ::RPG::Client::ChallengePeak* Create(::System::UInt32 a1, ::RPG::Client::ChallengePeak_IServerAgent* a2, ::RPG::Client::ChallengePeakGroup* a3)
		{
			return ((::RPG::Client::ChallengePeak*(*)(::System::UInt32, ::RPG::Client::ChallengePeak_IServerAgent*, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Boolean CheckTargetHasFinished(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_CHECKTARGETHASFINISHED_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengePeakTarget* GetTargetByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ChallengePeakTarget*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETTARGETBYINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetCountOfPassedTargets()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETCOUNTOFPASSEDTARGETS_OFFSET))(this);
		}

		::System::Int32 GetCountOfPassedTargetsInBestRecord()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETCOUNTOFPASSEDTARGETSINBESTRECORD_OFFSET))(this);
		}

		::System::Int32 GetTargetIndexByID(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETTARGETINDEXBYID_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakTag* GetTagByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ChallengePeakTag*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETTAGBYINDEX_OFFSET))(this, a1);
		}

		::System::Void FillLineupAvatarBaseIDsTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_FILLLINEUPAVATARBASEIDSTO_OFFSET))(this, a1);
		}

		::System::Void FillAvatarSnapshotsTo(::System::Collections::Generic::ICollection_1<::Class_1_7F6A638FBAAEC90B_4*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::Class_1_7F6A638FBAAEC90B_4*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_FILLAVATARSNAPSHOTSTO_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterData* GetMonsterByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETMONSTERBYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterData* GetBoss()
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETBOSS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetBestRecordLineupAvatarIconPaths()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETBESTRECORDLINEUPAVATARICONPATHS_OFFSET))(this);
		}

		::System::UInt32 GetMinUseTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETMINUSETURN_OFFSET))(this);
		}

		::System::UInt32 GetMinUseTurnInBestRecord()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETMINUSETURNINBESTRECORD_OFFSET))(this);
		}

		::System::Void _InitTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK__INITTARGETS_OFFSET))(this);
		}

		::System::Void _InitMonsters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK__INITMONSTERS_OFFSET))(this);
		}

		::System::Void _InitTags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK__INITTAGS_OFFSET))(this);
		}

		::System::Boolean _get_IsPerfectPassed_b__50_0(::RPG::Client::ChallengePeakTarget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK__GET_ISPERFECTPASSED_B__50_0_OFFSET))(this, a1);
		}

		::System::Boolean __InitTargets_b__66_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___INITTARGETS_B__66_0_OFFSET))(this, a1);
		}
	};
}
