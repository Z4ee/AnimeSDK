#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengePeakRank.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakBoss_IServerAgent; }
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class ChallengePeakTag; }
namespace RPG::Client { class ChallengePeakTarget; }
namespace RPG::GameCore { class ChallengePeakBossConfigRow; }
namespace RPG::GameCore { class ChallengePeakConfigRow; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKBOSS_CALCULATERANK_OFFSET UNITYSDK_OFFSET(0xCAA0980)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_CREATE_OFFSET UNITYSDK_OFFSET(0xCA9F9C0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_FILLLINEUPAVATARBASEIDSTO_OFFSET UNITYSDK_OFFSET(0xCAA00E0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETBESTRECORDLINEUPAVATARICONPATHS_OFFSET UNITYSDK_OFFSET(0xCAA0D10)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETBUFFBYINDEX_OFFSET UNITYSDK_OFFSET(0xCAA10B0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETCOUNTOFPASSEDTARGETSINALLMODE_OFFSET UNITYSDK_OFFSET(0xCAA0710)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETCOUNTOFPASSEDTARGETSINCURRENTMODE_OFFSET UNITYSDK_OFFSET(0xCAA06B0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETCOUNTOFPASSEDTARGETSINEASYMODE_OFFSET UNITYSDK_OFFSET(0xCAA04D0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETCOUNTOFPASSEDTARGETSINHARDMODE_OFFSET UNITYSDK_OFFSET(0xCAA0450)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETCURRENTMODEMINUSETURN_OFFSET UNITYSDK_OFFSET(0xCAA0C50)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETEASYTAGBYINDEX_OFFSET UNITYSDK_OFFSET(0xCAA02D0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETHARDTAGBYINDEX_OFFSET UNITYSDK_OFFSET(0xCAA0200)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETMAXLEFTTURN_OFFSET UNITYSDK_OFFSET(0xCAA0AF0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETMINUSETURN_OFFSET UNITYSDK_OFFSET(0xCAA0BA0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETRANK_OFFSET UNITYSDK_OFFSET(0xCAA08A0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETSMALLMEDALICONPATH_OFFSET UNITYSDK_OFFSET(0xCAA09E0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETTAGBYINDEX_OFFSET UNITYSDK_OFFSET(0xCAA0190)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETTARGETBYINDEX_OFFSET UNITYSDK_OFFSET(0xCAA03C0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GETTARGETINDEXBYID_OFFSET UNITYSDK_OFFSET(0xCAA0770)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_CANSWITCHMODE_OFFSET UNITYSDK_OFFSET(0xCA9F7E0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_COLORMEDALTARGETHASFINISHED_OFFSET UNITYSDK_OFFSET(0xCA9F410)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_COLORMEDALTARGET_OFFSET UNITYSDK_OFFSET(0xCA9EE20)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_COUNTOFBUFFS_OFFSET UNITYSDK_OFFSET(0xCA9F960)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_COUNTOFEASYTAG_OFFSET UNITYSDK_OFFSET(0xCA9F5E0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_COUNTOFHARDTAGS_OFFSET UNITYSDK_OFFSET(0xCA9F630)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_COUNTOFTAGS_OFFSET UNITYSDK_OFFSET(0xCA9F570)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_COUNTOFTARGETS_OFFSET UNITYSDK_OFFSET(0xCA9F680)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_CURRENTMODEHASPASSED_OFFSET UNITYSDK_OFFSET(0xCA9F3B0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xCA9EC90)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_EASYMODEHASPASSED_OFFSET UNITYSDK_OFFSET(0xCA9F300)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_EVENTIDLIST_OFFSET UNITYSDK_OFFSET(0xCA9ECE0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_GROUP_OFFSET UNITYSDK_OFFSET(0xCA9EB50)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_HARDEVENTIDLIST_OFFSET UNITYSDK_OFFSET(0xCA9EE70)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_HARDMODEHASPASSED_OFFSET UNITYSDK_OFFSET(0xCA9F250)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_HARDTARGET_OFFSET UNITYSDK_OFFSET(0xCA9EDD0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_HARDTITLE_OFFSET UNITYSDK_OFFSET(0xCA9EC20)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_HPPROGRESSVALUELIST_OFFSET UNITYSDK_OFFSET(0xCA9ED80)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_ID_OFFSET UNITYSDK_OFFSET(0xCA9EB60)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_ISHARDMODE_OFFSET UNITYSDK_OFFSET(0xCA9EEC0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_ISLOCKEDTEAM_OFFSET UNITYSDK_OFFSET(0xCA9F920)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_KILLPROGRESSVALUELIST_OFFSET UNITYSDK_OFFSET(0xCA9ED30)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_TEAMMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xCA9F4C0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xCA9EBB0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_TURNLIMIT_OFFSET UNITYSDK_OFFSET(0xCA9F6D0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS_GET_VORACITYINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0xCA9EF70)
#define RPG_CLIENT_CHALLENGEPEAKBOSS__CHECKTARGETHASFINISHED_OFFSET UNITYSDK_OFFSET(0xCAA1160)
#define RPG_CLIENT_CHALLENGEPEAKBOSS__CTOR_OFFSET UNITYSDK_OFFSET(0xCA9FB50)
#define RPG_CLIENT_CHALLENGEPEAKBOSS__INITTAGS_OFFSET UNITYSDK_OFFSET(0xCA9FE60)
#define RPG_CLIENT_CHALLENGEPEAKBOSS__INITTARGETS_OFFSET UNITYSDK_OFFSET(0xCA9FC10)
#define RPG_CLIENT_CHALLENGEPEAKBOSS___INITTARGETS_B__80_0_OFFSET UNITYSDK_OFFSET(0xCAA1210)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakBoss_TypeDefinitionIndex = 63224;

	class ChallengePeakBoss : public ::System::Object
	{
	public:
		::RPG::GameCore::ChallengePeakConfigRow* _Meta; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakTarget*>* _Targets; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakTag*>* _Tags; // 0x20
		::RPG::Client::ChallengePeakGroup* _Group_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakTag*>* _HardTags; // 0x30
		::RPG::GameCore::ChallengePeakBossConfigRow* _BossMeta; // 0x38
		::RPG::Client::ChallengePeakBoss_IServerAgent* _ServerAgent; // 0x40

		::System::Void _ctor(::RPG::GameCore::ChallengePeakConfigRow* a1, ::RPG::GameCore::ChallengePeakBossConfigRow* a2, ::RPG::Client::ChallengePeakBoss_IServerAgent* a3, ::RPG::Client::ChallengePeakGroup* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengePeakConfigRow*, ::RPG::GameCore::ChallengePeakBossConfigRow*, ::RPG::Client::ChallengePeakBoss_IServerAgent*, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::ChallengePeakGroup* get_Group()
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_GROUP_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_HardTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_HARDTITLE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_DamageType()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_DAMAGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_EventIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_EVENTIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_KillProgressValueList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_KILLPROGRESSVALUELIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_HPProgressValueList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_HPPROGRESSVALUELIST_OFFSET))(this);
		}

		::System::UInt32 get_HardTarget()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_HARDTARGET_OFFSET))(this);
		}

		::System::UInt32 get_ColorMedalTarget()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_COLORMEDALTARGET_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_HardEventIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_HARDEVENTIDLIST_OFFSET))(this);
		}

		::System::Boolean get_IsHardMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_ISHARDMODE_OFFSET))(this);
		}

		::System::Int32 get_VoracityInvasionLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_VORACITYINVASIONLEVEL_OFFSET))(this);
		}

		::System::Boolean get_HardModeHasPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_HARDMODEHASPASSED_OFFSET))(this);
		}

		::System::Boolean get_EasyModeHasPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_EASYMODEHASPASSED_OFFSET))(this);
		}

		::System::Boolean get_CurrentModeHasPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_CURRENTMODEHASPASSED_OFFSET))(this);
		}

		::System::Boolean get_ColorMedalTargetHasFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_COLORMEDALTARGETHASFINISHED_OFFSET))(this);
		}

		::System::UInt32 get_TeamMazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_TEAMMAZEBUFFID_OFFSET))(this);
		}

		::System::Int32 get_CountOfTags()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_COUNTOFTAGS_OFFSET))(this);
		}

		::System::Int32 get_CountOfEasyTag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_COUNTOFEASYTAG_OFFSET))(this);
		}

		::System::Int32 get_CountOfHardTags()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_COUNTOFHARDTAGS_OFFSET))(this);
		}

		::System::Int32 get_CountOfTargets()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_COUNTOFTARGETS_OFFSET))(this);
		}

		::System::UInt32 get_TurnLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_TURNLIMIT_OFFSET))(this);
		}

		::System::Boolean get_CanSwitchMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_CANSWITCHMODE_OFFSET))(this);
		}

		::System::Boolean get_IsLockedTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_ISLOCKEDTEAM_OFFSET))(this);
		}

		::System::Int32 get_CountOfBuffs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GET_COUNTOFBUFFS_OFFSET))(this);
		}

		static ::RPG::Client::ChallengePeakBoss* Create(::System::UInt32 a1, ::RPG::Client::ChallengePeakBoss_IServerAgent* a2, ::RPG::Client::ChallengePeakGroup* a3)
		{
			return ((::RPG::Client::ChallengePeakBoss*(*)(::System::UInt32, ::RPG::Client::ChallengePeakBoss_IServerAgent*, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void FillLineupAvatarBaseIDsTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_FILLLINEUPAVATARBASEIDSTO_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakTag* GetTagByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ChallengePeakTag*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETTAGBYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakTag* GetEasyTagByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ChallengePeakTag*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETEASYTAGBYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakTag* GetHardTagByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ChallengePeakTag*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETHARDTAGBYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakTarget* GetTargetByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ChallengePeakTarget*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETTARGETBYINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetCountOfPassedTargetsInHardMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETCOUNTOFPASSEDTARGETSINHARDMODE_OFFSET))(this);
		}

		::System::Int32 GetCountOfPassedTargetsInEasyMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETCOUNTOFPASSEDTARGETSINEASYMODE_OFFSET))(this);
		}

		::System::Int32 GetCountOfPassedTargetsInCurrentMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETCOUNTOFPASSEDTARGETSINCURRENTMODE_OFFSET))(this);
		}

		::System::Int32 GetCountOfPassedTargetsInAllMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETCOUNTOFPASSEDTARGETSINALLMODE_OFFSET))(this);
		}

		::System::Int32 GetTargetIndexByID(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETTARGETINDEXBYID_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakRank GetRank()
		{
			return ((::RPG::Client::ChallengePeakRank(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETRANK_OFFSET))(this);
		}

		static ::RPG::Client::ChallengePeakRank CalculateRank(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::ChallengePeakRank(*)(::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_CALCULATERANK_OFFSET))(a1, a2);
		}

		::System::String* GetSmallMedalIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETSMALLMEDALICONPATH_OFFSET))(this);
		}

		::System::UInt32 GetMaxLeftTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETMAXLEFTTURN_OFFSET))(this);
		}

		::System::UInt32 GetMinUseTurn(::System::Boolean a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETMINUSETURN_OFFSET))(this, a1);
		}

		::System::UInt32 GetCurrentModeMinUseTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETCURRENTMODEMINUSETURN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetBestRecordLineupAvatarIconPaths(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETBESTRECORDLINEUPAVATARICONPATHS_OFFSET))(this, a1);
		}

		::RPG::GameCore::MazeBuffRow* GetBuffByIndex(::System::Int32 a1)
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS_GETBUFFBYINDEX_OFFSET))(this, a1);
		}

		::System::Void _InitTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS__INITTARGETS_OFFSET))(this);
		}

		::System::Void _InitTags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS__INITTAGS_OFFSET))(this);
		}

		::System::Boolean _CheckTargetHasFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS__CHECKTARGETHASFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean __InitTargets_b__80_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___INITTARGETS_B__80_0_OFFSET))(this, a1);
		}
	};
}
