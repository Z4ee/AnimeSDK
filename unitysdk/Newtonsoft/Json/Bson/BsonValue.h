#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonToken.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonType.h"

namespace System { class Object; }

#define NEWTONSOFT_JSON_BSON_BSONVALUE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x165CC5C0)
#define NEWTONSOFT_JSON_BSON_BSONVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x165CC5A0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonValue_TypeDefinitionIndex = 9517;

	class BsonValue : public ::Newtonsoft::Json::Bson::BsonToken
	{
	public:
		::System::Object* _value; // 0x18
		::Newtonsoft::Json::Bson::BsonType _type; // 0x20

		::System::Void _ctor(::System::Object* a1, ::Newtonsoft::Json::Bson::BsonType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Bson::BsonType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONVALUE__CTOR_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::Bson::BsonType get_Type()
		{
			return ((::Newtonsoft::Json::Bson::BsonType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONVALUE_GET_TYPE_OFFSET))(this);
		}
	};
}
