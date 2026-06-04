#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonToken.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonType.h"

namespace Newtonsoft::Json::Bson { class BsonString; }
namespace System { class String; }

#define NEWTONSOFT_JSON_BSON_BSONREGEX_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18806920)
#define NEWTONSOFT_JSON_BSON_BSONREGEX_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x188068A0)
#define NEWTONSOFT_JSON_BSON_BSONREGEX_SET_PATTERN_OFFSET UNITYSDK_OFFSET(0x18806890)
#define NEWTONSOFT_JSON_BSON_BSONREGEX__CTOR_OFFSET UNITYSDK_OFFSET(0x188068B0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonRegex_TypeDefinitionIndex = 9508;

	class BsonRegex : public ::Newtonsoft::Json::Bson::BsonToken
	{
	public:
		::Newtonsoft::Json::Bson::BsonString* _Pattern_k__BackingField; // 0x18
		::Newtonsoft::Json::Bson::BsonString* _Options_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void set_Pattern(::Newtonsoft::Json::Bson::BsonString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonString*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX_SET_PATTERN_OFFSET))(this, a1);
		}

		::System::Void set_Options(::Newtonsoft::Json::Bson::BsonString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonString*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX_SET_OPTIONS_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Bson::BsonType get_Type()
		{
			return ((::Newtonsoft::Json::Bson::BsonType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX_GET_TYPE_OFFSET))(this);
		}
	};
}
