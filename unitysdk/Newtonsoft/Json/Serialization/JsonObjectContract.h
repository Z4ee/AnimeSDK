#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/MemberSerialization.h"
#include "unitysdk/Newtonsoft/Json/Required.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonContainerContract.h"
#include "unitysdk/System/Nullable_1.h"

namespace Newtonsoft::Json::Serialization { class ExtensionDataGetter; }
namespace Newtonsoft::Json::Serialization { class ExtensionDataSetter; }
namespace Newtonsoft::Json::Serialization { class JsonPropertyCollection; }
namespace Newtonsoft::Json::Serialization { template <typename T> class ObjectConstructor_1; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Reflection { class ConstructorInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GETUNINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1B247560)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_CONSTRUCTORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B246B10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_CREATORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B246B80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_EXTENSIONDATAGETTER_OFFSET UNITYSDK_OFFSET(0x1B247130)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_EXTENSIONDATASETTER_OFFSET UNITYSDK_OFFSET(0x1B247110)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_EXTENSIONDATAVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1B247150)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_HASREQUIREDORDEFAULTVALUEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B2471D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_ITEMREQUIRED_OFFSET UNITYSDK_OFFSET(0x1B246AD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_MEMBERSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1B246AB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_OVERRIDECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1B246DF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_OVERRIDECREATOR_OFFSET UNITYSDK_OFFSET(0x1B2470D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_PARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x1B247100)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_PARAMETRIZEDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1B246F60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B246AF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_EXTENSIONDATAGETTER_OFFSET UNITYSDK_OFFSET(0x1B247140)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_EXTENSIONDATASETTER_OFFSET UNITYSDK_OFFSET(0x1B247120)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_EXTENSIONDATAVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1B247160)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_ITEMREQUIRED_OFFSET UNITYSDK_OFFSET(0x1B246AE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_MEMBERSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1B246AC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_OVERRIDECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1B246E00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_OVERRIDECREATOR_OFFSET UNITYSDK_OFFSET(0x1B2470E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_PARAMETRIZEDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1B246F70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B246B00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2474F0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonObjectContract_TypeDefinitionIndex = 7000;

	class JsonObjectContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract
	{
	public:
		::Newtonsoft::Json::Serialization::ExtensionDataGetter* _ExtensionDataGetter_k__BackingField; // 0xB0
		::System::Type* _extensionDataValueType; // 0xB8
		::System::Reflection::ConstructorInfo* _parametrizedConstructor; // 0xC0
		::Newtonsoft::Json::Serialization::ExtensionDataSetter* _ExtensionDataSetter_k__BackingField; // 0xC8
		::Newtonsoft::Json::Serialization::JsonPropertyCollection* _creatorParameters; // 0xD0
		::System::Reflection::ConstructorInfo* _overrideConstructor; // 0xD8
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _parameterizedCreator; // 0xE0
		::Newtonsoft::Json::Serialization::JsonPropertyCollection* _Properties_k__BackingField; // 0xE8
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _overrideCreator; // 0xF0
		::System::Nullable_1<::Newtonsoft::Json::Required> _ItemRequired_k__BackingField; // 0xF8
		::System::Nullable_1<::System::Boolean> _hasRequiredOrDefaultValueProperties; // 0x100
		::System::Boolean ExtensionDataIsJToken; // 0x102
		::Newtonsoft::Json::MemberSerialization _MemberSerialization_k__BackingField; // 0x104

		::System::Void _ctor(::System::Type* underlyingType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT__CTOR_OFFSET))(this, underlyingType);
		}

		::Newtonsoft::Json::MemberSerialization get_MemberSerialization()
		{
			return ((::Newtonsoft::Json::MemberSerialization(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_MEMBERSERIALIZATION_OFFSET))(this);
		}

		::System::Void set_MemberSerialization(::Newtonsoft::Json::MemberSerialization value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::MemberSerialization))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_MEMBERSERIALIZATION_OFFSET))(this, value);
		}

		::System::Nullable_1<::Newtonsoft::Json::Required> get_ItemRequired()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::Required>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_ITEMREQUIRED_OFFSET))(this);
		}

		::System::Void set_ItemRequired(::System::Nullable_1<::Newtonsoft::Json::Required> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::Required>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_ITEMREQUIRED_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::JsonPropertyCollection* get_Properties()
		{
			return ((::Newtonsoft::Json::Serialization::JsonPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Void set_Properties(::Newtonsoft::Json::Serialization::JsonPropertyCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonPropertyCollection*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_PROPERTIES_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::JsonPropertyCollection* get_ConstructorParameters()
		{
			return ((::Newtonsoft::Json::Serialization::JsonPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_CONSTRUCTORPARAMETERS_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::JsonPropertyCollection* get_CreatorParameters()
		{
			return ((::Newtonsoft::Json::Serialization::JsonPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_CREATORPARAMETERS_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* get_OverrideConstructor()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_OVERRIDECONSTRUCTOR_OFFSET))(this);
		}

		::System::Void set_OverrideConstructor(::System::Reflection::ConstructorInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_OVERRIDECONSTRUCTOR_OFFSET))(this, value);
		}

		::System::Reflection::ConstructorInfo* get_ParametrizedConstructor()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_PARAMETRIZEDCONSTRUCTOR_OFFSET))(this);
		}

		::System::Void set_ParametrizedConstructor(::System::Reflection::ConstructorInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_PARAMETRIZEDCONSTRUCTOR_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_OverrideCreator()
		{
			return ((::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_OVERRIDECREATOR_OFFSET))(this);
		}

		::System::Void set_OverrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_OVERRIDECREATOR_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_ParameterizedCreator()
		{
			return ((::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_PARAMETERIZEDCREATOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::ExtensionDataSetter* get_ExtensionDataSetter()
		{
			return ((::Newtonsoft::Json::Serialization::ExtensionDataSetter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_EXTENSIONDATASETTER_OFFSET))(this);
		}

		::System::Void set_ExtensionDataSetter(::Newtonsoft::Json::Serialization::ExtensionDataSetter* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ExtensionDataSetter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_EXTENSIONDATASETTER_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::ExtensionDataGetter* get_ExtensionDataGetter()
		{
			return ((::Newtonsoft::Json::Serialization::ExtensionDataGetter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_EXTENSIONDATAGETTER_OFFSET))(this);
		}

		::System::Void set_ExtensionDataGetter(::Newtonsoft::Json::Serialization::ExtensionDataGetter* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ExtensionDataGetter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_EXTENSIONDATAGETTER_OFFSET))(this, value);
		}

		::System::Type* get_ExtensionDataValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_EXTENSIONDATAVALUETYPE_OFFSET))(this);
		}

		::System::Void set_ExtensionDataValueType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_EXTENSIONDATAVALUETYPE_OFFSET))(this, value);
		}

		::System::Boolean get_HasRequiredOrDefaultValueProperties()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_HASREQUIREDORDEFAULTVALUEPROPERTIES_OFFSET))(this);
		}

		::System::Object* GetUninitializedObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GETUNINITIALIZEDOBJECT_OFFSET))(this);
		}
	};
}
