#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Newtonsoft::Json::Serialization { class ErrorContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16493C40)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16493CD0)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1647B970)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1647C100)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int SerializationErrorCallback_TypeDefinitionIndex = 8324;

	class SerializationErrorCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext, ::Newtonsoft::Json::Serialization::ErrorContext*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_INVOKE_OFFSET))(this, o, context, errorContext);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext, ::Newtonsoft::Json::Serialization::ErrorContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_BEGININVOKE_OFFSET))(this, o, context, errorContext, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
