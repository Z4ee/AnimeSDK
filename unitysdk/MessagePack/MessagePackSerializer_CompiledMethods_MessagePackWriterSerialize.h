#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKWRITERSERIALIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D6E4360)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKWRITERSERIALIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D6E43F0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKWRITERSERIALIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D6E3FE0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKWRITERSERIALIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E3FC0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods_MessagePackWriterSerialize_TypeDefinitionIndex = 30275;

	class MessagePackSerializer_CompiledMethods_MessagePackWriterSerialize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKWRITERSERIALIZE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MessagePack::MessagePackWriter& writer, ::System::Object* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKWRITERSERIALIZE_INVOKE_OFFSET))(this, writer, value, options);
		}

		::System::IAsyncResult* BeginInvoke(::MessagePack::MessagePackWriter& writer, ::System::Object* value, ::MessagePack::MessagePackSerializerOptions* options, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKWRITERSERIALIZE_BEGININVOKE_OFFSET))(this, writer, value, options, callback, object);
		}

		::System::Void EndInvoke(::MessagePack::MessagePackWriter& writer, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKWRITERSERIALIZE_ENDINVOKE_OFFSET))(this, writer, result);
		}
	};
}
