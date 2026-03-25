#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/LittleGame/BossPhase.h"
#include "unitysdk/RPG/Client/LittleGame/MovieGameMode.h"
#include "unitysdk/RPG/GameCore/ClockParkEffectType.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_5.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MovieGameController; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client::LittleGame { class MovieBossConfig; }
namespace RPG::Client::LittleGame { class MovieGameLevelConfig; }
namespace RPG::Client::LittleGame { class MovieGameModeComponent; }
namespace RPG::Client::LittleGame { class MovieGameStatisticComponent; }
namespace RPG::Client::LittleGame { class OperationConfig; }
namespace RPG::GameCore { class MazePuzzleMovieLevelRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MOVIERACINGMODULE_ACTIVITYSETGAMESTARTBUFFLIST_OFFSET UNITYSDK_OFFSET(0x9D974B0)
#define RPG_CLIENT_MOVIERACINGMODULE_BUILDBOSSMODEREPORTDATA_OFFSET UNITYSDK_OFFSET(0x9D98020)
#define RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIEBOSSLEVELISLOCK_OFFSET UNITYSDK_OFFSET(0x9D99720)
#define RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIELEVELISLOCKBYPRELEVEL_OFFSET UNITYSDK_OFFSET(0x9D99520)
#define RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIELEVELISLOCKBYSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9D99660)
#define RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIELEVELISLOCK_OFFSET UNITYSDK_OFFSET(0x9D99480)
#define RPG_CLIENT_MOVIERACINGMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D97400)
#define RPG_CLIENT_MOVIERACINGMODULE_GETBOSSHPRATE_OFFSET UNITYSDK_OFFSET(0x9D97E00)
#define RPG_CLIENT_MOVIERACINGMODULE_GETBOSSPHASE_OFFSET UNITYSDK_OFFSET(0x9D98440)
#define RPG_CLIENT_MOVIERACINGMODULE_GETCONFIGTARGETBOSSPHASE_OFFSET UNITYSDK_OFFSET(0x9D97C70)
#define RPG_CLIENT_MOVIERACINGMODULE_GETGAMEMODECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9D979B0)
#define RPG_CLIENT_MOVIERACINGMODULE_GETGAMEMODE_OFFSET UNITYSDK_OFFSET(0x9D97860)
#define RPG_CLIENT_MOVIERACINGMODULE_GETGAMESTARTEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x9D96D60)
#define RPG_CLIENT_MOVIERACINGMODULE_GETLEVELBOSSCONFIG_OFFSET UNITYSDK_OFFSET(0x9D97A70)
#define RPG_CLIENT_MOVIERACINGMODULE_GETLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x9D97A10)
#define RPG_CLIENT_MOVIERACINGMODULE_GETMOVIERACINGBESTSCORE_OFFSET UNITYSDK_OFFSET(0x9D97B60)
#define RPG_CLIENT_MOVIERACINGMODULE_GETOPERATIONCONFIG_OFFSET UNITYSDK_OFFSET(0x9D97AD0)
#define RPG_CLIENT_MOVIERACINGMODULE_GETPLAYERSPANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x9D978C0)
#define RPG_CLIENT_MOVIERACINGMODULE_GETSTATISTICS_OFFSET UNITYSDK_OFFSET(0x9D97950)
#define RPG_CLIENT_MOVIERACINGMODULE_GET_ISCANRESTARTGAME_OFFSET UNITYSDK_OFFSET(0x9D99870)
#define RPG_CLIENT_MOVIERACINGMODULE_INITMODULERELATEDMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9D99250)
#define RPG_CLIENT_MOVIERACINGMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9D97350)
#define RPG_CLIENT_MOVIERACINGMODULE_ISINBOSSPHASE_OFFSET UNITYSDK_OFFSET(0x9D97CE0)
#define RPG_CLIENT_MOVIERACINGMODULE_REGISTERGAMECONTROLLER_OFFSET UNITYSDK_OFFSET(0x9D92BC0)
#define RPG_CLIENT_MOVIERACINGMODULE_REPORTMOVIERACINGPUZZLEFINISHDATA_OFFSET UNITYSDK_OFFSET(0x9D98B10)
#define RPG_CLIENT_MOVIERACINGMODULE_REPORTMOVIERACINGPUZZLESTARTDATA_OFFSET UNITYSDK_OFFSET(0x9D98730)
#define RPG_CLIENT_MOVIERACINGMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x9D98500)
#define RPG_CLIENT_MOVIERACINGMODULE_SET_ISCANRESTARTGAME_OFFSET UNITYSDK_OFFSET(0x9D99860)
#define RPG_CLIENT_MOVIERACINGMODULE_TRIGGERPUZZLECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x9D986D0)
#define RPG_CLIENT_MOVIERACINGMODULE_UNREGISTERGAMECONTROLLER_OFFSET UNITYSDK_OFFSET(0x9D94810)
#define RPG_CLIENT_MOVIERACINGMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9D99880)
#define RPG_CLIENT_MOVIERACINGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D99D20)
#define RPG_CLIENT_MOVIERACINGMODULE__GETLEVELSTATUS_OFFSET UNITYSDK_OFFSET(0x9D989C0)
#define RPG_CLIENT_MOVIERACINGMODULE__INITMODULERELATEDMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9D98550)
#define RPG_CLIENT_MOVIERACINGMODULE__ONCMDGETMOVIERACINGDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9D99930)
#define RPG_CLIENT_MOVIERACINGMODULE__ONCMDUPDATEMOVIERACINGDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9D99C60)
#define RPG_CLIENT_MOVIERACINGMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D99DD0)
#define RPG_CLIENT_MOVIERACINGMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9D99D40)
#define RPG_CLIENT_MOVIERACINGMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9D99DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MovieRacingModule_TypeDefinitionIndex = 53911;

	class MovieRacingModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::GameCore::ClockParkEffectType, ::System::Int32>>* _ActivityStartBuffList; // 0x10
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::UInt32>* _MovieRacingBestScoreDict; // 0x18
		::RPG::Client::MovieGameController* _GameController; // 0x20
		::System::Boolean _IsCanRestartGame; // 0x28
		::System::UInt32 _StartReportSerialNumber; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void RegisterGameController(::RPG::Client::MovieGameController* gameController)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MovieGameController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_REGISTERGAMECONTROLLER_OFFSET))(this, gameController);
		}

		::System::Void ActivitySetGameStartBuffList(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::ClockParkEffectType, ::System::Int32>>* activityStartBuffList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::ClockParkEffectType, ::System::Int32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_ACTIVITYSETGAMESTARTBUFFLIST_OFFSET))(this, activityStartBuffList);
		}

		::System::Int32 GetGameStartEffectValue(::RPG::GameCore::ClockParkEffectType effectType)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ClockParkEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GETGAMESTARTEFFECTVALUE_OFFSET))(this, effectType);
		}

		::System::Void UnregisterGameController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_UNREGISTERGAMECONTROLLER_OFFSET))(this);
		}

		::RPG::Client::LittleGame::MovieGameMode GetGameMode()
		{
			return ((::RPG::Client::LittleGame::MovieGameMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GETGAMEMODE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPlayerSpAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GETPLAYERSPANCHORPOSITION_OFFSET))(this);
		}

		::RPG::Client::LittleGame::MovieGameStatisticComponent* GetStatistics()
		{
			return ((::RPG::Client::LittleGame::MovieGameStatisticComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GETSTATISTICS_OFFSET))(this);
		}

		::RPG::Client::LittleGame::MovieGameModeComponent* GetGameModeComponent()
		{
			return ((::RPG::Client::LittleGame::MovieGameModeComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GETGAMEMODECOMPONENT_OFFSET))(this);
		}

		::RPG::Client::LittleGame::MovieGameLevelConfig* GetLevelConfig()
		{
			return ((::RPG::Client::LittleGame::MovieGameLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GETLEVELCONFIG_OFFSET))(this);
		}

		::RPG::Client::LittleGame::MovieBossConfig* GetLevelBossConfig()
		{
			return ((::RPG::Client::LittleGame::MovieBossConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GETLEVELBOSSCONFIG_OFFSET))(this);
		}

		::RPG::Client::LittleGame::OperationConfig* GetOperationConfig()
		{
			return ((::RPG::Client::LittleGame::OperationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GETOPERATIONCONFIG_OFFSET))(this);
		}

		::System::UInt32 GetMovieRacingBestScore(::System::UInt32 movieType, ::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GETMOVIERACINGBESTSCORE_OFFSET))(this, movieType, level);
		}

		::RPG::Client::LittleGame::BossPhase GetConfigTargetBossPhase()
		{
			return ((::RPG::Client::LittleGame::BossPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GETCONFIGTARGETBOSSPHASE_OFFSET))(this);
		}

		::System::Boolean IsInBossPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_ISINBOSSPHASE_OFFSET))(this);
		}

		::System::Single GetBossHpRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GETBOSSHPRATE_OFFSET))(this);
		}

		::Struct_2_4C8453486C91E3A1_5 BuildBossModeReportData()
		{
			return ((::Struct_2_4C8453486C91E3A1_5(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_BUILDBOSSMODEREPORTDATA_OFFSET))(this);
		}

		::RPG::Client::LittleGame::BossPhase GetBossPhase()
		{
			return ((::RPG::Client::LittleGame::BossPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GETBOSSPHASE_OFFSET))(this);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::System::Void TriggerPuzzleCustomEvent(::RPG::GameCore::PuzzleCustomEvent adventureMovieOnEnterFever)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_TRIGGERPUZZLECUSTOMEVENT_OFFSET))(this, adventureMovieOnEnterFever);
		}

		::System::Void ReportMovieRacingPuzzleStartData(::System::UInt32 enterType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_REPORTMOVIERACINGPUZZLESTARTDATA_OFFSET))(this, enterType);
		}

		::System::Void ReportMovieRacingPuzzleFinishData(::System::UInt32 gameResult, ::System::UInt32 endType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_REPORTMOVIERACINGPUZZLEFINISHDATA_OFFSET))(this, gameResult, endType);
		}

		::System::Void InitModuleRelatedMainMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_INITMODULERELATEDMAINMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean CheckMovieLevelIsLock(::System::UInt32 movieType, ::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIELEVELISLOCK_OFFSET))(this, movieType, level);
		}

		::System::Boolean CheckMovieLevelIsLockByPreLevel(::RPG::GameCore::MazePuzzleMovieLevelRow* levelRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleMovieLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIELEVELISLOCKBYPRELEVEL_OFFSET))(this, levelRow);
		}

		::System::Boolean CheckMovieLevelIsLockBySubMission(::RPG::GameCore::MazePuzzleMovieLevelRow* levelRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleMovieLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIELEVELISLOCKBYSUBMISSION_OFFSET))(this, levelRow);
		}

		::System::Boolean CheckMovieBossLevelIsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIEBOSSLEVELISLOCK_OFFSET))(this);
		}

		::System::Void set_IsCanRestartGame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_SET_ISCANRESTARTGAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsCanRestartGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GET_ISCANRESTARTGAME_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetMovieRacingDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE__ONCMDGETMOVIERACINGDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdUpdateMovieRacingDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE__ONCMDUPDATEMOVIERACINGDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _InitModuleRelatedMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE__INITMODULERELATEDMISSIONDATA_OFFSET))(this);
		}

		::System::UInt32 _GetLevelStatus(::System::UInt32 movieType, ::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE__GETLEVELSTATUS_OFFSET))(this, movieType, level);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
