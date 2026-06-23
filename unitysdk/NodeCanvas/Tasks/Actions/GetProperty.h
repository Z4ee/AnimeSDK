#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { class ITaskSystem; }
namespace NodeCanvas::Framework::Internal { class ReflectedFunctionWrapper; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define NODECANVAS_TASKS_ACTIONS_GETPROPERTY_GET_AGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D52ABF0)
#define NODECANVAS_TASKS_ACTIONS_GETPROPERTY_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D52AD50)
#define NODECANVAS_TASKS_ACTIONS_GETPROPERTY_GET_TARGETMETHOD_OFFSET UNITYSDK_OFFSET(0x1D52ABD0)
#define NODECANVAS_TASKS_ACTIONS_GETPROPERTY_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1D52B070)
#define NODECANVAS_TASKS_ACTIONS_GETPROPERTY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D52B420)
#define NODECANVAS_TASKS_ACTIONS_GETPROPERTY_ONINIT_OFFSET UNITYSDK_OFFSET(0x1D52B300)
#define NODECANVAS_TASKS_ACTIONS_GETPROPERTY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D52B090)
#define NODECANVAS_TASKS_ACTIONS_GETPROPERTY_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x1D52B1E0)
#define NODECANVAS_TASKS_ACTIONS_GETPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52B4A0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetProperty_TypeDefinitionIndex = 30844;

	class GetProperty : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::Internal::ReflectedFunctionWrapper* functionWrapper; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_targetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETPROPERTY_GET_TARGETMETHOD_OFFSET))(this);
		}

		::System::Type* get_agentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETPROPERTY_GET_AGENTTYPE_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETPROPERTY_GET_INFO_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETPROPERTY_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::ITaskSystem* ownerSystem)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETPROPERTY_ONVALIDATE_OFFSET))(this, ownerSystem);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETPROPERTY_ONINIT_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETPROPERTY_ONEXECUTE_OFFSET))(this);
		}

		::System::Void SetMethod(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETPROPERTY_SETMETHOD_OFFSET))(this, method);
		}
	};
}
