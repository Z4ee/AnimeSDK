#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Task.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Component; }

#define NODECANVAS_FRAMEWORK_CONDITIONTASK_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x1B32D0B0)
#define NODECANVAS_FRAMEWORK_CONDITIONTASK_CHECKONCE_OFFSET UNITYSDK_OFFSET(0x1B32D1B0)
#define NODECANVAS_FRAMEWORK_CONDITIONTASK_CHECK_OFFSET UNITYSDK_OFFSET(0x1B32D130)
#define NODECANVAS_FRAMEWORK_CONDITIONTASK_DISABLE_OFFSET UNITYSDK_OFFSET(0x1B32D080)
#define NODECANVAS_FRAMEWORK_CONDITIONTASK_ENABLE_OFFSET UNITYSDK_OFFSET(0x1B32D030)
#define NODECANVAS_FRAMEWORK_CONDITIONTASK_FLIP_OFFSET UNITYSDK_OFFSET(0x1B32D320)
#define NODECANVAS_FRAMEWORK_CONDITIONTASK_GET_INVERT_OFFSET UNITYSDK_OFFSET(0x1B32D010)
#define NODECANVAS_FRAMEWORK_CONDITIONTASK_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1B32D390)
#define NODECANVAS_FRAMEWORK_CONDITIONTASK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B32D380)
#define NODECANVAS_FRAMEWORK_CONDITIONTASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B32D370)
#define NODECANVAS_FRAMEWORK_CONDITIONTASK_SET_INVERT_OFFSET UNITYSDK_OFFSET(0x1B32D020)
#define NODECANVAS_FRAMEWORK_CONDITIONTASK_YIELDRETURN_OFFSET UNITYSDK_OFFSET(0x1B32D2B0)
#define NODECANVAS_FRAMEWORK_CONDITIONTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32D3A0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int ConditionTask_TypeDefinitionIndex = 26916;

	class ConditionTask : public ::NodeCanvas::Framework::Task
	{
	public:
		::System::Int32 yieldReturn; // 0x50
		::System::Boolean _invert; // 0x54
		::System::Boolean isRuntimeEnabled; // 0x55
		::System::Int32 yields; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONTASK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_invert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONTASK_GET_INVERT_OFFSET))(this);
		}

		::System::Void set_invert(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONTASK_SET_INVERT_OFFSET))(this, value);
		}

		::System::Void Enable(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONTASK_ENABLE_OFFSET))(this, agent, bb);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONTASK_DISABLE_OFFSET))(this);
		}

		::System::Boolean CheckCondition(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONTASK_CHECKCONDITION_OFFSET))(this, agent, blackboard);
		}

		::System::Boolean Check(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONTASK_CHECK_OFFSET))(this, agent, blackboard);
		}

		::System::Boolean CheckOnce(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONTASK_CHECKONCE_OFFSET))(this, agent, blackboard);
		}

		::System::Void YieldReturn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONTASK_YIELDRETURN_OFFSET))(this, value);
		}

		::System::Collections::IEnumerator* Flip()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONTASK_FLIP_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONTASK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONTASK_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONTASK_ONCHECK_OFFSET))(this);
		}
	};
}
