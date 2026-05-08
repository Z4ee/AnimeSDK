#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace NodeCanvas::Framework { class SignalDefinition_SignalDefinitionProxy; }
namespace ParadoxNotion { class DynamicParameterDefinition; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_ADDPARAMETER_OFFSET UNITYSDK_OFFSET(0x1985CE70)
#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1985CE00)
#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x1985CBC0)
#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1985CE20)
#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_REMOVEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1985CF20)
#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1985CE10)
#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1985D000)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int SignalDefinition_TypeDefinitionIndex = 28048;

	class SignalDefinition : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::ParadoxNotion::DynamicParameterDefinition*>* _parameters; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::SignalDefinition_SignalDefinitionProxy* get_Proxy()
		{
			return ((::NodeCanvas::Framework::SignalDefinition_SignalDefinitionProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_GET_PROXY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ParadoxNotion::DynamicParameterDefinition*>* get_parameters()
		{
			return ((::System::Collections::Generic::List_1<::ParadoxNotion::DynamicParameterDefinition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Void set_parameters(::System::Collections::Generic::List_1<::ParadoxNotion::DynamicParameterDefinition*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ParadoxNotion::DynamicParameterDefinition*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_SET_PARAMETERS_OFFSET))(this, value);
		}

		::System::Void Invoke(::UnityEngine::Transform* sender, ::UnityEngine::Transform* receiver, ::System::Boolean isGlobal, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_INVOKE_OFFSET))(this, sender, receiver, isGlobal, args);
		}

		::System::Void AddParameter(::System::String* name, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_ADDPARAMETER_OFFSET))(this, name, type);
		}

		::System::Void RemoveParameter(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_REMOVEPARAMETER_OFFSET))(this, name);
		}
	};
}
