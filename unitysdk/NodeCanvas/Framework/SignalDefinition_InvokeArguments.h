#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_INVOKEARGUMENTS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E72E2E0)
#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_INVOKEARGUMENTS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E72E380)
#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_INVOKEARGUMENTS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E72DCA0)
#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION_INVOKEARGUMENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E72DC80)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int SignalDefinition_InvokeArguments_TypeDefinitionIndex = 31293;

	class SignalDefinition_InvokeArguments : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_INVOKEARGUMENTS__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Transform* sender, ::UnityEngine::Transform* receiver, ::System::Boolean isGlobal, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_INVOKEARGUMENTS_INVOKE_OFFSET))(this, sender, receiver, isGlobal, args);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Transform* sender, ::UnityEngine::Transform* receiver, ::System::Boolean isGlobal, ::Il2CppArray<::System::Object*>* args, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_INVOKEARGUMENTS_BEGININVOKE_OFFSET))(this, sender, receiver, isGlobal, args, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION_INVOKEARGUMENTS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
