#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/AvgResetInterval.h"

namespace Entitas { class ISystem; }
namespace Entitas::VisualDebugging::Unity { class SystemInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class GameObject; }

#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_ADD_OFFSET UNITYSDK_OFFSET(0x147066E0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x14707420)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x14707020)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_CLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x147061A0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_CLEANUPSYSTEMINFOS_OFFSET UNITYSDK_OFFSET(0x14706250)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_CLEANUPSYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x14706120)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_EXECUTEDURATION_OFFSET UNITYSDK_OFFSET(0x14706190)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_EXECUTESYSTEMINFOS_OFFSET UNITYSDK_OFFSET(0x14706200)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_EXECUTESYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x14706100)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x14706170)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_INITIALIZESYSTEMINFOS_OFFSET UNITYSDK_OFFSET(0x147061B0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_INITIALIZESYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x147060E0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x14706160)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_SYSTEMINFO_OFFSET UNITYSDK_OFFSET(0x14706180)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TEARDOWNSYSTEMINFOS_OFFSET UNITYSDK_OFFSET(0x147062A0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TEARDOWNSYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x14706140)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALCLEANUPSYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x14705C60)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALEXECUTESYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x14705AE0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALINITIALIZESYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x14705960)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALSYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x14705F60)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALTEARDOWNSYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x14705DE0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x14706D00)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x147063A0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_RESETDURATIONS_OFFSET UNITYSDK_OFFSET(0x14706AD0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_STEPCLEANUP_OFFSET UNITYSDK_OFFSET(0x14707430)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_STEPEXECUTE_OFFSET UNITYSDK_OFFSET(0x14707030)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x14707860)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS__CCTOR_OFFSET UNITYSDK_OFFSET(0x14707BA0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14706510)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS__CTOR_OFFSET UNITYSDK_OFFSET(0x147062F0)

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int DebugSystems_TypeDefinitionIndex = 9709;

	class DebugSystems : public ::Entitas::Systems
	{
	public:
		static ::Entitas::VisualDebugging::Unity::AvgResetInterval* StaticGet_avgResetInterval()
		{
			return (::Entitas::VisualDebugging::Unity::AvgResetInterval*)Il2CppClass::FromTypeDefinitionIndex(DebugSystems_TypeDefinitionIndex)->GetStaticField(0xA420);
		}
		::System::Collections::Generic::List_1<::Entitas::VisualDebugging::Unity::SystemInfo*>* _cleanupSystemInfos; // 0x30
		::System::Collections::Generic::List_1<::Entitas::VisualDebugging::Unity::SystemInfo*>* _executeSystemInfos; // 0x38
		::System::Diagnostics::Stopwatch* _stopwatch; // 0x40
		::System::Collections::Generic::List_1<::Entitas::VisualDebugging::Unity::SystemInfo*>* _initializeSystemInfos; // 0x48
		::System::Collections::Generic::List_1<::Entitas::VisualDebugging::Unity::SystemInfo*>* _tearDownSystemInfos; // 0x50
		::Entitas::VisualDebugging::Unity::SystemInfo* _systemInfo; // 0x58
		::System::Collections::Generic::List_1<::Entitas::ISystem*>* _systems; // 0x60
		::System::String* _name; // 0x68
		::UnityEngine::GameObject* _gameObject; // 0x70
		::System::Boolean paused; // 0x78
		::System::Double _cleanupDuration; // 0x80
		::System::Double _executeDuration; // 0x88

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS__CCTOR_OFFSET))();
		}

		::System::Int32 get_totalInitializeSystemsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALINITIALIZESYSTEMSCOUNT_OFFSET))(this);
		}

		::System::Int32 get_totalExecuteSystemsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALEXECUTESYSTEMSCOUNT_OFFSET))(this);
		}

		::System::Int32 get_totalCleanupSystemsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALCLEANUPSYSTEMSCOUNT_OFFSET))(this);
		}

		::System::Int32 get_totalTearDownSystemsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALTEARDOWNSYSTEMSCOUNT_OFFSET))(this);
		}

		::System::Int32 get_totalSystemsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALSYSTEMSCOUNT_OFFSET))(this);
		}

		::System::Int32 get_initializeSystemsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_INITIALIZESYSTEMSCOUNT_OFFSET))(this);
		}

		::System::Int32 get_executeSystemsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_EXECUTESYSTEMSCOUNT_OFFSET))(this);
		}

		::System::Int32 get_cleanupSystemsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_CLEANUPSYSTEMSCOUNT_OFFSET))(this);
		}

		::System::Int32 get_tearDownSystemsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TEARDOWNSYSTEMSCOUNT_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_NAME_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_GAMEOBJECT_OFFSET))(this);
		}

		::Entitas::VisualDebugging::Unity::SystemInfo* get_systemInfo()
		{
			return ((::Entitas::VisualDebugging::Unity::SystemInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_SYSTEMINFO_OFFSET))(this);
		}

		::System::Double get_executeDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_EXECUTEDURATION_OFFSET))(this);
		}

		::System::Double get_cleanupDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_CLEANUPDURATION_OFFSET))(this);
		}

		::Il2CppArray<::Entitas::VisualDebugging::Unity::SystemInfo*>* get_initializeSystemInfos()
		{
			return ((::Il2CppArray<::Entitas::VisualDebugging::Unity::SystemInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_INITIALIZESYSTEMINFOS_OFFSET))(this);
		}

		::Il2CppArray<::Entitas::VisualDebugging::Unity::SystemInfo*>* get_executeSystemInfos()
		{
			return ((::Il2CppArray<::Entitas::VisualDebugging::Unity::SystemInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_EXECUTESYSTEMINFOS_OFFSET))(this);
		}

		::Il2CppArray<::Entitas::VisualDebugging::Unity::SystemInfo*>* get_cleanupSystemInfos()
		{
			return ((::Il2CppArray<::Entitas::VisualDebugging::Unity::SystemInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_CLEANUPSYSTEMINFOS_OFFSET))(this);
		}

		::Il2CppArray<::Entitas::VisualDebugging::Unity::SystemInfo*>* get_tearDownSystemInfos()
		{
			return ((::Il2CppArray<::Entitas::VisualDebugging::Unity::SystemInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TEARDOWNSYSTEMINFOS_OFFSET))(this);
		}

		::System::Void initialize(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_INITIALIZE_OFFSET))(this, a1);
		}

		::Entitas::Systems* Add(::Entitas::ISystem* a1)
		{
			return ((::Entitas::Systems*(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_ADD_OFFSET))(this, a1);
		}

		::System::Void ResetDurations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_RESETDURATIONS_OFFSET))(this);
		}

		::System::Void Initialize_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_INITIALIZE_1_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_EXECUTE_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_CLEANUP_OFFSET))(this);
		}

		::System::Void StepExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_STEPEXECUTE_OFFSET))(this);
		}

		::System::Void StepCleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_STEPCLEANUP_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_TEARDOWN_OFFSET))(this);
		}
	};
}
