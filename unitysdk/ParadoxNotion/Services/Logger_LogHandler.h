#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Services/Logger_Message.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PARADOXNOTION_SERVICES_LOGGER_LOGHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D52EE70)
#define PARADOXNOTION_SERVICES_LOGGER_LOGHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D52EEE0)
#define PARADOXNOTION_SERVICES_LOGGER_LOGHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D52EA20)
#define PARADOXNOTION_SERVICES_LOGGER_LOGHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52EA00)

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int Logger_LogHandler_TypeDefinitionIndex = 30655;

	class Logger_LogHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER_LOGHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::ParadoxNotion::Services::Logger_Message message)
		{
			return ((::System::Boolean(*)(::PVOID, ::ParadoxNotion::Services::Logger_Message))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER_LOGHANDLER_INVOKE_OFFSET))(this, message);
		}

		::System::IAsyncResult* BeginInvoke(::ParadoxNotion::Services::Logger_Message message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ParadoxNotion::Services::Logger_Message, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER_LOGHANDLER_BEGININVOKE_OFFSET))(this, message, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER_LOGHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
