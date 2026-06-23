#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_0_16E4307DCC419505_396;
class Class_1_90C59FC7BAC7799C;
class Class_1_E09D58C9AD3DF860_1;
class Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ADDTIMERTASK_OFFSET UNITYSDK_OFFSET(0x12B91620)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ENTERSCENEPERFORM_OFFSET UNITYSDK_OFFSET(0x12B90350)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_DUNGEONTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x12B90FA0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_DUNGEONTIMER_OFFSET UNITYSDK_OFFSET(0x12B90F40)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0x12B90570)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_REMAININGTIME_OFFSET UNITYSDK_OFFSET(0x12B91000)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_INITTIMER_OFFSET UNITYSDK_OFFSET(0x12B905F0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ISTIMERRUNNABLE_OFFSET UNITYSDK_OFFSET(0x12B910D0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12B90580)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B907E0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_REGISTERDUNGEONTICKABLE_OFFSET UNITYSDK_OFFSET(0x12B90E20)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_STOPTIMER_OFFSET UNITYSDK_OFFSET(0x12B915E0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UNREGISTERDUNGEONTICKABLE_OFFSET UNITYSDK_OFFSET(0x12B90EB0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATEDUNGEONTICKABLES_OFFSET UNITYSDK_OFFSET(0x12B90B00)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATETIMERACTIONS_OFFSET UNITYSDK_OFFSET(0x12B91400)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATETIMER_OFFSET UNITYSDK_OFFSET(0x12B90830)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12B91830)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12B919C0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B91A50)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonSubsystem_TypeDefinitionIndex = 70675;

	class BigSceneDungeonSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneDungeonSubsystem*>
	{
	public:
		// static const ::System::Single ReportTimerInterval; // 0x0
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_396*>* _dungeonTickablesToAdd; // 0x10
		::Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB* _performRuntime; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_396*>* _dungeonTickables; // 0x20
		::System::Collections::Generic::List_1<::Class_1_E09D58C9AD3DF860_1*>* _timerActionList; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_396*>* _dungeonTickablesToRemove; // 0x30
		::Class_1_90C59FC7BAC7799C* DungeonTimerData; // 0x38
		::System::Single _reportTimer; // 0x40
		::System::Single _lastRealTime; // 0x44
		::System::Boolean showXKovTimerUI; // 0x48
		::System::Boolean _isTimerStopped; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void EnterScenePerform(::System::String* shotTypeStr, ::System::Action* FinishAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ENTERSCENEPERFORM_OFFSET))(this, shotTypeStr, FinishAction);
		}

		::System::Boolean get_EnableUpdateWhenGamePause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void RegisterDungeonTickable(::Class_0_16E4307DCC419505_396* tickable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_396*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_REGISTERDUNGEONTICKABLE_OFFSET))(this, tickable);
		}

		::System::Void UnregisterDungeonTickable(::Class_0_16E4307DCC419505_396* tickable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_396*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UNREGISTERDUNGEONTICKABLE_OFFSET))(this, tickable);
		}

		::System::Void UpdateDungeonTickables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATEDUNGEONTICKABLES_OFFSET))(this);
		}

		::System::Single get_DungeonTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_DUNGEONTIMER_OFFSET))(this);
		}

		::System::Single get_DungeonTimeLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_DUNGEONTIMELIMIT_OFFSET))(this);
		}

		::System::Single get_RemainingTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_REMAININGTIME_OFFSET))(this);
		}

		::System::Void InitTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_INITTIMER_OFFSET))(this);
		}

		::System::Boolean IsTimerRunnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ISTIMERRUNNABLE_OFFSET))(this);
		}

		::System::Void UpdateTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATETIMER_OFFSET))(this);
		}

		::System::Void StopTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_STOPTIMER_OFFSET))(this);
		}

		::System::Void UpdateTimerActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATETIMERACTIONS_OFFSET))(this);
		}

		::System::Void AddTimerTask(::System::Single second, ::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ADDTIMERTASK_OFFSET))(this, second, action);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
