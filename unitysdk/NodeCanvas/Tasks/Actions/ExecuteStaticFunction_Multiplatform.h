#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { class ITaskSystem; }
namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace ParadoxNotion::Serialization { class SerializedMethodInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }

#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EB86F10)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM_GET_TARGETMETHOD_OFFSET UNITYSDK_OFFSET(0x1EB86EF0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EB87A80)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM_ONINIT_OFFSET UNITYSDK_OFFSET(0x1EB879C0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1EB87480)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x1EB874A0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB87C50)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int ExecuteStaticFunction_Multiplatform_TypeDefinitionIndex = 29996;

	class ExecuteStaticFunction_Multiplatform : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::Internal::BBObjectParameter* returnValue; // 0x60
		::ParadoxNotion::Serialization::SerializedMethodInfo* method; // 0x68
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Internal::BBObjectParameter*>* parameters; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_targetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM_GET_TARGETMETHOD_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM_GET_INFO_OFFSET))(this);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::ITaskSystem* ownerSystem)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM_ONVALIDATE_OFFSET))(this, ownerSystem);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM_ONINIT_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM_ONEXECUTE_OFFSET))(this);
		}

		::System::Void SetMethod(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM_SETMETHOD_OFFSET))(this, method);
		}
	};
}
