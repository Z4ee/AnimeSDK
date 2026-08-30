#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B8DE318908313772;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class GridFightScoreRewardConfigRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_CHECKISALLRANKGOT_OFFSET UNITYSDK_OFFSET(0x1BB28990)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_CHECKISRANKCANTAKE_OFFSET UNITYSDK_OFFSET(0x1BB288F0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_CHECKRANKREWARDCANBEDESTROY_OFFSET UNITYSDK_OFFSET(0x1BB294E0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_DESTROYREWARDBYRANKS_OFFSET UNITYSDK_OFFSET(0x1BB28830)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETALLREWARD_OFFSET UNITYSDK_OFFSET(0x1BB27F20)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETCANTAKEREWARDSCORERANKLIST_OFFSET UNITYSDK_OFFSET(0x1BB28300)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETREWARDBYSCORERANK_OFFSET UNITYSDK_OFFSET(0x1BB28610)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETREWARDDISPLAYDATABYRANKS_OFFSET UNITYSDK_OFFSET(0x1BB296A0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1A039370)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CANDESTROYREWARDITEMID_OFFSET UNITYSDK_OFFSET(0x1A0394F0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CONFIGLIST_OFFSET UNITYSDK_OFFSET(0x1A039650)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CURRENTSCORERANK_OFFSET UNITYSDK_OFFSET(0x1A039300)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CURRENTSCORE_OFFSET UNITYSDK_OFFSET(0x1A039290)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1A039390)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_HASGOTSCORERANK_OFFSET UNITYSDK_OFFSET(0x1A039350)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1A0393B0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0x1BB298D0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x1A0392B0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_WILLSCOREBEMERGED_OFFSET UNITYSDK_OFFSET(0x1A0394D0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1BB281F0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x1BB28B40)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SETCURWEEKSCORESEEN_OFFSET UNITYSDK_OFFSET(0x1BB28C10)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1A039380)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_CURRENTSCORE_OFFSET UNITYSDK_OFFSET(0x1A0392A0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1A0393A0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_HASGOTSCORERANK_OFFSET UNITYSDK_OFFSET(0x1A039360)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_WILLSCOREBEMERGED_OFFSET UNITYSDK_OFFSET(0x1A0394E0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SYNCFINISHRANKS_OFFSET UNITYSDK_OFFSET(0x1BB27A40)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SYNC_OFFSET UNITYSDK_OFFSET(0x1BB275B0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0396A0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETALLREWARD_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A039710)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETCANTAKEREWARDSCORERANKLIST_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A039810)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x1BB28D20)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETCURRENTSCORERANK_OFFSET UNITYSDK_OFFSET(0x1BB28F40)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETMAXSCORE_OFFSET UNITYSDK_OFFSET(0x1BB290C0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__HASANYREWARDCANTAKE_B__3_0_OFFSET UNITYSDK_OFFSET(0x1A039790)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0x1BB29290)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightWeeklyScore_TypeDefinitionIndex = 65584;

	class GridFightWeeklyScore : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightScoreRewardConfigRow*>* _ConfigList; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HasGotScoreRank_k__BackingField; // 0x18
		::System::Int64 _EndTimeStamp_k__BackingField; // 0x20
		::System::Int64 _BeginTimeStamp_k__BackingField; // 0x28
		::System::UInt32 _CurrentScore_k__BackingField; // 0x30
		::System::Boolean _WillScoreBeMerged_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_B8DE318908313772* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8DE318908313772*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncFinishRanks(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SYNCFINISHRANKS_OFFSET))(this, a1);
		}

		::System::Void GetAllReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETALLREWARD_OFFSET))(this);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCanTakeRewardScoreRankList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETCANTAKEREWARDSCORERANKLIST_OFFSET))(this);
		}

		::System::Void GetRewardByScoreRank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETREWARDBYSCORERANK_OFFSET))(this, a1);
		}

		::System::Void DestroyRewardByRanks(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_DESTROYREWARDBYRANKS_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsRankCanTake(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_CHECKISRANKCANTAKE_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsAllRankGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_CHECKISALLRANKGOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Void SetCurWeekScoreSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SETCURWEEKSCORESEEN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightScoreRewardConfigRow*>* _GetConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightScoreRewardConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETCONFIGLIST_OFFSET))(this);
		}

		::System::UInt32 _GetCurrentScoreRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETCURRENTSCORERANK_OFFSET))(this);
		}

		::System::UInt32 _GetMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETMAXSCORE_OFFSET))(this);
		}

		::System::Boolean _IsNearlyFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__ISNEARLYFINISH_OFFSET))(this);
		}

		::System::Boolean CheckRankRewardCanBeDestroy(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_CHECKRANKREWARDCANBEDESTROY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRewardDisplayDataByRanks(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETREWARDDISPLAYDATABYRANKS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNearlyFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_ISNEARLYFINISH_OFFSET))(this);
		}

		::System::UInt32 get_CurrentScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CURRENTSCORE_OFFSET))(this);
		}

		::System::Void set_CurrentScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_CURRENTSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_MAXSCORE_OFFSET))(this);
		}

		::System::UInt32 get_CurrentScoreRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CURRENTSCORERANK_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_HasGotScoreRank()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_HASGOTSCORERANK_OFFSET))(this);
		}

		::System::Void set_HasGotScoreRank(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_HASGOTSCORERANK_OFFSET))(this, a1);
		}

		::System::Int64 get_BeginTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_BEGINTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Int64 get_EndTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_ENDTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::Boolean get_WillScoreBeMerged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_WILLSCOREBEMERGED_OFFSET))(this);
		}

		::System::Void set_WillScoreBeMerged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_WILLSCOREBEMERGED_OFFSET))(this, a1);
		}

		::System::UInt32 get_CanDestroyRewardItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CANDESTROYREWARDITEMID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightScoreRewardConfigRow*>* get_ConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightScoreRewardConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CONFIGLIST_OFFSET))(this);
		}

		::System::Boolean _GetAllReward_b__2_0(::RPG::GameCore::GridFightScoreRewardConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETALLREWARD_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasAnyRewardCanTake_b__3_0(::RPG::GameCore::GridFightScoreRewardConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__HASANYREWARDCANTAKE_B__3_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCanTakeRewardScoreRankList_b__4_0(::RPG::GameCore::GridFightScoreRewardConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETCANTAKEREWARDSCORERANKLIST_B__4_0_OFFSET))(this, a1);
		}
	};
}
