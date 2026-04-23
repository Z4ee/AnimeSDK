#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseClockParkGameState.h"
#include "unitysdk/RPG/Client/ClockParkGameStateEnum.h"
#include "unitysdk/RPG/GameCore/ClockParkEffectType.h"
#include "unitysdk/RPG/GameCore/GunPlayModeType.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class ClockParkEffectDataItem; }
namespace RPG::Client { class ClockParkEffectResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0xA0A4940)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GETBATTLEBUFFEFFECTDATAITEMS_OFFSET UNITYSDK_OFFSET(0xA0A4890)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GETSUCCESSEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xA0A48D0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GET_ISINHANUSHOOTING_OFFSET UNITYSDK_OFFSET(0xA0A6600)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GET_ISINMOVIEGAME_OFFSET UNITYSDK_OFFSET(0xA0A65E0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GET_SCORELEVEL_OFFSET UNITYSDK_OFFSET(0xA0A6620)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_SET_ISINHANUSHOOTING_OFFSET UNITYSDK_OFFSET(0xA0A6610)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_SET_ISINMOVIEGAME_OFFSET UNITYSDK_OFFSET(0xA0A65F0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_SET_SCORELEVEL_OFFSET UNITYSDK_OFFSET(0xA0A6630)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ADDHANUSHOOTINGNOTIFY_OFFSET UNITYSDK_OFFSET(0xA0A6130)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0A2570)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__GETHANUSHOOTINGLEVELID_OFFSET UNITYSDK_OFFSET(0xA0A5D40)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__GETHANUSHOOTINGSCORELEVEL_OFFSET UNITYSDK_OFFSET(0xA0A63C0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__GETHANUSHOOTINGTRIGGERSTR_OFFSET UNITYSDK_OFFSET(0xA0A60A0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__GETMOVIESTAGEID_OFFSET UNITYSDK_OFFSET(0xA0A54C0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ISVALIDGAMEBUFFTYPE_OFFSET UNITYSDK_OFFSET(0xA0A5470)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONENTER_OFFSET UNITYSDK_OFFSET(0xA0A3D60)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONFINISHHANUSHOOTING_OFFSET UNITYSDK_OFFSET(0xA0A6430)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONFINISHMOVIEGAME_OFFSET UNITYSDK_OFFSET(0xA0A5BF0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONUIMOVIERACINGGAMERESULT_OFFSET UNITYSDK_OFFSET(0xA0A5820)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONUIWOLFBROSHOOTINGEXITGAME_OFFSET UNITYSDK_OFFSET(0xA0A6580)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONUIWOLFBROSHOOTINGSUCCESS_OFFSET UNITYSDK_OFFSET(0xA0A62D0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__RECORDEFFECTDATAITEMS_OFFSET UNITYSDK_OFFSET(0xA0A4260)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__REMOVEHANUSHOOTINGNOTIFY_OFFSET UNITYSDK_OFFSET(0xA0A6200)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__SETMOVIEGAMETARGETSCORE_OFFSET UNITYSDK_OFFSET(0xA0A4B60)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__TRIGGERHANUSHOOTING_OFFSET UNITYSDK_OFFSET(0xA0A51B0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__TRIGGERMOVIEGAME_OFFSET UNITYSDK_OFFSET(0xA0A4F50)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE___IFIXBASEPROXY_FINISHROUND_OFFSET UNITYSDK_OFFSET(0xA0A66B0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE___IFIXBASEPROXY__ONENTER_OFFSET UNITYSDK_OFFSET(0xA0A6640)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkLittleGameState_TypeDefinitionIndex = 56718;

	class ClockParkLittleGameState : public ::RPG::Client::BaseClockParkGameState
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* _EffectDataItemList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _TargetScoreList; // 0x20
		::System::UInt32 _LittleGameScoreLevelNum; // 0x28
		::System::Boolean _IsInHanuShooting_k__BackingField; // 0x2C
		::System::Boolean _IsInMovieGame_k__BackingField; // 0x2D
		::System::Int32 _HanuShootingLastRank; // 0x30
		::System::UInt32 _ScoreLevel_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter(::RPG::Client::ClockParkGameStateEnum lastGameState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONENTER_OFFSET))(this, lastGameState);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* GetBattleBuffEffectDataItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GETBATTLEBUFFEFFECTDATAITEMS_OFFSET))(this);
		}

		::RPG::Client::ClockParkEffectResult* GetSuccessEffectResult()
		{
			return ((::RPG::Client::ClockParkEffectResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GETSUCCESSEFFECTRESULT_OFFSET))(this);
		}

		::System::Boolean FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean _IsValidGameBuffType(::RPG::GameCore::ClockParkEffectType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ClockParkEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ISVALIDGAMEBUFFTYPE_OFFSET))(this, type);
		}

		::System::Void _RecordEffectDataItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__RECORDEFFECTDATAITEMS_OFFSET))(this);
		}

		::System::Void _SetMovieGameTargetScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__SETMOVIEGAMETARGETSCORE_OFFSET))(this);
		}

		::System::Void _TriggerMovieGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__TRIGGERMOVIEGAME_OFFSET))(this);
		}

		::System::Int32 _GetMovieStageID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__GETMOVIESTAGEID_OFFSET))(this);
		}

		::System::Void _OnUIMovieRacingGameResult(::System::Object* gameResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONUIMOVIERACINGGAMERESULT_OFFSET))(this, gameResult);
		}

		::System::Void _OnFinishMovieGame(::System::Boolean isWin, ::System::UInt32 scoreLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONFINISHMOVIEGAME_OFFSET))(this, isWin, scoreLevel);
		}

		::System::Void _TriggerHanuShooting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__TRIGGERHANUSHOOTING_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> _GetHanuShootingLevelID()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__GETHANUSHOOTINGLEVELID_OFFSET))(this);
		}

		::System::String* _GetHanuShootingTriggerStr(::RPG::GameCore::GunPlayModeType mode, ::System::UInt32 levelID)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GunPlayModeType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__GETHANUSHOOTINGTRIGGERSTR_OFFSET))(this, mode, levelID);
		}

		::System::Void _AddHanuShootingNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ADDHANUSHOOTINGNOTIFY_OFFSET))(this);
		}

		::System::Void _RemoveHanuShootingNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__REMOVEHANUSHOOTINGNOTIFY_OFFSET))(this);
		}

		::System::Void _OnUIWolfBroShootingSuccess(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONUIWOLFBROSHOOTINGSUCCESS_OFFSET))(this, arg);
		}

		::System::UInt32 _GetHanuShootingScoreLevel(::System::Int32 scoreRank)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__GETHANUSHOOTINGSCORELEVEL_OFFSET))(this, scoreRank);
		}

		::System::Void _OnUIWolfBroShootingExitGame(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONUIWOLFBROSHOOTINGEXITGAME_OFFSET))(this, arg);
		}

		::System::Void _OnFinishHanuShooting(::System::Boolean isWin, ::System::UInt32 scoreLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONFINISHHANUSHOOTING_OFFSET))(this, isWin, scoreLevel);
		}

		::System::Boolean get_IsInMovieGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GET_ISINMOVIEGAME_OFFSET))(this);
		}

		::System::Void set_IsInMovieGame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_SET_ISINMOVIEGAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsInHanuShooting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GET_ISINHANUSHOOTING_OFFSET))(this);
		}

		::System::Void set_IsInHanuShooting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_SET_ISINHANUSHOOTING_OFFSET))(this, value);
		}

		::System::UInt32 get_ScoreLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GET_SCORELEVEL_OFFSET))(this);
		}

		::System::Void set_ScoreLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_SET_SCORELEVEL_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__OnEnter(::RPG::Client::ClockParkGameStateEnum P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE___IFIXBASEPROXY__ONENTER_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE___IFIXBASEPROXY_FINISHROUND_OFFSET))(this);
		}
	};
}
