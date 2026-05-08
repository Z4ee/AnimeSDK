#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseDataReader.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/Sirenix/Serialization/EntryType.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"

namespace Sirenix::Serialization { class DeserializationContext; }
namespace Sirenix::Serialization { class JsonTextReader; }
namespace Sirenix::Serialization { class TwoWaySerializationBinder; }
namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class Stream; }

#define SIRENIX_SERIALIZATION_JSONDATAREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1D89B0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_ENTERARRAY_OFFSET UNITYSDK_OFFSET(0x1C1D98F0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_ENTERNODE_OFFSET UNITYSDK_OFFSET(0x1C1D8AF0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_EXITARRAY_OFFSET UNITYSDK_OFFSET(0x1C1D9E20)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_EXITNODE_OFFSET UNITYSDK_OFFSET(0x1C1D96C0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_GETDATADUMP_OFFSET UNITYSDK_OFFSET(0x1C1DC790)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x1C1D88A0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_MARKENTRYCONSUMED_OFFSET UNITYSDK_OFFSET(0x1C1DA140)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_PEEKENTRY_1_OFFSET UNITYSDK_OFFSET(0x1C1D9560)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_PEEKENTRY_OFFSET UNITYSDK_OFFSET(0x1C1D89D0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_PREPARENEWSERIALIZATIONSESSION_OFFSET UNITYSDK_OFFSET(0x1C1DC6A0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READANYINTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C1DA270)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1C1D9FF0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x1C1DB690)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READCHAR_OFFSET UNITYSDK_OFFSET(0x1C1DABC0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READDECIMAL_OFFSET UNITYSDK_OFFSET(0x1C1DBD00)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x1C1DC340)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READEXTERNALREFERENCE_1_OFFSET UNITYSDK_OFFSET(0x1C1DA780)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READEXTERNALREFERENCE_2_OFFSET UNITYSDK_OFFSET(0x1C1DAAD0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READEXTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C1DA680)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READGUID_OFFSET UNITYSDK_OFFSET(0x1C1DAE30)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READINT16_OFFSET UNITYSDK_OFFSET(0x1C1DB570)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x1C1D95A0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x1C1DB260)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READINTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C1DA170)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READNULL_OFFSET UNITYSDK_OFFSET(0x1C1DC650)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READSBYTE_OFFSET UNITYSDK_OFFSET(0x1C1DB140)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READSINGLE_OFFSET UNITYSDK_OFFSET(0x1C1DC030)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1C1DAD20)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READTONEXTENTRY_OFFSET UNITYSDK_OFFSET(0x1C1D9580)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READUINT16_OFFSET UNITYSDK_OFFSET(0x1C1DBAC0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READUINT32_OFFSET UNITYSDK_OFFSET(0x1C1DBBE0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READUINT64_OFFSET UNITYSDK_OFFSET(0x1C1DB7B0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x1C1D88B0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1D7F00)
#define SIRENIX_SERIALIZATION_JSONDATAREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D7EF0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1C1DC9D0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_10_OFFSET UNITYSDK_OFFSET(0x1C1DCB50)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_11_OFFSET UNITYSDK_OFFSET(0x1C1DCB70)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_12_OFFSET UNITYSDK_OFFSET(0x1C1DCBA0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_13_OFFSET UNITYSDK_OFFSET(0x1C1DCBD0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_1_OFFSET UNITYSDK_OFFSET(0x1C1DC9F0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_2_OFFSET UNITYSDK_OFFSET(0x1C1DCA10)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_3_OFFSET UNITYSDK_OFFSET(0x1C1DCA30)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_4_OFFSET UNITYSDK_OFFSET(0x1C1DCA50)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_5_OFFSET UNITYSDK_OFFSET(0x1C1DCA80)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_6_OFFSET UNITYSDK_OFFSET(0x1C1DCAA0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_7_OFFSET UNITYSDK_OFFSET(0x1C1DCAC0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_8_OFFSET UNITYSDK_OFFSET(0x1C1DCAE0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_9_OFFSET UNITYSDK_OFFSET(0x1C1DCB10)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int JsonDataReader_TypeDefinitionIndex = 7293;

	class JsonDataReader : public ::Sirenix::Serialization::BaseDataReader
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Type*>* seenTypes; // 0x38
		::System::String* peekedEntryContent; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Delegate*>* primitiveArrayReaders; // 0x48
		::Sirenix::Serialization::JsonTextReader* reader; // 0x50
		::System::String* peekedEntryName; // 0x58
		::System::Nullable_1<::Sirenix::Serialization::EntryType> peekedEntryType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::Sirenix::Serialization::DeserializationContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER__CTOR_1_OFFSET))(this, stream, context);
		}

		::System::IO::Stream* get_Stream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_Stream(::System::IO::Stream* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_SET_STREAM_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_DISPOSE_OFFSET))(this);
		}

		::Sirenix::Serialization::EntryType PeekEntry(::Sirenix::Serialization::BufferedString& name)
		{
			return ((::Sirenix::Serialization::EntryType(*)(::PVOID, ::Sirenix::Serialization::BufferedString&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_PEEKENTRY_OFFSET))(this, name);
		}

		::System::Boolean EnterNode(::System::Type* expectedType, ::System::String* expectedTypeName, ::Sirenix::Serialization::TwoWaySerializationBinder* expectedBinder, ::System::Type*& type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::String*, ::Sirenix::Serialization::TwoWaySerializationBinder*, ::System::Type*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_ENTERNODE_OFFSET))(this, expectedType, expectedTypeName, expectedBinder, type);
		}

		::System::Boolean ExitNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_EXITNODE_OFFSET))(this);
		}

		::System::Boolean EnterArray(::System::Int64& length)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_ENTERARRAY_OFFSET))(this, length);
		}

		::System::Boolean ExitArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_EXITARRAY_OFFSET))(this);
		}

		::System::Boolean ReadBoolean(::System::Boolean& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READBOOLEAN_OFFSET))(this, value);
		}

		::System::Boolean ReadInternalReference(::System::Int32& id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READINTERNALREFERENCE_OFFSET))(this, id);
		}

		::System::Boolean ReadExternalReference(::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READEXTERNALREFERENCE_OFFSET))(this, index);
		}

		::System::Boolean ReadExternalReference_1(::System::Guid& guid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READEXTERNALREFERENCE_1_OFFSET))(this, guid);
		}

		::System::Boolean ReadExternalReference_2(::System::String*& id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READEXTERNALREFERENCE_2_OFFSET))(this, id);
		}

		::System::Boolean ReadChar(::System::Char& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READCHAR_OFFSET))(this, value);
		}

		::System::Boolean ReadString(::System::String*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READSTRING_OFFSET))(this, value);
		}

		::System::Boolean ReadGuid(::System::Guid& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READGUID_OFFSET))(this, value);
		}

		::System::Boolean ReadSByte(::System::SByte& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::SByte&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READSBYTE_OFFSET))(this, value);
		}

		::System::Boolean ReadInt16(::System::Int16& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READINT16_OFFSET))(this, value);
		}

		::System::Boolean ReadInt32(::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READINT32_OFFSET))(this, value);
		}

		::System::Boolean ReadInt64(::System::Int64& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READINT64_OFFSET))(this, value);
		}

		::System::Boolean ReadByte(::System::Byte& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READBYTE_OFFSET))(this, value);
		}

		::System::Boolean ReadUInt16(::System::UInt16& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READUINT16_OFFSET))(this, value);
		}

		::System::Boolean ReadUInt32(::System::UInt32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READUINT32_OFFSET))(this, value);
		}

		::System::Boolean ReadUInt64(::System::UInt64& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READUINT64_OFFSET))(this, value);
		}

		::System::Boolean ReadDecimal(::System::Decimal& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Decimal&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READDECIMAL_OFFSET))(this, value);
		}

		::System::Boolean ReadSingle(::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READSINGLE_OFFSET))(this, value);
		}

		::System::Boolean ReadDouble(::System::Double& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READDOUBLE_OFFSET))(this, value);
		}

		::System::Boolean ReadNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READNULL_OFFSET))(this);
		}

		::System::Void PrepareNewSerializationSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_PREPARENEWSERIALIZATIONSESSION_OFFSET))(this);
		}

		::System::String* GetDataDump()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_GETDATADUMP_OFFSET))(this);
		}

		::Sirenix::Serialization::EntryType PeekEntry_1()
		{
			return ((::Sirenix::Serialization::EntryType(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_PEEKENTRY_1_OFFSET))(this);
		}

		::Sirenix::Serialization::EntryType ReadToNextEntry()
		{
			return ((::Sirenix::Serialization::EntryType(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READTONEXTENTRY_OFFSET))(this);
		}

		::System::Void MarkEntryConsumed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_MARKENTRYCONSUMED_OFFSET))(this);
		}

		::System::Boolean ReadAnyIntReference(::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READANYINTREFERENCE_OFFSET))(this, value);
		}

		::System::Char __ctor_b__7_0()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_0_OFFSET))(this);
		}

		::System::SByte __ctor_b__7_1()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_1_OFFSET))(this);
		}

		::System::Int16 __ctor_b__7_2()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_2_OFFSET))(this);
		}

		::System::Int32 __ctor_b__7_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_3_OFFSET))(this);
		}

		::System::Int64 __ctor_b__7_4()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_4_OFFSET))(this);
		}

		::System::Byte __ctor_b__7_5()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_5_OFFSET))(this);
		}

		::System::UInt16 __ctor_b__7_6()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_6_OFFSET))(this);
		}

		::System::UInt32 __ctor_b__7_7()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_7_OFFSET))(this);
		}

		::System::UInt64 __ctor_b__7_8()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_8_OFFSET))(this);
		}

		::System::Decimal __ctor_b__7_9()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_9_OFFSET))(this);
		}

		::System::Boolean __ctor_b__7_10()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_10_OFFSET))(this);
		}

		::System::Single __ctor_b__7_11()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_11_OFFSET))(this);
		}

		::System::Double __ctor_b__7_12()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_12_OFFSET))(this);
		}

		::System::Guid __ctor_b__7_13()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_13_OFFSET))(this);
		}
	};
}
