#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B6CC950)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B6CC9E0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B6C4D50)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CC8E0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_LZ4Transform_TypeDefinitionIndex = 7160;

	class MessagePackSerializer_LZ4Transform : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::Span_1<::System::Byte> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::Span_1<::System::Byte> a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>, ::System::Span_1<::System::Byte>, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4TRANSFORM_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
