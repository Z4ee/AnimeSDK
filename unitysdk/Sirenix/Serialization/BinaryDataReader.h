#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseDataReader.h"
#include "unitysdk/Sirenix/Serialization/BinaryDataReader_TypeRecord.h"
#include "unitysdk/Sirenix/Serialization/BinaryEntryType.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/Sirenix/Serialization/EntryType.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"

namespace Sirenix::Serialization { class DeserializationContext; }
namespace Sirenix::Serialization { class IOdinStringInternCache; }
namespace Sirenix::Serialization { class TwoWaySerializationBinder; }
namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define SIRENIX_SERIALIZATION_BINARYDATAREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DBEBEB0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_ENTERARRAY_OFFSET UNITYSDK_OFFSET(0x1DBEC940)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_ENTERNODE_OFFSET UNITYSDK_OFFSET(0x1DBECDA0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_EXITARRAY_OFFSET UNITYSDK_OFFSET(0x1DBEDE80)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_EXITNODE_OFFSET UNITYSDK_OFFSET(0x1DBEE150)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_GETDATADUMP_OFFSET UNITYSDK_OFFSET(0x1DBF1A70)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_HASBUFFERDATA_OFFSET UNITYSDK_OFFSET(0x1DBF4EC0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_INTERNSMALLSTRING_OFFSET UNITYSDK_OFFSET(0x1DBF2110)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_MARKENTRYCONTENTCONSUMED_OFFSET UNITYSDK_OFFSET(0x1DBF3F60)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_PEEKENTRY_1_OFFSET UNITYSDK_OFFSET(0x1DBF3FE0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_PEEKENTRY_OFFSET UNITYSDK_OFFSET(0x1DBEBEC0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_PREPARENEWSERIALIZATIONSESSION_OFFSET UNITYSDK_OFFSET(0x1DBF19B0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1DBEE4A0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x1DBEECE0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READCHAR_OFFSET UNITYSDK_OFFSET(0x1DBEF980)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READDECIMAL_OFFSET UNITYSDK_OFFSET(0x1DBF0AF0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x1DBF05F0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READENTIRESTREAMTOBUFFER_OFFSET UNITYSDK_OFFSET(0x1DBF4EF0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READEXTERNALREFERENCE_1_OFFSET UNITYSDK_OFFSET(0x1DBF1480)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READEXTERNALREFERENCE_2_OFFSET UNITYSDK_OFFSET(0x1DBF15F0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READEXTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1DBF1090)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READGUID_OFFSET UNITYSDK_OFFSET(0x1DBF13B0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READINT16_OFFSET UNITYSDK_OFFSET(0x1DBEF3A0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x1DBEF5E0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x1DBEE6F0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READINTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1DBF1770)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READNULL_OFFSET UNITYSDK_OFFSET(0x1DBF16C0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSBYTE_OFFSET UNITYSDK_OFFSET(0x1DBEE5D0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSINGLE_OFFSET UNITYSDK_OFFSET(0x1DBEFD10)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRINGVALUEFAST_OFFSET UNITYSDK_OFFSET(0x1DBF1EB0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRINGVALUETOBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1DBF2710)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRINGVALUETOBUFFER_OFFSET UNITYSDK_OFFSET(0x1DBF2520)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRINGVALUE_1_OFFSET UNITYSDK_OFFSET(0x1DBF21A0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1DBF1C00)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1DBF18E0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READTONEXTENTRY_OFFSET UNITYSDK_OFFSET(0x1DBF4000)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READTYPEENTRY_OFFSET UNITYSDK_OFFSET(0x1DBF2F00)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READUINT16_OFFSET UNITYSDK_OFFSET(0x1DBEF4C0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READUINT32_OFFSET UNITYSDK_OFFSET(0x1DBEF700)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READUINT64_OFFSET UNITYSDK_OFFSET(0x1DBEEE00)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_SKIPBUFFER_OFFSET UNITYSDK_OFFSET(0x1DBF2EE0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_SKIPPEEKEDENTRYCONTENT_OFFSET UNITYSDK_OFFSET(0x1DBF2A00)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_SKIPSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1DBF28B0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_16_DECIMAL_OFFSET UNITYSDK_OFFSET(0x1DBF4A20)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_16_GUID_OFFSET UNITYSDK_OFFSET(0x1DBF4C70)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_1_BYTE_OFFSET UNITYSDK_OFFSET(0x1DBF4030)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_1_SBYTE_OFFSET UNITYSDK_OFFSET(0x1DBF40A0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_2_CHAR_OFFSET UNITYSDK_OFFSET(0x1DBF4290)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_2_INT16_OFFSET UNITYSDK_OFFSET(0x1DBF4110)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_2_UINT16_OFFSET UNITYSDK_OFFSET(0x1DBF41D0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_4_FLOAT32_OFFSET UNITYSDK_OFFSET(0x1DBF44D0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_4_INT32_OFFSET UNITYSDK_OFFSET(0x1DBF4350)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_4_UINT32_OFFSET UNITYSDK_OFFSET(0x1DBF4410)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_8_FLOAT64_OFFSET UNITYSDK_OFFSET(0x1DBF48B0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_8_INT64_OFFSET UNITYSDK_OFFSET(0x1DBF45F0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_8_UINT64_OFFSET UNITYSDK_OFFSET(0x1DBF4750)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBF5160)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBEBD50)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBEBC10)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BinaryDataReader_TypeDefinitionIndex = 7416;

	class BinaryDataReader : public ::Sirenix::Serialization::BaseDataReader
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Delegate*>** StaticGet_PrimitiveFromByteMethods()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(BinaryDataReader_TypeDefinitionIndex)->GetStaticField(0x6320);
		}
		static ::Sirenix::Serialization::IOdinStringInternCache** StaticGet_StringInternCache()
		{
			return (::Sirenix::Serialization::IOdinStringInternCache**)Il2CppClass::FromTypeDefinitionIndex(BinaryDataReader_TypeDefinitionIndex)->GetStaticField(0x6328);
		}
		static ::System::Int32* StaticGet_MaxSmallStringInternLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BinaryDataReader_TypeDefinitionIndex)->GetStaticField(0x3300);
		}
		::Sirenix::Serialization::BufferedString peekedEntryName; // 0x38
		::Il2CppArray<::System::Byte>* buffer; // 0x48
		::Il2CppArray<::System::Byte>* internalBufferBackup; // 0x50
		::System::Collections::Generic::List_1<::Sirenix::Serialization::BinaryDataReader_TypeRecord>* types; // 0x58
		::System::Int32 bufferIndex; // 0x60
		::System::Nullable_1<::Sirenix::Serialization::EntryType> peekedEntryType; // 0x64
		::Sirenix::Serialization::BinaryEntryType peekedBinaryEntryType; // 0x66
		::System::Int32 bufferEnd; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::Sirenix::Serialization::DeserializationContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER__CTOR_1_OFFSET))(this, stream, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_DISPOSE_OFFSET))(this);
		}

		::Sirenix::Serialization::EntryType PeekEntry(::Sirenix::Serialization::BufferedString& name)
		{
			return ((::Sirenix::Serialization::EntryType(*)(::PVOID, ::Sirenix::Serialization::BufferedString&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_PEEKENTRY_OFFSET))(this, name);
		}

		::System::Boolean EnterArray(::System::Int64& length)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_ENTERARRAY_OFFSET))(this, length);
		}

		::System::Boolean EnterNode(::System::Type* expectedType, ::System::String* expectedTypeName, ::Sirenix::Serialization::TwoWaySerializationBinder* expectedBinder, ::System::Type*& type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::String*, ::Sirenix::Serialization::TwoWaySerializationBinder*, ::System::Type*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_ENTERNODE_OFFSET))(this, expectedType, expectedTypeName, expectedBinder, type);
		}

		::System::Boolean ExitArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_EXITARRAY_OFFSET))(this);
		}

		::System::Boolean ExitNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_EXITNODE_OFFSET))(this);
		}

		::System::Boolean ReadBoolean(::System::Boolean& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READBOOLEAN_OFFSET))(this, value);
		}

		::System::Boolean ReadSByte(::System::SByte& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::SByte&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READSBYTE_OFFSET))(this, value);
		}

		::System::Boolean ReadByte(::System::Byte& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READBYTE_OFFSET))(this, value);
		}

		::System::Boolean ReadInt16(::System::Int16& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READINT16_OFFSET))(this, value);
		}

		::System::Boolean ReadUInt16(::System::UInt16& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READUINT16_OFFSET))(this, value);
		}

		::System::Boolean ReadInt32(::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READINT32_OFFSET))(this, value);
		}

		::System::Boolean ReadUInt32(::System::UInt32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READUINT32_OFFSET))(this, value);
		}

		::System::Boolean ReadInt64(::System::Int64& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READINT64_OFFSET))(this, value);
		}

		::System::Boolean ReadUInt64(::System::UInt64& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READUINT64_OFFSET))(this, value);
		}

		::System::Boolean ReadChar(::System::Char& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READCHAR_OFFSET))(this, value);
		}

		::System::Boolean ReadSingle(::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READSINGLE_OFFSET))(this, value);
		}

		::System::Boolean ReadDouble(::System::Double& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READDOUBLE_OFFSET))(this, value);
		}

		::System::Boolean ReadDecimal(::System::Decimal& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Decimal&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READDECIMAL_OFFSET))(this, value);
		}

		::System::Boolean ReadExternalReference(::System::Guid& guid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READEXTERNALREFERENCE_OFFSET))(this, guid);
		}

		::System::Boolean ReadGuid(::System::Guid& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READGUID_OFFSET))(this, value);
		}

		::System::Boolean ReadExternalReference_1(::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READEXTERNALREFERENCE_1_OFFSET))(this, index);
		}

		::System::Boolean ReadExternalReference_2(::System::String*& id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READEXTERNALREFERENCE_2_OFFSET))(this, id);
		}

		::System::Boolean ReadNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READNULL_OFFSET))(this);
		}

		::System::Boolean ReadInternalReference(::System::Int32& id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READINTERNALREFERENCE_OFFSET))(this, id);
		}

		::System::Boolean ReadString(::System::String*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRING_OFFSET))(this, value);
		}

		::System::Void PrepareNewSerializationSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_PREPARENEWSERIALIZATIONSESSION_OFFSET))(this);
		}

		::System::String* GetDataDump()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_GETDATADUMP_OFFSET))(this);
		}

		::System::String* ReadStringValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRINGVALUE_OFFSET))(this);
		}

		::Sirenix::Serialization::BufferedString ReadStringValueFast()
		{
			return ((::Sirenix::Serialization::BufferedString(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRINGVALUEFAST_OFFSET))(this);
		}

		static ::System::String* InternSmallString(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_INTERNSMALLSTRING_OFFSET))(s);
		}

		::System::String* ReadStringValue_1(::System::Byte charSizeFlag, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRINGVALUE_1_OFFSET))(this, charSizeFlag, length);
		}

		::System::Void ReadStringValueToBuffer(::System::Byte charSizeFlag, ::System::Int32 length, ::System::Char* baseToPtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Int32, ::System::Char*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRINGVALUETOBUFFER_OFFSET))(this, charSizeFlag, length, baseToPtr);
		}

		static ::System::Int32 ReadStringValueToBuffer_1(::System::Char* baseToPtr, ::Il2CppArray<::System::Byte>* srcData, ::System::Int32 srcOffset, ::System::Int32 charCount, ::System::Boolean is8Bit)
		{
			return ((::System::Int32(*)(::System::Char*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRINGVALUETOBUFFER_1_OFFSET))(baseToPtr, srcData, srcOffset, charCount, is8Bit);
		}

		::System::Void SkipStringValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_SKIPSTRINGVALUE_OFFSET))(this);
		}

		::System::Void SkipPeekedEntryContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_SKIPPEEKEDENTRYCONTENT_OFFSET))(this);
		}

		::System::Boolean SkipBuffer(::System::Int32 amount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_SKIPBUFFER_OFFSET))(this, amount);
		}

		::System::Type* ReadTypeEntry(::System::Type* expectedType, ::System::String* expectedTypeName, ::Sirenix::Serialization::TwoWaySerializationBinder* expectedBinder)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*, ::System::String*, ::Sirenix::Serialization::TwoWaySerializationBinder*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READTYPEENTRY_OFFSET))(this, expectedType, expectedTypeName, expectedBinder);
		}

		::System::Void MarkEntryContentConsumed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_MARKENTRYCONTENTCONSUMED_OFFSET))(this);
		}

		::Sirenix::Serialization::EntryType PeekEntry_1()
		{
			return ((::Sirenix::Serialization::EntryType(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_PEEKENTRY_1_OFFSET))(this);
		}

		::Sirenix::Serialization::EntryType ReadToNextEntry()
		{
			return ((::Sirenix::Serialization::EntryType(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READTONEXTENTRY_OFFSET))(this);
		}

		::System::Boolean UNSAFE_Read_1_Byte(::System::Byte& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_1_BYTE_OFFSET))(this, value);
		}

		::System::Boolean UNSAFE_Read_1_SByte(::System::SByte& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::SByte&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_1_SBYTE_OFFSET))(this, value);
		}

		::System::Boolean UNSAFE_Read_2_Int16(::System::Int16& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_2_INT16_OFFSET))(this, value);
		}

		::System::Boolean UNSAFE_Read_2_UInt16(::System::UInt16& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_2_UINT16_OFFSET))(this, value);
		}

		::System::Boolean UNSAFE_Read_2_Char(::System::Char& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_2_CHAR_OFFSET))(this, value);
		}

		::System::Boolean UNSAFE_Read_4_Int32(::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_4_INT32_OFFSET))(this, value);
		}

		::System::Boolean UNSAFE_Read_4_UInt32(::System::UInt32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_4_UINT32_OFFSET))(this, value);
		}

		::System::Boolean UNSAFE_Read_4_Float32(::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_4_FLOAT32_OFFSET))(this, value);
		}

		::System::Boolean UNSAFE_Read_8_Int64(::System::Int64& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_8_INT64_OFFSET))(this, value);
		}

		::System::Boolean UNSAFE_Read_8_UInt64(::System::UInt64& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_8_UINT64_OFFSET))(this, value);
		}

		::System::Boolean UNSAFE_Read_8_Float64(::System::Double& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_8_FLOAT64_OFFSET))(this, value);
		}

		::System::Boolean UNSAFE_Read_16_Decimal(::System::Decimal& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Decimal&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_16_DECIMAL_OFFSET))(this, value);
		}

		::System::Boolean UNSAFE_Read_16_Guid(::System::Guid& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_16_GUID_OFFSET))(this, value);
		}

		::System::Boolean HasBufferData(::System::Int32 amount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_HASBUFFERDATA_OFFSET))(this, amount);
		}

		::System::Void ReadEntireStreamToBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_READENTIRESTREAMTOBUFFER_OFFSET))(this);
		}
	};
}
