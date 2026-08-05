#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Logging { class LogMessage; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E1AB790)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E1AB7C0)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E1AB270)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AB250)

namespace Epic::OnlineServices::Logging
{
	inline static constexpr unsigned int LogMessageFunc_TypeDefinitionIndex = 36249;

	class LogMessageFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Logging::LogMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Logging::LogMessage*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC_INVOKE_OFFSET))(this, message);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Logging::LogMessage* message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Logging::LogMessage*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC_BEGININVOKE_OFFSET))(this, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
