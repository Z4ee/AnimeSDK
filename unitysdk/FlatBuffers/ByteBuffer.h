#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace FlatBuffers { class ByteBufferAllocator; }
namespace FlatBuffers { class IFlatStringInternCache; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class TextAsset; }

#define FLATBUFFERS_BYTEBUFFER_ASSERTOFFSETANDLENGTH_OFFSET UNITYSDK_OFFSET(0x1F624D40)
#define FLATBUFFERS_BYTEBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F624B60)
#define FLATBUFFERS_BYTEBUFFER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F624AE0)
#define FLATBUFFERS_BYTEBUFFER_GETDOUBLE_OFFSET UNITYSDK_OFFSET(0x1F626670)
#define FLATBUFFERS_BYTEBUFFER_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1F626560)
#define FLATBUFFERS_BYTEBUFFER_GETINT_OFFSET UNITYSDK_OFFSET(0x1F626240)
#define FLATBUFFERS_BYTEBUFFER_GETLONG_OFFSET UNITYSDK_OFFSET(0x1F6263D0)
#define FLATBUFFERS_BYTEBUFFER_GETSBYTE_OFFSET UNITYSDK_OFFSET(0x1F625DB0)
#define FLATBUFFERS_BYTEBUFFER_GETSHORT_OFFSET UNITYSDK_OFFSET(0x1F6260B0)
#define FLATBUFFERS_BYTEBUFFER_GETSTRINGUTF8_OFFSET UNITYSDK_OFFSET(0x1F625F00)
#define FLATBUFFERS_BYTEBUFFER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1F625EF0)
#define FLATBUFFERS_BYTEBUFFER_GETUINT_OFFSET UNITYSDK_OFFSET(0x1F626250)
#define FLATBUFFERS_BYTEBUFFER_GETULONG_OFFSET UNITYSDK_OFFSET(0x1F6263E0)
#define FLATBUFFERS_BYTEBUFFER_GETUSHORT_OFFSET UNITYSDK_OFFSET(0x1F6260C0)
#define FLATBUFFERS_BYTEBUFFER_GET_ISMONOSTRING_OFFSET UNITYSDK_OFFSET(0x1F624B90)
#define FLATBUFFERS_BYTEBUFFER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1F624BD0)
#define FLATBUFFERS_BYTEBUFFER_GET_OFFSET UNITYSDK_OFFSET(0x1F625E50)
#define FLATBUFFERS_BYTEBUFFER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F624BB0)
#define FLATBUFFERS_BYTEBUFFER_GROWFRONT_OFFSET UNITYSDK_OFFSET(0x1F624C00)
#define FLATBUFFERS_BYTEBUFFER_PUTBYTE_1_OFFSET UNITYSDK_OFFSET(0x1F624F20)
#define FLATBUFFERS_BYTEBUFFER_PUTBYTE_OFFSET UNITYSDK_OFFSET(0x1F624E70)
#define FLATBUFFERS_BYTEBUFFER_PUTDOUBLE_OFFSET UNITYSDK_OFFSET(0x1F625C90)
#define FLATBUFFERS_BYTEBUFFER_PUTFLOAT_OFFSET UNITYSDK_OFFSET(0x1F625B70)
#define FLATBUFFERS_BYTEBUFFER_PUTINT_OFFSET UNITYSDK_OFFSET(0x1F625830)
#define FLATBUFFERS_BYTEBUFFER_PUTLONG_OFFSET UNITYSDK_OFFSET(0x1F6259D0)
#define FLATBUFFERS_BYTEBUFFER_PUTSBYTE_OFFSET UNITYSDK_OFFSET(0x1F624DC0)
#define FLATBUFFERS_BYTEBUFFER_PUTSHORT_OFFSET UNITYSDK_OFFSET(0x1F625690)
#define FLATBUFFERS_BYTEBUFFER_PUTSTRINGUTF16_OFFSET UNITYSDK_OFFSET(0x1F6250F0)
#define FLATBUFFERS_BYTEBUFFER_PUTSTRINGUTF8_OFFSET UNITYSDK_OFFSET(0x1F6254A0)
#define FLATBUFFERS_BYTEBUFFER_PUTUINT_OFFSET UNITYSDK_OFFSET(0x1F625840)
#define FLATBUFFERS_BYTEBUFFER_PUTULONG_OFFSET UNITYSDK_OFFSET(0x1F6259E0)
#define FLATBUFFERS_BYTEBUFFER_PUTUSHORT_OFFSET UNITYSDK_OFFSET(0x1F6256A0)
#define FLATBUFFERS_BYTEBUFFER_PUT_OFFSET UNITYSDK_OFFSET(0x1F6250E0)
#define FLATBUFFERS_BYTEBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x1F624BF0)
#define FLATBUFFERS_BYTEBUFFER_REVERSEBYTES_1_OFFSET UNITYSDK_OFFSET(0x1F624D20)
#define FLATBUFFERS_BYTEBUFFER_REVERSEBYTES_2_OFFSET UNITYSDK_OFFSET(0x1F624D30)
#define FLATBUFFERS_BYTEBUFFER_REVERSEBYTES_OFFSET UNITYSDK_OFFSET(0x1F624D10)
#define FLATBUFFERS_BYTEBUFFER_SET_ISMONOSTRING_OFFSET UNITYSDK_OFFSET(0x1F624BA0)
#define FLATBUFFERS_BYTEBUFFER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F624BC0)
#define FLATBUFFERS_BYTEBUFFER_TOARRAY_OFFSET UNITYSDK_OFFSET(0x1F624C30)
#define FLATBUFFERS_BYTEBUFFER_TOFULLARRAY_OFFSET UNITYSDK_OFFSET(0x1F624C70)
#define FLATBUFFERS_BYTEBUFFER_TOSIZEDARRAY_OFFSET UNITYSDK_OFFSET(0x1F624C40)
#define FLATBUFFERS_BYTEBUFFER_TOSPAN_OFFSET UNITYSDK_OFFSET(0x1F624CA0)
#define FLATBUFFERS_BYTEBUFFER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F626780)
#define FLATBUFFERS_BYTEBUFFER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6243F0)
#define FLATBUFFERS_BYTEBUFFER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F624500)
#define FLATBUFFERS_BYTEBUFFER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F6245E0)
#define FLATBUFFERS_BYTEBUFFER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1F6249A0)
#define FLATBUFFERS_BYTEBUFFER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1F624A20)
#define FLATBUFFERS_BYTEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6243E0)

namespace FlatBuffers
{
	inline static constexpr unsigned int ByteBuffer_TypeDefinitionIndex = 6728;

	class ByteBuffer : public ::System::Object
	{
	public:
		static ::FlatBuffers::IFlatStringInternCache** StaticGet_StringInternCache()
		{
			return (::FlatBuffers::IFlatStringInternCache**)Il2CppClass::FromTypeDefinitionIndex(ByteBuffer_TypeDefinitionIndex)->GetStaticField(0x5B90);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_genericSizes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ByteBuffer_TypeDefinitionIndex)->GetStaticField(0x5B98);
		}
		static ::System::Boolean* StaticGet_g_UseNativeArray()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ByteBuffer_TypeDefinitionIndex)->GetStaticField(0x31B0);
		}
		::FlatBuffers::ByteBufferAllocator* _buffer; // 0x10
		::System::Int32 _pos; // 0x18
		::System::Boolean _IsMonoString_k__BackingField; // 0x1C

		::System::Void _ctor(::FlatBuffers::ByteBufferAllocator* allocator, ::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBufferAllocator*, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER__CTOR_OFFSET))(this, allocator, position);
		}

		::System::Void _ctor_1(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER__CTOR_1_OFFSET))(this, size);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER__CTOR_2_OFFSET))(this, buffer);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 pos, ::System::Boolean useNativeArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER__CTOR_3_OFFSET))(this, buffer, pos, useNativeArray);
		}

		::System::Void _ctor_4(::UnityEngine::TextAsset* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER__CTOR_4_OFFSET))(this, buffer);
		}

		::System::Void _ctor_5(::UnityEngine::TextAsset* buffer, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset*, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER__CTOR_5_OFFSET))(this, buffer, pos);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER__CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_FINALIZE_OFFSET))(this);
		}

		::System::Boolean get_IsMonoString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GET_ISMONOSTRING_OFFSET))(this);
		}

		::System::Void set_IsMonoString(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_SET_ISMONOSTRING_OFFSET))(this, value);
		}

		::System::Int32 get_Position()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_SET_POSITION_OFFSET))(this, value);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GET_LENGTH_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_DISPOSE_OFFSET))(this);
		}

		::System::Void GrowFront(::System::Int32 newSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GROWFRONT_OFFSET))(this, newSize);
		}

		::Il2CppArray<::System::Byte>* ToArray(::System::Int32 pos, ::System::Int32 len)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_TOARRAY_OFFSET))(this, pos, len);
		}

		::Il2CppArray<::System::Byte>* ToSizedArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_TOSIZEDARRAY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ToFullArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_TOFULLARRAY_OFFSET))(this);
		}

		::System::Span_1<::System::Byte> ToSpan(::System::Int32 pos, ::System::Int32 len)
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_TOSPAN_OFFSET))(this, pos, len);
		}

		static ::System::UInt16 ReverseBytes(::System::UInt16 input)
		{
			return ((::System::UInt16(*)(::System::UInt16))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_REVERSEBYTES_OFFSET))(input);
		}

		static ::System::UInt32 ReverseBytes_1(::System::UInt32 input)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_REVERSEBYTES_1_OFFSET))(input);
		}

		static ::System::UInt64 ReverseBytes_2(::System::UInt64 input)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_REVERSEBYTES_2_OFFSET))(input);
		}

		::System::Void AssertOffsetAndLength(::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_ASSERTOFFSETANDLENGTH_OFFSET))(this, offset, length);
		}

		::System::Void PutSbyte(::System::Int32 offset, ::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::SByte))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTSBYTE_OFFSET))(this, offset, value);
		}

		::System::Void PutByte(::System::Int32 offset, ::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTBYTE_OFFSET))(this, offset, value);
		}

		::System::Void PutByte_1(::System::Int32 offset, ::System::Byte value, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTBYTE_1_OFFSET))(this, offset, value, count);
		}

		::System::Void Put(::System::Int32 offset, ::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUT_OFFSET))(this, offset, value);
		}

		::System::Void PutStringUTF16(::System::Int32 offset, ::System::String* value, ::System::Int32 stringLen, ::System::Int32 monoLen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTSTRINGUTF16_OFFSET))(this, offset, value, stringLen, monoLen);
		}

		::System::Void PutStringUTF8(::System::Int32 offset, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTSTRINGUTF8_OFFSET))(this, offset, value);
		}

		::System::Void PutShort(::System::Int32 offset, ::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTSHORT_OFFSET))(this, offset, value);
		}

		::System::Void PutUshort(::System::Int32 offset, ::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTUSHORT_OFFSET))(this, offset, value);
		}

		::System::Void PutInt(::System::Int32 offset, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTINT_OFFSET))(this, offset, value);
		}

		::System::Void PutUint(::System::Int32 offset, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTUINT_OFFSET))(this, offset, value);
		}

		::System::Void PutLong(::System::Int32 offset, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTLONG_OFFSET))(this, offset, value);
		}

		::System::Void PutUlong(::System::Int32 offset, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTULONG_OFFSET))(this, offset, value);
		}

		::System::Void PutFloat(::System::Int32 offset, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTFLOAT_OFFSET))(this, offset, value);
		}

		::System::Void PutDouble(::System::Int32 offset, ::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTDOUBLE_OFFSET))(this, offset, value);
		}

		::System::SByte GetSbyte(::System::Int32 index)
		{
			return ((::System::SByte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETSBYTE_OFFSET))(this, index);
		}

		::System::Byte Get(::System::Int32 index)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GET_OFFSET))(this, index);
		}

		::System::String* GetString(::System::Int32 startPos, ::System::Int32 len)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETSTRING_OFFSET))(this, startPos, len);
		}

		::System::String* GetStringUTF8(::System::Int32 startPos, ::System::Int32 len)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETSTRINGUTF8_OFFSET))(this, startPos, len);
		}

		::System::Int16 GetShort(::System::Int32 offset)
		{
			return ((::System::Int16(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETSHORT_OFFSET))(this, offset);
		}

		::System::UInt16 GetUshort(::System::Int32 offset)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETUSHORT_OFFSET))(this, offset);
		}

		::System::Int32 GetInt(::System::Int32 offset)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETINT_OFFSET))(this, offset);
		}

		::System::UInt32 GetUint(::System::Int32 offset)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETUINT_OFFSET))(this, offset);
		}

		::System::Int64 GetLong(::System::Int32 offset)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETLONG_OFFSET))(this, offset);
		}

		::System::UInt64 GetUlong(::System::Int32 offset)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETULONG_OFFSET))(this, offset);
		}

		::System::Single GetFloat(::System::Int32 offset)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETFLOAT_OFFSET))(this, offset);
		}

		::System::Double GetDouble(::System::Int32 offset)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETDOUBLE_OFFSET))(this, offset);
		}
	};
}
