#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1737E3E0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1737E470)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM_INVOKE_OFFSET UNITYSDK_OFFSET(0x17375AA0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x173782E0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_LZ4Transform_TypeDefinitionIndex = 9265;

	class MessagePackSerializer_LZ4Transform : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::ReadOnlySpan_1<::System::Byte> input, ::System::Span_1<::System::Byte> output)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM_INVOKE_OFFSET))(this, input, output);
		}

		::System::IAsyncResult* BeginInvoke(::System::ReadOnlySpan_1<::System::Byte> input, ::System::Span_1<::System::Byte> output, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>, ::System::Span_1<::System::Byte>, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM_BEGININVOKE_OFFSET))(this, input, output, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
