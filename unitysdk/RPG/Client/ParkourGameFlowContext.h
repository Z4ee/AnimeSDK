#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"
#include "unitysdk/RPG/Client/ParkourCrossroadType.h"
#include "unitysdk/RPG/Client/ParkourGamePhase.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_651;
class Class_1_3CB66EAA8C4DE7F9;
class Class_1_4CFEF021C34E7902;
class Class_1_4F1C87AD83EB7385;
class Class_1_93CCFC46DF4C9BD2;
class Class_1_97E659ED8D5D259C_6;
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

#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_CREATEANDADDCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0xC3412C0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xC340120)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ENTERGAME_OFFSET UNITYSDK_OFFSET(0xC33DAA0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GETCHARACTERINFOBYID_OFFSET UNITYSDK_OFFSET(0xC341480)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GETCHARACTERINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0xC3413F0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_BALLID_OFFSET UNITYSDK_OFFSET(0xC33ED90)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_BALL_OFFSET UNITYSDK_OFFSET(0xC33FE90)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_BESTRECORDMS_OFFSET UNITYSDK_OFFSET(0xC340000)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_COUNTOFCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0xC33FF90)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_CROSSROADINFO_OFFSET UNITYSDK_OFFSET(0xC33FF80)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_CURRENTELAPSEDMS_OFFSET UNITYSDK_OFFSET(0xC33FFE0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_CURRENTLAPCOUNT_OFFSET UNITYSDK_OFFSET(0xC33FF50)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_GAMEMESSAGEREGISTRY_OFFSET UNITYSDK_OFFSET(0xC340110)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xC33ED30)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_LEVELNAME_OFFSET UNITYSDK_OFFSET(0xC33FA80)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC33FE70)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_MAXLAPCOUNT_OFFSET UNITYSDK_OFFSET(0xC33FED0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xC33FEB0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_PLAYERINFO_OFFSET UNITYSDK_OFFSET(0xC33FF70)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_RESULT_OFFSET UNITYSDK_OFFSET(0xC3400F0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0xC33D790)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ISFINISHEDALLLEVELS_OFFSET UNITYSDK_OFFSET(0xC341CA0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ISPAUSEDGAME_OFFSET UNITYSDK_OFFSET(0xC340BD0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ONPLAYERUSESUPERSTARSKILL_OFFSET UNITYSDK_OFFSET(0xC341AB0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_REGISTERMONOFULLSCREENBUFF_OFFSET UNITYSDK_OFFSET(0xC334510)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_REGISTERMONOTALKEVENT_OFFSET UNITYSDK_OFFSET(0xC33B1A0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_RESETGAME_OFFSET UNITYSDK_OFFSET(0xC340820)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_RPG_CLIENT_IGAMEFLOWEVENTRECEIVER_RECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0xC340740)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_RPG_CLIENT_IGAMEFLOWMESSAGERECEIVER_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC3407A0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SETTLEGAME_OFFSET UNITYSDK_OFFSET(0xC340C60)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_BALL_OFFSET UNITYSDK_OFFSET(0xC33FEA0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_CURRENTELAPSEDMS_OFFSET UNITYSDK_OFFSET(0xC33FFF0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_CURRENTLAPCOUNT_OFFSET UNITYSDK_OFFSET(0xC33FF60)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC33FE80)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_PHASE_OFFSET UNITYSDK_OFFSET(0xC33FEC0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_RESULT_OFFSET UNITYSDK_OFFSET(0xC340100)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_TRIGGERTALKEVENT_OFFSET UNITYSDK_OFFSET(0xC340B40)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UNREGISTERMONOFULLSCREENBUFF_OFFSET UNITYSDK_OFFSET(0xC334640)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UNREGISTERMONOTALKEVENT_OFFSET UNITYSDK_OFFSET(0xC33BA90)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATECROSSROADINFO_OFFSET UNITYSDK_OFFSET(0xC3418D0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATEELAPSEDMS_OFFSET UNITYSDK_OFFSET(0xC341880)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATELAPCOUNT_OFFSET UNITYSDK_OFFSET(0xC341580)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATELOCKTARGET_OFFSET UNITYSDK_OFFSET(0xC341750)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATESKILL_OFFSET UNITYSDK_OFFSET(0xC3408D0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATEUI_OFFSET UNITYSDK_OFFSET(0xC3416F0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__AUTOSHOWGAMEENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xC343100)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__AUTOSHOWLEVELDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xC342A10)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__AUTOSHOWSELECTCARDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xC342760)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__CHECKISVALID_OFFSET UNITYSDK_OFFSET(0xC3411A0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC3401A0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__HANDLEADVENTUREPHASEENTEREDEVENT_OFFSET UNITYSDK_OFFSET(0xC342630)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONCLOSEGAME_OFFSET UNITYSDK_OFFSET(0xC342D00)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0xC340540)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONGAMESTART_OFFSET UNITYSDK_OFFSET(0xC3430B0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONLEVELENDED_OFFSET UNITYSDK_OFFSET(0xC341D80)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONLEVELSTARTED_OFFSET UNITYSDK_OFFSET(0xC341D30)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONREPLAYGAME_OFFSET UNITYSDK_OFFSET(0xC342F70)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__PLAYBGM_OFFSET UNITYSDK_OFFSET(0xC342480)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__PLAYFASTBGM_OFFSET UNITYSDK_OFFSET(0xC341660)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__PLAYNORMALBGM_OFFSET UNITYSDK_OFFSET(0xC3423F0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__STARTPLAYBGM_OFFSET UNITYSDK_OFFSET(0xC342FC0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__STOPBGM_OFFSET UNITYSDK_OFFSET(0xC3405C0)
#define RPG_CLIENT_PARKOURGAMEFLOWCONTEXT___IFIXBASEPROXY__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0xC343240)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameFlowContext_TypeDefinitionIndex = 57831;

	class ParkourGameFlowContext : public ::RPG::Client::BaseGameFlowContext
	{
	public:
		::Class_1_4CFEF021C34E7902* _MessageRegistry; // 0x20
		::System::String* _CurrentBGMName; // 0x28
		::Class_1_4CFEF021C34E7902* _GameMessageRegistry_k__BackingField; // 0x30
		::RPG::Client::ParkourGame::MonoParkourFullScreenBuff* _MonoParkourFullScreenBuff; // 0x38
		::RPG::Client::ParkourSettlement* _ParkourSettlement; // 0x40
		::RPG::Client::ParkourLevel* _Level_k__BackingField; // 0x48
		::RPG::Client::ParkourGamePlayerInfo* _PlayerInfo_k__BackingField; // 0x50
		::RPG::Client::ParkourGameCrossroadInfo* _CrossroadInfo_k__BackingField; // 0x58
		::Class_1_3CB66EAA8C4DE7F9* _Result_k__BackingField; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::ParkourGameCharacterInfo*>* _CharacterInfos; // 0x68
		::Class_1_93CCFC46DF4C9BD2* _EventRegistry; // 0x70
		::Class_1_4F1C87AD83EB7385* _ParkourTalkEventManager; // 0x78
		::RPG::Client::ParkourBall* _Ball_k__BackingField; // 0x80
		::System::UInt32 _ReplayCount; // 0x88
		::System::UInt32 _BGMID; // 0x8C
		::System::Int32 _CurrentLapCount_k__BackingField; // 0x90
		::RPG::Client::ParkourGamePhase _Phase_k__BackingField; // 0x94
		::System::UInt32 _CurrentElapsedMs_k__BackingField; // 0x98
		::System::UInt32 _RestartTotalElapsedMs; // 0x9C
		::System::Boolean _IsBackToCarDetail; // 0xA0

		::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__CTOR_OFFSET))(this, a1);
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

		::System::Void set_Level(::RPG::Client::ParkourLevel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourBall* get_Ball()
		{
			return ((::RPG::Client::ParkourBall*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_BALL_OFFSET))(this);
		}

		::System::Void set_Ball(::RPG::Client::ParkourBall* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourBall*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_BALL_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourGamePhase get_Phase()
		{
			return ((::RPG::Client::ParkourGamePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_Phase(::RPG::Client::ParkourGamePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGamePhase))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_PHASE_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxLapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_MAXLAPCOUNT_OFFSET))(this);
		}

		::System::Int32 get_CurrentLapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_CURRENTLAPCOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentLapCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_CURRENTLAPCOUNT_OFFSET))(this, a1);
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

		::System::Void set_CurrentElapsedMs(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_CURRENTELAPSEDMS_OFFSET))(this, a1);
		}

		::System::UInt32 get_BestRecordMs()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_BESTRECORDMS_OFFSET))(this);
		}

		::Class_1_3CB66EAA8C4DE7F9* get_Result()
		{
			return ((::Class_1_3CB66EAA8C4DE7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_RESULT_OFFSET))(this);
		}

		::System::Void set_Result(::Class_1_3CB66EAA8C4DE7F9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3CB66EAA8C4DE7F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SET_RESULT_OFFSET))(this, a1);
		}

		::Class_1_4CFEF021C34E7902* get_GameMessageRegistry()
		{
			return ((::Class_1_4CFEF021C34E7902*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GET_GAMEMESSAGEREGISTRY_OFFSET))(this);
		}

		static ::RPG::Client::ParkourGameFlowContext* Create(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::RPG::Client::ParkourGameFlowContext*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_CREATE_OFFSET))(a1);
		}

		::System::Void Init(::RPG::Client::ParkourLevel* a1, ::RPG::Client::ParkourBall* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourLevel*, ::RPG::Client::ParkourBall*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONDESTROYED_OFFSET))(this);
		}

		::System::Void RPG_Client_IGameFlowEventReceiver_ReceiveEvent(::Class_0_16E4307DCC419505_651* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_651*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_RPG_CLIENT_IGAMEFLOWEVENTRECEIVER_RECEIVEEVENT_OFFSET))(this, a1);
		}

		::System::Void RPG_Client_IGameFlowMessageReceiver_ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_RPG_CLIENT_IGAMEFLOWMESSAGERECEIVER_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void ResetGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_RESETGAME_OFFSET))(this);
		}

		::System::Void UpdateSkill(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATESKILL_OFFSET))(this, a1);
		}

		::System::Void RegisterMonoTalkEvent(::System::UInt32 a1, ::RPG::Client::ParkourGame::MonoParkourTalkEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ParkourGame::MonoParkourTalkEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_REGISTERMONOTALKEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterMonoTalkEvent(::System::UInt32 a1, ::RPG::Client::ParkourGame::MonoParkourTalkEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ParkourGame::MonoParkourTalkEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UNREGISTERMONOTALKEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterMonoFullScreenBuff(::RPG::Client::ParkourGame::MonoParkourFullScreenBuff* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourFullScreenBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_REGISTERMONOFULLSCREENBUFF_OFFSET))(this, a1);
		}

		::System::Void UnRegisterMonoFullScreenBuff(::RPG::Client::ParkourGame::MonoParkourFullScreenBuff* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourFullScreenBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UNREGISTERMONOFULLSCREENBUFF_OFFSET))(this, a1);
		}

		::System::Boolean IsPausedGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ISPAUSEDGAME_OFFSET))(this);
		}

		::System::Void EnterGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ENTERGAME_OFFSET))(this);
		}

		::System::Void SettleGame(::Class_1_3CB66EAA8C4DE7F9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3CB66EAA8C4DE7F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_SETTLEGAME_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourGameCharacterInfo* CreateAndAddCharacterInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::ParkourGameCharacterInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_CREATEANDADDCHARACTERINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourGameCharacterInfo* GetCharacterInfoByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ParkourGameCharacterInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GETCHARACTERINFOBYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourGameCharacterInfo* GetCharacterInfoByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ParkourGameCharacterInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_GETCHARACTERINFOBYID_OFFSET))(this, a1);
		}

		::System::Void UpdateLapCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATELAPCOUNT_OFFSET))(this, a1);
		}

		::System::Void TriggerTalkEvent(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_TRIGGERTALKEVENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATEUI_OFFSET))(this);
		}

		::System::Void UpdateLockTarget(::System::Boolean a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATELOCKTARGET_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateElapsedMs(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATEELAPSEDMS_OFFSET))(this, a1);
		}

		::System::Void UpdateCrossroadInfo(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::Client::ParkourCrossroadType a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::ParkourCrossroadType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_UPDATECROSSROADINFO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnPlayerUseSuperStarSkill(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ONPLAYERUSESUPERSTARSKILL_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsFinishedAllLevels()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT_ISFINISHEDALLLEVELS_OFFSET))(this);
		}

		::System::Void _OnLevelStarted(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONLEVELSTARTED_OFFSET))(this, a1);
		}

		::System::Void _OnLevelEnded(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONLEVELENDED_OFFSET))(this, a1);
		}

		::System::Void _PlayBGM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__PLAYBGM_OFFSET))(this, a1);
		}

		::System::Void _StopBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__STOPBGM_OFFSET))(this);
		}

		::System::Void _HandleAdventurePhaseEnteredEvent(::Class_1_97E659ED8D5D259C_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__HANDLEADVENTUREPHASEENTEREDEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnCloseGame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__ONCLOSEGAME_OFFSET))(this, a1);
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

		::System::Boolean _CheckIsValid(::Class_1_3CB66EAA8C4DE7F9* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_3CB66EAA8C4DE7F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOWCONTEXT__CHECKISVALID_OFFSET))(this, a1);
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
