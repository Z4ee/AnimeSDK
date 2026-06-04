#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonType.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_BSON_BSONTOKEN_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x18806950)
#define NEWTONSOFT_JSON_BSON_BSONTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x18803C40)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonToken_TypeDefinitionIndex = 9502;

	class BsonToken : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Bson::BsonToken* _Parent_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONTOKEN__CTOR_OFFSET))(this);
		}

		::System::Void set_Parent(::Newtonsoft::Json::Bson::BsonToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONTOKEN_SET_PARENT_OFFSET))(this, a1);
		}
	};
}
