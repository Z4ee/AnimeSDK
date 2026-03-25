#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayPuzzleBoard_ReplaySaveData.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayPuzzleBoard_RoadTimeline.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayPuzzleBoard_ScoreRankConfig.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayResult.h"
#include "unitysdk/RPG/GameCore/GunPlayModeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_778;
class Class_1_2BF31F3092BDFD9E;
class Class_1_A66D7C1E06495A1A;
namespace RPG::Client { class MonoWolfBroBulletLine; }
namespace RPG::Client { class MonoWolfBroBulletPoint; }
namespace RPG::Client { class MonoWolfBroCustomData; }
namespace RPG::Client { class WolfBroGunPlayEndLess; }
namespace RPG::Client { class WolfBroGunPlayRoadMapConfig; }
namespace RPG::Client { class WolfBroGunPlayTarget; }
namespace RPG::Client { class WolfBroGunPlayerProjectile; }
namespace RPG::Client { class WolfBroGunTargetProjectile; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_ADDSCORE_OFFSET UNITYSDK_OFFSET(0xA78E2C0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_BUILDARRAYINFO_OFFSET UNITYSDK_OFFSET(0xA78F260)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_BUILDGAMEPLAYINFO_OFFSET UNITYSDK_OFFSET(0xA78EDD0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_CONTROLWOLFBROPLAYER_OFFSET UNITYSDK_OFFSET(0xA788D00)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_DELSCORE_OFFSET UNITYSDK_OFFSET(0xA78E380)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_DISABLEBULLETTIME_OFFSET UNITYSDK_OFFSET(0xA78D070)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA78CD50)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_ENABLEBULLETTIME_OFFSET UNITYSDK_OFFSET(0xA78D620)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_EVALUATECOUNTDOWNSCORE_OFFSET UNITYSDK_OFFSET(0xA78B740)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_EVALUATEDELSCORE_OFFSET UNITYSDK_OFFSET(0xA78B410)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_EVALUATESCORE_OFFSET UNITYSDK_OFFSET(0xA78ABF0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GETTARGETSCORE_OFFSET UNITYSDK_OFFSET(0xA78EC10)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA7884C0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GET_MAINROADMAPNAME_OFFSET UNITYSDK_OFFSET(0xA78F470)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GET_PLAYERCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA78F480)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0xA78F490)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xA78ABA0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0xA78F4F0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GET__REALSCORE_OFFSET UNITYSDK_OFFSET(0xA78E4F0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA788760)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_ISSUCCESS_1_OFFSET UNITYSDK_OFFSET(0xA78B900)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0xA78EBB0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_MODIFYENERGY_OFFSET UNITYSDK_OFFSET(0xA789600)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA7885B0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xA788680)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA788540)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0xA788B50)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_REPORTGAMEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0xA78BAF0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_REPORTGAMEPLAYSTARTUP_OFFSET UNITYSDK_OFFSET(0xA789770)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_REPORTGAMEPLAYUSESKILL_OFFSET UNITYSDK_OFFSET(0xA78D900)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_RESETSCORE_OFFSET UNITYSDK_OFFSET(0xA78F510)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_SETUPSTARTMODE_OFFSET UNITYSDK_OFFSET(0xA78E440)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_SETUPTIMELINEENABLE_OFFSET UNITYSDK_OFFSET(0xA78D4D0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA788500)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_SET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0xA78F500)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_SET__REALSCORE_OFFSET UNITYSDK_OFFSET(0xA789F70)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA789090)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xA789FE0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_TICK_OFFSET UNITYSDK_OFFSET(0xA78A290)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_TRIGGERBULLETTIMEKILLQUEST_OFFSET UNITYSDK_OFFSET(0xA78E100)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_TRIGGERFINISHQUEST_OFFSET UNITYSDK_OFFSET(0xA78B9B0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_UNREGISTEREVENT_OFFSET UNITYSDK_OFFSET(0xA78D320)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA78F600)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD__ONCLICKSHOOT_OFFSET UNITYSDK_OFFSET(0xA78E540)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD__ONCLICKSKILL_OFFSET UNITYSDK_OFFSET(0xA78E610)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD__ONEXITGAME_OFFSET UNITYSDK_OFFSET(0xA78E9E0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD__ONPAUSEGAME_OFFSET UNITYSDK_OFFSET(0xA78E6A0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD__ONPLAYGAME_OFFSET UNITYSDK_OFFSET(0xA78E7C0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD__ONREPLAYGAME_OFFSET UNITYSDK_OFFSET(0xA78E8E0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA78F8E0)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA78F800)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA78F810)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xA78F870)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayPuzzleBoard_TypeDefinitionIndex = 56143;

	class WolfBroGunPlayPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::RPG::Client::WolfBroGunPlayPuzzleBoard** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::WolfBroGunPlayPuzzleBoard**)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x185B0);
		}
		static ::System::UInt32* StaticGet__REPLAY_MODE()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x6F40);
		}
		static ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData* StaticGet__REPLAY_SAVE_DATA()
		{
			return (::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x6F44);
		}
		// static const ::System::UInt32 FinishKilledAllTargetQuestID = 0x3DB1D4; // 0x0
		// static const ::System::UInt32 BulletTimeKillQuestID = 0x3DB1D6; // 0x0
		// static const ::System::UInt32 _Key = 0x3BF96A77; // 0x0
		// static const ::System::String* REP_KEY; // 0x0
		// static const ::System::String* REP_ROGUE_KEY; // 0x0
		::System::UInt32 GunLevel; // 0x48
		::RPG::GameCore::GunPlayModeType GunMode; // 0x4C
		::System::String* customString_ReplayGame; // 0x50
		::System::String* customString_ExitGame; // 0x58
		::System::String* customString_FinishGame; // 0x60
		::System::String* customString_EnterBulletTime; // 0x68
		::System::String* customString_ExitBulletTime; // 0x70
		::System::String* customString_SkillLowPower; // 0x78
		::UnityEngine::Transform* areaOriginTransform; // 0x80
		::System::Int32 areaRowCount; // 0x88
		::System::Int32 areaColumnCount; // 0x8C
		::System::Single areaRowDistance; // 0x90
		::System::Single areaColumnDistance; // 0x94
		::RPG::Client::WolfBroGunPlayRoadMapConfig* roadMapConfig; // 0x98
		::Il2CppArray<::RPG::Client::WolfBroGunPlayPuzzleBoard_RoadTimeline>* timeline; // 0xA0
		::System::Single timelineAllFinishedDelayTime; // 0xA8
		::UnityEngine::Transform* playerOriginTransform; // 0xB0
		::RPG::Client::WolfBroGunPlayerProjectile* projectile; // 0xB8
		::System::Single energy; // 0xC0
		::RPG::Client::WolfBroGunPlayPuzzleBoard_ScoreRankConfig scoreRankConfig; // 0xC4
		::System::Single countdownScore; // 0xD8
		::UnityEngine::Vector2 scoreUIScaleRange; // 0xDC
		::System::Int32 minMultipleKills; // 0xE4
		::System::Single multipleKillsBonus; // 0xE8
		::System::Single bulletTimeScale; // 0xEC
		::System::Single targetBulletTimeScale; // 0xF0
		::System::String* bulletLineAttachPoint; // 0xF8
		::RPG::Client::MonoWolfBroBulletLine* bulletLinePrefab; // 0x100
		::RPG::Client::MonoWolfBroBulletPoint* bulletPointPrefab; // 0x108
		::System::Single _SourceMotionVectorDistance; // 0x110
		::System::UInt32 _SerialNumber; // 0x114
		::System::Single _RealPlayTimer; // 0x118
		::System::UInt32 _EnterType; // 0x11C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ReportInfoMap; // 0x120
		::Il2CppArray<::System::Single>* _AddScoreReason; // 0x128
		::Il2CppArray<::System::Single>* _DeductScoreReason; // 0x130
		::RPG::Client::WolfBroGunPlayEndLess* _EndLess; // 0x138
		::Class_0_16E4307DCC419505_778* _Modifier; // 0x140
		::System::Boolean _Paused; // 0x148
		::System::Single _TimeScale; // 0x14C
		::System::Single _WaitTimeScale; // 0x150
		::System::Int32 _TimeScaleChangeFrame; // 0x154
		::RPG::Client::WolfBroGunPlayResult _Result; // 0x158
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::WolfBroGunPlayTarget*, ::System::Single>>* _ThisFrameScores; // 0x190
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::WolfBroGunTargetProjectile*, ::System::Single>>* _ThisFrameDelScores; // 0x198
		::Class_1_2BF31F3092BDFD9E* _RoadMap; // 0x1A0
		::RPG::GameCore::GameEntity* _Entity; // 0x1A8
		::RPG::Client::MonoWolfBroCustomData* _CustomData; // 0x1B0
		::Class_1_A66D7C1E06495A1A* _PlayController; // 0x1B8
		::System::Boolean _BulletTime; // 0x1C0
		::System::Int32 _EnterBulletTimeKillCount; // 0x1C4
		::System::Int32 _EnterBulletTimeCount; // 0x1C8
		::System::Single _EnterBulletTimeEnergy; // 0x1CC
		::System::Single _BulletTimeAddScore; // 0x1D0
		::System::Single _BulletTimeDelScore; // 0x1D4
		::System::UInt32 _CachedScore; // 0x1D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::WolfBroGunPlayPuzzleBoard* get_Instance()
		{
			return ((::RPG::Client::WolfBroGunPlayPuzzleBoard*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::WolfBroGunPlayPuzzleBoard* value)
		{
			return ((::System::Void(*)(::RPG::Client::WolfBroGunPlayPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* owner, ::RPG::GameCore::TaskContext* context, ::RPG::GameCore::PropInitPuzzle* puzzleConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_INITPUZZLE_OFFSET))(this, owner, context, puzzleConfig);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Void Tick(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_TICK_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void SetupTimelineEnable(::System::String* uniqueName, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_SETUPTIMELINEENABLE_OFFSET))(this, uniqueName, enable);
		}

		::System::Void EnableBulletTime(::System::Single timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_ENABLEBULLETTIME_OFFSET))(this, timeScale);
		}

		::System::Void DisableBulletTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_DISABLEBULLETTIME_OFFSET))(this);
		}

		::System::Void AddScore(::RPG::Client::WolfBroGunPlayTarget* from, ::System::Single score)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayTarget*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_ADDSCORE_OFFSET))(this, from, score);
		}

		::System::Void DelScore(::RPG::Client::WolfBroGunTargetProjectile* from, ::System::Single score)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunTargetProjectile*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_DELSCORE_OFFSET))(this, from, score);
		}

		::System::Void ModifyEnergy(::System::Single value, ::System::Boolean bForceNotify)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_MODIFYENERGY_OFFSET))(this, value, bForceNotify);
		}

		static ::System::Void SetupStartMode(::System::UInt32 mode)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_SETUPSTARTMODE_OFFSET))(mode);
		}

		::System::Void ControlWolfBroPlayer(::System::Boolean bCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_CONTROLWOLFBROPLAYER_OFFSET))(this, bCtrl);
		}

		::System::Void EvaluateScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_EVALUATESCORE_OFFSET))(this);
		}

		::System::Void EvaluateDelScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_EVALUATEDELSCORE_OFFSET))(this);
		}

		::System::Void EvaluateCountdownScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_EVALUATECOUNTDOWNSCORE_OFFSET))(this);
		}

		::System::Void RegisterEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_REGISTEREVENT_OFFSET))(this);
		}

		::System::Void UnRegisterEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_UNREGISTEREVENT_OFFSET))(this);
		}

		::System::Void _OnClickShoot(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD__ONCLICKSHOOT_OFFSET))(this, arg);
		}

		::System::Void _OnClickSkill(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD__ONCLICKSKILL_OFFSET))(this, arg);
		}

		::System::Void _OnPauseGame(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD__ONPAUSEGAME_OFFSET))(this, arg);
		}

		::System::Void _OnPlayGame(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD__ONPLAYGAME_OFFSET))(this, arg);
		}

		::System::Void _OnReplayGame(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD__ONREPLAYGAME_OFFSET))(this, arg);
		}

		::System::Void _OnExitGame(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD__ONEXITGAME_OFFSET))(this, arg);
		}

		::System::Boolean IsSuccess(::System::UInt32 score)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_ISSUCCESS_OFFSET))(this, score);
		}

		::System::Boolean IsSuccess_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_ISSUCCESS_1_OFFSET))(this);
		}

		::System::Void TriggerFinishQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_TRIGGERFINISHQUEST_OFFSET))(this);
		}

		::System::Void TriggerBulletTimeKillQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_TRIGGERBULLETTIMEKILLQUEST_OFFSET))(this);
		}

		::System::Void ReportGamePlayStartup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_REPORTGAMEPLAYSTARTUP_OFFSET))(this);
		}

		::System::Void ReportGamePlayFinish(::System::Int32 endType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_REPORTGAMEPLAYFINISH_OFFSET))(this, endType);
		}

		::System::Void ReportGamePlayUseSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_REPORTGAMEPLAYUSESKILL_OFFSET))(this);
		}

		::System::Void BuildGamePlayInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_BUILDGAMEPLAYINFO_OFFSET))(this);
		}

		static ::System::String* BuildArrayInfo(::Il2CppArray<::System::Single>* array)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_BUILDARRAYINFO_OFFSET))(array);
		}

		::System::UInt32 GetTargetScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GETTARGETSCORE_OFFSET))(this);
		}

		::System::String* get_MainRoadMapName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GET_MAINROADMAPNAME_OFFSET))(this);
		}

		::System::Single get_Score()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GET_SCORE_OFFSET))(this);
		}

		::Class_1_A66D7C1E06495A1A* get_PlayerController()
		{
			return ((::Class_1_A66D7C1E06495A1A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GET_PLAYERCONTROLLER_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Player()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GET_PLAYER_OFFSET))(this);
		}

		::System::UInt32 get_SerialNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GET_SERIALNUMBER_OFFSET))(this);
		}

		::System::Void set_SerialNumber(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_SET_SERIALNUMBER_OFFSET))(this, value);
		}

		::System::Single get__RealScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_GET__REALSCORE_OFFSET))(this);
		}

		::System::Void set__RealScore(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_SET__REALSCORE_OFFSET))(this, value);
		}

		::System::Void ResetScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_RESETSCORE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
