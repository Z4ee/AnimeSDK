#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityElationStage; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_FINISHEDROUNDS_OFFSET UNITYSDK_OFFSET(0xB0B3CB0)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_ISFINISHROUNDHIGHSCORE_OFFSET UNITYSDK_OFFSET(0xB0B3D10)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_ISPERFECTFINISHED_OFFSET UNITYSDK_OFFSET(0xB0B3CF0)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_ISREMAININGROUNDSHIGHSCORE_OFFSET UNITYSDK_OFFSET(0xB0B3D30)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_RANK_OFFSET UNITYSDK_OFFSET(0xB0B3B60)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_REMAININGROUNDS_OFFSET UNITYSDK_OFFSET(0xB0B3CD0)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB0B3B40)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_TARGETLIST_OFFSET UNITYSDK_OFFSET(0xB0B3D50)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_ISTARGETCOMPLETE_OFFSET UNITYSDK_OFFSET(0xB0B3E90)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_FINISHEDROUNDS_OFFSET UNITYSDK_OFFSET(0xB0B3CC0)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_ISFINISHROUNDHIGHSCORE_OFFSET UNITYSDK_OFFSET(0xB0B3D20)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_ISPERFECTFINISHED_OFFSET UNITYSDK_OFFSET(0xB0B3D00)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_ISREMAININGROUNDSHIGHSCORE_OFFSET UNITYSDK_OFFSET(0xB0B3D40)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_REMAININGROUNDS_OFFSET UNITYSDK_OFFSET(0xB0B3CE0)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB0B3B50)
#define RPG_CLIENT_ACTIVITYELATIONBATTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xB0B3F00)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationBattleResult_TypeDefinitionIndex = 57508;

	class ActivityElationBattleResult : public ::System::Object
	{
	public:
		::RPG::Client::ActivityElationStage* _StageRef; // 0x10
		::Il2CppArray<::System::Boolean>* _TargetStatus; // 0x18
		::System::UInt32 _RemainingRounds_k__BackingField; // 0x20
		::System::UInt32 _StageID_k__BackingField; // 0x24
		::System::UInt32 _FinishedRounds_k__BackingField; // 0x28
		::System::Boolean _IsRemainingRoundsHighScore_k__BackingField; // 0x2C
		::System::Boolean _IsPerfectFinished_k__BackingField; // 0x2D
		::System::Boolean _IsFinishRoundHighScore_k__BackingField; // 0x2E

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_STAGEID_OFFSET))(this, a1);
		}

		::System::Int32 get_Rank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_RANK_OFFSET))(this);
		}

		::System::UInt32 get_FinishedRounds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_FINISHEDROUNDS_OFFSET))(this);
		}

		::System::Void set_FinishedRounds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_FINISHEDROUNDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_RemainingRounds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_REMAININGROUNDS_OFFSET))(this);
		}

		::System::Void set_RemainingRounds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_REMAININGROUNDS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPerfectFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_ISPERFECTFINISHED_OFFSET))(this);
		}

		::System::Void set_IsPerfectFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_ISPERFECTFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinishRoundHighScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_ISFINISHROUNDHIGHSCORE_OFFSET))(this);
		}

		::System::Void set_IsFinishRoundHighScore(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_ISFINISHROUNDHIGHSCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRemainingRoundsHighScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_ISREMAININGROUNDSHIGHSCORE_OFFSET))(this);
		}

		::System::Void set_IsRemainingRoundsHighScore(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_SET_ISREMAININGROUNDSHIGHSCORE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TargetList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_GET_TARGETLIST_OFFSET))(this);
		}

		::System::Boolean IsTargetComplete(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONBATTLERESULT_ISTARGETCOMPLETE_OFFSET))(this, a1);
		}
	};
}
