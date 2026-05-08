#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_SERIALIZEMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B7E4E60)
#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_SERIALIZEMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B7E4F00)
#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_SERIALIZEMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B7E47B0)
#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_SERIALIZEMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E47A0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GraphObjectDynamic_FallbackFormatter_SerializeMethod_TypeDefinitionIndex = 26746;

	class GraphObjectDynamic_FallbackFormatter_SerializeMethod : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_SERIALIZEMETHOD__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* dynamicFormatter, ::MessagePack::MessagePackWriter& writer, ::System::Object* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_SERIALIZEMETHOD_INVOKE_OFFSET))(this, dynamicFormatter, writer, value, options);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* dynamicFormatter, ::MessagePack::MessagePackWriter& writer, ::System::Object* value, ::MessagePack::MessagePackSerializerOptions* options, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_SERIALIZEMETHOD_BEGININVOKE_OFFSET))(this, dynamicFormatter, writer, value, options, callback, object);
		}

		::System::Void EndInvoke(::MessagePack::MessagePackWriter& writer, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_SERIALIZEMETHOD_ENDINVOKE_OFFSET))(this, writer, result);
		}
	};
}
