#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"

namespace NodeCanvas::Framework { class ITaskSystem; }
namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedMethodInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_GET_AGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D847870)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D8479D0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_GET_TARGETMETHOD_OFFSET UNITYSDK_OFFSET(0x1D847850)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1D847FB0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D8486D0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_ONINIT_OFFSET UNITYSDK_OFFSET(0x1D848500)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D847FC0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x1D847FE0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D848DA0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckFunction_Multiplatform_TypeDefinitionIndex = 30853;

	class CheckFunction_Multiplatform : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Internal::BBObjectParameter*>* parameters; // 0x60
		::ParadoxNotion::Serialization::SerializedMethodInfo* method; // 0x68
		::NodeCanvas::Framework::Internal::BBObjectParameter* checkValue; // 0x70
		::Il2CppArray<::System::Boolean>* parameterIsByRef; // 0x78
		::Il2CppArray<::System::Object*>* args; // 0x80
		::ParadoxNotion::CompareMethod comparison; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_targetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_GET_TARGETMETHOD_OFFSET))(this);
		}

		::System::Type* get_agentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_GET_AGENTTYPE_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_GET_INFO_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::ITaskSystem* ownerSystem)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_ONVALIDATE_OFFSET))(this, ownerSystem);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_ONINIT_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_ONCHECK_OFFSET))(this);
		}

		::System::Void SetMethod(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFUNCTION_MULTIPLATFORM_SETMETHOD_OFFSET))(this, method);
		}
	};
}
