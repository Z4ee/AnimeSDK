#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNCINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A869AD0)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNCINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A869B20)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNCINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8697D0)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNCINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8697C0)

namespace Epic::OnlineServices::Logging
{
	inline static constexpr unsigned int LogMessageFuncInternal_TypeDefinitionIndex = 34028;

	class LogMessageFuncInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNCINTERNAL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr message)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNCINTERNAL_INVOKE_OFFSET))(this, message);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNCINTERNAL_BEGININVOKE_OFFSET))(this, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNCINTERNAL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
