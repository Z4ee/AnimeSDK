#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class ITaskSystem; }
namespace NodeCanvas::Framework::Internal { class ReflectedFunctionWrapper; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY_GET_AGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1E6DE750)
#define NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E6DE8B0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY_GET_TARGETMETHOD_OFFSET UNITYSDK_OFFSET(0x1E6DE730)
#define NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1E6DF140)
#define NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY_ONINIT_OFFSET UNITYSDK_OFFSET(0x1E6DF020)
#define NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E6DEBF0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x1E6DEE20)
#define NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DF590)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckProperty_TypeDefinitionIndex = 30429;

	class CheckProperty : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::Internal::ReflectedFunctionWrapper* functionWrapper; // 0x60
		::NodeCanvas::Framework::BBParameter* checkValue; // 0x68
		::ParadoxNotion::CompareMethod comparison; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_targetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY_GET_TARGETMETHOD_OFFSET))(this);
		}

		::System::Type* get_agentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY_GET_AGENTTYPE_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY_GET_INFO_OFFSET))(this);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::ITaskSystem* ownerSystem)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY_ONVALIDATE_OFFSET))(this, ownerSystem);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY_ONINIT_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY_ONCHECK_OFFSET))(this);
		}

		::System::Void SetMethod(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKPROPERTY_SETMETHOD_OFFSET))(this, method);
		}
	};
}
