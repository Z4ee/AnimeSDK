#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonBinaryType.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonReader_BsonReaderState.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonType.h"
#include "unitysdk/Newtonsoft/Json/JsonReader.h"
#include "unitysdk/System/DateTimeKind.h"

namespace Newtonsoft::Json::Bson { class BsonReader_ContainerContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class Stream; }

#define NEWTONSOFT_JSON_BSON_BSONREADER_BYTESINSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1E2B2CC0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E2B1AD0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_ENSUREBUFFERS_OFFSET UNITYSDK_OFFSET(0x1E2B2620)
#define NEWTONSOFT_JSON_BSON_BSONREADER_GETLASTFULLCHARSTOP_OFFSET UNITYSDK_OFFSET(0x1E2B2770)
#define NEWTONSOFT_JSON_BSON_BSONREADER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B2800)
#define NEWTONSOFT_JSON_BSON_BSONREADER_GET_DATETIMEKINDHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B0580)
#define NEWTONSOFT_JSON_BSON_BSONREADER_GET_JSONNET35BINARYCOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0x1E2B0540)
#define NEWTONSOFT_JSON_BSON_BSONREADER_GET_READROOTVALUEASARRAY_OFFSET UNITYSDK_OFFSET(0x1E2B0560)
#define NEWTONSOFT_JSON_BSON_BSONREADER_MOVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E2B2480)
#define NEWTONSOFT_JSON_BSON_BSONREADER_POPCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E2B23C0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_PUSHCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E2B1BD0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READBINARY_OFFSET UNITYSDK_OFFSET(0x1E2B24E0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READBYTES_OFFSET UNITYSDK_OFFSET(0x1E2B1C40)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x1E2B2380)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READCODEWSCOPE_OFFSET UNITYSDK_OFFSET(0x1E2B1760)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x1E2B24A0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READELEMENT_OFFSET UNITYSDK_OFFSET(0x1E2B09B0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x1E2B1B10)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x1E2B25E0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READLENGTHSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B1B50)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READNORMAL_OFFSET UNITYSDK_OFFSET(0x1E2B10B0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E2B1480)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B0A40)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READTYPE_1_OFFSET UNITYSDK_OFFSET(0x1E2B0A00)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READTYPE_OFFSET UNITYSDK_OFFSET(0x1E2B1C80)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READ_OFFSET UNITYSDK_OFFSET(0x1E2B0F60)
#define NEWTONSOFT_JSON_BSON_BSONREADER_SET_DATETIMEKINDHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B0590)
#define NEWTONSOFT_JSON_BSON_BSONREADER_SET_JSONNET35BINARYCOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0x1E2B0550)
#define NEWTONSOFT_JSON_BSON_BSONREADER_SET_READROOTVALUEASARRAY_OFFSET UNITYSDK_OFFSET(0x1E2B0570)
#define NEWTONSOFT_JSON_BSON_BSONREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B2FF0)
#define NEWTONSOFT_JSON_BSON_BSONREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2B0770)
#define NEWTONSOFT_JSON_BSON_BSONREADER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E2B05B0)
#define NEWTONSOFT_JSON_BSON_BSONREADER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E2B0890)
#define NEWTONSOFT_JSON_BSON_BSONREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B05A0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonReader_TypeDefinitionIndex = 7232;

	class BsonReader : public ::Newtonsoft::Json::JsonReader
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_SeqRange3()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BsonReader_TypeDefinitionIndex)->GetStaticField(0x6050);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_SeqRange4()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BsonReader_TypeDefinitionIndex)->GetStaticField(0x6058);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_SeqRange2()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BsonReader_TypeDefinitionIndex)->GetStaticField(0x6060);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_SeqRange1()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BsonReader_TypeDefinitionIndex)->GetStaticField(0x6068);
		}
		// static const ::System::Int32 MaxCharBytesSize = 0x80; // 0x0
		::Il2CppArray<::System::Byte>* _byteBuffer; // 0x70
		::System::IO::BinaryReader* _reader; // 0x78
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>* _stack; // 0x80
		::Newtonsoft::Json::Bson::BsonReader_ContainerContext* _currentContext; // 0x88
		::Il2CppArray<::System::Char>* _charBuffer; // 0x90
		::System::DateTimeKind _dateTimeKindHandling; // 0x98
		::System::Boolean _jsonNet35BinaryCompatibility; // 0x9C
		::System::Boolean _readRootValueAsArray; // 0x9D
		::Newtonsoft::Json::Bson::BsonType _currentElementType; // 0x9E
		::Newtonsoft::Json::Bson::BsonReader_BsonReaderState _bsonReaderState; // 0xA0

		::System::Void _ctor(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER__CTOR_OFFSET))(this, stream);
		}

		::System::Void _ctor_1(::System::IO::BinaryReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER__CTOR_1_OFFSET))(this, reader);
		}

		::System::Void _ctor_2(::System::IO::Stream* stream, ::System::Boolean readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER__CTOR_2_OFFSET))(this, stream, readRootValueAsArray, dateTimeKindHandling);
		}

		::System::Void _ctor_3(::System::IO::BinaryReader* reader, ::System::Boolean readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::Boolean, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER__CTOR_3_OFFSET))(this, reader, readRootValueAsArray, dateTimeKindHandling);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER__CCTOR_OFFSET))();
		}

		::System::Boolean get_JsonNet35BinaryCompatibility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_GET_JSONNET35BINARYCOMPATIBILITY_OFFSET))(this);
		}

		::System::Void set_JsonNet35BinaryCompatibility(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_SET_JSONNET35BINARYCOMPATIBILITY_OFFSET))(this, value);
		}

		::System::Boolean get_ReadRootValueAsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_GET_READROOTVALUEASARRAY_OFFSET))(this);
		}

		::System::Void set_ReadRootValueAsArray(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_SET_READROOTVALUEASARRAY_OFFSET))(this, value);
		}

		::System::DateTimeKind get_DateTimeKindHandling()
		{
			return ((::System::DateTimeKind(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_GET_DATETIMEKINDHANDLING_OFFSET))(this);
		}

		::System::Void set_DateTimeKindHandling(::System::DateTimeKind value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_SET_DATETIMEKINDHANDLING_OFFSET))(this, value);
		}

		::System::String* ReadElement()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READELEMENT_OFFSET))(this);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READ_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_CLOSE_OFFSET))(this);
		}

		::System::Boolean ReadCodeWScope()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READCODEWSCOPE_OFFSET))(this);
		}

		::System::Boolean ReadReference()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READREFERENCE_OFFSET))(this);
		}

		::System::Boolean ReadNormal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READNORMAL_OFFSET))(this);
		}

		::System::Void PopContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_POPCONTEXT_OFFSET))(this);
		}

		::System::Void PushContext(::Newtonsoft::Json::Bson::BsonReader_ContainerContext* newContext)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonReader_ContainerContext*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_PUSHCONTEXT_OFFSET))(this, newContext);
		}

		::System::Byte ReadByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READBYTE_OFFSET))(this);
		}

		::System::Void ReadType(::Newtonsoft::Json::Bson::BsonType type)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READTYPE_OFFSET))(this, type);
		}

		::Il2CppArray<::System::Byte>* ReadBinary(::Newtonsoft::Json::Bson::BsonBinaryType& binaryType)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonBinaryType&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READBINARY_OFFSET))(this, binaryType);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READSTRING_OFFSET))(this);
		}

		::System::String* ReadLengthString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READLENGTHSTRING_OFFSET))(this);
		}

		::System::String* GetString(::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_GETSTRING_OFFSET))(this, length);
		}

		::System::Int32 GetLastFullCharStop(::System::Int32 start)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_GETLASTFULLCHARSTOP_OFFSET))(this, start);
		}

		::System::Int32 BytesInSequence(::System::Byte b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_BYTESINSEQUENCE_OFFSET))(this, b);
		}

		::System::Void EnsureBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_ENSUREBUFFERS_OFFSET))(this);
		}

		::System::Double ReadDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READDOUBLE_OFFSET))(this);
		}

		::System::Int32 ReadInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READINT32_OFFSET))(this);
		}

		::System::Int64 ReadInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READINT64_OFFSET))(this);
		}

		::Newtonsoft::Json::Bson::BsonType ReadType_1()
		{
			return ((::Newtonsoft::Json::Bson::BsonType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READTYPE_1_OFFSET))(this);
		}

		::System::Void MovePosition(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_MOVEPOSITION_OFFSET))(this, count);
		}

		::Il2CppArray<::System::Byte>* ReadBytes(::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READBYTES_OFFSET))(this, count);
		}
	};
}
