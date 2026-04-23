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

#define NEWTONSOFT_JSON_BSON_BSONREADER_BYTESINSEQUENCE_OFFSET UNITYSDK_OFFSET(0x17A57540)
#define NEWTONSOFT_JSON_BSON_BSONREADER_ENSUREBUFFERS_OFFSET UNITYSDK_OFFSET(0x17A56EF0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_GETLASTFULLCHARSTOP_OFFSET UNITYSDK_OFFSET(0x17A56FD0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x17A57060)
#define NEWTONSOFT_JSON_BSON_BSONREADER_GET_DATETIMEKINDHANDLING_OFFSET UNITYSDK_OFFSET(0x17A55290)
#define NEWTONSOFT_JSON_BSON_BSONREADER_MOVEPOSITION_OFFSET UNITYSDK_OFFSET(0x17A56D40)
#define NEWTONSOFT_JSON_BSON_BSONREADER_POPCONTEXT_OFFSET UNITYSDK_OFFSET(0x17A56C80)
#define NEWTONSOFT_JSON_BSON_BSONREADER_PUSHCONTEXT_OFFSET UNITYSDK_OFFSET(0x17A56410)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READBINARY_OFFSET UNITYSDK_OFFSET(0x17A56DA0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READBYTES_OFFSET UNITYSDK_OFFSET(0x17A56480)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x17A56C40)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READCODEWSCOPE_OFFSET UNITYSDK_OFFSET(0x17A55FF0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x17A56D60)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READELEMENT_OFFSET UNITYSDK_OFFSET(0x17A552A0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x17A56330)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x17A56EB0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READLENGTHSTRING_OFFSET UNITYSDK_OFFSET(0x17A56370)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READNORMAL_OFFSET UNITYSDK_OFFSET(0x17A55990)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READREFERENCE_OFFSET UNITYSDK_OFFSET(0x17A55D60)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x17A55330)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READTYPE_1_OFFSET UNITYSDK_OFFSET(0x17A552F0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READTYPE_OFFSET UNITYSDK_OFFSET(0x17A564C0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READ_OFFSET UNITYSDK_OFFSET(0x17A55840)
#define NEWTONSOFT_JSON_BSON_BSONREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A57870)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonReader_TypeDefinitionIndex = 8596;

	class BsonReader : public ::Newtonsoft::Json::JsonReader
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_SeqRange4()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BsonReader_TypeDefinitionIndex)->GetStaticField(0x33A30);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_SeqRange1()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BsonReader_TypeDefinitionIndex)->GetStaticField(0x33A38);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_SeqRange3()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BsonReader_TypeDefinitionIndex)->GetStaticField(0x33A40);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_SeqRange2()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BsonReader_TypeDefinitionIndex)->GetStaticField(0x33A48);
		}
		::Il2CppArray<::System::Byte>* _byteBuffer; // 0x70
		::Il2CppArray<::System::Char>* _charBuffer; // 0x78
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>* _stack; // 0x80
		::System::IO::BinaryReader* _reader; // 0x88
		::Newtonsoft::Json::Bson::BsonReader_ContainerContext* _currentContext; // 0x90
		::Newtonsoft::Json::Bson::BsonReader_BsonReaderState _bsonReaderState; // 0x98
		::System::DateTimeKind _dateTimeKindHandling; // 0x9C
		::System::Boolean _readRootValueAsArray; // 0xA0
		::System::Boolean _jsonNet35BinaryCompatibility; // 0xA1
		::Newtonsoft::Json::Bson::BsonType _currentElementType; // 0xA2

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER__CCTOR_OFFSET))();
		}

		::System::DateTimeKind get_DateTimeKindHandling()
		{
			return ((::System::DateTimeKind(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_GET_DATETIMEKINDHANDLING_OFFSET))(this);
		}

		::System::String* ReadElement()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READELEMENT_OFFSET))(this);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READ_OFFSET))(this);
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
