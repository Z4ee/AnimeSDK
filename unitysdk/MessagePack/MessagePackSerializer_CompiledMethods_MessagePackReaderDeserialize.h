#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18189120)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x181891A0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18189110)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x18189090)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods_MessagePackReaderDeserialize_TypeDefinitionIndex = 7172;

	class MessagePackSerializer_CompiledMethods_MessagePackReaderDeserialize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* Invoke(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* EndInvoke(::MessagePack::MessagePackReader& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_MESSAGEPACKREADERDESERIALIZE_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
