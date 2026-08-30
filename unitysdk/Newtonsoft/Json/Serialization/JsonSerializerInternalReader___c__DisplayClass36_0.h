#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerInternalReader_CreatorPropertyContext; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__DISPLAYCLASS36_0__CREATEOBJECTUSINGCREATORWITHPARAMETERS_B__1_OFFSET UNITYSDK_OFFSET(0x1BEEB710)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEEAB40)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerInternalReader___c__DisplayClass36_0_TypeDefinitionIndex = 9680;

	class JsonSerializerInternalReader___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Serialization::JsonProperty* property; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateObjectUsingCreatorWithParameters_b__1(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__DISPLAYCLASS36_0__CREATEOBJECTUSINGCREATORWITHPARAMETERS_B__1_OFFSET))(this, a1);
		}
	};
}
