#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonType.h"
#include "unitysdk/Newtonsoft/Json/JsonWriter.h"

namespace Newtonsoft::Json::Bson { class BsonToken; }
namespace System { class Object; }
namespace System { class String; }

#define NEWTONSOFT_JSON_BSON_BSONWRITER_ADDTOKEN_OFFSET UNITYSDK_OFFSET(0x1642C140)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x1642C0E0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEOBJECTID_OFFSET UNITYSDK_OFFSET(0x1642C380)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEREGEX_OFFSET UNITYSDK_OFFSET(0x1642C670)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonWriter_TypeDefinitionIndex = 8462;

	class BsonWriter : public ::Newtonsoft::Json::JsonWriter
	{
	public:
		::Newtonsoft::Json::Bson::BsonToken* _root; // 0x60
		::System::String* _propertyName; // 0x68
		::Newtonsoft::Json::Bson::BsonToken* _parent; // 0x70

		::System::Void AddValue(::System::Object* value, ::Newtonsoft::Json::Bson::BsonType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Bson::BsonType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_ADDVALUE_OFFSET))(this, value, type);
		}

		::System::Void AddToken(::Newtonsoft::Json::Bson::BsonToken* token)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_ADDTOKEN_OFFSET))(this, token);
		}

		::System::Void WriteObjectId(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEOBJECTID_OFFSET))(this, value);
		}

		::System::Void WriteRegex(::System::String* pattern, ::System::String* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEREGEX_OFFSET))(this, pattern, options);
		}
	};
}
