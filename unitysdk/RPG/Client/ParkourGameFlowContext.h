#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"
#include "unitysdk/RPG/Client/ParkourCrossroadType.h"
#include "unitysdk/RPG/Client/ParkourGamePhase.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_628;
class Class_1_1B7044A592B17773_3;
class Class_1_3B36CE63D36E9917;
class Class_1_3CB66EAA8C4DE7F9;
class Class_1_4B24D105CCEA2C22;
class Class_1_4F1C87AD83EB7385;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class ParkourBall; }
namespace RPG::Client { class ParkourGameCharacterInfo; }
namespace RPG::Client { class ParkourGameCrossroadInfo; }
namespace RPG::Client { class ParkourGamePlayerInfo; }
namespace RPG::Client { class ParkourLevel; }
namespace RPG::Client { class ParkourSettlement; }
namespace RPG::Client::ParkourGame { class MonoParkourFullScreenBuff; }
namespace RPG::Client::ParkourGame { class MonoParkourTalkEvent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_CREATEANDADDCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0xAC30E00)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xAC2FE40)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ENTERGAME_OFFSET UNITYSDK_OFFSET(0xAC2DC30)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GETCHARACTERINFOBYID_OFFSET UNITYSDK_OFFSET(0xAC30F60)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GETCHARACTERINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0xAC30EC0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_BALLID_OFFSET UNITYSDK_OFFSET(0xAC2F040)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_BALL_OFFSET UNITYSDK_OFFSET(0xAC2FC30)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_BESTRECORDMS_OFFSET UNITYSDK_OFFSET(0xAC2FD80)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_COUNTOFCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0xAC2FD10)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_CROSSROADINFO_OFFSET UNITYSDK_OFFSET(0xAC2FD00)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_CURRENTELAPSEDMS_OFFSET UNITYSDK_OFFSET(0xAC2FD60)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_CURRENTLAPCOUNT_OFFSET UNITYSDK_OFFSET(0xAC2FCD0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_GAMEMESSAGEREGISTRY_OFFSET UNITYSDK_OFFSET(0xAC2FE30)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xAC2EFE0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_LEVELNAME_OFFSET UNITYSDK_OFFSET(0xAC2FB80)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAC2FC10)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_MAXLAPCOUNT_OFFSET UNITYSDK_OFFSET(0xAC2FC70)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xAC2FC50)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_PLAYERINFO_OFFSET UNITYSDK_OFFSET(0xAC2FCF0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_RESULT_OFFSET UNITYSDK_OFFSET(0xAC2FE10)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0xAC2D990)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ISFINISHEDALLLEVELS_OFFSET UNITYSDK_OFFSET(0xAC31690)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ISPAUSEDGAME_OFFSET UNITYSDK_OFFSET(0xAC306E0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ONPLAYERUSESUPERSTARSKILL_OFFSET UNITYSDK_OFFSET(0xAC31510)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_REGISTERMONOFULLSCREENBUFF_OFFSET UNITYSDK_OFFSET(0xAC24790)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_REGISTERMONOTALKEVENT_OFFSET UNITYSDK_OFFSET(0xAC2B540)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_RESETGAME_OFFSET UNITYSDK_OFFSET(0xAC30430)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_RPG_CLIENT_IGAMEFLOWEVENTRECEIVER_RECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0xAC30350)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_RPG_CLIENT_IGAMEFLOWMESSAGERECEIVER_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAC303B0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SETTLEGAME_OFFSET UNITYSDK_OFFSET(0xAC30770)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_BALL_OFFSET UNITYSDK_OFFSET(0xAC2FC40)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_CURRENTELAPSEDMS_OFFSET UNITYSDK_OFFSET(0xAC2FD70)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_CURRENTLAPCOUNT_OFFSET UNITYSDK_OFFSET(0xAC2FCE0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAC2FC20)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_PHASE_OFFSET UNITYSDK_OFFSET(0xAC2FC60)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_RESULT_OFFSET UNITYSDK_OFFSET(0xAC2FE20)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_TRIGGERTALKEVENT_OFFSET UNITYSDK_OFFSET(0xAC30650)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UNREGISTERMONOFULLSCREENBUFF_OFFSET UNITYSDK_OFFSET(0xAC248C0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UNREGISTERMONOTALKEVENT_OFFSET UNITYSDK_OFFSET(0xAC2BDF0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATECROSSROADINFO_OFFSET UNITYSDK_OFFSET(0xAC31330)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATEELAPSEDMS_OFFSET UNITYSDK_OFFSET(0xAC312E0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATELAPCOUNT_OFFSET UNITYSDK_OFFSET(0xAC31040)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATELOCKTARGET_OFFSET UNITYSDK_OFFSET(0xAC31210)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATESKILL_OFFSET UNITYSDK_OFFSET(0xAC304C0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATEUI_OFFSET UNITYSDK_OFFSET(0xAC311B0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__AUTOSHOWGAMEENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xAC325C0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__AUTOSHOWLEVELDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xAC31F70)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__AUTOSHOWSELECTCARDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xAC31CC0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__CHECKISVALID_OFFSET UNITYSDK_OFFSET(0xAC30CF0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAC2FEC0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__HANDLEADVENTUREPHASEENTEREDEVENT_OFFSET UNITYSDK_OFFSET(0xAC31B90)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONCLOSEGAME_OFFSET UNITYSDK_OFFSET(0xAC32260)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0xAC30170)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONGAMESTART_OFFSET UNITYSDK_OFFSET(0xAC32570)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONLEVELENDED_OFFSET UNITYSDK_OFFSET(0xAC31770)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONLEVELSTARTED_OFFSET UNITYSDK_OFFSET(0xAC31720)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONREPLAYGAME_OFFSET UNITYSDK_OFFSET(0xAC324C0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__PLAYBGM_OFFSET UNITYSDK_OFFSET(0xAC319E0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__PLAYFASTBGM_OFFSET UNITYSDK_OFFSET(0xAC31120)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__PLAYNORMALBGM_OFFSET UNITYSDK_OFFSET(0xAC31950)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__STARTPLAYBGM_OFFSET UNITYSDK_OFFSET(0xAC32510)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__STOPBGM_OFFSET UNITYSDK_OFFSET(0xAC301F0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT___IFIXBASEPROXY__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0xAC32620)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameFlowContext_TypeDefinitionIndex = 57044;

	class ParkourGameFlowContext : public ::RPG::Client::BaseGameFlowContext
	{
	public:
		::RPG::Client::ParkourGame::MonoParkourFullScreenBuff* _MonoParkourFullScreenBuff; // 0x20
		::RPG::Client::ParkourSettlement* _ParkourSettlement; // 0x28
		::RPG::Client::ParkourBall* _Ball_k__BackingField; // 0x30
		::Class_1_4F1C87AD83EB7385* _ParkourTalkEventManager; // 0x38
		::Class_1_3CB66EAA8C4DE7F9* _Result_k__BackingField; // 0x40
		::RPG::Client::ParkourGamePlayerInfo* _PlayerInfo_k__BackingField; // 0x48
		::RPG::Client::ParkourLevel* _Level_k__BackingField; // 0x50
		::System::String* _CurrentBGMName; // 0x58
		::Class_1_4B24D105CCEA2C22* _MessageRegistry; // 0x60
		::Class_1_4B24D105CCEA2C22* _GameMessageRegistry_k__BackingField; // 0x68
		::RPG::Client::ParkourGameCrossroadInfo* _CrossroadInfo_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::ParkourGameCharacterInfo*>* _CharacterInfos; // 0x78
		::Class_1_3B36CE63D36E9917* _EventRegistry; // 0x80
		::System::Boolean _IsBackToCarDetail; // 0x88
		::RPG::Client::ParkourGamePhase _Phase_k__BackingField; // 0x8C
		::System::UInt32 _CurrentElapsedMs_k__BackingField; // 0x90
		::System::UInt32 _RestartTotalElapsedMs; // 0x94
		::System::UInt32 _BGMID; // 0x98
		::System::UInt32 _ReplayCount; // 0x9C
		::System::Int32 _CurrentLapCount_k__BackingField; // 0xA0

		::System::Void _ctor(::RPG::Client::BaseGameFlow* gameFlow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__CTOR_OFFSET))(this, gameFlow);
		}

		::System::UInt32 get_LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_LEVELID_OFFSET))(this);
		}

		::System::UInt32 get_BallID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_BALLID_OFFSET))(this);
		}

		::RPG::Client::TextID get_LevelName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_LEVELNAME_OFFSET))(this);
		}

		::RPG::Client::ParkourLevel* get_Level()
		{
			return ((::RPG::Client::ParkourLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::RPG::Client::ParkourLevel* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_LEVEL_OFFSET))(this, value);
		}

		::RPG::Client::ParkourBall* get_Ball()
		{
			return ((::RPG::Client::ParkourBall*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_BALL_OFFSET))(this);
		}

		::System::Void set_Ball(::RPG::Client::ParkourBall* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourBall*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_BALL_OFFSET))(this, value);
		}

		::RPG::Client::ParkourGamePhase get_Phase()
		{
			return ((::RPG::Client::ParkourGamePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_Phase(::RPG::Client::ParkourGamePhase value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGamePhase))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_PHASE_OFFSET))(this, value);
		}

		::System::Int32 get_MaxLapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_MAXLAPCOUNT_OFFSET))(this);
		}

		::System::Int32 get_CurrentLapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_CURRENTLAPCOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentLapCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_CURRENTLAPCOUNT_OFFSET))(this, value);
		}

		::RPG::Client::ParkourGamePlayerInfo* get_PlayerInfo()
		{
			return ((::RPG::Client::ParkourGamePlayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_PLAYERINFO_OFFSET))(this);
		}

		::RPG::Client::ParkourGameCrossroadInfo* get_CrossroadInfo()
		{
			return ((::RPG::Client::ParkourGameCrossroadInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_CROSSROADINFO_OFFSET))(this);
		}

		::System::Int32 get_CountOfCharacterInfo()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_COUNTOFCHARACTERINFO_OFFSET))(this);
		}

		::System::UInt32 get_CurrentElapsedMs()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_CURRENTELAPSEDMS_OFFSET))(this);
		}

		::System::Void set_CurrentElapsedMs(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_CURRENTELAPSEDMS_OFFSET))(this, value);
		}

		::System::UInt32 get_BestRecordMs()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_BESTRECORDMS_OFFSET))(this);
		}

		::Class_1_3CB66EAA8C4DE7F9* get_Result()
		{
			return ((::Class_1_3CB66EAA8C4DE7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_RESULT_OFFSET))(this);
		}

		::System::Void set_Result(::Class_1_3CB66EAA8C4DE7F9* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3CB66EAA8C4DE7F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_RESULT_OFFSET))(this, value);
		}

		::Class_1_4B24D105CCEA2C22* get_GameMessageRegistry()
		{
			return ((::Class_1_4B24D105CCEA2C22*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_GAMEMESSAGEREGISTRY_OFFSET))(this);
		}

		static ::RPG::Client::ParkourGameFlowContext* Create(::RPG::Client::BaseGameFlow* gameFlow)
		{
			return ((::RPG::Client::ParkourGameFlowContext*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_CREATE_OFFSET))(gameFlow);
		}

		::System::Void Init(::RPG::Client::ParkourLevel* level, ::RPG::Client::ParkourBall* ball)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourLevel*, ::RPG::Client::ParkourBall*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_INIT_OFFSET))(this, level, ball);
		}

		::System::Void _OnDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONDESTROYED_OFFSET))(this);
		}

		::System::Void RPG_Client_IGameFlowEventReceiver_ReceiveEvent(::Class_0_16E4307DCC419505_628* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_628*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_RPG_CLIENT_IGAMEFLOWEVENTRECEIVER_RECEIVEEVENT_OFFSET))(this, evt);
		}

		::System::Void RPG_Client_IGameFlowMessageReceiver_ReceiveMessage(::System::Int32 message, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_RPG_CLIENT_IGAMEFLOWMESSAGERECEIVER_RECEIVEMESSAGE_OFFSET))(this, message, obj);
		}

		::System::Void ResetGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_RESETGAME_OFFSET))(this);
		}

		::System::Void UpdateSkill(::System::UInt32 skillID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATESKILL_OFFSET))(this, skillID);
		}

		::System::Void RegisterMonoTalkEvent(::System::UInt32 ballID, ::RPG::Client::ParkourGame::MonoParkourTalkEvent* talkEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ParkourGame::MonoParkourTalkEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_REGISTERMONOTALKEVENT_OFFSET))(this, ballID, talkEvent);
		}

		::System::Void UnRegisterMonoTalkEvent(::System::UInt32 ballID, ::RPG::Client::ParkourGame::MonoParkourTalkEvent* talkEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ParkourGame::MonoParkourTalkEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UNREGISTERMONOTALKEVENT_OFFSET))(this, ballID, talkEvent);
		}

		::System::Void RegisterMonoFullScreenBuff(::RPG::Client::ParkourGame::MonoParkourFullScreenBuff* monoFullScreenBuff)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourFullScreenBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_REGISTERMONOFULLSCREENBUFF_OFFSET))(this, monoFullScreenBuff);
		}

		::System::Void UnRegisterMonoFullScreenBuff(::RPG::Client::ParkourGame::MonoParkourFullScreenBuff* monoFullScreenBuff)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourFullScreenBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UNREGISTERMONOFULLSCREENBUFF_OFFSET))(this, monoFullScreenBuff);
		}

		::System::Boolean IsPausedGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ISPAUSEDGAME_OFFSET))(this);
		}

		::System::Void EnterGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ENTERGAME_OFFSET))(this);
		}

		::System::Void SettleGame(::Class_1_3CB66EAA8C4DE7F9* result)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3CB66EAA8C4DE7F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SETTLEGAME_OFFSET))(this, result);
		}

		::RPG::Client::ParkourGameCharacterInfo* CreateAndAddCharacterInfo(::System::UInt32 id)
		{
			return ((::RPG::Client::ParkourGameCharacterInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_CREATEANDADDCHARACTERINFO_OFFSET))(this, id);
		}

		::RPG::Client::ParkourGameCharacterInfo* GetCharacterInfoByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::ParkourGameCharacterInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GETCHARACTERINFOBYINDEX_OFFSET))(this, index);
		}

		::RPG::Client::ParkourGameCharacterInfo* GetCharacterInfoByID(::System::UInt32 id)
		{
			return ((::RPG::Client::ParkourGameCharacterInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GETCHARACTERINFOBYID_OFFSET))(this, id);
		}

		::System::Void UpdateLapCount(::System::Int32 lapCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATELAPCOUNT_OFFSET))(this, lapCount);
		}

		::System::Void TriggerTalkEvent(::System::UInt32 eventID, ::System::UInt32 originID, ::System::UInt32 targetID, ::System::UInt32 param)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_TRIGGERTALKEVENT_OFFSET))(this, eventID, originID, targetID, param);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATEUI_OFFSET))(this);
		}

		::System::Void UpdateLockTarget(::System::Boolean isVisible, ::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATELOCKTARGET_OFFSET))(this, isVisible, position);
		}

		::System::Void UpdateElapsedMs(::System::UInt32 milliseconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATEELAPSEDMS_OFFSET))(this, milliseconds);
		}

		::System::Void UpdateCrossroadInfo(::System::Boolean isVisible, ::UnityEngine::Vector3 startPosition, ::UnityEngine::Vector3 position, ::RPG::Client::ParkourCrossroadType style, ::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::ParkourCrossroadType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATECROSSROADINFO_OFFSET))(this, isVisible, startPosition, position, style, distance);
		}

		::System::Void OnPlayerUseSuperStarSkill(::System::Single currDuration, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ONPLAYERUSESUPERSTARSKILL_OFFSET))(this, currDuration, duration);
		}

		::System::Boolean IsFinishedAllLevels()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ISFINISHEDALLLEVELS_OFFSET))(this);
		}

		::System::Void _OnLevelStarted(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONLEVELSTARTED_OFFSET))(this, obj);
		}

		::System::Void _OnLevelEnded(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONLEVELENDED_OFFSET))(this, obj);
		}

		::System::Void _PlayBGM(::System::String* BGMName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__PLAYBGM_OFFSET))(this, BGMName);
		}

		::System::Void _StopBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__STOPBGM_OFFSET))(this);
		}

		::System::Void _HandleAdventurePhaseEnteredEvent(::Class_1_1B7044A592B17773_3* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1B7044A592B17773_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__HANDLEADVENTUREPHASEENTEREDEVENT_OFFSET))(this, evt);
		}

		::System::Void _OnCloseGame(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONCLOSEGAME_OFFSET))(this, obj);
		}

		::System::Void _OnReplayGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONREPLAYGAME_OFFSET))(this);
		}

		::System::Void _PlayNormalBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__PLAYNORMALBGM_OFFSET))(this);
		}

		::System::Void _PlayFastBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__PLAYFASTBGM_OFFSET))(this);
		}

		::System::Void _StartPlayBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__STARTPLAYBGM_OFFSET))(this);
		}

		::System::Void _OnGameStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONGAMESTART_OFFSET))(this);
		}

		::System::Boolean _CheckIsValid(::Class_1_3CB66EAA8C4DE7F9* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_3CB66EAA8C4DE7F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__CHECKISVALID_OFFSET))(this, result);
		}

		::System::Void _AutoShowGameEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__AUTOSHOWGAMEENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void _AutoShowLevelDetailPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__AUTOSHOWLEVELDETAILPAGE_OFFSET))(this);
		}

		::System::Void _AutoShowSelectCarDetailPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__AUTOSHOWSELECTCARDETAILPAGE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT___IFIXBASEPROXY__ONDESTROYED_OFFSET))(this);
		}
	};
}
