#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonValue.h"

namespace System { class Object; }

#define NEWTONSOFT_JSON_BSON_BSONSTRING_SET_INCLUDELENGTH_OFFSET UNITYSDK_OFFSET(0x165CC590)
#define NEWTONSOFT_JSON_BSON_BSONSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x165C9C50)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonString_TypeDefinitionIndex = 9518;

	class BsonString : public ::Newtonsoft::Json::Bson::BsonValue
	{
	public:
		::System::Boolean _IncludeLength_k__BackingField; // 0x28

		::System::Void _ctor(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONSTRING__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void set_IncludeLength(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONSTRING_SET_INCLUDELENGTH_OFFSET))(this, a1);
		}
	};
}
