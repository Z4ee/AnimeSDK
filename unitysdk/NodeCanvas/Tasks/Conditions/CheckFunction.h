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

#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_GET_AGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B0BBA30)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1B0BBB90)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_GET_TARGETMETHOD_OFFSET UNITYSDK_OFFSET(0x1B0BBA10)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1B0BC730)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_ONINIT_OFFSET UNITYSDK_OFFSET(0x1B0BC610)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B0BC1E0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x1B0BC410)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0BCBB0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckFunction_TypeDefinitionIndex = 27599;

	class CheckFunction : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::Internal::ReflectedFunctionWrapper* functionWrapper; // 0x60
		::NodeCanvas::Framework::BBParameter* checkValue; // 0x68
		::ParadoxNotion::CompareMethod comparison; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_targetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_GET_TARGETMETHOD_OFFSET))(this);
		}

		::System::Type* get_agentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_GET_AGENTTYPE_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_GET_INFO_OFFSET))(this);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::ITaskSystem* ownerSystem)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_ONVALIDATE_OFFSET))(this, ownerSystem);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_ONINIT_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_ONCHECK_OFFSET))(this);
		}

		::System::Void SetMethod(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_SETMETHOD_OFFSET))(this, method);
		}
	};
}
