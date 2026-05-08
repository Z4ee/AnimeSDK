#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/UpdateIntervalType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace BehaviorDesigner::Runtime { class VariableSynchronizer_SynchronizedVariable; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class WaitForSeconds; }

#define BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BEC0C50)
#define BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_COROUTINEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BEC28C0)
#define BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_CREATEGETDELEGATE_OFFSET UNITYSDK_OFFSET(0x1BEC1CB0)
#define BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_CREATESETDELEGATE_OFFSET UNITYSDK_OFFSET(0x1BEC1E70)
#define BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_GET_SYNCHRONIZEDVARIABLES_OFFSET UNITYSDK_OFFSET(0x1BEC0BE0)
#define BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_GET_UPDATEINTERVALSECONDS_OFFSET UNITYSDK_OFFSET(0x1BEC0B70)
#define BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_GET_UPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1BEC0A20)
#define BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_SET_SYNCHRONIZEDVARIABLES_OFFSET UNITYSDK_OFFSET(0x1BEC0BF0)
#define BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_SET_UPDATEINTERVALSECONDS_OFFSET UNITYSDK_OFFSET(0x1BEC0B80)
#define BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_SET_UPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1BEC0A30)
#define BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_TICK_OFFSET UNITYSDK_OFFSET(0x1BEC22D0)
#define BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_UPDATEINTERVALCHANGED_OFFSET UNITYSDK_OFFSET(0x1BEC0A80)
#define BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BEC2280)
#define BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC2940)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int VariableSynchronizer_TypeDefinitionIndex = 31718;

	class VariableSynchronizer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BehaviorDesigner::Runtime::UpdateIntervalType updateInterval; // 0x18
		::System::Single updateIntervalSeconds; // 0x1C
		::UnityEngine::WaitForSeconds* updateWait; // 0x20
		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::VariableSynchronizer_SynchronizedVariable*>* synchronizedVariables; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::UpdateIntervalType get_UpdateInterval()
		{
			return ((::BehaviorDesigner::Runtime::UpdateIntervalType(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_GET_UPDATEINTERVAL_OFFSET))(this);
		}

		::System::Void set_UpdateInterval(::BehaviorDesigner::Runtime::UpdateIntervalType value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::UpdateIntervalType))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_SET_UPDATEINTERVAL_OFFSET))(this, value);
		}

		::System::Single get_UpdateIntervalSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_GET_UPDATEINTERVALSECONDS_OFFSET))(this);
		}

		::System::Void set_UpdateIntervalSeconds(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_SET_UPDATEINTERVALSECONDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::VariableSynchronizer_SynchronizedVariable*>* get_SynchronizedVariables()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::VariableSynchronizer_SynchronizedVariable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_GET_SYNCHRONIZEDVARIABLES_OFFSET))(this);
		}

		::System::Void set_SynchronizedVariables(::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::VariableSynchronizer_SynchronizedVariable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::VariableSynchronizer_SynchronizedVariable*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_SET_SYNCHRONIZEDVARIABLES_OFFSET))(this, value);
		}

		::System::Void UpdateIntervalChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_UPDATEINTERVALCHANGED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_UPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CoroutineUpdate()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_COROUTINEUPDATE_OFFSET))(this);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_TICK_OFFSET))(this);
		}

		static ::System::Func_1<::System::Object*>* CreateGetDelegate(::System::Object* instance, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Func_1<::System::Object*>*(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_CREATEGETDELEGATE_OFFSET))(instance, method);
		}

		static ::System::Action_1<::System::Object*>* CreateSetDelegate(::System::Object* instance, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Action_1<::System::Object*>*(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_CREATESETDELEGATE_OFFSET))(instance, method);
		}
	};
}
