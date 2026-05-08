#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/ByteBufferAllocator.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLATBUFFERS_NATIVEARRAYALLOCATOR_CHECKBUFFERISVALID_OFFSET UNITYSDK_OFFSET(0x1BEDA320)
#define FLATBUFFERS_NATIVEARRAYALLOCATOR_CLEANUPALLINSTANCES_OFFSET UNITYSDK_OFFSET(0x1BEDA0E0)
#define FLATBUFFERS_NATIVEARRAYALLOCATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BEDA500)
#define FLATBUFFERS_NATIVEARRAYALLOCATOR_DODISPOSE_OFFSET UNITYSDK_OFFSET(0x1BEDA2D0)
#define FLATBUFFERS_NATIVEARRAYALLOCATOR_GET_READONLYSPAN_OFFSET UNITYSDK_OFFSET(0x1BEDA440)
#define FLATBUFFERS_NATIVEARRAYALLOCATOR_GET_SPAN_OFFSET UNITYSDK_OFFSET(0x1BEDA380)
#define FLATBUFFERS_NATIVEARRAYALLOCATOR_GROWFRONT_OFFSET UNITYSDK_OFFSET(0x1BEDA330)
#define FLATBUFFERS_NATIVEARRAYALLOCATOR_INITBUFFER_OFFSET UNITYSDK_OFFSET(0x1BEDA310)
#define FLATBUFFERS_NATIVEARRAYALLOCATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEDA5B0)
#define FLATBUFFERS_NATIVEARRAYALLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BED4AD0)

namespace FlatBuffers
{
	inline static constexpr unsigned int NativeArrayAllocator_TypeDefinitionIndex = 8736;

	class NativeArrayAllocator : public ::FlatBuffers::ByteBufferAllocator
	{
	public:
		static ::System::Collections::Generic::List_1<::FlatBuffers::NativeArrayAllocator*>** StaticGet_s_AllInstances()
		{
			return (::System::Collections::Generic::List_1<::FlatBuffers::NativeArrayAllocator*>**)Il2CppClass::FromTypeDefinitionIndex(NativeArrayAllocator_TypeDefinitionIndex)->GetStaticField(0x7CB0);
		}
		static ::System::Boolean* StaticGet_s_UnloadRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NativeArrayAllocator_TypeDefinitionIndex)->GetStaticField(0x3C70);
		}
		::System::Void* _rawDataPtr; // 0x18
		::Unity::Collections::NativeArray_1<::System::Byte> _NativeArray; // 0x20

		::System::Void _ctor(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FLATBUFFERS_NATIVEARRAYALLOCATOR__CTOR_OFFSET))(this, bytes);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLATBUFFERS_NATIVEARRAYALLOCATOR__CCTOR_OFFSET))();
		}

		static ::System::Void CleanupAllInstances()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLATBUFFERS_NATIVEARRAYALLOCATOR_CLEANUPALLINSTANCES_OFFSET))();
		}

		::System::Void CheckBufferIsValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_NATIVEARRAYALLOCATOR_CHECKBUFFERISVALID_OFFSET))(this);
		}

		::System::Void GrowFront(::System::Int32 newSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_NATIVEARRAYALLOCATOR_GROWFRONT_OFFSET))(this, newSize);
		}

		::System::Span_1<::System::Byte> get_Span()
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_NATIVEARRAYALLOCATOR_GET_SPAN_OFFSET))(this);
		}

		::System::ReadOnlySpan_1<::System::Byte> get_ReadOnlySpan()
		{
			return ((::System::ReadOnlySpan_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_NATIVEARRAYALLOCATOR_GET_READONLYSPAN_OFFSET))(this);
		}

		::System::Void InitBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_NATIVEARRAYALLOCATOR_INITBUFFER_OFFSET))(this);
		}

		::System::Void DoDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_NATIVEARRAYALLOCATOR_DODISPOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_NATIVEARRAYALLOCATOR_DISPOSE_OFFSET))(this);
		}
	};
}
