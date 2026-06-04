#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/LittleGame/BossPhase.h"
#include "unitysdk/RPG/Client/LittleGame/MovieGameMode.h"
#include "unitysdk/RPG/GameCore/ClockParkEffectType.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_6.h"
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

#define RPG_CLIENT_MOVIERACINGMODULE_ACTIVITYSETGAMESTARTBUFFLIST_OFFSET UNITYSDK_OFFSET(0xC1AC430)
#define RPG_CLIENT_MOVIERACINGMODULE_BUILDBOSSMODEREPORTDATA_OFFSET UNITYSDK_OFFSET(0xC1ACFD0)
#define RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIEBOSSLEVELISLOCK_OFFSET UNITYSDK_OFFSET(0xC1AE8B0)
#define RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIELEVELISLOCKBYPRELEVEL_OFFSET UNITYSDK_OFFSET(0xC1AE6B0)
#define RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIELEVELISLOCKBYSUBMISSION_OFFSET UNITYSDK_OFFSET(0xC1AE7F0)
#define RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIELEVELISLOCK_OFFSET UNITYSDK_OFFSET(0xC1AE610)
#define RPG_CLIENT_MOVIERACINGMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1AC390)
#define RPG_CLIENT_MOVIERACINGMODULE_GETBOSSHPRATE_OFFSET UNITYSDK_OFFSET(0xC1ACDC0)
#define RPG_CLIENT_MOVIERACINGMODULE_GETBOSSPHASE_OFFSET UNITYSDK_OFFSET(0xC1AD3E0)
#define RPG_CLIENT_MOVIERACINGMODULE_GETCONFIGTARGETBOSSPHASE_OFFSET UNITYSDK_OFFSET(0xC1ACC40)
#define RPG_CLIENT_MOVIERACINGMODULE_GETGAMEMODECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC1AC960)
#define RPG_CLIENT_MOVIERACINGMODULE_GETGAMEMODE_OFFSET UNITYSDK_OFFSET(0xC1AC810)
#define RPG_CLIENT_MOVIERACINGMODULE_GETGAMESTARTEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0xC1ABD50)
#define RPG_CLIENT_MOVIERACINGMODULE_GETLEVELBOSSCONFIG_OFFSET UNITYSDK_OFFSET(0xC1ACA20)
#define RPG_CLIENT_MOVIERACINGMODULE_GETLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xC1AC9C0)
#define RPG_CLIENT_MOVIERACINGMODULE_GETMOVIERACINGBESTSCORE_OFFSET UNITYSDK_OFFSET(0xC1ACB10)
#define RPG_CLIENT_MOVIERACINGMODULE_GETOPERATIONCONFIG_OFFSET UNITYSDK_OFFSET(0xC1ACA80)
#define RPG_CLIENT_MOVIERACINGMODULE_GETPLAYERSPANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0xC1AC870)
#define RPG_CLIENT_MOVIERACINGMODULE_GETSTATISTICS_OFFSET UNITYSDK_OFFSET(0xC1AC900)
#define RPG_CLIENT_MOVIERACINGMODULE_GET_ISCANRESTARTGAME_OFFSET UNITYSDK_OFFSET(0xC1AEA40)
#define RPG_CLIENT_MOVIERACINGMODULE_INITMODULERELATEDMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC1AE380)
#define RPG_CLIENT_MOVIERACINGMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC1AC2E0)
#define RPG_CLIENT_MOVIERACINGMODULE_ISINBOSSPHASE_OFFSET UNITYSDK_OFFSET(0xC1ACCB0)
#define RPG_CLIENT_MOVIERACINGMODULE_REGISTERGAMECONTROLLER_OFFSET UNITYSDK_OFFSET(0xC1A7F70)
#define RPG_CLIENT_MOVIERACINGMODULE_REPORTMOVIERACINGPUZZLEFINISHDATA_OFFSET UNITYSDK_OFFSET(0xC1ADAF0)
#define RPG_CLIENT_MOVIERACINGMODULE_REPORTMOVIERACINGPUZZLESTARTDATA_OFFSET UNITYSDK_OFFSET(0xC1AD720)
#define RPG_CLIENT_MOVIERACINGMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xC1AD4A0)
#define RPG_CLIENT_MOVIERACINGMODULE_SET_ISCANRESTARTGAME_OFFSET UNITYSDK_OFFSET(0xC1AEA30)
#define RPG_CLIENT_MOVIERACINGMODULE_TRIGGERPUZZLECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xC1AD6C0)
#define RPG_CLIENT_MOVIERACINGMODULE_UNREGISTERGAMECONTROLLER_OFFSET UNITYSDK_OFFSET(0xC1A9AF0)
#define RPG_CLIENT_MOVIERACINGMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC1AEA50)
#define RPG_CLIENT_MOVIERACINGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC1AEFD0)
#define RPG_CLIENT_MOVIERACINGMODULE__GETLEVELSTATUS_OFFSET UNITYSDK_OFFSET(0xC1AD9B0)
#define RPG_CLIENT_MOVIERACINGMODULE__INITMODULERELATEDMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC1AD4F0)
#define RPG_CLIENT_MOVIERACINGMODULE__ONCMDGETMOVIERACINGDATASCRSP_OFFSET UNITYSDK_OFFSET(0xC1AEBE0)
#define RPG_CLIENT_MOVIERACINGMODULE__ONCMDUPDATEMOVIERACINGDATASCRSP_OFFSET UNITYSDK_OFFSET(0xC1AEF10)
#define RPG_CLIENT_MOVIERACINGMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1AF070)
#define RPG_CLIENT_MOVIERACINGMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC1AEFF0)
#define RPG_CLIENT_MOVIERACINGMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC1AF080)

namespace RPG::Client
{
	inline static constexpr unsigned int MovieRacingModule_TypeDefinitionIndex = 61989;

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

		::System::Void RegisterGameController(::RPG::Client::MovieGameController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MovieGameController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_REGISTERGAMECONTROLLER_OFFSET))(this, a1);
		}

		::System::Void ActivitySetGameStartBuffList(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::ClockParkEffectType, ::System::Int32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::ClockParkEffectType, ::System::Int32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_ACTIVITYSETGAMESTARTBUFFLIST_OFFSET))(this, a1);
		}

		::System::Int32 GetGameStartEffectValue(::RPG::GameCore::ClockParkEffectType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ClockParkEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GETGAMESTARTEFFECTVALUE_OFFSET))(this, a1);
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

		::System::UInt32 GetMovieRacingBestScore(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GETMOVIERACINGBESTSCORE_OFFSET))(this, a1, a2);
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

		::Struct_2_4C8453486C91E3A1_6 BuildBossModeReportData()
		{
			return ((::Struct_2_4C8453486C91E3A1_6(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_BUILDBOSSMODEREPORTDATA_OFFSET))(this);
		}

		::RPG::Client::LittleGame::BossPhase GetBossPhase()
		{
			return ((::RPG::Client::LittleGame::BossPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GETBOSSPHASE_OFFSET))(this);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::System::Void TriggerPuzzleCustomEvent(::RPG::GameCore::PuzzleCustomEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_TRIGGERPUZZLECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Void ReportMovieRacingPuzzleStartData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_REPORTMOVIERACINGPUZZLESTARTDATA_OFFSET))(this, a1);
		}

		::System::Void ReportMovieRacingPuzzleFinishData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_REPORTMOVIERACINGPUZZLEFINISHDATA_OFFSET))(this, a1, a2);
		}

		::System::Void InitModuleRelatedMainMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_INITMODULERELATEDMAINMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean CheckMovieLevelIsLock(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIELEVELISLOCK_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckMovieLevelIsLockByPreLevel(::RPG::GameCore::MazePuzzleMovieLevelRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleMovieLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIELEVELISLOCKBYPRELEVEL_OFFSET))(this, a1);
		}

		::System::Boolean CheckMovieLevelIsLockBySubMission(::RPG::GameCore::MazePuzzleMovieLevelRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleMovieLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIELEVELISLOCKBYSUBMISSION_OFFSET))(this, a1);
		}

		::System::Boolean CheckMovieBossLevelIsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_CHECKMOVIEBOSSLEVELISLOCK_OFFSET))(this);
		}

		::System::Void set_IsCanRestartGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_SET_ISCANRESTARTGAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCanRestartGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE_GET_ISCANRESTARTGAME_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetMovieRacingDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE__ONCMDGETMOVIERACINGDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdUpdateMovieRacingDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE__ONCMDUPDATEMOVIERACINGDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _InitModuleRelatedMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE__INITMODULERELATEDMISSIONDATA_OFFSET))(this);
		}

		::System::UInt32 _GetLevelStatus(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIERACINGMODULE__GETLEVELSTATUS_OFFSET))(this, a1, a2);
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
