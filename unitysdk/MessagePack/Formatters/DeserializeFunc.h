#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MESSAGEPACK_FORMATTERS_DESERIALIZEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A1F5220)
#define MESSAGEPACK_FORMATTERS_DESERIALIZEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A1F52B0)
#define MESSAGEPACK_FORMATTERS_DESERIALIZEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A1F4C00)
#define MESSAGEPACK_FORMATTERS_DESERIALIZEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F4BF0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DeserializeFunc_TypeDefinitionIndex = 26582;

	class DeserializeFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DESERIALIZEFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::System::Object* dynamicFormatter, ::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DESERIALIZEFUNC_INVOKE_OFFSET))(this, dynamicFormatter, reader, options);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* dynamicFormatter, ::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DESERIALIZEFUNC_BEGININVOKE_OFFSET))(this, dynamicFormatter, reader, options, callback, object);
		}

		::System::Object* EndInvoke(::MessagePack::MessagePackReader& reader, ::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DESERIALIZEFUNC_ENDINVOKE_OFFSET))(this, reader, result);
		}
	};
}
