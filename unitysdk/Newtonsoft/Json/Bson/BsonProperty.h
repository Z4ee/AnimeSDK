#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Bson { class BsonString; }
namespace Newtonsoft::Json::Bson { class BsonToken; }

#define NEWTONSOFT_JSON_BSON_BSONPROPERTY_SET_NAME_OFFSET UNITYSDK_OFFSET(0x16429740)
#define NEWTONSOFT_JSON_BSON_BSONPROPERTY_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x16429750)
#define NEWTONSOFT_JSON_BSON_BSONPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x164294B0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonProperty_TypeDefinitionIndex = 8460;

	class BsonProperty : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Bson::BsonToken* _Value_k__BackingField; // 0x10
		::Newtonsoft::Json::Bson::BsonString* _Name_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void set_Name(::Newtonsoft::Json::Bson::BsonString* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonString*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONPROPERTY_SET_NAME_OFFSET))(this, value);
		}

		::System::Void set_Value(::Newtonsoft::Json::Bson::BsonToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONPROPERTY_SET_VALUE_OFFSET))(this, value);
		}
	};
}
