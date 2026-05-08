#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonType.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_BSON_BSONREADER_CONTAINERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF7480)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonReader_ContainerContext_TypeDefinitionIndex = 7103;

	class BsonReader_ContainerContext : public ::System::Object
	{
	public:
		::System::Int32 Length; // 0x10
		::System::Int32 Position; // 0x14
		::Newtonsoft::Json::Bson::BsonType Type; // 0x18

		::System::Void _ctor(::Newtonsoft::Json::Bson::BsonType type)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_CONTAINERCONTEXT__CTOR_OFFSET))(this, type);
		}
	};
}
