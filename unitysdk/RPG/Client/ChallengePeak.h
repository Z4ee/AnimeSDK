#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_6;
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class ChallengePeakTag; }
namespace RPG::Client { class ChallengePeakTarget; }
namespace RPG::Client { class ChallengePeak_IServerAgent; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ChallengePeakConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAK_CHECKTARGETHASFINISHED_OFFSET UNITYSDK_OFFSET(0x92DACA0)
#define RPG_CLIENT_CHALLENGEPEAK_CREATE_OFFSET UNITYSDK_OFFSET(0x92DA6C0)
#define RPG_CLIENT_CHALLENGEPEAK_FILLAVATARSNAPSHOTSTO_OFFSET UNITYSDK_OFFSET(0x92DB490)
#define RPG_CLIENT_CHALLENGEPEAK_FILLLINEUPAVATARBASEIDSTO_OFFSET UNITYSDK_OFFSET(0x92DB400)
#define RPG_CLIENT_CHALLENGEPEAK_GETBESTRECORDLINEUPAVATARICONPATHS_OFFSET UNITYSDK_OFFSET(0x92DB5A0)
#define RPG_CLIENT_CHALLENGEPEAK_GETBOSS_OFFSET UNITYSDK_OFFSET(0x92D9FD0)
#define RPG_CLIENT_CHALLENGEPEAK_GETCOUNTOFPASSEDTARGETSINBESTRECORD_OFFSET UNITYSDK_OFFSET(0x92DB0E0)
#define RPG_CLIENT_CHALLENGEPEAK_GETCOUNTOFPASSEDTARGETS_OFFSET UNITYSDK_OFFSET(0x92DAEE0)
#define RPG_CLIENT_CHALLENGEPEAK_GETMINUSETURNINBESTRECORD_OFFSET UNITYSDK_OFFSET(0x92DB910)
#define RPG_CLIENT_CHALLENGEPEAK_GETMINUSETURN_OFFSET UNITYSDK_OFFSET(0x92DB840)
#define RPG_CLIENT_CHALLENGEPEAK_GETMONSTERBYINDEX_OFFSET UNITYSDK_OFFSET(0x92DB520)
#define RPG_CLIENT_CHALLENGEPEAK_GETTAGBYINDEX_OFFSET UNITYSDK_OFFSET(0x92DB360)
#define RPG_CLIENT_CHALLENGEPEAK_GETTARGETBYINDEX_OFFSET UNITYSDK_OFFSET(0x92DAE40)
#define RPG_CLIENT_CHALLENGEPEAK_GETTARGETINDEXBYID_OFFSET UNITYSDK_OFFSET(0x92DB240)
#define RPG_CLIENT_CHALLENGEPEAK_GET_COUNTOFMONSTERS_OFFSET UNITYSDK_OFFSET(0x92DA3B0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_COUNTOFTAGS_OFFSET UNITYSDK_OFFSET(0x92DA400)
#define RPG_CLIENT_CHALLENGEPEAK_GET_COUNTOFTARGETS_OFFSET UNITYSDK_OFFSET(0x92DA360)
#define RPG_CLIENT_CHALLENGEPEAK_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x92D9EE0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_EVENTIDLIST_OFFSET UNITYSDK_OFFSET(0x92D9F00)
#define RPG_CLIENT_CHALLENGEPEAK_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x92D9CF0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_HPPROGRESSVALUELIST_OFFSET UNITYSDK_OFFSET(0x92D9F40)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ID_OFFSET UNITYSDK_OFFSET(0x92D9D00)
#define RPG_CLIENT_CHALLENGEPEAK_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x92D9F60)
#define RPG_CLIENT_CHALLENGEPEAK_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x92D9D50)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ISLOCKEDTEAM_OFFSET UNITYSDK_OFFSET(0x92DA530)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ISPASSEDINBESTRECORD_OFFSET UNITYSDK_OFFSET(0x92DA1D0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0x92DA0D0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ISPERFECTPASSED_OFFSET UNITYSDK_OFFSET(0x92DA550)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ISQUICKPASSED_OFFSET UNITYSDK_OFFSET(0x92DA2B0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_KILLPROGRESSVALUELIST_OFFSET UNITYSDK_OFFSET(0x92D9F20)
#define RPG_CLIENT_CHALLENGEPEAK_GET_MONSTERICONPATH_OFFSET UNITYSDK_OFFSET(0x92DA060)
#define RPG_CLIENT_CHALLENGEPEAK_GET_NORMALTARGETLIST_OFFSET UNITYSDK_OFFSET(0x92D9EC0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_TEAMMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x92DA540)
#define RPG_CLIENT_CHALLENGEPEAK_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x92D9D20)
#define RPG_CLIENT_CHALLENGEPEAK_GET_TURNLIMIT_OFFSET UNITYSDK_OFFSET(0x92DA450)
#define RPG_CLIENT_CHALLENGEPEAK__CTOR_OFFSET UNITYSDK_OFFSET(0x92DA820)
#define RPG_CLIENT_CHALLENGEPEAK__GET_ISPERFECTPASSED_B__48_0_OFFSET UNITYSDK_OFFSET(0x92DBB90)
#define RPG_CLIENT_CHALLENGEPEAK__INITMONSTERS_OFFSET UNITYSDK_OFFSET(0x92DAA70)
#define RPG_CLIENT_CHALLENGEPEAK__INITTAGS_OFFSET UNITYSDK_OFFSET(0x92DAB90)
#define RPG_CLIENT_CHALLENGEPEAK__INITTARGETS_OFFSET UNITYSDK_OFFSET(0x92DA8D0)
#define RPG_CLIENT_CHALLENGEPEAK___INITTARGETS_B__64_0_OFFSET UNITYSDK_OFFSET(0x92DBBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeak_TypeDefinitionIndex = 51241;

	class ChallengePeak : public ::System::Object
	{
	public:
		::RPG::GameCore::ChallengePeakConfigRow* _Meta; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* _Monsters; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakTarget*>* _Targets; // 0x20
		::RPG::Client::ChallengePeak_IServerAgent* _ServerAgent; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakTag*>* _Tags; // 0x30
		::RPG::Client::ChallengePeakGroup* _Group_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::GameCore::ChallengePeakConfigRow* meta, ::RPG::Client::ChallengePeak_IServerAgent* serverAgent, ::RPG::Client::ChallengePeakGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengePeakConfigRow*, ::RPG::Client::ChallengePeak_IServerAgent*, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK__CTOR_OFFSET))(this, meta, serverAgent, group);
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

		static ::RPG::Client::ChallengePeak* Create(::System::UInt32 id, ::RPG::Client::ChallengePeak_IServerAgent* serverAgent, ::RPG::Client::ChallengePeakGroup* group)
		{
			return ((::RPG::Client::ChallengePeak*(*)(::System::UInt32, ::RPG::Client::ChallengePeak_IServerAgent*, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_CREATE_OFFSET))(id, serverAgent, group);
		}

		::System::Boolean CheckTargetHasFinished(::System::UInt32 targetID, ::System::Boolean isIgnoreQuickPass)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_CHECKTARGETHASFINISHED_OFFSET))(this, targetID, isIgnoreQuickPass);
		}

		::RPG::Client::ChallengePeakTarget* GetTargetByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::ChallengePeakTarget*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETTARGETBYINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetCountOfPassedTargets()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETCOUNTOFPASSEDTARGETS_OFFSET))(this);
		}

		::System::Int32 GetCountOfPassedTargetsInBestRecord()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETCOUNTOFPASSEDTARGETSINBESTRECORD_OFFSET))(this);
		}

		::System::Int32 GetTargetIndexByID(::System::UInt32 targetID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETTARGETINDEXBYID_OFFSET))(this, targetID);
		}

		::RPG::Client::ChallengePeakTag* GetTagByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::ChallengePeakTag*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETTAGBYINDEX_OFFSET))(this, index);
		}

		::System::Void FillLineupAvatarBaseIDsTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_FILLLINEUPAVATARBASEIDSTO_OFFSET))(this, buffer);
		}

		::System::Void FillAvatarSnapshotsTo(::System::Collections::Generic::ICollection_1<::Class_1_99BD961747420BEB_6*>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::Class_1_99BD961747420BEB_6*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_FILLAVATARSNAPSHOTSTO_OFFSET))(this, buffer);
		}

		::RPG::Client::MonsterData* GetMonsterByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETMONSTERBYINDEX_OFFSET))(this, index);
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

		::System::Boolean _get_IsPerfectPassed_b__48_0(::RPG::Client::ChallengePeakTarget* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK__GET_ISPERFECTPASSED_B__48_0_OFFSET))(this, target);
		}

		::System::Boolean __InitTargets_b__64_0(::System::UInt32 target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___INITTARGETS_B__64_0_OFFSET))(this, target);
		}
	};
}
