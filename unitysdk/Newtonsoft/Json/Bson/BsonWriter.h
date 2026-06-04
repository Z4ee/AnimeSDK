#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonType.h"
#include "unitysdk/Newtonsoft/Json/JsonWriter.h"

namespace Newtonsoft::Json::Bson { class BsonToken; }
namespace System { class Object; }
namespace System { class String; }

#define NEWTONSOFT_JSON_BSON_BSONWRITER_ADDTOKEN_OFFSET UNITYSDK_OFFSET(0x188069D0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x18806970)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEOBJECTID_OFFSET UNITYSDK_OFFSET(0x18806C70)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEREGEX_OFFSET UNITYSDK_OFFSET(0x18806F40)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonWriter_TypeDefinitionIndex = 9511;

	class BsonWriter : public ::Newtonsoft::Json::JsonWriter
	{
	public:
		::Newtonsoft::Json::Bson::BsonToken* _parent; // 0x60
		::Newtonsoft::Json::Bson::BsonToken* _root; // 0x68
		::System::String* _propertyName; // 0x70

		::System::Void AddValue(::System::Object* a1, ::Newtonsoft::Json::Bson::BsonType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Bson::BsonType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_ADDVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void AddToken(::Newtonsoft::Json::Bson::BsonToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_ADDTOKEN_OFFSET))(this, a1);
		}

		::System::Void WriteObjectId(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEOBJECTID_OFFSET))(this, a1);
		}

		::System::Void WriteRegex(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEREGEX_OFFSET))(this, a1, a2);
		}
	};
}
