#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_BEHAVIORHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F6061C0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_BEHAVIORHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F6061F0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_BEHAVIORHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F605CA0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_BEHAVIORHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F605C80)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int Behavior_BehaviorHandler_TypeDefinitionIndex = 33850;

	class Behavior_BehaviorHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_BEHAVIORHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_BEHAVIORHANDLER_INVOKE_OFFSET))(this, behavior);
		}

		::System::IAsyncResult* BeginInvoke(::BehaviorDesigner::Runtime::Behavior* behavior, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_BEHAVIORHANDLER_BEGININVOKE_OFFSET))(this, behavior, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_BEHAVIORHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
