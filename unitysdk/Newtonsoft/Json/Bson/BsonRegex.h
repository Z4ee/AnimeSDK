#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonToken.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonType.h"

namespace Newtonsoft::Json::Bson { class BsonString; }
namespace System { class String; }

#define NEWTONSOFT_JSON_BSON_BSONREGEX_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1FC30F40)
#define NEWTONSOFT_JSON_BSON_BSONREGEX_GET_PATTERN_OFFSET UNITYSDK_OFFSET(0x1FC30F20)
#define NEWTONSOFT_JSON_BSON_BSONREGEX_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1FC30FE0)
#define NEWTONSOFT_JSON_BSON_BSONREGEX_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1FC30F50)
#define NEWTONSOFT_JSON_BSON_BSONREGEX_SET_PATTERN_OFFSET UNITYSDK_OFFSET(0x1FC30F30)
#define NEWTONSOFT_JSON_BSON_BSONREGEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC30F60)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonRegex_TypeDefinitionIndex = 7245;

	class BsonRegex : public ::Newtonsoft::Json::Bson::BsonToken
	{
	public:
		::Newtonsoft::Json::Bson::BsonString* _Pattern_k__BackingField; // 0x20
		::Newtonsoft::Json::Bson::BsonString* _Options_k__BackingField; // 0x28

		::System::Void _ctor(::System::String* pattern, ::System::String* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX__CTOR_OFFSET))(this, pattern, options);
		}

		::Newtonsoft::Json::Bson::BsonString* get_Pattern()
		{
			return ((::Newtonsoft::Json::Bson::BsonString*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX_GET_PATTERN_OFFSET))(this);
		}

		::System::Void set_Pattern(::Newtonsoft::Json::Bson::BsonString* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonString*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX_SET_PATTERN_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Bson::BsonString* get_Options()
		{
			return ((::Newtonsoft::Json::Bson::BsonString*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::Newtonsoft::Json::Bson::BsonString* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonString*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX_SET_OPTIONS_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Bson::BsonType get_Type()
		{
			return ((::Newtonsoft::Json::Bson::BsonType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX_GET_TYPE_OFFSET))(this);
		}
	};
}
