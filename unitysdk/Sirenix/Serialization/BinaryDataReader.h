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

#define SIRENIX_SERIALIZATION_BINARYDATAREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EFD4A80)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_ENTERARRAY_OFFSET UNITYSDK_OFFSET(0x1EFD5440)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_ENTERNODE_OFFSET UNITYSDK_OFFSET(0x1EFD58A0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_EXITARRAY_OFFSET UNITYSDK_OFFSET(0x1EFD6980)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_EXITNODE_OFFSET UNITYSDK_OFFSET(0x1EFD6C50)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_GETDATADUMP_OFFSET UNITYSDK_OFFSET(0x1EFDA520)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_HASBUFFERDATA_OFFSET UNITYSDK_OFFSET(0x1EFDD960)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_INTERNSMALLSTRING_OFFSET UNITYSDK_OFFSET(0x1EFDABD0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_MARKENTRYCONTENTCONSUMED_OFFSET UNITYSDK_OFFSET(0x1EFDC9A0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_PEEKENTRY_1_OFFSET UNITYSDK_OFFSET(0x1EFDCA20)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_PEEKENTRY_OFFSET UNITYSDK_OFFSET(0x1EFD4A90)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_PREPARENEWSERIALIZATIONSESSION_OFFSET UNITYSDK_OFFSET(0x1EFDA460)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1EFD6FA0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x1EFD77A0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READCHAR_OFFSET UNITYSDK_OFFSET(0x1EFD8410)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READDECIMAL_OFFSET UNITYSDK_OFFSET(0x1EFD9590)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x1EFD9090)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READENTIRESTREAMTOBUFFER_OFFSET UNITYSDK_OFFSET(0x1EFDD990)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READEXTERNALREFERENCE_1_OFFSET UNITYSDK_OFFSET(0x1EFD9F30)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READEXTERNALREFERENCE_2_OFFSET UNITYSDK_OFFSET(0x1EFDA0A0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READEXTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1EFD9B30)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READGUID_OFFSET UNITYSDK_OFFSET(0x1EFD9E60)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READINT16_OFFSET UNITYSDK_OFFSET(0x1EFD7E20)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x1EFD8060)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x1EFD71F0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READINTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1EFDA220)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READNULL_OFFSET UNITYSDK_OFFSET(0x1EFDA170)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSBYTE_OFFSET UNITYSDK_OFFSET(0x1EFD70D0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSINGLE_OFFSET UNITYSDK_OFFSET(0x1EFD87A0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRINGVALUEFAST_OFFSET UNITYSDK_OFFSET(0x1EFDA970)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRINGVALUETOBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1EFDB210)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRINGVALUETOBUFFER_OFFSET UNITYSDK_OFFSET(0x1EFDB000)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRINGVALUE_1_OFFSET UNITYSDK_OFFSET(0x1EFDAC60)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1EFDA6C0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1EFDA390)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READTONEXTENTRY_OFFSET UNITYSDK_OFFSET(0x1EFDCA40)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READTYPEENTRY_OFFSET UNITYSDK_OFFSET(0x1EFDB950)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READUINT16_OFFSET UNITYSDK_OFFSET(0x1EFD7F40)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READUINT32_OFFSET UNITYSDK_OFFSET(0x1EFD8180)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_READUINT64_OFFSET UNITYSDK_OFFSET(0x1EFD78C0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_SKIPBUFFER_OFFSET UNITYSDK_OFFSET(0x1EFDB930)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_SKIPPEEKEDENTRYCONTENT_OFFSET UNITYSDK_OFFSET(0x1EFDB510)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_SKIPSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1EFDB3C0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_16_DECIMAL_OFFSET UNITYSDK_OFFSET(0x1EFDD4A0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_16_GUID_OFFSET UNITYSDK_OFFSET(0x1EFDD700)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_1_BYTE_OFFSET UNITYSDK_OFFSET(0x1EFDCA70)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_1_SBYTE_OFFSET UNITYSDK_OFFSET(0x1EFDCAE0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_2_CHAR_OFFSET UNITYSDK_OFFSET(0x1EFDCCD0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_2_INT16_OFFSET UNITYSDK_OFFSET(0x1EFDCB50)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_2_UINT16_OFFSET UNITYSDK_OFFSET(0x1EFDCC10)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_4_FLOAT32_OFFSET UNITYSDK_OFFSET(0x1EFDCF30)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_4_INT32_OFFSET UNITYSDK_OFFSET(0x1EFDCD90)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_4_UINT32_OFFSET UNITYSDK_OFFSET(0x1EFDCE60)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_8_FLOAT64_OFFSET UNITYSDK_OFFSET(0x1EFDD330)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_8_INT64_OFFSET UNITYSDK_OFFSET(0x1EFDD050)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER_UNSAFE_READ_8_UINT64_OFFSET UNITYSDK_OFFSET(0x1EFDD1C0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFDDC00)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFD4920)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD47E0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BinaryDataReader_TypeDefinitionIndex = 7420;

	class BinaryDataReader : public ::Sirenix::Serialization::BaseDataReader
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Delegate*>** StaticGet_PrimitiveFromByteMethods()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(BinaryDataReader_TypeDefinitionIndex)->GetStaticField(0x6330);
		}
		static ::Sirenix::Serialization::IOdinStringInternCache** StaticGet_StringInternCache()
		{
			return (::Sirenix::Serialization::IOdinStringInternCache**)Il2CppClass::FromTypeDefinitionIndex(BinaryDataReader_TypeDefinitionIndex)->GetStaticField(0x6338);
		}
		static ::System::Int32* StaticGet_MaxSmallStringInternLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BinaryDataReader_TypeDefinitionIndex)->GetStaticField(0x3310);
		}
		::Il2CppArray<::System::Byte>* internalBufferBackup; // 0x38
		::Il2CppArray<::System::Byte>* buffer; // 0x40
		::Sirenix::Serialization::BufferedString peekedEntryName; // 0x48
		::System::Collections::Generic::List_1<::Sirenix::Serialization::BinaryDataReader_TypeRecord>* types; // 0x58
		::System::Int32 bufferEnd; // 0x60
		::System::Nullable_1<::Sirenix::Serialization::EntryType> peekedEntryType; // 0x64
		::Sirenix::Serialization::BinaryEntryType peekedBinaryEntryType; // 0x66
		::System::Int32 bufferIndex; // 0x68

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
