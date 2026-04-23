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

#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_ADD_OFFSET UNITYSDK_OFFSET(0x12C59080)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x12C59BB0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12C597F0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_CLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x12C589C0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_CLEANUPSYSTEMINFOS_OFFSET UNITYSDK_OFFSET(0x12C58B30)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_CLEANUPSYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x12C58940)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_EXECUTEDURATION_OFFSET UNITYSDK_OFFSET(0x12C589B0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_EXECUTESYSTEMINFOS_OFFSET UNITYSDK_OFFSET(0x12C58A80)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_EXECUTESYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x12C58920)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x12C58990)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_INITIALIZESYSTEMINFOS_OFFSET UNITYSDK_OFFSET(0x12C589D0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_INITIALIZESYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x12C58900)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x12C58980)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_SYSTEMINFO_OFFSET UNITYSDK_OFFSET(0x12C589A0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TEARDOWNSYSTEMINFOS_OFFSET UNITYSDK_OFFSET(0x12C58BE0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TEARDOWNSYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x12C58960)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALCLEANUPSYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x12C584E0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALEXECUTESYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x12C58380)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALINITIALIZESYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x12C58220)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALSYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x12C587A0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALTEARDOWNSYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x12C58640)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x12C594E0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12C58D40)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_RESETDURATIONS_OFFSET UNITYSDK_OFFSET(0x12C59290)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_STEPCLEANUP_OFFSET UNITYSDK_OFFSET(0x12C59BC0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_STEPEXECUTE_OFFSET UNITYSDK_OFFSET(0x12C59800)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x12C5A000)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C5A330)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12C58EB0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS__CTOR_OFFSET UNITYSDK_OFFSET(0x12C58C90)

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int DebugSystems_TypeDefinitionIndex = 9882;

	class DebugSystems : public ::Entitas::Systems
	{
	public:
		static ::Entitas::VisualDebugging::Unity::AvgResetInterval* StaticGet_avgResetInterval()
		{
			return (::Entitas::VisualDebugging::Unity::AvgResetInterval*)Il2CppClass::FromTypeDefinitionIndex(DebugSystems_TypeDefinitionIndex)->GetStaticField(0x6E00);
		}
		::System::String* _name; // 0x30
		::UnityEngine::GameObject* _gameObject; // 0x38
		::Entitas::VisualDebugging::Unity::SystemInfo* _systemInfo; // 0x40
		::System::Collections::Generic::List_1<::Entitas::VisualDebugging::Unity::SystemInfo*>* _tearDownSystemInfos; // 0x48
		::System::Collections::Generic::List_1<::Entitas::VisualDebugging::Unity::SystemInfo*>* _cleanupSystemInfos; // 0x50
		::System::Collections::Generic::List_1<::Entitas::ISystem*>* _systems; // 0x58
		::System::Diagnostics::Stopwatch* _stopwatch; // 0x60
		::System::Collections::Generic::List_1<::Entitas::VisualDebugging::Unity::SystemInfo*>* _executeSystemInfos; // 0x68
		::System::Collections::Generic::List_1<::Entitas::VisualDebugging::Unity::SystemInfo*>* _initializeSystemInfos; // 0x70
		::System::Double _executeDuration; // 0x78
		::System::Double _cleanupDuration; // 0x80
		::System::Boolean paused; // 0x88

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::System::Boolean noInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS__CTOR_1_OFFSET))(this, noInit);
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

		::System::Void initialize(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_INITIALIZE_OFFSET))(this, name);
		}

		::Entitas::Systems* Add(::Entitas::ISystem* system)
		{
			return ((::Entitas::Systems*(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_ADD_OFFSET))(this, system);
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
