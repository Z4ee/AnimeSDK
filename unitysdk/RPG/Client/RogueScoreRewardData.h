#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_F1F83A16E5B8B459_4;
namespace RPG::GameCore { class RogueScoreRewardRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUESCOREREWARDDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7E3720)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GETCURSCOREREWARDROWS_OFFSET UNITYSDK_OFFSET(0xC7E39C0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GETMAXSCORE_OFFSET UNITYSDK_OFFSET(0xC7E4050)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GETSTRIPERTIPTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC7E4100)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC7E44E0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC7E4500)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_HASTAKENINITIALSCORE_OFFSET UNITYSDK_OFFSET(0xC7E44B0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0xC7E4420)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLID_OFFSET UNITYSDK_OFFSET(0xC7E4430)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLREFRESHED_OFFSET UNITYSDK_OFFSET(0xC7E4490)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_PRESCORE_OFFSET UNITYSDK_OFFSET(0xC7E4470)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xC7E4450)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_WILLSCOREBEMERGED_OFFSET UNITYSDK_OFFSET(0xC7E44D0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xC7E3FC0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWCANTAKE_OFFSET UNITYSDK_OFFSET(0xC7E3DD0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWTAKEN_OFFSET UNITYSDK_OFFSET(0xC7E3F00)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_NEEDSHOWSTRIPERTIP_OFFSET UNITYSDK_OFFSET(0xC7E4150)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESHHASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xC7E38D0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xC7E37D0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC7E44F0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC7E4510)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_HASTAKENINITIALSCORE_OFFSET UNITYSDK_OFFSET(0xC7E44C0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLID_OFFSET UNITYSDK_OFFSET(0xC7E4440)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLREFRESHED_OFFSET UNITYSDK_OFFSET(0xC7E44A0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_PRESCORE_OFFSET UNITYSDK_OFFSET(0xC7E4480)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xC7E4460)
#define RPG_CLIENT_ROGUESCOREREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC7E3710)
#define RPG_CLIENT_ROGUESCOREREWARDDATA__ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0xC7E41D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueScoreRewardData_TypeDefinitionIndex = 63104;

	class RogueScoreRewardData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _StriperRemainTimeOffset = 0xFFFFFED4; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _TakenScoreRewardRowIDs; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::RogueScoreRewardRow*>* _CacheScoreRewardRows; // 0x18
		::System::Nullable_1<::System::Boolean> _HasRewaradCanTake; // 0x20
		::System::Boolean _HasTakenInitialScore_k__BackingField; // 0x22
		::System::Boolean _PoolRefreshed_k__BackingField; // 0x23
		::System::UInt32 _Score_k__BackingField; // 0x24
		::System::Int64 _BeginTimeStamp_k__BackingField; // 0x28
		::System::Int64 _EndTimeStamp_k__BackingField; // 0x30
		::System::UInt32 _PreScore_k__BackingField; // 0x38
		::System::UInt32 _PoolID_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Refresh(::Class_1_F1F83A16E5B8B459_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Void RefreshHasRewardCanTake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESHHASREWARDCANTAKE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueScoreRewardRow*>* GetCurScoreRewardRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueScoreRewardRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GETCURSCOREREWARDROWS_OFFSET))(this);
		}

		::System::Boolean IsRewardRowTaken(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWTAKEN_OFFSET))(this, a1);
		}

		::System::Boolean IsRewardRowCanTake(::RPG::GameCore::RogueScoreRewardRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueScoreRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWCANTAKE_OFFSET))(this, a1);
		}

		::System::Boolean HasRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_HASREWARDCANTAKE_OFFSET))(this);
		}

		::System::UInt32 GetMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GETMAXSCORE_OFFSET))(this);
		}

		::System::UInt64 GetStriperTipTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GETSTRIPERTIPTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean NeedShowStriperTip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_NEEDSHOWSTRIPERTIP_OFFSET))(this);
		}

		::System::Boolean _IsNearlyFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA__ISNEARLYFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsNearlyFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ISNEARLYFINISH_OFFSET))(this);
		}

		::System::UInt32 get_PoolID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLID_OFFSET))(this);
		}

		::System::Void set_PoolID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_SCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PreScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_PRESCORE_OFFSET))(this);
		}

		::System::Void set_PreScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_PRESCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_PoolRefreshed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLREFRESHED_OFFSET))(this);
		}

		::System::Void set_PoolRefreshed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLREFRESHED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasTakenInitialScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_HASTAKENINITIALSCORE_OFFSET))(this);
		}

		::System::Void set_HasTakenInitialScore(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_HASTAKENINITIALSCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_WillScoreBeMerged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_WILLSCOREBEMERGED_OFFSET))(this);
		}

		::System::Int64 get_BeginTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_BEGINTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Int64 get_EndTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_ENDTIMESTAMP_OFFSET))(this, a1);
		}
	};
}
