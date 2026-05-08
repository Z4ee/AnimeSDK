#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseDataWriter.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"

namespace Sirenix::Serialization { class SerializationContext; }
namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class Stream; }

#define SIRENIX_SERIALIZATION_JSONDATAWRITER_BEGINARRAYNODE_OFFSET UNITYSDK_OFFSET(0x1BCF3560)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_BEGINREFERENCENODE_OFFSET UNITYSDK_OFFSET(0x1BCF2520)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_BEGINSTRUCTNODE_OFFSET UNITYSDK_OFFSET(0x1BCF3050)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_BUFFER_WRITESTRING_WITHESCAPE_OFFSET UNITYSDK_OFFSET(0x1BCF3F00)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_CREATEBYTETOHEXLOOKUP_OFFSET UNITYSDK_OFFSET(0x1BCF5070)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BCF4A10)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_ENDARRAYNODE_OFFSET UNITYSDK_OFFSET(0x1BCF36A0)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_ENDNODE_OFFSET UNITYSDK_OFFSET(0x1BCF30F0)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_ENSUREBUFFERSPACE_OFFSET UNITYSDK_OFFSET(0x1BCF3460)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_FLUSHTOSTREAM_OFFSET UNITYSDK_OFFSET(0x1BCF24B0)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_GETDATADUMP_OFFSET UNITYSDK_OFFSET(0x1BCF4AB0)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_MARKJUSTSTARTED_OFFSET UNITYSDK_OFFSET(0x1BCF24A0)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_PREPARENEWSERIALIZATIONSESSION_OFFSET UNITYSDK_OFFSET(0x1BCF4A20)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_STARTNEWLINE_OFFSET UNITYSDK_OFFSET(0x1BCF3170)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1BCF3700)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1BCF3770)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITECHAR_OFFSET UNITYSDK_OFFSET(0x1BCF3850)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEDECIMAL_OFFSET UNITYSDK_OFFSET(0x1BCF3BB0)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x1BCF3C40)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEENTRY_1_OFFSET UNITYSDK_OFFSET(0x1BCF4D00)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEENTRY_OFFSET UNITYSDK_OFFSET(0x1BCF2630)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEEXTERNALREFERENCE_1_OFFSET UNITYSDK_OFFSET(0x1BCF48A0)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEEXTERNALREFERENCE_2_OFFSET UNITYSDK_OFFSET(0x1BCF4910)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEEXTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BCF4820)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEGUID_OFFSET UNITYSDK_OFFSET(0x1BCF4750)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEINT16_OFFSET UNITYSDK_OFFSET(0x1BCF3E00)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x1BCF2930)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEINT64_OFFSET UNITYSDK_OFFSET(0x1BCF3630)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEINTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BCF3D00)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x1BCF3CC0)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITESBYTE_OFFSET UNITYSDK_OFFSET(0x1BCF3D80)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITESINGLE_OFFSET UNITYSDK_OFFSET(0x1BCF3E80)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1BCF38F0)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITETYPEENTRY_OFFSET UNITYSDK_OFFSET(0x1BCF29A0)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEUINT16_OFFSET UNITYSDK_OFFSET(0x1BCF49A0)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEUINT32_OFFSET UNITYSDK_OFFSET(0x1BCF47B0)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEUINT64_OFFSET UNITYSDK_OFFSET(0x1BCF37E0)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCF5210)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BCF1710)
#define SIRENIX_SERIALIZATION_JSONDATAWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCF1700)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int JsonDataWriter_TypeDefinitionIndex = 7294;

	class JsonDataWriter : public ::Sirenix::Serialization::BaseDataWriter
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_ByteToHexCharLookup()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(JsonDataWriter_TypeDefinitionIndex)->GetStaticField(0x64F0);
		}
		static ::System::String** StaticGet_NEW_LINE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonDataWriter_TypeDefinitionIndex)->GetStaticField(0x64F8);
		}
		::Il2CppArray<::System::Byte>* buffer; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Delegate*>* primitiveTypeWriters; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>* seenTypes; // 0x48
		::System::Boolean forceNoSeparatorNextLine; // 0x50
		::System::Boolean FormatAsReadable; // 0x51
		::System::Boolean EnableTypeOptimization; // 0x52
		::System::Boolean justStarted; // 0x53
		::System::Int32 bufferIndex; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::Sirenix::Serialization::SerializationContext* context, ::System::Boolean formatAsReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Sirenix::Serialization::SerializationContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER__CTOR_1_OFFSET))(this, stream, context, formatAsReadable);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER__CCTOR_OFFSET))();
		}

		::System::Void MarkJustStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_MARKJUSTSTARTED_OFFSET))(this);
		}

		::System::Void FlushToStream()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_FLUSHTOSTREAM_OFFSET))(this);
		}

		::System::Void BeginReferenceNode(::System::String* name, ::System::Type* type, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_BEGINREFERENCENODE_OFFSET))(this, name, type, id);
		}

		::System::Void BeginStructNode(::System::String* name, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_BEGINSTRUCTNODE_OFFSET))(this, name, type);
		}

		::System::Void EndNode(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_ENDNODE_OFFSET))(this, name);
		}

		::System::Void BeginArrayNode(::System::Int64 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_BEGINARRAYNODE_OFFSET))(this, length);
		}

		::System::Void EndArrayNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_ENDARRAYNODE_OFFSET))(this);
		}

		::System::Void WriteBoolean(::System::String* name, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEBOOLEAN_OFFSET))(this, name, value);
		}

		::System::Void WriteByte(::System::String* name, ::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Byte))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEBYTE_OFFSET))(this, name, value);
		}

		::System::Void WriteChar(::System::String* name, ::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITECHAR_OFFSET))(this, name, value);
		}

		::System::Void WriteDecimal(::System::String* name, ::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Decimal))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEDECIMAL_OFFSET))(this, name, value);
		}

		::System::Void WriteDouble(::System::String* name, ::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEDOUBLE_OFFSET))(this, name, value);
		}

		::System::Void WriteInt32(::System::String* name, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEINT32_OFFSET))(this, name, value);
		}

		::System::Void WriteInt64(::System::String* name, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEINT64_OFFSET))(this, name, value);
		}

		::System::Void WriteNull(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITENULL_OFFSET))(this, name);
		}

		::System::Void WriteInternalReference(::System::String* name, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEINTERNALREFERENCE_OFFSET))(this, name, id);
		}

		::System::Void WriteSByte(::System::String* name, ::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::SByte))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITESBYTE_OFFSET))(this, name, value);
		}

		::System::Void WriteInt16(::System::String* name, ::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEINT16_OFFSET))(this, name, value);
		}

		::System::Void WriteSingle(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITESINGLE_OFFSET))(this, name, value);
		}

		::System::Void WriteString(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITESTRING_OFFSET))(this, name, value);
		}

		::System::Void WriteGuid(::System::String* name, ::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEGUID_OFFSET))(this, name, value);
		}

		::System::Void WriteUInt32(::System::String* name, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEUINT32_OFFSET))(this, name, value);
		}

		::System::Void WriteUInt64(::System::String* name, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEUINT64_OFFSET))(this, name, value);
		}

		::System::Void WriteExternalReference(::System::String* name, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEEXTERNALREFERENCE_OFFSET))(this, name, index);
		}

		::System::Void WriteExternalReference_1(::System::String* name, ::System::Guid guid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEEXTERNALREFERENCE_1_OFFSET))(this, name, guid);
		}

		::System::Void WriteExternalReference_2(::System::String* name, ::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEEXTERNALREFERENCE_2_OFFSET))(this, name, id);
		}

		::System::Void WriteUInt16(::System::String* name, ::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEUINT16_OFFSET))(this, name, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_DISPOSE_OFFSET))(this);
		}

		::System::Void PrepareNewSerializationSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_PREPARENEWSERIALIZATIONSESSION_OFFSET))(this);
		}

		::System::String* GetDataDump()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_GETDATADUMP_OFFSET))(this);
		}

		::System::Void WriteEntry(::System::String* name, ::System::String* contents)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEENTRY_OFFSET))(this, name, contents);
		}

		::System::Void WriteEntry_1(::System::String* name, ::System::String* contents, ::System::Char surroundContentsWith)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITEENTRY_1_OFFSET))(this, name, contents, surroundContentsWith);
		}

		::System::Void WriteTypeEntry(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_WRITETYPEENTRY_OFFSET))(this, type);
		}

		::System::Void StartNewLine(::System::Boolean noSeparator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_STARTNEWLINE_OFFSET))(this, noSeparator);
		}

		::System::Void EnsureBufferSpace(::System::Int32 space)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_ENSUREBUFFERSPACE_OFFSET))(this, space);
		}

		::System::Void Buffer_WriteString_WithEscape(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_BUFFER_WRITESTRING_WITHESCAPE_OFFSET))(this, str);
		}

		static ::Il2CppArray<::System::UInt32>* CreateByteToHexLookup()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAWRITER_CREATEBYTETOHEXLOOKUP_OFFSET))();
		}
	};
}
