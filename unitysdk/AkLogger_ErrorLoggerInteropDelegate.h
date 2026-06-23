#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define AKLOGGER_ERRORLOGGERINTEROPDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E63D1E0)
#define AKLOGGER_ERRORLOGGERINTEROPDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E63D210)
#define AKLOGGER_ERRORLOGGERINTEROPDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E63CCE0)
#define AKLOGGER_ERRORLOGGERINTEROPDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E63CCC0)

inline static constexpr unsigned int AkLogger_ErrorLoggerInteropDelegate_TypeDefinitionIndex = 33072;

class AkLogger_ErrorLoggerInteropDelegate : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKLOGGER_ERRORLOGGERINTEROPDELEGATE__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke(::System::String* message)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKLOGGER_ERRORLOGGERINTEROPDELEGATE_INVOKE_OFFSET))(this, message);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* message, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKLOGGER_ERRORLOGGERINTEROPDELEGATE_BEGININVOKE_OFFSET))(this, message, callback, object);
	}

	::System::Void EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKLOGGER_ERRORLOGGERINTEROPDELEGATE_ENDINVOKE_OFFSET))(this, result);
	}
};
