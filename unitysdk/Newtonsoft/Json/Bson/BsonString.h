#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonValue.h"

namespace System { class Object; }

#define NEWTONSOFT_JSON_BSON_BSONSTRING_SET_INCLUDELENGTH_OFFSET UNITYSDK_OFFSET(0x1642C0A0)
#define NEWTONSOFT_JSON_BSON_BSONSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x164294C0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonString_TypeDefinitionIndex = 8457;

	class BsonString : public ::Newtonsoft::Json::Bson::BsonValue
	{
	public:
		::System::Boolean _IncludeLength_k__BackingField; // 0x28

		::System::Void _ctor(::System::Object* value, ::System::Boolean includeLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONSTRING__CTOR_OFFSET))(this, value, includeLength);
		}

		::System::Void set_IncludeLength(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONSTRING_SET_INCLUDELENGTH_OFFSET))(this, value);
		}
	};
}
