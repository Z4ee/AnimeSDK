#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonContainerContract.h"

namespace Newtonsoft::Json::Serialization { template <typename T> class ObjectConstructor_1; }
namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONISERIALIZABLECONTRACT_GET_ISERIALIZABLECREATOR_OFFSET UNITYSDK_OFFSET(0x15B9DE90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONISERIALIZABLECONTRACT_SET_ISERIALIZABLECREATOR_OFFSET UNITYSDK_OFFSET(0x15B9DEA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONISERIALIZABLECONTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B94C00)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonISerializableContract_TypeDefinitionIndex = 9360;

	class JsonISerializableContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract
	{
	public:
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _ISerializableCreator_k__BackingField; // 0xB0

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONISERIALIZABLECONTRACT__CTOR_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_ISerializableCreator()
		{
			return ((::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONISERIALIZABLECONTRACT_GET_ISERIALIZABLECREATOR_OFFSET))(this);
		}

		::System::Void set_ISerializableCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONISERIALIZABLECONTRACT_SET_ISERIALIZABLECREATOR_OFFSET))(this, a1);
		}
	};
}
