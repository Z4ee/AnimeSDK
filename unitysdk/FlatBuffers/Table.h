#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FLATBUFFERS_TABLE_COMPARESTRINGS_1_OFFSET UNITYSDK_OFFSET(0x1F62A970)
#define FLATBUFFERS_TABLE_COMPARESTRINGS_OFFSET UNITYSDK_OFFSET(0x1F62A8A0)
#define FLATBUFFERS_TABLE_GET_BB_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define FLATBUFFERS_TABLE_GET_BB_POS_OFFSET UNITYSDK_OFFSET(0x325570)
#define FLATBUFFERS_TABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define FLATBUFFERS_TABLE_SET_BB_OFFSET UNITYSDK_OFFSET(0x462A80)
#define FLATBUFFERS_TABLE_SET_BB_POS_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define FLATBUFFERS_TABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xAAA210)
#define FLATBUFFERS_TABLE___HAS_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1F62A610)
#define FLATBUFFERS_TABLE___INDIRECT_1_OFFSET UNITYSDK_OFFSET(0x1F62A540)
#define FLATBUFFERS_TABLE___INDIRECT_OFFSET UNITYSDK_OFFSET(0xAAA250)
#define FLATBUFFERS_TABLE___OFFSET_1_OFFSET UNITYSDK_OFFSET(0x1F62A4F0)
#define FLATBUFFERS_TABLE___OFFSET_OFFSET UNITYSDK_OFFSET(0xAAA240)
#define FLATBUFFERS_TABLE___STRING_OFFSET UNITYSDK_OFFSET(0xAAA280)
#define FLATBUFFERS_TABLE___VECTOR_LEN_OFFSET UNITYSDK_OFFSET(0xAAA2E0)
#define FLATBUFFERS_TABLE___VECTOR_OFFSET UNITYSDK_OFFSET(0xAAA330)

namespace FlatBuffers
{
	inline static constexpr unsigned int Table_TypeDefinitionIndex = 6737;

	struct alignas(8) Table
	{
		::System::Int32 _bb_pos_k__BackingField; // 0x10
		::FlatBuffers::ByteBuffer* _bb_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 _i, ::FlatBuffers::ByteBuffer* _bb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE__CTOR_OFFSET))(this, _i, _bb);
		}

		::System::Int32 get_bb_pos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE_GET_BB_POS_OFFSET))(this);
		}

		::System::Void set_bb_pos(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE_SET_BB_POS_OFFSET))(this, value);
		}

		::FlatBuffers::ByteBuffer* get_bb()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE_GET_BB_OFFSET))(this);
		}

		::System::Void set_bb(::FlatBuffers::ByteBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE_SET_BB_OFFSET))(this, value);
		}

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE_GET_BYTEBUFFER_OFFSET))(this);
		}

		::System::Int32 __offset(::System::Int32 vtableOffset)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE___OFFSET_OFFSET))(this, vtableOffset);
		}

		static ::System::Int32 __offset_1(::System::Int32 vtableOffset, ::System::Int32 offset, ::FlatBuffers::ByteBuffer* bb)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE___OFFSET_1_OFFSET))(vtableOffset, offset, bb);
		}

		::System::Int32 __indirect(::System::Int32 offset)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE___INDIRECT_OFFSET))(this, offset);
		}

		static ::System::Int32 __indirect_1(::System::Int32 offset, ::FlatBuffers::ByteBuffer* bb)
		{
			return ((::System::Int32(*)(::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE___INDIRECT_1_OFFSET))(offset, bb);
		}

		::System::String* __string(::System::Int32 offset)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE___STRING_OFFSET))(this, offset);
		}

		::System::Int32 __vector_len(::System::Int32 offset)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE___VECTOR_LEN_OFFSET))(this, offset);
		}

		::System::Int32 __vector(::System::Int32 offset)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE___VECTOR_OFFSET))(this, offset);
		}

		static ::System::Boolean __has_identifier(::FlatBuffers::ByteBuffer* bb, ::System::String* ident)
		{
			return ((::System::Boolean(*)(::FlatBuffers::ByteBuffer*, ::System::String*))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE___HAS_IDENTIFIER_OFFSET))(bb, ident);
		}

		static ::System::Int32 CompareStrings(::System::Int32 offset_1, ::System::Int32 offset_2, ::FlatBuffers::ByteBuffer* bb)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE_COMPARESTRINGS_OFFSET))(offset_1, offset_2, bb);
		}

		static ::System::Int32 CompareStrings_1(::System::Int32 offset_1, ::Il2CppArray<::System::Byte>* key, ::FlatBuffers::ByteBuffer* bb)
		{
			return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Byte>*, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE_COMPARESTRINGS_1_OFFSET))(offset_1, key, bb);
		}
	};
}
