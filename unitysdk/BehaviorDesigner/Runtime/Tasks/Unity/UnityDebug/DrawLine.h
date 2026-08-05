#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedColor; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWLINE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1E8CB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWLINE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1E88E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1E8D70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWLINE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1E8E30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWLINE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1E8EC0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityDebug
{
	inline static constexpr unsigned int DrawLine_TypeDefinitionIndex = 34362;

	class DrawLine : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* start; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* depthTest; // 0x60
		::BehaviorDesigner::Runtime::SharedColor* color; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* duration; // 0x70
		::BehaviorDesigner::Runtime::SharedVector3* end; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWLINE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWLINE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWLINE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWLINE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWLINE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
