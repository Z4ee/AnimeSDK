#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonBinaryType.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonValue.h"

#define NEWTONSOFT_JSON_BSON_BSONBINARY_GET_BINARYTYPE_OFFSET UNITYSDK_OFFSET(0x1DF014B0)
#define NEWTONSOFT_JSON_BSON_BSONBINARY_SET_BINARYTYPE_OFFSET UNITYSDK_OFFSET(0x1DF014C0)
#define NEWTONSOFT_JSON_BSON_BSONBINARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF014D0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonBinary_TypeDefinitionIndex = 7240;

	class BsonBinary : public ::Newtonsoft::Json::Bson::BsonValue
	{
	public:
		::Newtonsoft::Json::Bson::BsonBinaryType _BinaryType_k__BackingField; // 0x30

		::System::Void _ctor(::Il2CppArray<::System::Byte>* value, ::Newtonsoft::Json::Bson::BsonBinaryType binaryType)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Newtonsoft::Json::Bson::BsonBinaryType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARY__CTOR_OFFSET))(this, value, binaryType);
		}

		::Newtonsoft::Json::Bson::BsonBinaryType get_BinaryType()
		{
			return ((::Newtonsoft::Json::Bson::BsonBinaryType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARY_GET_BINARYTYPE_OFFSET))(this);
		}

		::System::Void set_BinaryType(::Newtonsoft::Json::Bson::BsonBinaryType value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonBinaryType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARY_SET_BINARYTYPE_OFFSET))(this, value);
		}
	};
}
