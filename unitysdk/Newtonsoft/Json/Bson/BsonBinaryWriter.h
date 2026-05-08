#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeKind.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Bson { class BsonToken; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }
namespace System::Text { class Encoding; }

#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CALCULATESIZEWITHLENGTH_OFFSET UNITYSDK_OFFSET(0x1B237C00)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CALCULATESIZE_1_OFFSET UNITYSDK_OFFSET(0x1B235B60)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B237BF0)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B235B00)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1B235AD0)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_GET_DATETIMEKINDHANDLING_OFFSET UNITYSDK_OFFSET(0x1B235AA0)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_SET_DATETIMEKINDHANDLING_OFFSET UNITYSDK_OFFSET(0x1B235AB0)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1B2379D0)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITETOKENINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B236660)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITETOKEN_OFFSET UNITYSDK_OFFSET(0x1B235B30)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITEUTF8BYTES_OFFSET UNITYSDK_OFFSET(0x1B237A40)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B237C10)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B235AC0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonBinaryWriter_TypeDefinitionIndex = 7099;

	class BsonBinaryWriter : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(BsonBinaryWriter_TypeDefinitionIndex)->GetStaticField(0x5EE0);
		}
		::System::IO::BinaryWriter* _writer; // 0x10
		::Il2CppArray<::System::Byte>* _largeByteBuffer; // 0x18
		::System::DateTimeKind _DateTimeKindHandling_k__BackingField; // 0x20

		::System::Void _ctor(::System::IO::BinaryWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER__CTOR_OFFSET))(this, writer);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER__CCTOR_OFFSET))();
		}

		::System::DateTimeKind get_DateTimeKindHandling()
		{
			return ((::System::DateTimeKind(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_GET_DATETIMEKINDHANDLING_OFFSET))(this);
		}

		::System::Void set_DateTimeKindHandling(::System::DateTimeKind value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_SET_DATETIMEKINDHANDLING_OFFSET))(this, value);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void WriteToken(::Newtonsoft::Json::Bson::BsonToken* t)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITETOKEN_OFFSET))(this, t);
		}

		::System::Void WriteTokenInternal(::Newtonsoft::Json::Bson::BsonToken* t)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITETOKENINTERNAL_OFFSET))(this, t);
		}

		::System::Void WriteString(::System::String* s, ::System::Int32 byteCount, ::System::Nullable_1<::System::Int32> calculatedlengthPrefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITESTRING_OFFSET))(this, s, byteCount, calculatedlengthPrefix);
		}

		::System::Void WriteUtf8Bytes(::System::String* s, ::System::Int32 byteCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITEUTF8BYTES_OFFSET))(this, s, byteCount);
		}

		::System::Int32 CalculateSize(::System::Int32 stringByteCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CALCULATESIZE_OFFSET))(this, stringByteCount);
		}

		::System::Int32 CalculateSizeWithLength(::System::Int32 stringByteCount, ::System::Boolean includeSize)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CALCULATESIZEWITHLENGTH_OFFSET))(this, stringByteCount, includeSize);
		}

		::System::Int32 CalculateSize_1(::Newtonsoft::Json::Bson::BsonToken* t)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CALCULATESIZE_1_OFFSET))(this, t);
		}
	};
}
