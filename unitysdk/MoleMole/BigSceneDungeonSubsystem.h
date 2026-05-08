#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_0_16E4307DCC419505_178;
class Class_1_90C59FC7BAC7799C;
class Class_1_E09D58C9AD3DF860;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ADDTIMERTASK_OFFSET UNITYSDK_OFFSET(0xFE94690)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_DUNGEONTIMELIMIT_OFFSET UNITYSDK_OFFSET(0xFE94010)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_DUNGEONTIMER_OFFSET UNITYSDK_OFFSET(0xFE93FB0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0xFE935E0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_GET_REMAININGTIME_OFFSET UNITYSDK_OFFSET(0xFE94070)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_INITTIMER_OFFSET UNITYSDK_OFFSET(0xFE93660)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ISTIMERRUNNABLE_OFFSET UNITYSDK_OFFSET(0xFE94140)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xFE935F0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFE93850)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_REGISTERDUNGEONTICKABLE_OFFSET UNITYSDK_OFFSET(0xFE93E90)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_STOPTIMER_OFFSET UNITYSDK_OFFSET(0xFE94650)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UNREGISTERDUNGEONTICKABLE_OFFSET UNITYSDK_OFFSET(0xFE93F20)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATEDUNGEONTICKABLES_OFFSET UNITYSDK_OFFSET(0xFE93B70)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATETIMERACTIONS_OFFSET UNITYSDK_OFFSET(0xFE94470)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UPDATETIMER_OFFSET UNITYSDK_OFFSET(0xFE938A0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xFE948A0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xFE94A30)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFE94AC0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonSubsystem_TypeDefinitionIndex = 39266;

	class BigSceneDungeonSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneDungeonSubsystem*>
	{
	public:
		// static const ::System::Single ReportTimerInterval; // 0x0
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_178*>* _dungeonTickables; // 0x10
		::Class_1_90C59FC7BAC7799C* DungeonTimerData; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_178*>* _dungeonTickablesToAdd; // 0x20
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_178*>* _dungeonTickablesToRemove; // 0x28
		::System::Collections::Generic::List_1<::Class_1_E09D58C9AD3DF860*>* _timerActionList; // 0x30
		::System::Boolean showXKovTimerUI; // 0x38
		::System::Boolean _isTimerStopped; // 0x39
		::System::Single _reportTimer; // 0x3C
		::System::Single _lastRealTime; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM__CTOR_OFFSET))(this);
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

		::System::Void RegisterDungeonTickable(::Class_0_16E4307DCC419505_178* tickable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_178*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_REGISTERDUNGEONTICKABLE_OFFSET))(this, tickable);
		}

		::System::Void UnregisterDungeonTickable(::Class_0_16E4307DCC419505_178* tickable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_178*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM_UNREGISTERDUNGEONTICKABLE_OFFSET))(this, tickable);
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
