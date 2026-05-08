#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class ITaskSystem; }
namespace NodeCanvas::Framework::Internal { class ReflectedWrapper; }
namespace System { class String; }
namespace System::Reflection { class MethodInfo; }

#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1B4A37C0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_GET_TARGETMETHOD_OFFSET UNITYSDK_OFFSET(0x1B4A37A0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_NODECANVAS_FRAMEWORK_ISUBPARAMETERSCONTAINER_GETSUBPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B4A3770)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B4A4340)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_ONINIT_OFFSET UNITYSDK_OFFSET(0x1B4A4240)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B4A3EF0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x1B4A40B0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A44B0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int ExecuteStaticFunction_TypeDefinitionIndex = 27427;

	class ExecuteStaticFunction : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::Internal::ReflectedWrapper* functionWrapper; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::NodeCanvas::Framework::BBParameter*>* NodeCanvas_Framework_ISubParametersContainer_GetSubParameters()
		{
			return ((::Il2CppArray<::NodeCanvas::Framework::BBParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_NODECANVAS_FRAMEWORK_ISUBPARAMETERSCONTAINER_GETSUBPARAMETERS_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_targetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_GET_TARGETMETHOD_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_GET_INFO_OFFSET))(this);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::ITaskSystem* ownerSystem)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_ONVALIDATE_OFFSET))(this, ownerSystem);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_ONINIT_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_ONEXECUTE_OFFSET))(this);
		}

		::System::Void SetMethod(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_SETMETHOD_OFFSET))(this, method);
		}
	};
}
