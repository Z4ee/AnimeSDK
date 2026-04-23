#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameConfig.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7E0DCA9D208905FE;
class Class_1_CFF7FC5CD9C1D292;
class Class_1_F3391C70DC37088D;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenMiniGameManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HipplenGameAtmosphereConfig; }
namespace RPG::GameCore { class HipplenMiniGameLoadCharacter; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_CANRESTART_OFFSET UNITYSDK_OFFSET(0x9AF5A50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AF52C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_DOREPORT_OFFSET UNITYSDK_OFFSET(0x9AF5A00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_ENABLEAUTOMODESWITCH_OFFSET UNITYSDK_OFFSET(0x9AF5D80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_ENABLEAUTOMODE_OFFSET UNITYSDK_OFFSET(0x9AF5BC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_GET_ISAUTOMODE_OFFSET UNITYSDK_OFFSET(0x9AF70D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_GET_ROOTANCHORNAME_OFFSET UNITYSDK_OFFSET(0x9AF70F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_INIT_OFFSET UNITYSDK_OFFSET(0x9AF5120)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_LOADCHARACTER_OFFSET UNITYSDK_OFFSET(0x9AF5E20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x9AF6480)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_PAUSE_OFFSET UNITYSDK_OFFSET(0x9AF5900)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_RESTART_OFFSET UNITYSDK_OFFSET(0x9AF5980)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_RESUME_OFFSET UNITYSDK_OFFSET(0x9AF5940)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_SETTLEGAME_OFFSET UNITYSDK_OFFSET(0x9AF5A90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_SET_ISAUTOMODE_OFFSET UNITYSDK_OFFSET(0x9AF70E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_START_OFFSET UNITYSDK_OFFSET(0x9AF50D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_TICK_OFFSET UNITYSDK_OFFSET(0x9AF4CC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_TRYLOADATMOSPHERE_OFFSET UNITYSDK_OFFSET(0x9AF6160)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_TRYUNLOADATMOSPHERE_OFFSET UNITYSDK_OFFSET(0x9AF6430)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__CREATECHARACTER_OFFSET UNITYSDK_OFFSET(0x9AF5E80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__CREATENPC_OFFSET UNITYSDK_OFFSET(0x9AF69C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__CREATESTATICPREFAB_OFFSET UNITYSDK_OFFSET(0x9AF6C00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9AF4C80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__DESTORYALLENTITY_OFFSET UNITYSDK_OFFSET(0x9AF5620)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__DOSETAUTOMODE_OFFSET UNITYSDK_OFFSET(0x9AF5C80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__ENDCURRENTLG_OFFSET UNITYSDK_OFFSET(0x9AF5820)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__EXECUTETASKLIST_OFFSET UNITYSDK_OFFSET(0x9AF6880)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__FIREAUTOMODEEVENT_OFFSET UNITYSDK_OFFSET(0x9AF5CE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__GETGRADETYPE_OFFSET UNITYSDK_OFFSET(0x9AF6730)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__GETLOCALPLAYERNPCID_OFFSET UNITYSDK_OFFSET(0x9AF6E00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__LOADATMOSPHERE_OFFSET UNITYSDK_OFFSET(0x9AF61B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__ONAUTOMODECHANGED_OFFSET UNITYSDK_OFFSET(0x9AF6770)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x9AF66B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__ONINIT_OFFSET UNITYSDK_OFFSET(0x9AF6610)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__ONSETTLE_OFFSET UNITYSDK_OFFSET(0x9AF66F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__ONSTART_OFFSET UNITYSDK_OFFSET(0x9AF65D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__ONTICK_OFFSET UNITYSDK_OFFSET(0x9AF6650)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__SENDSETTLEPACKET_OFFSET UNITYSDK_OFFSET(0x9AF4E00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__SETATMOSPHERECONFIG_OFFSET UNITYSDK_OFFSET(0x9AF6570)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__SETENTITYDITHER_OFFSET UNITYSDK_OFFSET(0x9AF6F70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__STARTLG_OFFSET UNITYSDK_OFFSET(0x9AF67B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__UNLOADATMOSPHERE_OFFSET UNITYSDK_OFFSET(0x9AF53C0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenMiniGameBase_TypeDefinitionIndex = 69639;

	class ActivityHipplenMiniGameBase : public ::System::Object
	{
	public:
		::System::String* _RootAnchorName_k__BackingField; // 0x10
		::System::Action* _OnTaskFinished; // 0x18
		::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig _Config; // 0x20
		::Class_1_7E0DCA9D208905FE* _BabyHipplenRef; // 0x30
		::Class_1_F3391C70DC37088D* _TaskExecuter; // 0x38
		::RPG::Client::ActivityHipplen::ActivityHipplenMiniGameManager* _Manager; // 0x40
		::RPG::GameCore::HipplenGameAtmosphereConfig* _AtmosphereConfig; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _EntityList; // 0x50
		::UnityEngine::Transform* _Root; // 0x58
		::System::Single _SendSettlePacketCountdown; // 0x60
		::System::Boolean _IsAutoMode_k__BackingField; // 0x64
		::System::Boolean _IsAtmosphereLoaded; // 0x65
		::System::Boolean _IsAutoModeSwitchEnabled; // 0x66
		::System::Boolean _IsLGStarted; // 0x67
		::RPG::GameCore::HipplenGameGradeType _SettleGradeType; // 0x68

		::System::Void _ctor(::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__CTOR_OFFSET))(this, config);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_START_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Transform* root, ::RPG::Client::ActivityHipplen::ActivityHipplenMiniGameManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::ActivityHipplen::ActivityHipplenMiniGameManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_INIT_OFFSET))(this, root, manager);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_DISPOSE_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_RESUME_OFFSET))(this);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_RESTART_OFFSET))(this);
		}

		::System::Void DoReport(::Class_1_CFF7FC5CD9C1D292* reporter, ::System::Boolean isFinished)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CFF7FC5CD9C1D292*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_DOREPORT_OFFSET))(this, reporter, isFinished);
		}

		::System::Boolean CanRestart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_CANRESTART_OFFSET))(this);
		}

		::System::Void SettleGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_SETTLEGAME_OFFSET))(this);
		}

		::System::Void EnableAutoMode(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_ENABLEAUTOMODE_OFFSET))(this, val);
		}

		::System::Void EnableAutoModeSwitch(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_ENABLEAUTOMODESWITCH_OFFSET))(this, val);
		}

		::System::Void LoadCharacter(::RPG::GameCore::HipplenMiniGameLoadCharacter* character)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenMiniGameLoadCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_LOADCHARACTER_OFFSET))(this, character);
		}

		::System::Void TryLoadAtmosphere()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_TRYLOADATMOSPHERE_OFFSET))(this);
		}

		::System::Void TryUnloadAtmosphere()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_TRYUNLOADATMOSPHERE_OFFSET))(this);
		}

		::System::Void OnUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_ONUISCREENSIZECHANGED_OFFSET))(this);
		}

		::System::Void _DoSetAutoMode(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__DOSETAUTOMODE_OFFSET))(this, val);
		}

		::System::Void _FireAutoModeEvent(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__FIREAUTOMODEEVENT_OFFSET))(this, val);
		}

		::System::Void _SetAtmosphereConfig(::RPG::GameCore::HipplenGameAtmosphereConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenGameAtmosphereConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__SETATMOSPHERECONFIG_OFFSET))(this, config);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__ONSTART_OFFSET))(this);
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__ONINIT_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__ONTICK_OFFSET))(this, deltaTime);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnSettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__ONSETTLE_OFFSET))(this);
		}

		::RPG::GameCore::HipplenGameGradeType _GetGradeType()
		{
			return ((::RPG::GameCore::HipplenGameGradeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__GETGRADETYPE_OFFSET))(this);
		}

		::System::Void _OnAutoModeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__ONAUTOMODECHANGED_OFFSET))(this);
		}

		::System::Void _StartLG(::System::String* lgPath, ::System::Action* onFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__STARTLG_OFFSET))(this, lgPath, onFinished);
		}

		::System::Void _EndCurrentLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__ENDCURRENTLG_OFFSET))(this);
		}

		::System::Void _LoadAtmosphere()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__LOADATMOSPHERE_OFFSET))(this);
		}

		::System::Void _UnloadAtmosphere()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__UNLOADATMOSPHERE_OFFSET))(this);
		}

		::System::Void _DestoryAllEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__DESTORYALLENTITY_OFFSET))(this);
		}

		::System::Void _ExecuteTaskList(::Il2CppArray<::RPG::GameCore::TaskConfig*>* taskList, ::System::Action* onFinished)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__EXECUTETASKLIST_OFFSET))(this, taskList, onFinished);
		}

		::RPG::GameCore::GameEntity* _CreateCharacter(::RPG::GameCore::HipplenMiniGameLoadCharacter* character, ::System::Boolean autoRelease)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::HipplenMiniGameLoadCharacter*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__CREATECHARACTER_OFFSET))(this, character, autoRelease);
		}

		::RPG::GameCore::GameEntity* _CreateNpc(::System::String* npcId, ::System::String* uniqueName, ::RPG::GameCore::EntityType entityType, ::System::Boolean autoRelease)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::GameCore::EntityType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__CREATENPC_OFFSET))(this, npcId, uniqueName, entityType, autoRelease);
		}

		::System::String* _GetLocalPlayerNPCID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__GETLOCALPLAYERNPCID_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* _CreateStaticPrefab(::System::String* preafabPath, ::System::String* uniqueName, ::System::Boolean autoRelease)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__CREATESTATICPREFAB_OFFSET))(this, preafabPath, uniqueName, autoRelease);
		}

		::System::Void _SetEntityDither(::RPG::GameCore::GameEntity* entity, ::System::Single targetAlpha, ::System::Single fadeTime, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__SETENTITYDITHER_OFFSET))(this, entity, targetAlpha, fadeTime, onFinish);
		}

		::System::Void _SendSettlePacket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE__SENDSETTLEPACKET_OFFSET))(this);
		}

		::System::Boolean get_IsAutoMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_GET_ISAUTOMODE_OFFSET))(this);
		}

		::System::Void set_IsAutoMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_SET_ISAUTOMODE_OFFSET))(this, value);
		}

		::System::String* get_RootAnchorName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEBASE_GET_ROOTANCHORNAME_OFFSET))(this);
		}
	};
}
