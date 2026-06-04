#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Logging { class LogMessage; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA300050)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA300080)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0xA300040)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xA2FFF50)

namespace Epic::OnlineServices::Logging
{
	inline static constexpr unsigned int LogMessageFunc_TypeDefinitionIndex = 42611;

	class LogMessageFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Logging::LogMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Logging::LogMessage*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Logging::LogMessage* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Logging::LogMessage*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
