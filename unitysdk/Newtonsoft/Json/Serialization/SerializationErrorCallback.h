#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Newtonsoft::Json::Serialization { class ErrorContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17306E30)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17306EC0)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x172E6CE0)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17306D40)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int SerializationErrorCallback_TypeDefinitionIndex = 9664;

	class SerializationErrorCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Runtime::Serialization::StreamingContext a2, ::Newtonsoft::Json::Serialization::ErrorContext* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext, ::Newtonsoft::Json::Serialization::ErrorContext*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Runtime::Serialization::StreamingContext a2, ::Newtonsoft::Json::Serialization::ErrorContext* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext, ::Newtonsoft::Json::Serialization::ErrorContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
