#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonToken.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonType.h"

namespace Newtonsoft::Json::Bson { class BsonProperty; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEWTONSOFT_JSON_BSON_BSONOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x17A54F30)
#define NEWTONSOFT_JSON_BSON_BSONOBJECT_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17A55010)
#define NEWTONSOFT_JSON_BSON_BSONOBJECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17A55000)
#define NEWTONSOFT_JSON_BSON_BSONOBJECT_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17A550B0)
#define NEWTONSOFT_JSON_BSON_BSONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A55150)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonObject_TypeDefinitionIndex = 8600;

	class BsonObject : public ::Newtonsoft::Json::Bson::BsonToken
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>* _children; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::String* name, ::Newtonsoft::Json::Bson::BsonToken* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Newtonsoft::Json::Bson::BsonToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONOBJECT_ADD_OFFSET))(this, name, token);
		}

		::Newtonsoft::Json::Bson::BsonType get_Type()
		{
			return ((::Newtonsoft::Json::Bson::BsonType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONOBJECT_GET_TYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Bson::BsonProperty*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Bson::BsonProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONOBJECT_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONOBJECT_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
