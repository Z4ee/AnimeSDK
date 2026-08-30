#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleMapState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_9EE357109ED696DE;
namespace RPG::Client { class ExpeditionBattleMap; }
namespace RPG::Client { class ExpeditionBattleRankViewModel; }
namespace System { class String; }

#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xCEFC260)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GETBEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xCEFC860)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GETRANKVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCEFC3E0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GETSTARS_OFFSET UNITYSDK_OFFSET(0xCEFC390)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GETSTATE_OFFSET UNITYSDK_OFFSET(0xCEFC2F0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GETUNLOCKTIP_OFFSET UNITYSDK_OFFSET(0xCEFC5D0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GET_MAPICONPATH_OFFSET UNITYSDK_OFFSET(0xCEFC0B0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xCEFC000)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GET_MAPNAME_OFFSET UNITYSDK_OFFSET(0xCEFC050)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GET_MAXDAILYCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0xCEFC100)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL_GET_REMAININGCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0xCEFC150)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCEFC1A0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPITEMVIEWMODEL__INITRANKVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCEFC1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleMapItemViewModel_TypeDefinitionIndex = 64006;

	class ExpeditionBattleMapItemViewModel : public ::System::Object
	{
	public:
		::RPG::Client::ExpeditionBattleRankViewModel* _RankViewModel; // 0x10
		::Class_1_9EE357109ED696DE* _ViewModelFactory; // 0x18
		::RPG::Client::ExpeditionBattleMap* _Map; // 0x20

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
