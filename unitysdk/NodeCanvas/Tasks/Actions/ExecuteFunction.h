#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { class ITaskSystem; }
namespace NodeCanvas::Framework::Internal { class ReflectedWrapper; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Reflection { class MethodInfo; }

#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_GET_AGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D826800)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D826960)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_GET_TARGETMETHOD_OFFSET UNITYSDK_OFFSET(0x1D8267E0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_INTERNALCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1D827AA0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1D8267C0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D827760)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_ONINIT_OFFSET UNITYSDK_OFFSET(0x1D8275D0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1D827AF0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D827280)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x1D827440)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D827B00)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int ExecuteFunction_TypeDefinitionIndex = 29482;

	class ExecuteFunction : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::Internal::ReflectedWrapper* functionWrapper; // 0x60
		::System::Boolean routineRunning; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION__CTOR_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_targetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_GET_TARGETMETHOD_OFFSET))(this);
		}

		::System::Type* get_agentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_GET_AGENTTYPE_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_GET_INFO_OFFSET))(this);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::ITaskSystem* ownerSystem)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_ONVALIDATE_OFFSET))(this, ownerSystem);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_ONINIT_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_ONSTOP_OFFSET))(this);
		}

		::System::Collections::IEnumerator* InternalCoroutine(::System::Collections::IEnumerator* routine)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_INTERNALCOROUTINE_OFFSET))(this, routine);
		}

		::System::Void SetMethod(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_SETMETHOD_OFFSET))(this, method);
		}
	};
}
