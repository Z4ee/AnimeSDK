#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityElationStage; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_FINISHEDROUNDS_OFFSET UNITYSDK_OFFSET(0x9AD19F0)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_ISFINISHROUNDHIGHSCORE_OFFSET UNITYSDK_OFFSET(0x9AD1A50)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_ISPERFECTFINISHED_OFFSET UNITYSDK_OFFSET(0x9AD1A30)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_ISREMAININGROUNDSHIGHSCORE_OFFSET UNITYSDK_OFFSET(0x9AD1A70)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_RANK_OFFSET UNITYSDK_OFFSET(0x9AD18A0)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_REMAININGROUNDS_OFFSET UNITYSDK_OFFSET(0x9AD1A10)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x9AD1880)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_TARGETLIST_OFFSET UNITYSDK_OFFSET(0x9AD1A90)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_ISTARGETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9AD1BD0)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_FINISHEDROUNDS_OFFSET UNITYSDK_OFFSET(0x9AD1A00)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_ISFINISHROUNDHIGHSCORE_OFFSET UNITYSDK_OFFSET(0x9AD1A60)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_ISPERFECTFINISHED_OFFSET UNITYSDK_OFFSET(0x9AD1A40)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_ISREMAININGROUNDSHIGHSCORE_OFFSET UNITYSDK_OFFSET(0x9AD1A80)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_REMAININGROUNDS_OFFSET UNITYSDK_OFFSET(0x9AD1A20)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x9AD1890)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x9AD1C50)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationBattleResult_TypeDefinitionIndex = 56724;

	class ActivityElationBattleResult : public ::System::Object
	{
	public:
		::RPG::Client::ActivityElationStage* _StageRef; // 0x10
		::Il2CppArray<::System::Boolean>* _TargetStatus; // 0x18
		::System::UInt32 _FinishedRounds_k__BackingField; // 0x20
		::System::Boolean _IsPerfectFinished_k__BackingField; // 0x24
		::System::Boolean _IsFinishRoundHighScore_k__BackingField; // 0x25
		::System::Boolean _IsRemainingRoundsHighScore_k__BackingField; // 0x26
		::System::UInt32 _StageID_k__BackingField; // 0x28
		::System::UInt32 _RemainingRounds_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 stageID, ::System::UInt32 finishedRounds, ::System::UInt32 remainingRounds, ::System::UInt32 targetBitSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT__CTOR_OFFSET))(this, stageID, finishedRounds, remainingRounds, targetBitSet);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_STAGEID_OFFSET))(this, value);
		}

		::System::Int32 get_Rank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_RANK_OFFSET))(this);
		}

		::System::UInt32 get_FinishedRounds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_FINISHEDROUNDS_OFFSET))(this);
		}

		::System::Void set_FinishedRounds(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_FINISHEDROUNDS_OFFSET))(this, value);
		}

		::System::UInt32 get_RemainingRounds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_REMAININGROUNDS_OFFSET))(this);
		}

		::System::Void set_RemainingRounds(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_REMAININGROUNDS_OFFSET))(this, value);
		}

		::System::Boolean get_IsPerfectFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_ISPERFECTFINISHED_OFFSET))(this);
		}

		::System::Void set_IsPerfectFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_ISPERFECTFINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinishRoundHighScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_ISFINISHROUNDHIGHSCORE_OFFSET))(this);
		}

		::System::Void set_IsFinishRoundHighScore(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_ISFINISHROUNDHIGHSCORE_OFFSET))(this, value);
		}

		::System::Boolean get_IsRemainingRoundsHighScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_ISREMAININGROUNDSHIGHSCORE_OFFSET))(this);
		}

		::System::Void set_IsRemainingRoundsHighScore(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_ISREMAININGROUNDSHIGHSCORE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TargetList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_TARGETLIST_OFFSET))(this);
		}

		::System::Boolean IsTargetComplete(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_ISTARGETCOMPLETE_OFFSET))(this, index);
		}
	};
}
