#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseDataWriter.h"
#include "unitysdk/Sirenix/Serialization/SerializationNode.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"

namespace Sirenix::Serialization { class SerializationContext; }
namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_BEGINARRAYNODE_OFFSET UNITYSDK_OFFSET(0x1B891AC0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_BEGINREFERENCENODE_OFFSET UNITYSDK_OFFSET(0x1B891BA0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_BEGINSTRUCTNODE_OFFSET UNITYSDK_OFFSET(0x1B891F80)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B892330)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_ENDARRAYNODE_OFFSET UNITYSDK_OFFSET(0x1B892340)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_ENDNODE_OFFSET UNITYSDK_OFFSET(0x1B8923F0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_FLUSHTOSTREAM_OFFSET UNITYSDK_OFFSET(0x1B8938E0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_GETDATADUMP_OFFSET UNITYSDK_OFFSET(0x1B8938F0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_GET_NODES_OFFSET UNITYSDK_OFFSET(0x1B890C60)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x1B891A20)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_PREPARENEWSERIALIZATIONSESSION_OFFSET UNITYSDK_OFFSET(0x1B8924C0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_SET_NODES_OFFSET UNITYSDK_OFFSET(0x1B890CD0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x1B891A70)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1B8924F0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1B8925E0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITECHAR_OFFSET UNITYSDK_OFFSET(0x1B8926F0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEDECIMAL_OFFSET UNITYSDK_OFFSET(0x1B892820)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x1B892A50)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEEXTERNALREFERENCE_1_OFFSET UNITYSDK_OFFSET(0x1B892C60)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEEXTERNALREFERENCE_2_OFFSET UNITYSDK_OFFSET(0x1B892D10)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEEXTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B892B60)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEGUID_OFFSET UNITYSDK_OFFSET(0x1B892E20)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEINT16_OFFSET UNITYSDK_OFFSET(0x1B892F20)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x1B893020)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEINT64_OFFSET UNITYSDK_OFFSET(0x1B893130)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEINTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B893240)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x1B893350)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITESBYTE_OFFSET UNITYSDK_OFFSET(0x1B893400)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITESINGLE_OFFSET UNITYSDK_OFFSET(0x1B892940)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1B893500)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEUINT16_OFFSET UNITYSDK_OFFSET(0x1B8935B0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEUINT32_OFFSET UNITYSDK_OFFSET(0x1B8936C0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEUINT64_OFFSET UNITYSDK_OFFSET(0x1B8937D0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B890D40)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SerializationNodeDataWriter_TypeDefinitionIndex = 7299;

	class SerializationNodeDataWriter : public ::Sirenix::Serialization::BaseDataWriter
	{
	public:
		::System::Collections::Generic::List_1<::Sirenix::Serialization::SerializationNode>* nodes; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Delegate*>* primitiveTypeWriters; // 0x40

		::System::Void _ctor(::Sirenix::Serialization::SerializationContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER__CTOR_OFFSET))(this, context);
		}

		::System::Collections::Generic::List_1<::Sirenix::Serialization::SerializationNode>* get_Nodes()
		{
			return ((::System::Collections::Generic::List_1<::Sirenix::Serialization::SerializationNode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_GET_NODES_OFFSET))(this);
		}

		::System::Void set_Nodes(::System::Collections::Generic::List_1<::Sirenix::Serialization::SerializationNode>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Sirenix::Serialization::SerializationNode>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_SET_NODES_OFFSET))(this, value);
		}

		::System::IO::Stream* get_Stream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_Stream(::System::IO::Stream* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_SET_STREAM_OFFSET))(this, value);
		}

		::System::Void BeginArrayNode(::System::Int64 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_BEGINARRAYNODE_OFFSET))(this, length);
		}

		::System::Void BeginReferenceNode(::System::String* name, ::System::Type* type, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_BEGINREFERENCENODE_OFFSET))(this, name, type, id);
		}

		::System::Void BeginStructNode(::System::String* name, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_BEGINSTRUCTNODE_OFFSET))(this, name, type);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_DISPOSE_OFFSET))(this);
		}

		::System::Void EndArrayNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_ENDARRAYNODE_OFFSET))(this);
		}

		::System::Void EndNode(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_ENDNODE_OFFSET))(this, name);
		}

		::System::Void PrepareNewSerializationSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_PREPARENEWSERIALIZATIONSESSION_OFFSET))(this);
		}

		::System::Void WriteBoolean(::System::String* name, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEBOOLEAN_OFFSET))(this, name, value);
		}

		::System::Void WriteByte(::System::String* name, ::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Byte))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEBYTE_OFFSET))(this, name, value);
		}

		::System::Void WriteChar(::System::String* name, ::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITECHAR_OFFSET))(this, name, value);
		}

		::System::Void WriteDecimal(::System::String* name, ::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Decimal))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEDECIMAL_OFFSET))(this, name, value);
		}

		::System::Void WriteSingle(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITESINGLE_OFFSET))(this, name, value);
		}

		::System::Void WriteDouble(::System::String* name, ::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEDOUBLE_OFFSET))(this, name, value);
		}

		::System::Void WriteExternalReference(::System::String* name, ::System::Guid guid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEEXTERNALREFERENCE_OFFSET))(this, name, guid);
		}

		::System::Void WriteExternalReference_1(::System::String* name, ::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEEXTERNALREFERENCE_1_OFFSET))(this, name, id);
		}

		::System::Void WriteExternalReference_2(::System::String* name, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEEXTERNALREFERENCE_2_OFFSET))(this, name, index);
		}

		::System::Void WriteGuid(::System::String* name, ::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEGUID_OFFSET))(this, name, value);
		}

		::System::Void WriteInt16(::System::String* name, ::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEINT16_OFFSET))(this, name, value);
		}

		::System::Void WriteInt32(::System::String* name, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEINT32_OFFSET))(this, name, value);
		}

		::System::Void WriteInt64(::System::String* name, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEINT64_OFFSET))(this, name, value);
		}

		::System::Void WriteInternalReference(::System::String* name, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEINTERNALREFERENCE_OFFSET))(this, name, id);
		}

		::System::Void WriteNull(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITENULL_OFFSET))(this, name);
		}

		::System::Void WriteSByte(::System::String* name, ::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::SByte))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITESBYTE_OFFSET))(this, name, value);
		}

		::System::Void WriteString(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITESTRING_OFFSET))(this, name, value);
		}

		::System::Void WriteUInt16(::System::String* name, ::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEUINT16_OFFSET))(this, name, value);
		}

		::System::Void WriteUInt32(::System::String* name, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEUINT32_OFFSET))(this, name, value);
		}

		::System::Void WriteUInt64(::System::String* name, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_WRITEUINT64_OFFSET))(this, name, value);
		}

		::System::Void FlushToStream()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_FLUSHTOSTREAM_OFFSET))(this);
		}

		::System::String* GetDataDump()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAWRITER_GETDATADUMP_OFFSET))(this);
		}
	};
}
