#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_569A1536AD9335E7;
namespace RPG::GameCore { class RogueScoreRewardRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUESCOREREWARDDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB092EA0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GETCURSCOREREWARDROWS_OFFSET UNITYSDK_OFFSET(0xB093170)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GETMAXSCORE_OFFSET UNITYSDK_OFFSET(0xB093600)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GETSTRIPERTIPTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB0936C0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB093AA0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB093AC0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_HASTAKENINITIALSCORE_OFFSET UNITYSDK_OFFSET(0xB093A70)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0xB0939E0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLID_OFFSET UNITYSDK_OFFSET(0xB0939F0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLREFRESHED_OFFSET UNITYSDK_OFFSET(0xB093A50)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_PRESCORE_OFFSET UNITYSDK_OFFSET(0xB093A30)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xB093A10)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_WILLSCOREBEMERGED_OFFSET UNITYSDK_OFFSET(0xB093A90)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xB093570)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWCANTAKE_OFFSET UNITYSDK_OFFSET(0xB093460)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWTAKEN_OFFSET UNITYSDK_OFFSET(0xB093510)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_NEEDSHOWSTRIPERTIP_OFFSET UNITYSDK_OFFSET(0xB093710)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESHHASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xB093060)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xB092F40)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB093AB0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB093AD0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_HASTAKENINITIALSCORE_OFFSET UNITYSDK_OFFSET(0xB093A80)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLID_OFFSET UNITYSDK_OFFSET(0xB093A00)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLREFRESHED_OFFSET UNITYSDK_OFFSET(0xB093A60)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_PRESCORE_OFFSET UNITYSDK_OFFSET(0xB093A40)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xB093A20)
#define RPG_CLIENT_ROGUESCOREREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB092E90)
#define RPG_CLIENT_ROGUESCOREREWARDDATA__ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0xB093790)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueScoreRewardData_TypeDefinitionIndex = 62171;

	class RogueScoreRewardData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _StriperRemainTimeOffset = 0xFFFFFED4; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _TakenScoreRewardRowIDs; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::RogueScoreRewardRow*>* _CacheScoreRewardRows; // 0x18
		::System::Int64 _EndTimeStamp_k__BackingField; // 0x20
		::System::Int64 _BeginTimeStamp_k__BackingField; // 0x28
		::System::Nullable_1<::System::Boolean> _HasRewaradCanTake; // 0x30
		::System::Boolean _PoolRefreshed_k__BackingField; // 0x32
		::System::Boolean _HasTakenInitialScore_k__BackingField; // 0x33
		::System::UInt32 _Score_k__BackingField; // 0x34
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

		::System::Void Refresh(::Class_1_569A1536AD9335E7* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_569A1536AD9335E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESH_OFFSET))(this, proto);
		}

		::System::Void RefreshHasRewardCanTake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESHHASREWARDCANTAKE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueScoreRewardRow*>* GetCurScoreRewardRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueScoreRewardRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GETCURSCOREREWARDROWS_OFFSET))(this);
		}

		::System::Boolean IsRewardRowTaken(::System::UInt32 scoreRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWTAKEN_OFFSET))(this, scoreRow);
		}

		::System::Boolean IsRewardRowCanTake(::RPG::GameCore::RogueScoreRewardRow* rogueScoreRewardRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueScoreRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWCANTAKE_OFFSET))(this, rogueScoreRewardRow);
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

		::System::Void set_PoolID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLID_OFFSET))(this, value);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_SCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_PreScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_PRESCORE_OFFSET))(this);
		}

		::System::Void set_PreScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_PRESCORE_OFFSET))(this, value);
		}

		::System::Boolean get_PoolRefreshed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLREFRESHED_OFFSET))(this);
		}

		::System::Void set_PoolRefreshed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLREFRESHED_OFFSET))(this, value);
		}

		::System::Boolean get_HasTakenInitialScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_HASTAKENINITIALSCORE_OFFSET))(this);
		}

		::System::Void set_HasTakenInitialScore(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_HASTAKENINITIALSCORE_OFFSET))(this, value);
		}

		::System::Boolean get_WillScoreBeMerged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_WILLSCOREBEMERGED_OFFSET))(this);
		}

		::System::Int64 get_BeginTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_BEGINTIMESTAMP_OFFSET))(this, value);
		}

		::System::Int64 get_EndTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_ENDTIMESTAMP_OFFSET))(this, value);
		}
	};
}
