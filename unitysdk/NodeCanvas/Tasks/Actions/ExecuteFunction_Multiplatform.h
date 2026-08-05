#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { class ITaskSystem; }
namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedMethodInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }

#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_GET_AGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DAF0CD0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DAF0E30)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_GET_TARGETMETHOD_OFFSET UNITYSDK_OFFSET(0x1DAF0CB0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_INTERNALCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1DAF20C0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1DAF14B0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1DAF1CA0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_ONINIT_OFFSET UNITYSDK_OFFSET(0x1DAF1AA0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1DAF2110)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1DAF14C0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x1DAF14E0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF2120)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int ExecuteFunction_Multiplatform_TypeDefinitionIndex = 30601;

	class ExecuteFunction_Multiplatform : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::Internal::BBObjectParameter* returnValue; // 0x60
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Internal::BBObjectParameter*>* parameters; // 0x68
		::ParadoxNotion::Serialization::SerializedMethodInfo* method; // 0x70
		::Il2CppArray<::System::Boolean>* parameterIsByRef; // 0x78
		::Il2CppArray<::System::Object*>* args; // 0x80
		::System::Boolean routineRunning; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_targetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_GET_TARGETMETHOD_OFFSET))(this);
		}

		::System::Type* get_agentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_GET_AGENTTYPE_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_GET_INFO_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::ITaskSystem* ownerSystem)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_ONVALIDATE_OFFSET))(this, ownerSystem);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_ONINIT_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_ONSTOP_OFFSET))(this);
		}

		::System::Collections::IEnumerator* InternalCoroutine(::System::Collections::IEnumerator* routine)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_INTERNALCOROUTINE_OFFSET))(this, routine);
		}

		::System::Void SetMethod(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM_SETMETHOD_OFFSET))(this, method);
		}
	};
}
