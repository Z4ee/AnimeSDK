#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class SignalDefinition; }
namespace NodeCanvas::Framework { class SignalDefinition_InvokeArguments; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_SIGNALDEFINITIONPROXY_ADD_ONINVOKE_OFFSET UNITYSDK_OFFSET(0x1E72E3A0)
#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_SIGNALDEFINITIONPROXY_GET_PROXYID_OFFSET UNITYSDK_OFFSET(0x1E72E390)
#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_SIGNALDEFINITIONPROXY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E72E4A0)
#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_SIGNALDEFINITIONPROXY_REMOVE_ONINVOKE_OFFSET UNITYSDK_OFFSET(0x1E72E420)
#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_SIGNALDEFINITIONPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72E4F0)
#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_SIGNALDEFINITIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E72E4D0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int SignalDefinition_SignalDefinitionProxy_TypeDefinitionIndex = 31294;

	class SignalDefinition_SignalDefinitionProxy : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_Counter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SignalDefinition_SignalDefinitionProxy_TypeDefinitionIndex)->GetStaticField(0x7AD0);
		}
		::NodeCanvas::Framework::SignalDefinition_InvokeArguments* onInvoke; // 0x10
		::System::Int32 _ProxyId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_SIGNALDEFINITIONPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_SIGNALDEFINITIONPROXY__CCTOR_OFFSET))();
		}

		::System::Int32 get_ProxyId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_SIGNALDEFINITIONPROXY_GET_PROXYID_OFFSET))(this);
		}

		::System::Void add_onInvoke(::NodeCanvas::Framework::SignalDefinition_InvokeArguments* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::SignalDefinition_InvokeArguments*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_SIGNALDEFINITIONPROXY_ADD_ONINVOKE_OFFSET))(this, value);
		}

		::System::Void remove_onInvoke(::NodeCanvas::Framework::SignalDefinition_InvokeArguments* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::SignalDefinition_InvokeArguments*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_SIGNALDEFINITIONPROXY_REMOVE_ONINVOKE_OFFSET))(this, value);
		}

		::System::Void Invoke(::NodeCanvas::Framework::SignalDefinition* definition, ::UnityEngine::Transform* sender, ::UnityEngine::Transform* receiver, ::System::Boolean isGlobal, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::SignalDefinition*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_SIGNALDEFINITIONPROXY_INVOKE_OFFSET))(this, definition, sender, receiver, isGlobal, args);
		}
	};
}
