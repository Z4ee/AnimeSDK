#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/ByteBufferAllocator.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace FlatBuffers { template <typename T> class UnmanagedMemoryManager_1; }
namespace System { class String; }
namespace System { template <typename T> class Lazy_1; }
namespace UnityEngine { class TextAsset; }

#define FLATBUFFERS_TEXTASSETALLOCATOR_ASSERT_OFFSET UNITYSDK_OFFSET(0x1BEDADE0)
#define FLATBUFFERS_TEXTASSETALLOCATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BEDB190)
#define FLATBUFFERS_TEXTASSETALLOCATOR_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1BEDB160)
#define FLATBUFFERS_TEXTASSETALLOCATOR_GET_READONLYSPAN_OFFSET UNITYSDK_OFFSET(0x1BEDB0A0)
#define FLATBUFFERS_TEXTASSETALLOCATOR_GET_SPAN_OFFSET UNITYSDK_OFFSET(0x1BEDAFE0)
#define FLATBUFFERS_TEXTASSETALLOCATOR_GROWFRONT_OFFSET UNITYSDK_OFFSET(0x1BEDAF90)
#define FLATBUFFERS_TEXTASSETALLOCATOR_INITBUFFER_OFFSET UNITYSDK_OFFSET(0x1BEDACE0)
#define FLATBUFFERS_TEXTASSETALLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BED4F10)
#define FLATBUFFERS_TEXTASSETALLOCATOR__INITBUFFER_B__10_0_OFFSET UNITYSDK_OFFSET(0x1BEDB1A0)

namespace FlatBuffers
{
	inline static constexpr unsigned int TextAssetAllocator_TypeDefinitionIndex = 8735;

	class TextAssetAllocator : public ::FlatBuffers::ByteBufferAllocator
	{
	public:
		::UnityEngine::TextAsset* _buffer; // 0x18
		::System::Lazy_1<::FlatBuffers::UnmanagedMemoryManager_1<::System::Byte>*>* _unmanagedMemoryManager; // 0x20
		::System::IntPtr _rawDataPtr; // 0x28

		::System::Void _ctor(::UnityEngine::TextAsset* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FLATBUFFERS_TEXTASSETALLOCATOR__CTOR_OFFSET))(this, buffer);
		}

		::System::Void Assert()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_TEXTASSETALLOCATOR_ASSERT_OFFSET))(this);
		}

		::System::Void GrowFront(::System::Int32 newSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_TEXTASSETALLOCATOR_GROWFRONT_OFFSET))(this, newSize);
		}

		::System::Span_1<::System::Byte> get_Span()
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_TEXTASSETALLOCATOR_GET_SPAN_OFFSET))(this);
		}

		::System::ReadOnlySpan_1<::System::Byte> get_ReadOnlySpan()
		{
			return ((::System::ReadOnlySpan_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_TEXTASSETALLOCATOR_GET_READONLYSPAN_OFFSET))(this);
		}

		::System::Void InitBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_TEXTASSETALLOCATOR_INITBUFFER_OFFSET))(this);
		}

		::System::String* GetString(::System::Int32 offsetOnTextAsset)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_TEXTASSETALLOCATOR_GETSTRING_OFFSET))(this, offsetOnTextAsset);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_TEXTASSETALLOCATOR_DISPOSE_OFFSET))(this);
		}

		::FlatBuffers::UnmanagedMemoryManager_1<::System::Byte>* _InitBuffer_b__10_0()
		{
			return ((::FlatBuffers::UnmanagedMemoryManager_1<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_TEXTASSETALLOCATOR__INITBUFFER_B__10_0_OFFSET))(this);
		}
	};
}
