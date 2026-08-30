#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E0103A0EA6CD0F4C.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/ChenLingFesGameState.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_460;
class Class_1_21DCD4640D389503_17;
class Class_1_43BD383C98B4C0C5_145;
class Class_1_4CD8A1ACD565F336;
class Class_1_9ADA4A255864E373;
class Class_1_D33B7D6901AE39E9;
class Class_2_5436AF4270279182;
class Class_2_E2910CE9CBBA0DE5;
class Class_3_97041AE90E3B2214;
class Class_3_BB758FA717918E9B;
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame::ChenLingFes { class ChenLingFesBoardView; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_CANCLEAR_OFFSET UNITYSDK_OFFSET(0xCB81120)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_FORCEDEACTIVEFEVER_OFFSET UNITYSDK_OFFSET(0xCB7E8C0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETFEVERADDVALUE_OFFSET UNITYSDK_OFFSET(0xCB7EBE0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETLEVELID_OFFSET UNITYSDK_OFFSET(0xCB819D0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETSTATETREEROOT_OFFSET UNITYSDK_OFFSET(0xCB7ECC0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETVIEWROOT_OFFSET UNITYSDK_OFFSET(0xCB7EEF0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_FEVERADDVALUE_OFFSET UNITYSDK_OFFSET(0xCB7ECA0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_FEVERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xCB7EC80)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_GAMELOOPINSTANCE_OFFSET UNITYSDK_OFFSET(0xCB7E810)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0xCB82360)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_GAMESTATE_OFFSET UNITYSDK_OFFSET(0xCB82340)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xCB81920)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_MARKUIREADYANDDISPATCHCACHEDNOTIFY_OFFSET UNITYSDK_OFFSET(0xCB82220)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_NOTIFYORCACHEUIENTITY_OFFSET UNITYSDK_OFFSET(0xCB820E0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONADDSCORE_OFFSET UNITYSDK_OFFSET(0xCB7D890)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONFEVERACTIVE_OFFSET UNITYSDK_OFFSET(0xCB7E830)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMEDAYEND_OFFSET UNITYSDK_OFFSET(0xCB7DEF0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMEDAYSTART_OFFSET UNITYSDK_OFFSET(0xCB7DA00)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMELEVELEND_OFFSET UNITYSDK_OFFSET(0xCB7E6B0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMEWEEKEND_OFFSET UNITYSDK_OFFSET(0xCB7E390)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONLEVELABILITYACTIVE_OFFSET UNITYSDK_OFFSET(0xCB7EA90)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONLEVELABILITYDEACTIVE_OFFSET UNITYSDK_OFFSET(0xCB7EB30)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONSTARTGAME_OFFSET UNITYSDK_OFFSET(0xCB81C20)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xCB81930)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_RESETFEVER_OFFSET UNITYSDK_OFFSET(0xCB7E080)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_RESUMEGAME_OFFSET UNITYSDK_OFFSET(0xCB81260)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SETFEVERADDVALUE_OFFSET UNITYSDK_OFFSET(0xCB7E9A0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SETFEVERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xCB7E950)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SETWAITRESTART_OFFSET UNITYSDK_OFFSET(0xCB7EF60)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_FEVERADDVALUE_OFFSET UNITYSDK_OFFSET(0xCB7ECB0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_FEVERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xCB7EC90)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_GAMELOOPINSTANCE_OFFSET UNITYSDK_OFFSET(0xCB7E820)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0xCB82370)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_GAMESTATE_OFFSET UNITYSDK_OFFSET(0xCB82350)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SHOWMAZEUI_OFFSET UNITYSDK_OFFSET(0xCB81E60)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SWITCHTOBUILDCAMERA_OFFSET UNITYSDK_OFFSET(0xCB7E2C0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SWITCHTOGAMECAMERA_OFFSET UNITYSDK_OFFSET(0xCB7DCE0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_TRYTRIGGERFEVER_OFFSET UNITYSDK_OFFSET(0xCB7DDB0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ADDNOTIFY_OFFSET UNITYSDK_OFFSET(0xCB7FCA0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB82440)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__CREATEGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xCB7F140)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xCB82380)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__DESTROYGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xCB81A20)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xCB81180)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONFINISHGAME_OFFSET UNITYSDK_OFFSET(0xCB81310)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONGROUPEVENT_OFFSET UNITYSDK_OFFSET(0xCB81E10)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONINIT_OFFSET UNITYSDK_OFFSET(0xCB7EFB0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONSTART_OFFSET UNITYSDK_OFFSET(0xCB7FCE0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONTICK_OFFSET UNITYSDK_OFFSET(0xCB81680)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__REMOVENOTIFY_OFFSET UNITYSDK_OFFSET(0xCB81BE0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__SETPLAYERENTITYVISIBLE_OFFSET UNITYSDK_OFFSET(0xCB80F80)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__TRIGGERGROUPEVENT_OFFSET UNITYSDK_OFFSET(0xCB81D70)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingFesGameInstance_TypeDefinitionIndex = 60424;

	class ChenLingFesGameInstance : public ::Class_1_E0103A0EA6CD0F4C
	{
	public:
		static ::System::String** StaticGet_EventName_OnGameFinish()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameInstance_TypeDefinitionIndex)->GetStaticField(0x39F80);
		}
		::Class_3_97041AE90E3B2214* _Services; // 0x78
		::System::String* _GameLevelTransNo; // 0x80
		::Class_1_9ADA4A255864E373* _GameLoopInstance_k__BackingField; // 0x88
		::Class_3_BB758FA717918E9B* _UpdateSystems; // 0x90
		::System::String* _GameDailyTransNo; // 0x98
		::RPG::GameCore::EventManager* _EventManagerRef; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* _FeverAddValue_k__BackingField; // 0xA8
		::RPG::Client::LittleGame::ChenLingFes::ChenLingFesBoardView* _BoardView; // 0xB0
		::Class_1_43BD383C98B4C0C5_145* _GameSession_k__BackingField; // 0xB8
		::Class_1_21DCD4640D389503_17* _GamePlayData; // 0xC0
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::Client::NotifyType, ::System::Object*>>* _CachedUIEntityNotifyList; // 0xC8
		::Class_1_D33B7D6901AE39E9* _Contexts; // 0xD0
		::RPG::GameCore::GameEntity* _OwnerGroupEntity; // 0xD8
		::System::Int32 _GameLevelID; // 0xE0
		::RPG::Client::LittleGame::ChenLingFes::ChenLingFesGameState _GameState_k__BackingField; // 0xE4
		::System::UInt32 _DailySeed; // 0xE8
		::System::UInt32 _FeverThreshold_k__BackingField; // 0xEC
		::System::Boolean _IsGamePaused; // 0xF0
		::System::Boolean _CacheUIEntityNotifyBeforeUIReady; // 0xF1
		::System::Boolean _WaitRestart; // 0xF2
		::System::Int32 _feverActiveCount; // 0xF4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__CCTOR_OFFSET))();
		}

		::System::Void OnAddScore(::System::UInt32 a1, ::Class_2_5436AF4270279182* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONADDSCORE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGameDayStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMEDAYSTART_OFFSET))(this);
		}

		::System::Void OnGameDayEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMEDAYEND_OFFSET))(this);
		}

		::System::Void OnGameWeekEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMEWEEKEND_OFFSET))(this);
		}

		::System::Void OnGameLevelEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMELEVELEND_OFFSET))(this);
		}

		::Class_1_9ADA4A255864E373* get_GameLoopInstance()
		{
			return ((::Class_1_9ADA4A255864E373*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_GAMELOOPINSTANCE_OFFSET))(this);
		}

		::System::Void set_GameLoopInstance(::Class_1_9ADA4A255864E373* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9ADA4A255864E373*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_GAMELOOPINSTANCE_OFFSET))(this, a1);
		}

		::System::Void OnFeverActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONFEVERACTIVE_OFFSET))(this);
		}

		::System::Void ForceDeactiveFever()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_FORCEDEACTIVEFEVER_OFFSET))(this);
		}

		::System::Void SetFeverThreshold(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SETFEVERTHRESHOLD_OFFSET))(this, a1);
		}

		::System::Void SetFeverAddValue(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SETFEVERADDVALUE_OFFSET))(this, a1);
		}

		::System::Void ResetFever()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_RESETFEVER_OFFSET))(this);
		}

		::System::Void TryTriggerFever()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_TRYTRIGGERFEVER_OFFSET))(this);
		}

		::System::Void OnLevelAbilityActive(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONLEVELABILITYACTIVE_OFFSET))(this, a1);
		}

		::System::Void OnLevelAbilityDeActive(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONLEVELABILITYDEACTIVE_OFFSET))(this, a1);
		}

		::System::UInt32 GetFeverAddValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETFEVERADDVALUE_OFFSET))(this);
		}

		::System::UInt32 get_FeverThreshold()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_FEVERTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_FeverThreshold(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_FEVERTHRESHOLD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FeverAddValue()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_FEVERADDVALUE_OFFSET))(this);
		}

		::System::Void set_FeverAddValue(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_FEVERADDVALUE_OFFSET))(this, a1);
		}

		::Class_2_E2910CE9CBBA0DE5* GetStateTreeRoot(::System::Int32 a1)
		{
			return ((::Class_2_E2910CE9CBBA0DE5*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETSTATETREEROOT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetViewRoot(::Entitas::IEntity* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETVIEWROOT_OFFSET))(this, a1);
		}

		::System::Void SetWaitRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SETWAITRESTART_OFFSET))(this);
		}

		::System::Void _OnInit(::Class_1_4CD8A1ACD565F336* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONSTART_OFFSET))(this);
		}

		::System::Boolean CanClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_CANCLEAR_OFFSET))(this);
		}

		::System::Void _OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONCLEAR_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONTICK_OFFSET))(this, a1);
		}

		::Class_3_97041AE90E3B2214* get_Services()
		{
			return ((::Class_3_97041AE90E3B2214*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_SERVICES_OFFSET))(this);
		}

		::System::Void PauseGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_PAUSEGAME_OFFSET))(this);
		}

		::System::Void ResumeGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_RESUMEGAME_OFFSET))(this);
		}

		::System::Void SwitchToBuildCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SWITCHTOBUILDCAMERA_OFFSET))(this);
		}

		::System::Void SwitchToGameCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SWITCHTOGAMECAMERA_OFFSET))(this);
		}

		::System::Int32 GetLevelID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETLEVELID_OFFSET))(this);
		}

		::System::Void _CreateGameContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__CREATEGAMECONTEXT_OFFSET))(this);
		}

		::System::Void _DestroyGameContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__DESTROYGAMECONTEXT_OFFSET))(this);
		}

		::System::Void _AddNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ADDNOTIFY_OFFSET))(this);
		}

		::System::Void _RemoveNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__REMOVENOTIFY_OFFSET))(this);
		}

		::System::Void OnStartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONSTARTGAME_OFFSET))(this);
		}

		::System::Void _OnFinishGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONFINISHGAME_OFFSET))(this);
		}

		::System::Void _TriggerGroupEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__TRIGGERGROUPEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnGroupEvent(::Class_0_16E4307DCC419505_460* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONGROUPEVENT_OFFSET))(this, a1);
		}

		::System::Void ShowMazeUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SHOWMAZEUI_OFFSET))(this, a1);
		}

		::System::Void _SetPlayerEntityVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__SETPLAYERENTITYVISIBLE_OFFSET))(this, a1);
		}

		::System::Void NotifyOrCacheUIEntity(::RPG::Client::NotifyType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_NOTIFYORCACHEUIENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void MarkUIReadyAndDispatchCachedNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_MARKUIREADYANDDISPATCHCACHEDNOTIFY_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ChenLingFes::ChenLingFesGameState get_GameState()
		{
			return ((::RPG::Client::LittleGame::ChenLingFes::ChenLingFesGameState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_GAMESTATE_OFFSET))(this);
		}

		::System::Void set_GameState(::RPG::Client::LittleGame::ChenLingFes::ChenLingFesGameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesGameState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_GAMESTATE_OFFSET))(this, a1);
		}

		::Class_1_43BD383C98B4C0C5_145* get_GameSession()
		{
			return ((::Class_1_43BD383C98B4C0C5_145*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_GAMESESSION_OFFSET))(this);
		}

		::System::Void set_GameSession(::Class_1_43BD383C98B4C0C5_145* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_145*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_GAMESESSION_OFFSET))(this, a1);
		}
	};
}
