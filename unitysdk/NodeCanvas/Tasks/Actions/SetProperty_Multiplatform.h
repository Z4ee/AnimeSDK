#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { class ITaskSystem; }
namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedMethodInfo; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_GET_AGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1ADBAD40)
#define NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1ADBAEA0)
#define NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_GET_TARGETMETHOD_OFFSET UNITYSDK_OFFSET(0x1ADBAD20)
#define NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1ADBB130)
#define NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1ADBB310)
#define NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_ONINIT_OFFSET UNITYSDK_OFFSET(0x1ADBB250)
#define NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1ADBB140)
#define NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x1ADBB160)
#define NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADBB430)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetProperty_Multiplatform_TypeDefinitionIndex = 28188;

	class SetProperty_Multiplatform : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::ParadoxNotion::Serialization::SerializedMethodInfo* method; // 0x60
		::NodeCanvas::Framework::Internal::BBObjectParameter* parameter; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_targetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_GET_TARGETMETHOD_OFFSET))(this);
		}

		::System::Type* get_agentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_GET_AGENTTYPE_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_GET_INFO_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::ITaskSystem* ownerSystem)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_ONVALIDATE_OFFSET))(this, ownerSystem);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_ONINIT_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_ONEXECUTE_OFFSET))(this);
		}

		::System::Void SetMethod(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETPROPERTY_MULTIPLATFORM_SETMETHOD_OFFSET))(this, method);
		}
	};
}
