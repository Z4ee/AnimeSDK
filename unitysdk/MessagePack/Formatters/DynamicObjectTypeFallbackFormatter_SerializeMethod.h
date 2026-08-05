#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EB6F860)
#define MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EB6F900)
#define MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EB6F220)
#define MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6F200)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DynamicObjectTypeFallbackFormatter_SerializeMethod_TypeDefinitionIndex = 31339;

	class DynamicObjectTypeFallbackFormatter_SerializeMethod : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* dynamicFormatter, ::MessagePack::MessagePackWriter& writer, ::System::Object* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD_INVOKE_OFFSET))(this, dynamicFormatter, writer, value, options);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* dynamicFormatter, ::MessagePack::MessagePackWriter& writer, ::System::Object* value, ::MessagePack::MessagePackSerializerOptions* options, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD_BEGININVOKE_OFFSET))(this, dynamicFormatter, writer, value, options, callback, object);
		}

		::System::Void EndInvoke(::MessagePack::MessagePackWriter& writer, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD_ENDINVOKE_OFFSET))(this, writer, result);
		}
	};
}
