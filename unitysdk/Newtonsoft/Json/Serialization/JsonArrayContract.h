#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonContainerContract.h"

namespace Newtonsoft::Json::Serialization { template <typename T> class ObjectConstructor_1; }
namespace Newtonsoft::Json::Utilities { class IWrappedCollection; }
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IList; }
namespace System::Reflection { class ConstructorInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_CREATETEMPORARYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1C51DE90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1C51D8A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_CANDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C51CB00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_COLLECTIONITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1C51CA80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_HASPARAMETERIZEDCREATORINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C51CCB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_HASPARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x1C51CC90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x1C51CAC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_ISMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x1C51CAA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_OVERRIDECREATOR_OFFSET UNITYSDK_OFFSET(0x1C51CC70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_PARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x1C51CB20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_SHOULDCREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1C51CAE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_CANDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C51CB10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_COLLECTIONITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1C51CA90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_HASPARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x1C51CCA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x1C51CAD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_ISMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x1C51CAB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_OVERRIDECREATOR_OFFSET UNITYSDK_OFFSET(0x1C51CC80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_SHOULDCREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1C51CAF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51CCE0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonArrayContract_TypeDefinitionIndex = 6986;

	class JsonArrayContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract
	{
	public:
		::System::Func_1<::System::Object*>* _genericTemporaryCollectionCreator; // 0xB0
		::System::Type* _genericCollectionDefinitionType; // 0xB8
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _parameterizedCreator; // 0xC0
		::System::Type* _genericWrapperType; // 0xC8
		::System::Reflection::ConstructorInfo* _parameterizedConstructor; // 0xD0
		::System::Type* _CollectionItemType_k__BackingField; // 0xD8
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _genericWrapperCreator; // 0xE0
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _overrideCreator; // 0xE8
		::System::Boolean _CanDeserialize_k__BackingField; // 0xF0
		::System::Boolean _IsMultidimensionalArray_k__BackingField; // 0xF1
		::System::Boolean _HasParameterizedCreator_k__BackingField; // 0xF2
		::System::Boolean _ShouldCreateWrapper_k__BackingField; // 0xF3
		::System::Boolean _IsArray_k__BackingField; // 0xF4

		::System::Void _ctor(::System::Type* underlyingType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT__CTOR_OFFSET))(this, underlyingType);
		}

		::System::Type* get_CollectionItemType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_COLLECTIONITEMTYPE_OFFSET))(this);
		}

		::System::Void set_CollectionItemType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_COLLECTIONITEMTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsMultidimensionalArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_ISMULTIDIMENSIONALARRAY_OFFSET))(this);
		}

		::System::Void set_IsMultidimensionalArray(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_ISMULTIDIMENSIONALARRAY_OFFSET))(this, value);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_ISARRAY_OFFSET))(this);
		}

		::System::Void set_IsArray(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_ISARRAY_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCreateWrapper()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_SHOULDCREATEWRAPPER_OFFSET))(this);
		}

		::System::Void set_ShouldCreateWrapper(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_SHOULDCREATEWRAPPER_OFFSET))(this, value);
		}

		::System::Boolean get_CanDeserialize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_CANDESERIALIZE_OFFSET))(this);
		}

		::System::Void set_CanDeserialize(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_CANDESERIALIZE_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_ParameterizedCreator()
		{
			return ((::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_PARAMETERIZEDCREATOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_OverrideCreator()
		{
			return ((::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_OVERRIDECREATOR_OFFSET))(this);
		}

		::System::Void set_OverrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_OVERRIDECREATOR_OFFSET))(this, value);
		}

		::System::Boolean get_HasParameterizedCreator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_HASPARAMETERIZEDCREATOR_OFFSET))(this);
		}

		::System::Void set_HasParameterizedCreator(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_HASPARAMETERIZEDCREATOR_OFFSET))(this, value);
		}

		::System::Boolean get_HasParameterizedCreatorInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_HASPARAMETERIZEDCREATORINTERNAL_OFFSET))(this);
		}

		::Newtonsoft::Json::Utilities::IWrappedCollection* CreateWrapper(::System::Object* list)
		{
			return ((::Newtonsoft::Json::Utilities::IWrappedCollection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_CREATEWRAPPER_OFFSET))(this, list);
		}

		::System::Collections::IList* CreateTemporaryCollection()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_CREATETEMPORARYCOLLECTION_OFFSET))(this);
		}
	};
}
