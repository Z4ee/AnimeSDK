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

#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_ADD_OFFSET UNITYSDK_OFFSET(0x1EED1160)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1EED1F30)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EED1AE0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_CLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x1EED0B50)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_CLEANUPSYSTEMINFOS_OFFSET UNITYSDK_OFFSET(0x1EED0C00)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_CLEANUPSYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x1EED0AD0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_EXECUTEDURATION_OFFSET UNITYSDK_OFFSET(0x1EED0B40)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_EXECUTESYSTEMINFOS_OFFSET UNITYSDK_OFFSET(0x1EED0BB0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_EXECUTESYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x1EED0AB0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EED0B20)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_INITIALIZESYSTEMINFOS_OFFSET UNITYSDK_OFFSET(0x1EED0B60)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_INITIALIZESYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x1EED0A90)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EED0B10)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_SYSTEMINFO_OFFSET UNITYSDK_OFFSET(0x1EED0B30)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TEARDOWNSYSTEMINFOS_OFFSET UNITYSDK_OFFSET(0x1EED0C50)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TEARDOWNSYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x1EED0AF0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALCLEANUPSYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x1EED0610)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALEXECUTESYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x1EED0490)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALINITIALIZESYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x1EED0310)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALSYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x1EED0910)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_GET_TOTALTEARDOWNSYSTEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x1EED0790)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1EED1760)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EED0D50)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_RESETDURATIONS_OFFSET UNITYSDK_OFFSET(0x1EED1550)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_STEPCLEANUP_OFFSET UNITYSDK_OFFSET(0x1EED1F40)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_STEPEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EED1AF0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1EED23F0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EED2790)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EED0EC0)
#define ENTITAS_VISUALDEBUGGING_UNITY_DEBUGSYSTEMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EED0CA0)

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int DebugSystems_TypeDefinitionIndex = 10002;

	class DebugSystems : public ::Entitas::Systems
	{
	public:
		static ::Entitas::VisualDebugging::Unity::AvgResetInterval* StaticGet_avgResetInterval()
		{
			return (::Entitas::VisualDebugging::Unity::AvgResetInterval*)Il2CppClass::FromTypeDefinitionIndex(DebugSystems_TypeDefinitionIndex)->GetStaticField(0x11100);
		}
		::System::Collections::Generic::List_1<::Entitas::ISystem*>* _systems; // 0x30
		::Entitas::VisualDebugging::Unity::SystemInfo* _systemInfo; // 0x38
		::System::Collections::Generic::List_1<::Entitas::VisualDebugging::Unity::SystemInfo*>* _tearDownSystemInfos; // 0x40
		::System::Diagnostics::Stopwatch* _stopwatch; // 0x48
		::System::String* _name; // 0x50
		::System::Collections::Generic::List_1<::Entitas::VisualDebugging::Unity::SystemInfo*>* _cleanupSystemInfos; // 0x58
		::System::Collections::Generic::List_1<::Entitas::VisualDebugging::Unity::SystemInfo*>* _initializeSystemInfos; // 0x60
		::System::Collections::Generic::List_1<::Entitas::VisualDebugging::Unity::SystemInfo*>* _executeSystemInfos; // 0x68
		::UnityEngine::GameObject* _gameObject; // 0x70
		::System::Double _executeDuration; // 0x78
		::System::Boolean paused; // 0x80
		::System::Double _cleanupDuration; // 0x88

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
