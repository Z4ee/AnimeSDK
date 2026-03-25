#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define SRDEBUGGER_SERVICES_BUGREPORTCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18438DC0)
#define SRDEBUGGER_SERVICES_BUGREPORTCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18438E20)
#define SRDEBUGGER_SERVICES_BUGREPORTCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18438A90)
#define SRDEBUGGER_SERVICES_BUGREPORTCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18438A70)

namespace SRDebugger::Services
{
	inline static constexpr unsigned int BugReportCompleteCallback_TypeDefinitionIndex = 29697;

	class BugReportCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_BUGREPORTCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean didSucceed, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_BUGREPORTCOMPLETECALLBACK_INVOKE_OFFSET))(this, didSucceed, errorMessage);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean didSucceed, ::System::String* errorMessage, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_BUGREPORTCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, didSucceed, errorMessage, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_BUGREPORTCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
