#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B7E8290)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B7E8310)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B7E7F50)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E7F40)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods_MessagePackReaderDeserialize_TypeDefinitionIndex = 28180;

	class MessagePackSerializer_CompiledMethods_MessagePackReaderDeserialize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE_INVOKE_OFFSET))(this, reader, options);
		}

		::System::IAsyncResult* BeginInvoke(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE_BEGININVOKE_OFFSET))(this, reader, options, callback, object);
		}

		::System::Object* EndInvoke(::MessagePack::MessagePackReader& reader, ::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE_ENDINVOKE_OFFSET))(this, reader, result);
		}
	};
}
