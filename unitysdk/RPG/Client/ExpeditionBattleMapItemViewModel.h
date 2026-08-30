#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleMapState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_9EE357109ED696DE;
namespace RPG::Client { class ExpeditionBattleMap; }
namespace RPG::Client { class ExpeditionBattleRankViewModel; }
namespace System { class String; }

#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B88FEB0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GETBEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B8904B0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GETRANKVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B890030)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GETSTARS_OFFSET UNITYSDK_OFFSET(0x1B88FFE0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1B88FF40)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GETUNLOCKTIP_OFFSET UNITYSDK_OFFSET(0x1B890220)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GET_MAPICONPATH_OFFSET UNITYSDK_OFFSET(0x1B88FD00)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x1B88FC50)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GET_MAPNAME_OFFSET UNITYSDK_OFFSET(0x1B88FCA0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GET_MAXDAILYCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0x1B88FD50)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GET_REMAININGCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0x1B88FDA0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88FDF0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL__INITRANKVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B88FE00)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleMapItemViewModel_TypeDefinitionIndex = 64006;

	class ExpeditionBattleMapItemViewModel : public ::System::Object
	{
	public:
		::Class_1_9EE357109ED696DE* _ViewModelFactory; // 0x10
		::RPG::Client::ExpeditionBattleMap* _Map; // 0x18
		::RPG::Client::ExpeditionBattleRankViewModel* _RankViewModel; // 0x20

		::System::Void _ctor(::RPG::Client::ExpeditionBattleMap* a1, ::Class_1_9EE357109ED696DE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleMap*, ::Class_1_9EE357109ED696DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GET_MAPID_OFFSET))(this);
		}

		::RPG::Client::TextID get_MapName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GET_MAPNAME_OFFSET))(this);
		}

		::System::String* get_MapIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GET_MAPICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_MaxDailyChallengeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GET_MAXDAILYCHALLENGECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_RemainingChallengeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GET_REMAININGCHALLENGECOUNT_OFFSET))(this);
		}

		::System::Void _InitRankViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL__INITRANKVIEWMODEL_OFFSET))(this);
		}

		static ::RPG::Client::ExpeditionBattleMapItemViewModel* Create(::RPG::Client::ExpeditionBattleMap* a1, ::Class_1_9EE357109ED696DE* a2)
		{
			return ((::RPG::Client::ExpeditionBattleMapItemViewModel*(*)(::RPG::Client::ExpeditionBattleMap*, ::Class_1_9EE357109ED696DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::RPG::Client::ExpeditionBattleMapState GetState()
		{
			return ((::RPG::Client::ExpeditionBattleMapState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GETSTATE_OFFSET))(this);
		}

		::System::UInt32 GetStars()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GETSTARS_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleRankViewModel* GetRankViewModel()
		{
			return ((::RPG::Client::ExpeditionBattleRankViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GETRANKVIEWMODEL_OFFSET))(this);
		}

		::System::String* GetUnlockTip()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GETUNLOCKTIP_OFFSET))(this);
		}

		::System::UInt32 GetBeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GETBEGINTIMESTAMP_OFFSET))(this);
		}
	};
}
