#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BC36BE0)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BC36C60)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BC36500)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC364F0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int SerializationCallback_TypeDefinitionIndex = 6989;

	class SerializationCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_INVOKE_OFFSET))(this, o, context);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_BEGININVOKE_OFFSET))(this, o, context, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
