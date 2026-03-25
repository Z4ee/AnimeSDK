#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivitySummonDifficulty.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivitySummonChallengeTarget; }
namespace RPG::Client { class ActivitySummonStage; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ActivitySummonLevelRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_CHECKCHALLENGETARGETHASCOMPLETED_OFFSET UNITYSDK_OFFSET(0x8FB5080)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_CREATE_OFFSET UNITYSDK_OFFSET(0x8FB4D90)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GETCHALLENGETARGETS_OFFSET UNITYSDK_OFFSET(0x8FB57A0)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GETFIRSTCHALLENGETARGET_OFFSET UNITYSDK_OFFSET(0x8FB52C0)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GETMASTERTRIALAVATAR_OFFSET UNITYSDK_OFFSET(0x8FB55A0)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GETSORTEDMONSTERS_OFFSET UNITYSDK_OFFSET(0x8FB4E00)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GETSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x8FB51E0)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x8FB5350)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_BATTLEEVENTID_OFFSET UNITYSDK_OFFSET(0x8FB4D50)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x8FB4AD0)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_HASCOMPLETED_OFFSET UNITYSDK_OFFSET(0x8FB4C70)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_HASUNLOCKED_OFFSET UNITYSDK_OFFSET(0x8FB4AF0)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_MASTERAVATARLIST_OFFSET UNITYSDK_OFFSET(0x8FB4D10)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_META_OFFSET UNITYSDK_OFFSET(0x8FB49F0)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_MONSTERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x8FB4D70)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x8FB4A00)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_SUMMONSTAGEREF_OFFSET UNITYSDK_OFFSET(0x8FB4A20)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_TRIALAVATARLIST_OFFSET UNITYSDK_OFFSET(0x8FB4D30)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL_TRYCONSUMEUNLOCKFLAG_OFFSET UNITYSDK_OFFSET(0x8FB5940)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL__CHECKALLCHALLENGETARGETHASCOMPLETED_OFFSET UNITYSDK_OFFSET(0x8FB4C80)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x8FB4DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySummonLevel_TypeDefinitionIndex = 50255;

	class ActivitySummonLevel : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivitySummonLevelRow* _Meta; // 0x10

		::System::Void _ctor(::RPG::GameCore::ActivitySummonLevelRow* meta)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivitySummonLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL__CTOR_OFFSET))(this, meta);
		}

		::RPG::GameCore::ActivitySummonLevelRow* get_Meta()
		{
			return ((::RPG::GameCore::ActivitySummonLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_META_OFFSET))(this);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_STAGEID_OFFSET))(this);
		}

		::RPG::Client::ActivitySummonStage* get_SummonStageRef()
		{
			return ((::RPG::Client::ActivitySummonStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_SUMMONSTAGEREF_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySummonDifficulty get_Difficulty()
		{
			return ((::RPG::GameCore::ActivitySummonDifficulty(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Boolean get_HasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_HASUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_HasCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_HASCOMPLETED_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MasterAvatarList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_MASTERAVATARLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TrialAvatarList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_TRIALAVATARLIST_OFFSET))(this);
		}

		::System::UInt32 get_BattleEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_BATTLEEVENTID_OFFSET))(this);
		}

		::System::String* get_MonsterImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GET_MONSTERIMAGEPATH_OFFSET))(this);
		}

		static ::RPG::Client::ActivitySummonLevel* Create(::RPG::GameCore::ActivitySummonLevelRow* meta)
		{
			return ((::RPG::Client::ActivitySummonLevel*(*)(::RPG::GameCore::ActivitySummonLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_CREATE_OFFSET))(meta);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetSortedMonsters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GETSORTEDMONSTERS_OFFSET))(this);
		}

		::System::Boolean CheckChallengeTargetHasCompleted(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_CHECKCHALLENGETARGETHASCOMPLETED_OFFSET))(this, index);
		}

		::System::UInt32 GetStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GETSTARCOUNT_OFFSET))(this);
		}

		::RPG::Client::ActivitySummonChallengeTarget* GetFirstChallengeTarget()
		{
			return ((::RPG::Client::ActivitySummonChallengeTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GETFIRSTCHALLENGETARGET_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GETTRIALAVATARS_OFFSET))(this);
		}

		::RPG::Client::IAvatarInfoProvider* GetMasterTrialAvatar()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GETMASTERTRIALAVATAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonChallengeTarget*>* GetChallengeTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonChallengeTarget*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_GETCHALLENGETARGETS_OFFSET))(this);
		}

		::System::Boolean TryConsumeUnlockFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL_TRYCONSUMEUNLOCKFLAG_OFFSET))(this);
		}

		::System::Boolean _CheckAllChallengeTargetHasCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL__CHECKALLCHALLENGETARGETHASCOMPLETED_OFFSET))(this);
		}
	};
}
