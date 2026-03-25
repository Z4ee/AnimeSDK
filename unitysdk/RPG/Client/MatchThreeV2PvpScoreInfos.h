#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3PVP1v1GameResult.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreFinishType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2PvpScoreData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS_CREATE_OFFSET UNITYSDK_OFFSET(0x9B5FB30)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS_GETSCOREDATALISTBYSCORETYPE_OFFSET UNITYSDK_OFFSET(0x9B69FF0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS_GETSCOREDATA_1_OFFSET UNITYSDK_OFFSET(0x9B69920)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS_GETSCOREDATA_2_OFFSET UNITYSDK_OFFSET(0x9B69C10)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS_GETSCOREDATA_OFFSET UNITYSDK_OFFSET(0x9B69830)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS_INIT_OFFSET UNITYSDK_OFFSET(0x9B69660)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0x9B69620)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS__INITALLSCOREDATAS_OFFSET UNITYSDK_OFFSET(0x9B696B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PvpScoreInfos_TypeDefinitionIndex = 53670;

	class MatchThreeV2PvpScoreInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PvpScoreData*>* _AllScoreDatas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2PvpScoreInfos* Create()
		{
			return ((::RPG::Client::MatchThreeV2PvpScoreInfos*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS_CREATE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS_INIT_OFFSET))(this);
		}

		::System::Void _InitAllScoreDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS__INITALLSCOREDATAS_OFFSET))(this);
		}

		::RPG::Client::MatchThreeV2PvpScoreData* GetScoreData(::RPG::GameCore::MatchThreeScoreType scoreType, ::System::UInt32 finalRank)
		{
			return ((::RPG::Client::MatchThreeV2PvpScoreData*(*)(::PVOID, ::RPG::GameCore::MatchThreeScoreType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS_GETSCOREDATA_OFFSET))(this, scoreType, finalRank);
		}

		::RPG::Client::MatchThreeV2PvpScoreData* GetScoreData_1(::RPG::Client::LittleGame::Match3::Match3PVP1v1GameResult result)
		{
			return ((::RPG::Client::MatchThreeV2PvpScoreData*(*)(::PVOID, ::RPG::Client::LittleGame::Match3::Match3PVP1v1GameResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS_GETSCOREDATA_1_OFFSET))(this, result);
		}

		::RPG::Client::MatchThreeV2PvpScoreData* GetScoreData_2(::RPG::GameCore::MatchThreeScoreFinishType finishType)
		{
			return ((::RPG::Client::MatchThreeV2PvpScoreData*(*)(::PVOID, ::RPG::GameCore::MatchThreeScoreFinishType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS_GETSCOREDATA_2_OFFSET))(this, finishType);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PvpScoreData*>* GetScoreDataListByScoreType(::RPG::GameCore::MatchThreeScoreType scoreType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PvpScoreData*>*(*)(::PVOID, ::RPG::GameCore::MatchThreeScoreType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS_GETSCOREDATALISTBYSCORETYPE_OFFSET))(this, scoreType);
		}
	};
}
