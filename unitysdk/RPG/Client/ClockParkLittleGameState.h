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

#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0xB6E2690)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GETBATTLEBUFFEFFECTDATAITEMS_OFFSET UNITYSDK_OFFSET(0xB6E25E0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GETSUCCESSEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xB6E2620)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GET_ISINHANUSHOOTING_OFFSET UNITYSDK_OFFSET(0xB6E42D0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GET_ISINMOVIEGAME_OFFSET UNITYSDK_OFFSET(0xB6E42B0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GET_SCORELEVEL_OFFSET UNITYSDK_OFFSET(0xB6E42F0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_SET_ISINHANUSHOOTING_OFFSET UNITYSDK_OFFSET(0xB6E42E0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_SET_ISINMOVIEGAME_OFFSET UNITYSDK_OFFSET(0xB6E42C0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_SET_SCORELEVEL_OFFSET UNITYSDK_OFFSET(0xB6E4300)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ADDHANUSHOOTINGNOTIFY_OFFSET UNITYSDK_OFFSET(0xB6E3D90)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E0600)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__GETHANUSHOOTINGLEVELID_OFFSET UNITYSDK_OFFSET(0xB6E3980)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__GETHANUSHOOTINGSCORELEVEL_OFFSET UNITYSDK_OFFSET(0xB6E40A0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__GETHANUSHOOTINGTRIGGERSTR_OFFSET UNITYSDK_OFFSET(0xB6E3D00)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__GETMOVIESTAGEID_OFFSET UNITYSDK_OFFSET(0xB6E3160)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ISVALIDGAMEBUFFTYPE_OFFSET UNITYSDK_OFFSET(0xB6E3110)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONENTER_OFFSET UNITYSDK_OFFSET(0xB6E1D20)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONFINISHHANUSHOOTING_OFFSET UNITYSDK_OFFSET(0xB6E4110)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONFINISHMOVIEGAME_OFFSET UNITYSDK_OFFSET(0xB6E3840)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONUIMOVIERACINGGAMERESULT_OFFSET UNITYSDK_OFFSET(0xB6E34D0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONUIWOLFBROSHOOTINGEXITGAME_OFFSET UNITYSDK_OFFSET(0xB6E4250)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONUIWOLFBROSHOOTINGSUCCESS_OFFSET UNITYSDK_OFFSET(0xB6E3FB0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__RECORDEFFECTDATAITEMS_OFFSET UNITYSDK_OFFSET(0xB6E2190)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__REMOVEHANUSHOOTINGNOTIFY_OFFSET UNITYSDK_OFFSET(0xB6E3EA0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__SETMOVIEGAMETARGETSCORE_OFFSET UNITYSDK_OFFSET(0xB6E28B0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__TRIGGERHANUSHOOTING_OFFSET UNITYSDK_OFFSET(0xB6E2E50)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__TRIGGERMOVIEGAME_OFFSET UNITYSDK_OFFSET(0xB6E2BD0)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE___IFIXBASEPROXY_FINISHROUND_OFFSET UNITYSDK_OFFSET(0xB6E4370)
#define RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE___IFIXBASEPROXY__ONENTER_OFFSET UNITYSDK_OFFSET(0xB6E4310)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkLittleGameState_TypeDefinitionIndex = 57502;

	class ClockParkLittleGameState : public ::RPG::Client::BaseClockParkGameState
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* _EffectDataItemList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _TargetScoreList; // 0x20
		::System::UInt32 _LittleGameScoreLevelNum; // 0x28
		::System::UInt32 _ScoreLevel_k__BackingField; // 0x2C
		::System::Int32 _HanuShootingLastRank; // 0x30
		::System::Boolean _IsInMovieGame_k__BackingField; // 0x34
		::System::Boolean _IsInHanuShooting_k__BackingField; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONENTER_OFFSET))(this, a1);
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

		::System::Boolean _IsValidGameBuffType(::RPG::GameCore::ClockParkEffectType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ClockParkEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ISVALIDGAMEBUFFTYPE_OFFSET))(this, a1);
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

		::System::Void _OnUIMovieRacingGameResult(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONUIMOVIERACINGGAMERESULT_OFFSET))(this, a1);
		}

		::System::Void _OnFinishMovieGame(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONFINISHMOVIEGAME_OFFSET))(this, a1, a2);
		}

		::System::Void _TriggerHanuShooting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__TRIGGERHANUSHOOTING_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> _GetHanuShootingLevelID()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__GETHANUSHOOTINGLEVELID_OFFSET))(this);
		}

		::System::String* _GetHanuShootingTriggerStr(::RPG::GameCore::GunPlayModeType a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GunPlayModeType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__GETHANUSHOOTINGTRIGGERSTR_OFFSET))(this, a1, a2);
		}

		::System::Void _AddHanuShootingNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ADDHANUSHOOTINGNOTIFY_OFFSET))(this);
		}

		::System::Void _RemoveHanuShootingNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__REMOVEHANUSHOOTINGNOTIFY_OFFSET))(this);
		}

		::System::Void _OnUIWolfBroShootingSuccess(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONUIWOLFBROSHOOTINGSUCCESS_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHanuShootingScoreLevel(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__GETHANUSHOOTINGSCORELEVEL_OFFSET))(this, a1);
		}

		::System::Void _OnUIWolfBroShootingExitGame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONUIWOLFBROSHOOTINGEXITGAME_OFFSET))(this, a1);
		}

		::System::Void _OnFinishHanuShooting(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE__ONFINISHHANUSHOOTING_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsInMovieGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GET_ISINMOVIEGAME_OFFSET))(this);
		}

		::System::Void set_IsInMovieGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_SET_ISINMOVIEGAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInHanuShooting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GET_ISINHANUSHOOTING_OFFSET))(this);
		}

		::System::Void set_IsInHanuShooting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_SET_ISINHANUSHOOTING_OFFSET))(this, a1);
		}

		::System::UInt32 get_ScoreLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_GET_SCORELEVEL_OFFSET))(this);
		}

		::System::Void set_ScoreLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE_SET_SCORELEVEL_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnEnter(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE___IFIXBASEPROXY__ONENTER_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKLITTLEGAMESTATE___IFIXBASEPROXY_FINISHROUND_OFFSET))(this);
		}
	};
}
