#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace System { class Object; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_LOGFORMAT_BUILDPARAMSARRAY_OFFSET UNITYSDK_OFFSET(0x1C0ABAF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_LOGFORMAT_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C0AC4B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_LOGFORMAT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C0AC550)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_LOGFORMAT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0AB8E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_LOGFORMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0AC5D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_LOGFORMAT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C0AC660)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_LOGFORMAT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0AC6F0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityDebug
{
	inline static constexpr unsigned int LogFormat_TypeDefinitionIndex = 32177;

	class LogFormat : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVariable* arg0; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* logError; // 0x60
		::BehaviorDesigner::Runtime::SharedString* textFormat; // 0x68
		::BehaviorDesigner::Runtime::SharedVariable* arg3; // 0x70
		::BehaviorDesigner::Runtime::SharedVariable* arg1; // 0x78
		::BehaviorDesigner::Runtime::SharedVariable* arg2; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_LOGFORMAT__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_LOGFORMAT_ONUPDATE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* buildParamsArray()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_LOGFORMAT_BUILDPARAMSARRAY_OFFSET))(this);
		}

		::System::Boolean isValid(::BehaviorDesigner::Runtime::SharedVariable* sv)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::SharedVariable*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_LOGFORMAT_ISVALID_OFFSET))(this, sv);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_LOGFORMAT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_LOGFORMAT___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_LOGFORMAT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
