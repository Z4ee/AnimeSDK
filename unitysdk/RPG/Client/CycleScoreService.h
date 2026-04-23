#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_357673ADDEE88E8E.h"

class Class_1_08093FBB447FB7BD_15;
class Class_1_08093FBB447FB7BD_16;
class Class_1_355A2207C3B7A99D_52;
class Class_1_8789FE9A7EA728A4_5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CYCLESCORESERVICE_CHECKRANKREWARDCANBEDESTROY_OFFSET UNITYSDK_OFFSET(0xA0F1600)
#define RPG_CLIENT_CYCLESCORESERVICE_DESTROYREWARD_OFFSET UNITYSDK_OFFSET(0xA0F19F0)
#define RPG_CLIENT_CYCLESCORESERVICE_GETALLREWARD_OFFSET UNITYSDK_OFFSET(0xA0F1820)
#define RPG_CLIENT_CYCLESCORESERVICE_GETREWARDBYSCORERANK_OFFSET UNITYSDK_OFFSET(0xA0F18E0)
#define RPG_CLIENT_CYCLESCORESERVICE_GET__CANDESTROYREWARDITEMID_OFFSET UNITYSDK_OFFSET(0xA0F1AB0)
#define RPG_CLIENT_CYCLESCORESERVICE_ISCYCLESCORESEEN_OFFSET UNITYSDK_OFFSET(0xA0F1C70)
#define RPG_CLIENT_CYCLESCORESERVICE_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xA0F1C20)
#define RPG_CLIENT_CYCLESCORESERVICE_MARKCYCLESCORESEEN_OFFSET UNITYSDK_OFFSET(0xA0F1DA0)
#define RPG_CLIENT_CYCLESCORESERVICE_MARKGRIDFIGHTCYCLESCORESEEN_OFFSET UNITYSDK_OFFSET(0xA0F2260)
#define RPG_CLIENT_CYCLESCORESERVICE_MARKROGUECYCLESCORESEEN_OFFSET UNITYSDK_OFFSET(0xA0F2020)
#define RPG_CLIENT_CYCLESCORESERVICE_SHOULDSHOWGRIDFIGHTCYCLESCORE_OFFSET UNITYSDK_OFFSET(0xA0F20F0)
#define RPG_CLIENT_CYCLESCORESERVICE_SHOULDSHOWROGUECYCLESCORE_OFFSET UNITYSDK_OFFSET(0xA0F1F20)
#define RPG_CLIENT_CYCLESCORESERVICE_START_OFFSET UNITYSDK_OFFSET(0xA0F16B0)
#define RPG_CLIENT_CYCLESCORESERVICE_STOP_OFFSET UNITYSDK_OFFSET(0xA0F17D0)
#define RPG_CLIENT_CYCLESCORESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F27D0)
#define RPG_CLIENT_CYCLESCORESERVICE__ONCYCLESCOREREWARDDESTROYEXCEEDREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA0F25D0)
#define RPG_CLIENT_CYCLESCORESERVICE__ONCYCLESCOREREWARDRSP_OFFSET UNITYSDK_OFFSET(0xA0F23C0)
#define RPG_CLIENT_CYCLESCORESERVICE__ONCYCLESCOREREWARDTAKEREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA0F2490)
#define RPG_CLIENT_CYCLESCORESERVICE__ONCYCLESCOREREWARDUPDATEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA0F26E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CycleScoreService_TypeDefinitionIndex = 58542;

	class CycleScoreService : public ::Class_1_357673ADDEE88E8E
	{
	public:
		// static const ::System::UInt32 _DefaultCanDestroyRewardItemID = 0x6E; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE_STOP_OFFSET))(this);
		}

		::System::Void GetAllReward(::System::Collections::Generic::List_1<::System::UInt32>* scoreRanks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE_GETALLREWARD_OFFSET))(this, scoreRanks);
		}

		::System::Void GetRewardByScoreRank(::System::UInt32 scoreRank)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE_GETREWARDBYSCORERANK_OFFSET))(this, scoreRank);
		}

		::System::Void DestroyReward(::System::Collections::Generic::List_1<::System::UInt32>* scoreRanks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE_DESTROYREWARD_OFFSET))(this, scoreRanks);
		}

		::System::Boolean CheckRankRewardCanBeDestroy(::System::UInt32 reward)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE_CHECKRANKREWARDCANBEDESTROY_OFFSET))(this, reward);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean IsCycleScoreSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE_ISCYCLESCORESEEN_OFFSET))(this);
		}

		::System::Void MarkCycleScoreSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE_MARKCYCLESCORESEEN_OFFSET))(this);
		}

		::System::Boolean ShouldShowRogueCycleScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE_SHOULDSHOWROGUECYCLESCORE_OFFSET))(this);
		}

		::System::Void MarkRogueCycleScoreSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE_MARKROGUECYCLESCORESEEN_OFFSET))(this);
		}

		::System::Boolean ShouldShowGridFightCycleScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE_SHOULDSHOWGRIDFIGHTCYCLESCORE_OFFSET))(this);
		}

		::System::Void MarkGridFightCycleScoreSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE_MARKGRIDFIGHTCYCLESCORESEEN_OFFSET))(this);
		}

		::System::Void _OnCycleScoreRewardRsp(::System::UInt16 cmd, ::Class_1_08093FBB447FB7BD_15* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_08093FBB447FB7BD_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE__ONCYCLESCOREREWARDRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnCycleScoreRewardTakeRewardScRsp(::System::UInt16 cmd, ::Class_1_8789FE9A7EA728A4_5* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_8789FE9A7EA728A4_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE__ONCYCLESCOREREWARDTAKEREWARDSCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnCycleScoreRewardDestroyExceedRewardScRsp(::System::UInt16 cmd, ::Class_1_08093FBB447FB7BD_16* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_08093FBB447FB7BD_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE__ONCYCLESCOREREWARDDESTROYEXCEEDREWARDSCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnCycleScoreRewardUpdateInfoScNotify(::System::UInt16 cmd, ::Class_1_355A2207C3B7A99D_52* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_355A2207C3B7A99D_52*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE__ONCYCLESCOREREWARDUPDATEINFOSCNOTIFY_OFFSET))(this, cmd, ntf);
		}

		::System::UInt32 get__CanDestroyRewardItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESERVICE_GET__CANDESTROYREWARDITEMID_OFFSET))(this);
		}
	};
}
