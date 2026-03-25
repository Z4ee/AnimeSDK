#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_F1F83A16E5B8B459_3;
namespace RPG::GameCore { class RogueScoreRewardRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUESCOREREWARDDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3420E0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GETCURSCOREREWARDROWS_OFFSET UNITYSDK_OFFSET(0xA35C720)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GETMAXSCORE_OFFSET UNITYSDK_OFFSET(0xA35CBA0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GETSTRIPERTIPTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA35CC30)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA35D010)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA35D030)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_HASTAKENINITIALSCORE_OFFSET UNITYSDK_OFFSET(0xA35CFE0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0xA35CF50)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLID_OFFSET UNITYSDK_OFFSET(0xA35CF60)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLREFRESHED_OFFSET UNITYSDK_OFFSET(0xA35CFC0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_PRESCORE_OFFSET UNITYSDK_OFFSET(0xA35CFA0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xA35CF80)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_WILLSCOREBEMERGED_OFFSET UNITYSDK_OFFSET(0xA35D000)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xA35CAF0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWCANTAKE_OFFSET UNITYSDK_OFFSET(0xA35C9E0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWTAKEN_OFFSET UNITYSDK_OFFSET(0xA35CA90)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_NEEDSHOWSTRIPERTIP_OFFSET UNITYSDK_OFFSET(0xA35CC80)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESHHASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xA347110)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xA346FF0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA35D020)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA35D040)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_HASTAKENINITIALSCORE_OFFSET UNITYSDK_OFFSET(0xA35CFF0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLID_OFFSET UNITYSDK_OFFSET(0xA35CF70)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLREFRESHED_OFFSET UNITYSDK_OFFSET(0xA35CFD0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_PRESCORE_OFFSET UNITYSDK_OFFSET(0xA35CFB0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xA35CF90)
#define RPG_CLIENT_ROGUESCOREREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA33EFE0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA__ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0xA35CD00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueScoreRewardData_TypeDefinitionIndex = 54983;

	class RogueScoreRewardData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _StriperRemainTimeOffset = 0xFFFFFED4; // 0x0
		::System::Collections::Generic::List_1<::RPG::GameCore::RogueScoreRewardRow*>* _CacheScoreRewardRows; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _TakenScoreRewardRowIDs; // 0x18
		::System::UInt32 _PoolID_k__BackingField; // 0x20
		::System::Boolean _PoolRefreshed_k__BackingField; // 0x24
		::System::Boolean _HasTakenInitialScore_k__BackingField; // 0x25
		::System::Nullable_1<::System::Boolean> _HasRewaradCanTake; // 0x26
		::System::UInt32 _Score_k__BackingField; // 0x28
		::System::UInt32 _PreScore_k__BackingField; // 0x2C
		::System::Int64 _BeginTimeStamp_k__BackingField; // 0x30
		::System::Int64 _EndTimeStamp_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Refresh(::Class_1_F1F83A16E5B8B459_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESH_OFFSET))(this, proto);
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
