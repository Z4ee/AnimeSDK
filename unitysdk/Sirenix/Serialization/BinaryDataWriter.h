#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseDataWriter.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"

namespace Sirenix::Serialization { class SerializationContext; }
namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class Stream; }

#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_BEGINARRAYNODE_OFFSET UNITYSDK_OFFSET(0x1DA10E30)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_BEGINREFERENCENODE_OFFSET UNITYSDK_OFFSET(0x1DA110A0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_BEGINSTRUCTNODE_OFFSET UNITYSDK_OFFSET(0x1DA11C00)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DA11CE0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_ENDARRAYNODE_OFFSET UNITYSDK_OFFSET(0x1DA11DC0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_ENDNODE_OFFSET UNITYSDK_OFFSET(0x1DA11E20)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_ENSUREBUFFERSPACE_OFFSET UNITYSDK_OFFSET(0x1DA1A2D0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_FLUSHTOSTREAM_OFFSET UNITYSDK_OFFSET(0x1DA11D50)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_GETDATADUMP_OFFSET UNITYSDK_OFFSET(0x1DA192F0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_PREPARENEWSERIALIZATIONSESSION_OFFSET UNITYSDK_OFFSET(0x1DA19260)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_TRYENSUREBUFFERSPACE_OFFSET UNITYSDK_OFFSET(0x1DA1A3D0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_16_DECIMAL_OFFSET UNITYSDK_OFFSET(0x1DA1A010)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_16_GUID_OFFSET UNITYSDK_OFFSET(0x1DA1A170)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_2_CHAR_OFFSET UNITYSDK_OFFSET(0x1DA19A00)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_2_INT16_OFFSET UNITYSDK_OFFSET(0x1DA19A60)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_2_UINT16_OFFSET UNITYSDK_OFFSET(0x1DA19AC0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_4_FLOAT32_OFFSET UNITYSDK_OFFSET(0x1DA19C00)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_4_INT32_OFFSET UNITYSDK_OFFSET(0x1DA19B20)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_4_UINT32_OFFSET UNITYSDK_OFFSET(0x1DA19B90)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_8_FLOAT64_OFFSET UNITYSDK_OFFSET(0x1DA19F00)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_8_INT64_OFFSET UNITYSDK_OFFSET(0x1DA19D00)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_8_UINT64_OFFSET UNITYSDK_OFFSET(0x1DA19E00)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1DA17CC0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1DA17DE0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITECHAR_OFFSET UNITYSDK_OFFSET(0x1DA17F00)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEDECIMAL_OFFSET UNITYSDK_OFFSET(0x1DA18070)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x1DA18140)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEEXTERNALREFERENCE_1_OFFSET UNITYSDK_OFFSET(0x1DA183B0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEEXTERNALREFERENCE_2_OFFSET UNITYSDK_OFFSET(0x1DA18540)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEEXTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1DA182E0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEGUID_OFFSET UNITYSDK_OFFSET(0x1DA18210)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEINT16_OFFSET UNITYSDK_OFFSET(0x1DA18BC0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x1DA18630)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEINT64_OFFSET UNITYSDK_OFFSET(0x1DA187C0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEINTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1DA18910)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x1DA18880)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_BOOL_OFFSET UNITYSDK_OFFSET(0x1DA125F0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_BYTE_OFFSET UNITYSDK_OFFSET(0x1DA11EA0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_CHAR_OFFSET UNITYSDK_OFFSET(0x1DA12B30)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_DECIMAL_OFFSET UNITYSDK_OFFSET(0x1DA15D10)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_DOUBLE_OFFSET UNITYSDK_OFFSET(0x1DA16CE0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_FLOAT_OFFSET UNITYSDK_OFFSET(0x1DA16540)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_GUID_OFFSET UNITYSDK_OFFSET(0x1DA17490)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_INT_OFFSET UNITYSDK_OFFSET(0x1DA13970)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_LONG_OFFSET UNITYSDK_OFFSET(0x1DA14080)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_SBYTE_OFFSET UNITYSDK_OFFSET(0x1DA120B0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_SHORT_OFFSET UNITYSDK_OFFSET(0x1DA13250)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_UINT_OFFSET UNITYSDK_OFFSET(0x1DA14E50)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_ULONG_OFFSET UNITYSDK_OFFSET(0x1DA15560)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_USHORT_OFFSET UNITYSDK_OFFSET(0x1DA14730)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITESBYTE_OFFSET UNITYSDK_OFFSET(0x1DA18AA0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITESINGLE_OFFSET UNITYSDK_OFFSET(0x1DA18D30)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITESTRINGFAST_OFFSET UNITYSDK_OFFSET(0x1DA11210)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1DA18E00)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITETYPE_OFFSET UNITYSDK_OFFSET(0x1DA194D0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEUINT16_OFFSET UNITYSDK_OFFSET(0x1DA190F0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEUINT32_OFFSET UNITYSDK_OFFSET(0x1DA18EA0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEUINT64_OFFSET UNITYSDK_OFFSET(0x1DA19030)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A460)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DA10CF0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA10BE0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BinaryDataWriter_TypeDefinitionIndex = 7419;

	class BinaryDataWriter : public ::Sirenix::Serialization::BaseDataWriter
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_2<::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*>*>** StaticGet_PrimitiveArrayWriters()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_2<::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(BinaryDataWriter_TypeDefinitionIndex)->GetStaticField(0x6520);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Delegate*>** StaticGet_PrimitiveGetBytesMethods()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(BinaryDataWriter_TypeDefinitionIndex)->GetStaticField(0x6528);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_PrimitiveSizes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BinaryDataWriter_TypeDefinitionIndex)->GetStaticField(0x6530);
		}
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>* types; // 0x38
		::Il2CppArray<::System::Byte>* small_buffer; // 0x40
		::Il2CppArray<::System::Byte>* buffer; // 0x48
		::System::Int32 bufferIndex; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::Sirenix::Serialization::SerializationContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER__CTOR_1_OFFSET))(this, stream, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER__CCTOR_OFFSET))();
		}

		::System::Void BeginArrayNode(::System::Int64 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_BEGINARRAYNODE_OFFSET))(this, length);
		}

		::System::Void BeginReferenceNode(::System::String* name, ::System::Type* type, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_BEGINREFERENCENODE_OFFSET))(this, name, type, id);
		}

		::System::Void BeginStructNode(::System::String* name, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_BEGINSTRUCTNODE_OFFSET))(this, name, type);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_DISPOSE_OFFSET))(this);
		}

		::System::Void EndArrayNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_ENDARRAYNODE_OFFSET))(this);
		}

		::System::Void EndNode(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_ENDNODE_OFFSET))(this, name);
		}

		static ::System::Void WritePrimitiveArray_byte(::Sirenix::Serialization::BinaryDataWriter* writer, ::System::Object* o)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_BYTE_OFFSET))(writer, o);
		}

		static ::System::Void WritePrimitiveArray_sbyte(::Sirenix::Serialization::BinaryDataWriter* writer, ::System::Object* o)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_SBYTE_OFFSET))(writer, o);
		}

		static ::System::Void WritePrimitiveArray_bool(::Sirenix::Serialization::BinaryDataWriter* writer, ::System::Object* o)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_BOOL_OFFSET))(writer, o);
		}

		static ::System::Void WritePrimitiveArray_char(::Sirenix::Serialization::BinaryDataWriter* writer, ::System::Object* o)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_CHAR_OFFSET))(writer, o);
		}

		static ::System::Void WritePrimitiveArray_short(::Sirenix::Serialization::BinaryDataWriter* writer, ::System::Object* o)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_SHORT_OFFSET))(writer, o);
		}

		static ::System::Void WritePrimitiveArray_int(::Sirenix::Serialization::BinaryDataWriter* writer, ::System::Object* o)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_INT_OFFSET))(writer, o);
		}

		static ::System::Void WritePrimitiveArray_long(::Sirenix::Serialization::BinaryDataWriter* writer, ::System::Object* o)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_LONG_OFFSET))(writer, o);
		}

		static ::System::Void WritePrimitiveArray_ushort(::Sirenix::Serialization::BinaryDataWriter* writer, ::System::Object* o)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_USHORT_OFFSET))(writer, o);
		}

		static ::System::Void WritePrimitiveArray_uint(::Sirenix::Serialization::BinaryDataWriter* writer, ::System::Object* o)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_UINT_OFFSET))(writer, o);
		}

		static ::System::Void WritePrimitiveArray_ulong(::Sirenix::Serialization::BinaryDataWriter* writer, ::System::Object* o)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_ULONG_OFFSET))(writer, o);
		}

		static ::System::Void WritePrimitiveArray_decimal(::Sirenix::Serialization::BinaryDataWriter* writer, ::System::Object* o)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_DECIMAL_OFFSET))(writer, o);
		}

		static ::System::Void WritePrimitiveArray_float(::Sirenix::Serialization::BinaryDataWriter* writer, ::System::Object* o)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_FLOAT_OFFSET))(writer, o);
		}

		static ::System::Void WritePrimitiveArray_double(::Sirenix::Serialization::BinaryDataWriter* writer, ::System::Object* o)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_DOUBLE_OFFSET))(writer, o);
		}

		static ::System::Void WritePrimitiveArray_Guid(::Sirenix::Serialization::BinaryDataWriter* writer, ::System::Object* o)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::BinaryDataWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEPRIMITIVEARRAY_GUID_OFFSET))(writer, o);
		}

		::System::Void WriteBoolean(::System::String* name, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEBOOLEAN_OFFSET))(this, name, value);
		}

		::System::Void WriteByte(::System::String* name, ::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Byte))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEBYTE_OFFSET))(this, name, value);
		}

		::System::Void WriteChar(::System::String* name, ::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITECHAR_OFFSET))(this, name, value);
		}

		::System::Void WriteDecimal(::System::String* name, ::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Decimal))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEDECIMAL_OFFSET))(this, name, value);
		}

		::System::Void WriteDouble(::System::String* name, ::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEDOUBLE_OFFSET))(this, name, value);
		}

		::System::Void WriteGuid(::System::String* name, ::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEGUID_OFFSET))(this, name, value);
		}

		::System::Void WriteExternalReference(::System::String* name, ::System::Guid guid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEEXTERNALREFERENCE_OFFSET))(this, name, guid);
		}

		::System::Void WriteExternalReference_1(::System::String* name, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEEXTERNALREFERENCE_1_OFFSET))(this, name, index);
		}

		::System::Void WriteExternalReference_2(::System::String* name, ::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEEXTERNALREFERENCE_2_OFFSET))(this, name, id);
		}

		::System::Void WriteInt32(::System::String* name, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEINT32_OFFSET))(this, name, value);
		}

		::System::Void WriteInt64(::System::String* name, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEINT64_OFFSET))(this, name, value);
		}

		::System::Void WriteNull(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITENULL_OFFSET))(this, name);
		}

		::System::Void WriteInternalReference(::System::String* name, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEINTERNALREFERENCE_OFFSET))(this, name, id);
		}

		::System::Void WriteSByte(::System::String* name, ::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::SByte))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITESBYTE_OFFSET))(this, name, value);
		}

		::System::Void WriteInt16(::System::String* name, ::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEINT16_OFFSET))(this, name, value);
		}

		::System::Void WriteSingle(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITESINGLE_OFFSET))(this, name, value);
		}

		::System::Void WriteString(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITESTRING_OFFSET))(this, name, value);
		}

		::System::Void WriteUInt32(::System::String* name, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEUINT32_OFFSET))(this, name, value);
		}

		::System::Void WriteUInt64(::System::String* name, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEUINT64_OFFSET))(this, name, value);
		}

		::System::Void WriteUInt16(::System::String* name, ::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITEUINT16_OFFSET))(this, name, value);
		}

		::System::Void PrepareNewSerializationSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_PREPARENEWSERIALIZATIONSESSION_OFFSET))(this);
		}

		::System::String* GetDataDump()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_GETDATADUMP_OFFSET))(this);
		}

		::System::Void WriteType(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITETYPE_OFFSET))(this, type);
		}

		::System::Void WriteStringFast(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_WRITESTRINGFAST_OFFSET))(this, value);
		}

		::System::Void FlushToStream()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_FLUSHTOSTREAM_OFFSET))(this);
		}

		::System::Void UNSAFE_WriteToBuffer_2_Char(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_2_CHAR_OFFSET))(this, value);
		}

		::System::Void UNSAFE_WriteToBuffer_2_Int16(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_2_INT16_OFFSET))(this, value);
		}

		::System::Void UNSAFE_WriteToBuffer_2_UInt16(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_2_UINT16_OFFSET))(this, value);
		}

		::System::Void UNSAFE_WriteToBuffer_4_Int32(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_4_INT32_OFFSET))(this, value);
		}

		::System::Void UNSAFE_WriteToBuffer_4_UInt32(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_4_UINT32_OFFSET))(this, value);
		}

		::System::Void UNSAFE_WriteToBuffer_4_Float32(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_4_FLOAT32_OFFSET))(this, value);
		}

		::System::Void UNSAFE_WriteToBuffer_8_Int64(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_8_INT64_OFFSET))(this, value);
		}

		::System::Void UNSAFE_WriteToBuffer_8_UInt64(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_8_UINT64_OFFSET))(this, value);
		}

		::System::Void UNSAFE_WriteToBuffer_8_Float64(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_8_FLOAT64_OFFSET))(this, value);
		}

		::System::Void UNSAFE_WriteToBuffer_16_Decimal(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_16_DECIMAL_OFFSET))(this, value);
		}

		::System::Void UNSAFE_WriteToBuffer_16_Guid(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_UNSAFE_WRITETOBUFFER_16_GUID_OFFSET))(this, value);
		}

		::System::Void EnsureBufferSpace(::System::Int32 space)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_ENSUREBUFFERSPACE_OFFSET))(this, space);
		}

		::System::Boolean TryEnsureBufferSpace(::System::Int32 space)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER_TRYENSUREBUFFERSPACE_OFFSET))(this, space);
		}
	};
}
