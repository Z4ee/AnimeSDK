#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseDataReader.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/Sirenix/Serialization/EntryType.h"
#include "unitysdk/Sirenix/Serialization/SerializationNode.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"

namespace Sirenix::Serialization { class DeserializationContext; }
namespace Sirenix::Serialization { class TwoWaySerializationBinder; }
namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_CONSUMECURRENTENTRY_OFFSET UNITYSDK_OFFSET(0x1B10B290)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B10AE90)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_ENTERARRAY_OFFSET UNITYSDK_OFFSET(0x1B10B020)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_ENTERNODE_OFFSET UNITYSDK_OFFSET(0x1B10B2C0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_EXITARRAY_OFFSET UNITYSDK_OFFSET(0x1B10B940)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_EXITNODE_OFFSET UNITYSDK_OFFSET(0x1B10BB30)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_GETDATADUMP_OFFSET UNITYSDK_OFFSET(0x1B10E770)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_GET_INDEXISVALID_OFFSET UNITYSDK_OFFSET(0x1B10ACF0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_GET_NODES_OFFSET UNITYSDK_OFFSET(0x1B10AD10)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x1B10ADF0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_PEEKENTRY_1_OFFSET UNITYSDK_OFFSET(0x1B10B270)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_PEEKENTRY_OFFSET UNITYSDK_OFFSET(0x1B10AED0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_PREPARENEWSERIALIZATIONSESSION_OFFSET UNITYSDK_OFFSET(0x1B10AEA0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1B10BDA0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x1B10BEC0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READCHAR_OFFSET UNITYSDK_OFFSET(0x1B10C300)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READDECIMAL_OFFSET UNITYSDK_OFFSET(0x1B10C630)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x1B10C960)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READEXTERNALREFERENCE_1_OFFSET UNITYSDK_OFFSET(0x1B10D050)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READEXTERNALREFERENCE_2_OFFSET UNITYSDK_OFFSET(0x1B10D0C0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READEXTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B10CC80)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READGUID_OFFSET UNITYSDK_OFFSET(0x1B10D3E0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READINT16_OFFSET UNITYSDK_OFFSET(0x1B10D7B0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x1B10DBF0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x1B10D8D0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READINTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B10DD10)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READNULL_OFFSET UNITYSDK_OFFSET(0x1B10E030)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READSBYTE_OFFSET UNITYSDK_OFFSET(0x1B10E080)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READSINGLE_OFFSET UNITYSDK_OFFSET(0x1B10E1A0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1B10E4C0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READTONEXTENTRY_OFFSET UNITYSDK_OFFSET(0x1B10E9F0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READUINT16_OFFSET UNITYSDK_OFFSET(0x1B10E530)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READUINT32_OFFSET UNITYSDK_OFFSET(0x1B10E650)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READUINT64_OFFSET UNITYSDK_OFFSET(0x1B10BFE0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_SET_NODES_OFFSET UNITYSDK_OFFSET(0x1B10AD80)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x1B10AE40)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B10A3D0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x1B10EA30)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_10_OFFSET UNITYSDK_OFFSET(0x1B10EBB0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_11_OFFSET UNITYSDK_OFFSET(0x1B10EBD0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_12_OFFSET UNITYSDK_OFFSET(0x1B10EC00)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_13_OFFSET UNITYSDK_OFFSET(0x1B10EC30)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_1_OFFSET UNITYSDK_OFFSET(0x1B10EA50)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_2_OFFSET UNITYSDK_OFFSET(0x1B10EA70)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_3_OFFSET UNITYSDK_OFFSET(0x1B10EA90)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_4_OFFSET UNITYSDK_OFFSET(0x1B10EAB0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_5_OFFSET UNITYSDK_OFFSET(0x1B10EAE0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_6_OFFSET UNITYSDK_OFFSET(0x1B10EB00)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_7_OFFSET UNITYSDK_OFFSET(0x1B10EB20)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_8_OFFSET UNITYSDK_OFFSET(0x1B10EB40)
#define SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_9_OFFSET UNITYSDK_OFFSET(0x1B10EB70)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SerializationNodeDataReader_TypeDefinitionIndex = 7297;

	class SerializationNodeDataReader : public ::Sirenix::Serialization::BaseDataReader
	{
	public:
		::System::String* peekedEntryName; // 0x38
		::System::String* peekedEntryData; // 0x40
		::System::Collections::Generic::List_1<::Sirenix::Serialization::SerializationNode>* nodes; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Delegate*>* primitiveTypeReaders; // 0x50
		::System::Int32 currentIndex; // 0x58
		::System::Nullable_1<::Sirenix::Serialization::EntryType> peekedEntryType; // 0x5C

		::System::Void _ctor(::Sirenix::Serialization::DeserializationContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER__CTOR_OFFSET))(this, context);
		}

		::System::Boolean get_IndexIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_GET_INDEXISVALID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Sirenix::Serialization::SerializationNode>* get_Nodes()
		{
			return ((::System::Collections::Generic::List_1<::Sirenix::Serialization::SerializationNode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_GET_NODES_OFFSET))(this);
		}

		::System::Void set_Nodes(::System::Collections::Generic::List_1<::Sirenix::Serialization::SerializationNode>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Sirenix::Serialization::SerializationNode>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_SET_NODES_OFFSET))(this, value);
		}

		::System::IO::Stream* get_Stream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_Stream(::System::IO::Stream* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_SET_STREAM_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_DISPOSE_OFFSET))(this);
		}

		::System::Void PrepareNewSerializationSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_PREPARENEWSERIALIZATIONSESSION_OFFSET))(this);
		}

		::Sirenix::Serialization::EntryType PeekEntry(::Sirenix::Serialization::BufferedString& name)
		{
			return ((::Sirenix::Serialization::EntryType(*)(::PVOID, ::Sirenix::Serialization::BufferedString&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_PEEKENTRY_OFFSET))(this, name);
		}

		::System::Boolean EnterArray(::System::Int64& length)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_ENTERARRAY_OFFSET))(this, length);
		}

		::System::Boolean EnterNode(::System::Type* expectedType, ::System::String* expectedTypeName, ::Sirenix::Serialization::TwoWaySerializationBinder* expectedBinder, ::System::Type*& type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::String*, ::Sirenix::Serialization::TwoWaySerializationBinder*, ::System::Type*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_ENTERNODE_OFFSET))(this, expectedType, expectedTypeName, expectedBinder, type);
		}

		::System::Boolean ExitArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_EXITARRAY_OFFSET))(this);
		}

		::System::Boolean ExitNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_EXITNODE_OFFSET))(this);
		}

		::System::Boolean ReadBoolean(::System::Boolean& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READBOOLEAN_OFFSET))(this, value);
		}

		::System::Boolean ReadByte(::System::Byte& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READBYTE_OFFSET))(this, value);
		}

		::System::Boolean ReadChar(::System::Char& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READCHAR_OFFSET))(this, value);
		}

		::System::Boolean ReadDecimal(::System::Decimal& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Decimal&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READDECIMAL_OFFSET))(this, value);
		}

		::System::Boolean ReadDouble(::System::Double& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READDOUBLE_OFFSET))(this, value);
		}

		::System::Boolean ReadExternalReference(::System::Guid& guid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READEXTERNALREFERENCE_OFFSET))(this, guid);
		}

		::System::Boolean ReadExternalReference_1(::System::String*& id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READEXTERNALREFERENCE_1_OFFSET))(this, id);
		}

		::System::Boolean ReadExternalReference_2(::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READEXTERNALREFERENCE_2_OFFSET))(this, index);
		}

		::System::Boolean ReadGuid(::System::Guid& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READGUID_OFFSET))(this, value);
		}

		::System::Boolean ReadInt16(::System::Int16& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READINT16_OFFSET))(this, value);
		}

		::System::Boolean ReadInt32(::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READINT32_OFFSET))(this, value);
		}

		::System::Boolean ReadInt64(::System::Int64& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READINT64_OFFSET))(this, value);
		}

		::System::Boolean ReadInternalReference(::System::Int32& id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READINTERNALREFERENCE_OFFSET))(this, id);
		}

		::System::Boolean ReadNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READNULL_OFFSET))(this);
		}

		::System::Boolean ReadSByte(::System::SByte& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::SByte&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READSBYTE_OFFSET))(this, value);
		}

		::System::Boolean ReadSingle(::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READSINGLE_OFFSET))(this, value);
		}

		::System::Boolean ReadString(::System::String*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READSTRING_OFFSET))(this, value);
		}

		::System::Boolean ReadUInt16(::System::UInt16& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READUINT16_OFFSET))(this, value);
		}

		::System::Boolean ReadUInt32(::System::UInt32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READUINT32_OFFSET))(this, value);
		}

		::System::Boolean ReadUInt64(::System::UInt64& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READUINT64_OFFSET))(this, value);
		}

		::System::String* GetDataDump()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_GETDATADUMP_OFFSET))(this);
		}

		::System::Void ConsumeCurrentEntry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_CONSUMECURRENTENTRY_OFFSET))(this);
		}

		::Sirenix::Serialization::EntryType PeekEntry_1()
		{
			return ((::Sirenix::Serialization::EntryType(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_PEEKENTRY_1_OFFSET))(this);
		}

		::Sirenix::Serialization::EntryType ReadToNextEntry()
		{
			return ((::Sirenix::Serialization::EntryType(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER_READTONEXTENTRY_OFFSET))(this);
		}

		::System::Char __ctor_b__6_0()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_0_OFFSET))(this);
		}

		::System::SByte __ctor_b__6_1()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_1_OFFSET))(this);
		}

		::System::Int16 __ctor_b__6_2()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_2_OFFSET))(this);
		}

		::System::Int32 __ctor_b__6_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_3_OFFSET))(this);
		}

		::System::Int64 __ctor_b__6_4()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_4_OFFSET))(this);
		}

		::System::Byte __ctor_b__6_5()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_5_OFFSET))(this);
		}

		::System::UInt16 __ctor_b__6_6()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_6_OFFSET))(this);
		}

		::System::UInt32 __ctor_b__6_7()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_7_OFFSET))(this);
		}

		::System::UInt64 __ctor_b__6_8()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_8_OFFSET))(this);
		}

		::System::Decimal __ctor_b__6_9()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_9_OFFSET))(this);
		}

		::System::Boolean __ctor_b__6_10()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_10_OFFSET))(this);
		}

		::System::Single __ctor_b__6_11()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_11_OFFSET))(this);
		}

		::System::Double __ctor_b__6_12()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_12_OFFSET))(this);
		}

		::System::Guid __ctor_b__6_13()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONNODEDATAREADER___CTOR_B__6_13_OFFSET))(this);
		}
	};
}
