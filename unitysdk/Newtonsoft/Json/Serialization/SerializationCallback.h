#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15BBC830)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15BBC8B0)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x15B9B9B0)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x15BBC740)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int SerializationCallback_TypeDefinitionIndex = 9384;

	class SerializationCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Runtime::Serialization::StreamingContext a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
