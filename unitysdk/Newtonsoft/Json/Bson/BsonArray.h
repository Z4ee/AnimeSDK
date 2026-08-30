#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonToken.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonType.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEWTONSOFT_JSON_BSON_BSONARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x18118A30)
#define NEWTONSOFT_JSON_BSON_BSONARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18118AF0)
#define NEWTONSOFT_JSON_BSON_BSONARRAY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18118AE0)
#define NEWTONSOFT_JSON_BSON_BSONARRAY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18118B60)
#define NEWTONSOFT_JSON_BSON_BSONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18118BD0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonArray_TypeDefinitionIndex = 9795;

	class BsonArray : public ::Newtonsoft::Json::Bson::BsonToken
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>* _children; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONARRAY__CTOR_OFFSET))(this);
		}

		::System::Void Add(::Newtonsoft::Json::Bson::BsonToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONARRAY_ADD_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Bson::BsonType get_Type()
		{
			return ((::Newtonsoft::Json::Bson::BsonType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONARRAY_GET_TYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Bson::BsonToken*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Bson::BsonToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONARRAY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONARRAY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
