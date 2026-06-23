#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonType.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_BSON_BSONTOKEN_GET_CALCULATEDSIZE_OFFSET UNITYSDK_OFFSET(0x1D9CF1D0)
#define NEWTONSOFT_JSON_BSON_BSONTOKEN_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1D9CF1B0)
#define NEWTONSOFT_JSON_BSON_BSONTOKEN_SET_CALCULATEDSIZE_OFFSET UNITYSDK_OFFSET(0x1D9CF1E0)
#define NEWTONSOFT_JSON_BSON_BSONTOKEN_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x1D9CF1C0)
#define NEWTONSOFT_JSON_BSON_BSONTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CF1F0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonToken_TypeDefinitionIndex = 7235;

	class BsonToken : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Bson::BsonToken* _Parent_k__BackingField; // 0x10
		::System::Int32 _CalculatedSize_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONTOKEN__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Bson::BsonToken* get_Parent()
		{
			return ((::Newtonsoft::Json::Bson::BsonToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONTOKEN_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_Parent(::Newtonsoft::Json::Bson::BsonToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONTOKEN_SET_PARENT_OFFSET))(this, value);
		}

		::System::Int32 get_CalculatedSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONTOKEN_GET_CALCULATEDSIZE_OFFSET))(this);
		}

		::System::Void set_CalculatedSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONTOKEN_SET_CALCULATEDSIZE_OFFSET))(this, value);
		}
	};
}
