#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonValue.h"

namespace System { class Object; }

#define NEWTONSOFT_JSON_BSON_BSONSTRING_GET_BYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1E850610)
#define NEWTONSOFT_JSON_BSON_BSONSTRING_GET_INCLUDELENGTH_OFFSET UNITYSDK_OFFSET(0x1E850630)
#define NEWTONSOFT_JSON_BSON_BSONSTRING_SET_BYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1E850620)
#define NEWTONSOFT_JSON_BSON_BSONSTRING_SET_INCLUDELENGTH_OFFSET UNITYSDK_OFFSET(0x1E850640)
#define NEWTONSOFT_JSON_BSON_BSONSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8505F0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonString_TypeDefinitionIndex = 7239;

	class BsonString : public ::Newtonsoft::Json::Bson::BsonValue
	{
	public:
		::System::Int32 _ByteCount_k__BackingField; // 0x30
		::System::Boolean _IncludeLength_k__BackingField; // 0x34

		::System::Void _ctor(::System::Object* value, ::System::Boolean includeLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONSTRING__CTOR_OFFSET))(this, value, includeLength);
		}

		::System::Int32 get_ByteCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONSTRING_GET_BYTECOUNT_OFFSET))(this);
		}

		::System::Void set_ByteCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONSTRING_SET_BYTECOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IncludeLength()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONSTRING_GET_INCLUDELENGTH_OFFSET))(this);
		}

		::System::Void set_IncludeLength(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONSTRING_SET_INCLUDELENGTH_OFFSET))(this, value);
		}
	};
}
