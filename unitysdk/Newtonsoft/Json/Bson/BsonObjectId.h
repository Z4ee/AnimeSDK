#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_BSON_BSONOBJECTID_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x18118F50)
#define NEWTONSOFT_JSON_BSON_BSONOBJECTID_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18118F60)
#define NEWTONSOFT_JSON_BSON_BSONOBJECTID__CTOR_OFFSET UNITYSDK_OFFSET(0x18118F70)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonObjectId_TypeDefinitionIndex = 9803;

	class BsonObjectId : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _Value_k__BackingField; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONOBJECTID__CTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_Value()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONOBJECTID_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONOBJECTID_SET_VALUE_OFFSET))(this, a1);
		}
	};
}
