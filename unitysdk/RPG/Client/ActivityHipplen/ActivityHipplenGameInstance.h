#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_41F3892CC1F01DA0;
class Class_1_4A41A0A14BA8EE69_1;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectCalculator; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameCycleData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameStateManager; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenMainController; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenRoutineManager; }
namespace RPG::Client::ActivityHipplen { class IActivityHipplenGameState; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AEA7C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x9AEAD30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_EXITGAME_OFFSET UNITYSDK_OFFSET(0x9AEA950)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_FINISHGAMESTATE_OFFSET UNITYSDK_OFFSET(0x9AEB0C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_EFFECTCALCULATOR_OFFSET UNITYSDK_OFFSET(0x9AEB530)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_GAMECYCLEDATA_OFFSET UNITYSDK_OFFSET(0x9AEB550)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_GAMESTATEMGR_OFFSET UNITYSDK_OFFSET(0x9AEB4D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_MAINCTRL_OFFSET UNITYSDK_OFFSET(0x9AEB570)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_PERFORMANCEMGR_OFFSET UNITYSDK_OFFSET(0x9AEB510)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_ROUTINEMGR_OFFSET UNITYSDK_OFFSET(0x9AEB4F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_STARTNEWPHASE_OFFSET UNITYSDK_OFFSET(0x9AEB590)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0x9AEA460)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_ISINTRIAL_OFFSET UNITYSDK_OFFSET(0x9AEAFA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9AEAB10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_EFFECTCALCULATOR_OFFSET UNITYSDK_OFFSET(0x9AEB540)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_GAMECYCLEDATA_OFFSET UNITYSDK_OFFSET(0x9AEB560)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_GAMESTATEMGR_OFFSET UNITYSDK_OFFSET(0x9AEB4E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_MAINCTRL_OFFSET UNITYSDK_OFFSET(0x9AEB580)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_PERFORMANCEMGR_OFFSET UNITYSDK_OFFSET(0x9AEB520)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_ROUTINEMGR_OFFSET UNITYSDK_OFFSET(0x9AEB500)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_STARTNEWPHASE_OFFSET UNITYSDK_OFFSET(0x9AEB5A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SYNC_OFFSET UNITYSDK_OFFSET(0x9AEAA90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x9AEA450)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenGameInstance_TypeDefinitionIndex = 69531;

	class ActivityHipplenGameInstance : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator* _EffectCalculator_k__BackingField; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateManager* _GameStateMgr_k__BackingField; // 0x18
		::RPG::Client::ActivityHipplen::ActivityHipplenMainController* _MainCtrl_k__BackingField; // 0x20
		::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData* _GameCycleData_k__BackingField; // 0x28
		::Class_1_41F3892CC1F01DA0* _PerformanceMgr_k__BackingField; // 0x30
		::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager* _RoutineMgr_k__BackingField; // 0x38
		::System::Boolean _StartNewPhase_k__BackingField; // 0x40
		::System::Boolean _Inited; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_4A41A0A14BA8EE69_1* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4A41A0A14BA8EE69_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SYNC_OFFSET))(this, serverData);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void EnterGame(::System::Boolean startByTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_ENTERGAME_OFFSET))(this, startByTask);
		}

		::System::Void ExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_EXITGAME_OFFSET))(this);
		}

		::System::Boolean IsInTrial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_ISINTRIAL_OFFSET))(this);
		}

		::System::Void FinishGameState(::RPG::Client::ActivityHipplen::IActivityHipplenGameState* gameState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::IActivityHipplenGameState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_FINISHGAMESTATE_OFFSET))(this, gameState);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateManager* get_GameStateMgr()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_GAMESTATEMGR_OFFSET))(this);
		}

		::System::Void set_GameStateMgr(::RPG::Client::ActivityHipplen::ActivityHipplenGameStateManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameStateManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_GAMESTATEMGR_OFFSET))(this, value);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager* get_RoutineMgr()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_ROUTINEMGR_OFFSET))(this);
		}

		::System::Void set_RoutineMgr(::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_ROUTINEMGR_OFFSET))(this, value);
		}

		::Class_1_41F3892CC1F01DA0* get_PerformanceMgr()
		{
			return ((::Class_1_41F3892CC1F01DA0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_PERFORMANCEMGR_OFFSET))(this);
		}

		::System::Void set_PerformanceMgr(::Class_1_41F3892CC1F01DA0* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_41F3892CC1F01DA0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_PERFORMANCEMGR_OFFSET))(this, value);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator* get_EffectCalculator()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_EFFECTCALCULATOR_OFFSET))(this);
		}

		::System::Void set_EffectCalculator(::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_EFFECTCALCULATOR_OFFSET))(this, value);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData* get_GameCycleData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_GAMECYCLEDATA_OFFSET))(this);
		}

		::System::Void set_GameCycleData(::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_GAMECYCLEDATA_OFFSET))(this, value);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenMainController* get_MainCtrl()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenMainController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_MAINCTRL_OFFSET))(this);
		}

		::System::Void set_MainCtrl(::RPG::Client::ActivityHipplen::ActivityHipplenMainController* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenMainController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_MAINCTRL_OFFSET))(this, value);
		}

		::System::Boolean get_StartNewPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_GET_STARTNEWPHASE_OFFSET))(this);
		}

		::System::Void set_StartNewPhase(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMEINSTANCE_SET_STARTNEWPHASE_OFFSET))(this, value);
		}
	};
}
