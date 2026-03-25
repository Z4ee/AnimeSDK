#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonContainerContract.h"

namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json::Serialization { template <typename T> class ObjectConstructor_1; }
namespace Newtonsoft::Json::Utilities { class IWrappedDictionary; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IDictionary; }
namespace System::Reflection { class ConstructorInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_CREATETEMPORARYDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1647CCA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1647C8C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYKEYRESOLVER_OFFSET UNITYSDK_OFFSET(0x1647C3D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYKEYTYPE_OFFSET UNITYSDK_OFFSET(0x1647C3F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1647C410)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_HASPARAMETERIZEDCREATORINTERNAL_OFFSET UNITYSDK_OFFSET(0x1647C550)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_HASPARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x1647C530)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_KEYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1647C430)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_OVERRIDECREATOR_OFFSET UNITYSDK_OFFSET(0x1647C510)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_PARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x1647C470)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_SHOULDCREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1647C450)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_DICTIONARYKEYRESOLVER_OFFSET UNITYSDK_OFFSET(0x1647C3E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_DICTIONARYKEYTYPE_OFFSET UNITYSDK_OFFSET(0x1647C400)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_DICTIONARYVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1647C420)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_HASPARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x1647C540)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_KEYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1647C440)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_OVERRIDECREATOR_OFFSET UNITYSDK_OFFSET(0x1647C520)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_SHOULDCREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1647C460)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x16472D00)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonDictionaryContract_TypeDefinitionIndex = 8330;

	class JsonDictionaryContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract
	{
	public:
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _genericWrapperCreator; // 0xB0
		::System::Type* _DictionaryValueType_k__BackingField; // 0xB8
		::System::Reflection::ConstructorInfo* _parameterizedConstructor; // 0xC0
		::System::Type* _genericWrapperType; // 0xC8
		::System::Type* _DictionaryKeyType_k__BackingField; // 0xD0
		::System::Func_1<::System::Object*>* _genericTemporaryDictionaryCreator; // 0xD8
		::System::Type* _genericCollectionDefinitionType; // 0xE0
		::Newtonsoft::Json::Serialization::JsonContract* _KeyContract_k__BackingField; // 0xE8
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _overrideCreator; // 0xF0
		::System::Func_2<::System::String*, ::System::String*>* _DictionaryKeyResolver_k__BackingField; // 0xF8
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _parameterizedCreator; // 0x100
		::System::Boolean _HasParameterizedCreator_k__BackingField; // 0x108
		::System::Boolean _ShouldCreateWrapper_k__BackingField; // 0x109

		::System::Void _ctor(::System::Type* underlyingType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT__CTOR_OFFSET))(this, underlyingType);
		}

		::System::Func_2<::System::String*, ::System::String*>* get_DictionaryKeyResolver()
		{
			return ((::System::Func_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYKEYRESOLVER_OFFSET))(this);
		}

		::System::Void set_DictionaryKeyResolver(::System::Func_2<::System::String*, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_DICTIONARYKEYRESOLVER_OFFSET))(this, value);
		}

		::System::Type* get_DictionaryKeyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYKEYTYPE_OFFSET))(this);
		}

		::System::Void set_DictionaryKeyType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_DICTIONARYKEYTYPE_OFFSET))(this, value);
		}

		::System::Type* get_DictionaryValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYVALUETYPE_OFFSET))(this);
		}

		::System::Void set_DictionaryValueType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_DICTIONARYVALUETYPE_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::JsonContract* get_KeyContract()
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_KEYCONTRACT_OFFSET))(this);
		}

		::System::Void set_KeyContract(::Newtonsoft::Json::Serialization::JsonContract* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_KEYCONTRACT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCreateWrapper()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_SHOULDCREATEWRAPPER_OFFSET))(this);
		}

		::System::Void set_ShouldCreateWrapper(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_SHOULDCREATEWRAPPER_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_ParameterizedCreator()
		{
			return ((::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_PARAMETERIZEDCREATOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_OverrideCreator()
		{
			return ((::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_OVERRIDECREATOR_OFFSET))(this);
		}

		::System::Void set_OverrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_OVERRIDECREATOR_OFFSET))(this, value);
		}

		::System::Boolean get_HasParameterizedCreator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_HASPARAMETERIZEDCREATOR_OFFSET))(this);
		}

		::System::Void set_HasParameterizedCreator(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_HASPARAMETERIZEDCREATOR_OFFSET))(this, value);
		}

		::System::Boolean get_HasParameterizedCreatorInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_HASPARAMETERIZEDCREATORINTERNAL_OFFSET))(this);
		}

		::Newtonsoft::Json::Utilities::IWrappedDictionary* CreateWrapper(::System::Object* dictionary)
		{
			return ((::Newtonsoft::Json::Utilities::IWrappedDictionary*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_CREATEWRAPPER_OFFSET))(this, dictionary);
		}

		::System::Collections::IDictionary* CreateTemporaryDictionary()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_CREATETEMPORARYDICTIONARY_OFFSET))(this);
		}
	};
}
