#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonToken.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonType.h"

namespace System { class Object; }

#define NEWTONSOFT_JSON_BSON_BSONVALUE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D61F250)
#define NEWTONSOFT_JSON_BSON_BSONVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D61F240)
#define NEWTONSOFT_JSON_BSON_BSONVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61F230)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonValue_TypeDefinitionIndex = 7238;

	class BsonValue : public ::Newtonsoft::Json::Bson::BsonToken
	{
	public:
		::System::Object* _value; // 0x20
		::Newtonsoft::Json::Bson::BsonType _type; // 0x28

		::System::Void _ctor(::System::Object* value, ::Newtonsoft::Json::Bson::BsonType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Bson::BsonType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONVALUE__CTOR_OFFSET))(this, value, type);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONVALUE_GET_VALUE_OFFSET))(this);
		}

		::Newtonsoft::Json::Bson::BsonType get_Type()
		{
			return ((::Newtonsoft::Json::Bson::BsonType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONVALUE_GET_TYPE_OFFSET))(this);
		}
	};
}
