#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class ITaskSystem; }
namespace NodeCanvas::Framework::Internal { class ReflectedFunctionWrapper; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_GET_AGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D6E6FE0)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D6E7140)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_GET_TARGETMETHOD_OFFSET UNITYSDK_OFFSET(0x1D6E6FC0)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1D6E74C0)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_ONINIT_OFFSET UNITYSDK_OFFSET(0x1D6E7750)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1D6E7980)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D6E7870)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D6E74E0)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x1D6E7630)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E7990)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int ImplementedAction_TypeDefinitionIndex = 30356;

	class ImplementedAction : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::Internal::ReflectedFunctionWrapper* functionWrapper; // 0x60
		::NodeCanvas::Framework::Status actionStatus; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_targetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_GET_TARGETMETHOD_OFFSET))(this);
		}

		::System::Type* get_agentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_GET_AGENTTYPE_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_GET_INFO_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::ITaskSystem* ownerSystem)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_ONVALIDATE_OFFSET))(this, ownerSystem);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_ONINIT_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_ONSTOP_OFFSET))(this);
		}

		::System::Void SetMethod(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_SETMETHOD_OFFSET))(this, method);
		}
	};
}
