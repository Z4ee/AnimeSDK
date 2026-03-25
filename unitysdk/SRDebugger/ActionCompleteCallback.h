#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SRDEBUGGER_ACTIONCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18431080)
#define SRDEBUGGER_ACTIONCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x184310D0)
#define SRDEBUGGER_ACTIONCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18430D10)
#define SRDEBUGGER_ACTIONCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18430CF0)

namespace SRDebugger
{
	inline static constexpr unsigned int ActionCompleteCallback_TypeDefinitionIndex = 29612;

	class ActionCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_ACTIONCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_ACTIONCOMPLETECALLBACK_INVOKE_OFFSET))(this, success);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean success, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_ACTIONCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, success, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_ACTIONCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
