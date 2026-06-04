#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_51AD4A996C8C1E92;
namespace RPG::Client { class AetherDivideChallengeDataItem; }
namespace RPG::GameCore { class AetherDivideChallengeRankRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB271E80)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GETCHALLENGEDATABYID_OFFSET UNITYSDK_OFFSET(0xB272340)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GETCHALLENGERANKLIST_OFFSET UNITYSDK_OFFSET(0xB272AD0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GETRANKNAME_OFFSET UNITYSDK_OFFSET(0xB272A20)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_CHALLENGEDATAITEMS_OFFSET UNITYSDK_OFFSET(0xB273770)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_INFINITECHALLENGEDATAITEM_OFFSET UNITYSDK_OFFSET(0xB273790)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_INFINITECHALLENGERANK_OFFSET UNITYSDK_OFFSET(0xB2737A0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_LASTCHALLENGELINEUPSLOT_OFFSET UNITYSDK_OFFSET(0xB2737B0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_INITALLCHALLENGEDATAITEMS_OFFSET UNITYSDK_OFFSET(0xB271C20)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xB271BB0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISALLRANKFINISHED_OFFSET UNITYSDK_OFFSET(0xB273610)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISRANKNEW_OFFSET UNITYSDK_OFFSET(0xB273200)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISRANKSHOW_OFFSET UNITYSDK_OFFSET(0xB273180)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISRANKUNLOCK_OFFSET UNITYSDK_OFFSET(0xB272CF0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISTARGETRANKFINISHED_OFFSET UNITYSDK_OFFSET(0xB272FF0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ONMISSIONSYNC_OFFSET UNITYSDK_OFFSET(0xB2725F0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ONRANKTABITEMCLICK_OFFSET UNITYSDK_OFFSET(0xB273320)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_REFRESHINFINITECHALLENGE_OFFSET UNITYSDK_OFFSET(0xB272910)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SETCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0xB2724B0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SETCHALLENGEREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB272550)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SETINIFINITECHALLENGEMISSIONID_OFFSET UNITYSDK_OFFSET(0xB272630)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SET_CHALLENGEDATAITEMS_OFFSET UNITYSDK_OFFSET(0xB273780)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SET_LASTCHALLENGELINEUPSLOT_OFFSET UNITYSDK_OFFSET(0xB2737C0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_UPDATEBYSERVER_OFFSET UNITYSDK_OFFSET(0xB271F80)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB2737D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherDivideChallengeData_TypeDefinitionIndex = 58198;

	class AetherDivideChallengeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AetherDivideChallengeDataItem*>* _ChallengeDataItems_k__BackingField; // 0x10
		::RPG::Client::AetherDivideChallengeDataItem* _InfiniteChallengeDataItem; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockedRankSet; // 0x20
		::System::UInt32 _LastChallengeLineupSlot_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateByServer(::Class_1_51AD4A996C8C1E92* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_51AD4A996C8C1E92*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_UPDATEBYSERVER_OFFSET))(this, a1);
		}

		::System::Void SetChallengeFinish(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SETCHALLENGEFINISH_OFFSET))(this, a1);
		}

		::System::Void SetChallengeRewardTaken(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SETCHALLENGEREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::Void OnMissionSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ONMISSIONSYNC_OFFSET))(this);
		}

		::System::Void SetInifiniteChallengeMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SETINIFINITECHALLENGEMISSIONID_OFFSET))(this, a1);
		}

		::System::Void RefreshInfiniteChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_REFRESHINFINITECHALLENGE_OFFSET))(this);
		}

		::RPG::Client::TextID GetRankName(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GETRANKNAME_OFFSET))(this, a1);
		}

		::RPG::Client::AetherDivideChallengeDataItem* GetChallengeDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::AetherDivideChallengeDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GETCHALLENGEDATABYID_OFFSET))(this, a1);
		}

		::System::Void InitAllChallengeDataItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_INITALLCHALLENGEDATAITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AetherDivideChallengeRankRow*>* GetChallengeRankList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AetherDivideChallengeRankRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GETCHALLENGERANKLIST_OFFSET))(this);
		}

		::System::Boolean IsRankUnlock(::RPG::GameCore::AetherDivideChallengeRankRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AetherDivideChallengeRankRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISRANKUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean IsRankShow(::RPG::GameCore::AetherDivideChallengeRankRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AetherDivideChallengeRankRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISRANKSHOW_OFFSET))(this, a1);
		}

		::System::Boolean IsRankNew(::RPG::GameCore::AetherDivideChallengeRankRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AetherDivideChallengeRankRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISRANKNEW_OFFSET))(this, a1);
		}

		::System::Void OnRankTabItemClick(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ONRANKTABITEMCLICK_OFFSET))(this, a1);
		}

		::System::Boolean IsTargetRankFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISTARGETRANKFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean IsAllRankFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISALLRANKFINISHED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AetherDivideChallengeDataItem*>* get_ChallengeDataItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AetherDivideChallengeDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_CHALLENGEDATAITEMS_OFFSET))(this);
		}

		::System::Void set_ChallengeDataItems(::System::Collections::Generic::List_1<::RPG::Client::AetherDivideChallengeDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AetherDivideChallengeDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SET_CHALLENGEDATAITEMS_OFFSET))(this, a1);
		}

		::RPG::Client::AetherDivideChallengeDataItem* get_InfiniteChallengeDataItem()
		{
			return ((::RPG::Client::AetherDivideChallengeDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_INFINITECHALLENGEDATAITEM_OFFSET))(this);
		}

		::System::UInt32 get_InfiniteChallengeRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_INFINITECHALLENGERANK_OFFSET))(this);
		}

		::System::UInt32 get_LastChallengeLineupSlot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_LASTCHALLENGELINEUPSLOT_OFFSET))(this);
		}

		::System::Void set_LastChallengeLineupSlot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SET_LASTCHALLENGELINEUPSLOT_OFFSET))(this, a1);
		}
	};
}
