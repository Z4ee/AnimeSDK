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

#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_CREATETEMPORARYDICTIONARY_OFFSET UNITYSDK_OFFSET(0x172E7B80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x172E77D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYKEYRESOLVER_OFFSET UNITYSDK_OFFSET(0x172E7050)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYKEYTYPE_OFFSET UNITYSDK_OFFSET(0x172E7070)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYVALUETYPE_OFFSET UNITYSDK_OFFSET(0x172E7090)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_HASPARAMETERIZEDCREATORINTERNAL_OFFSET UNITYSDK_OFFSET(0x172E71D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_HASPARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x172E71B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_KEYCONTRACT_OFFSET UNITYSDK_OFFSET(0x172E70B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_OVERRIDECREATOR_OFFSET UNITYSDK_OFFSET(0x172E7190)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_PARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x172E70F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_SHOULDCREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x172E70D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_DICTIONARYKEYRESOLVER_OFFSET UNITYSDK_OFFSET(0x172E7060)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_DICTIONARYKEYTYPE_OFFSET UNITYSDK_OFFSET(0x172E7080)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_DICTIONARYVALUETYPE_OFFSET UNITYSDK_OFFSET(0x172E70A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_HASPARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x172E71C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_KEYCONTRACT_OFFSET UNITYSDK_OFFSET(0x172E70C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_OVERRIDECREATOR_OFFSET UNITYSDK_OFFSET(0x172E71A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_SHOULDCREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x172E70E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x172DC850)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonDictionaryContract_TypeDefinitionIndex = 9670;

	class JsonDictionaryContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract
	{
	public:
		::System::Func_1<::System::Object*>* _genericTemporaryDictionaryCreator; // 0xB0
		::System::Func_2<::System::String*, ::System::String*>* _DictionaryKeyResolver_k__BackingField; // 0xB8
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _overrideCreator; // 0xC0
		::System::Type* _DictionaryValueType_k__BackingField; // 0xC8
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _genericWrapperCreator; // 0xD0
		::Newtonsoft::Json::Serialization::JsonContract* _KeyContract_k__BackingField; // 0xD8
		::System::Type* _genericWrapperType; // 0xE0
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _parameterizedCreator; // 0xE8
		::System::Reflection::ConstructorInfo* _parameterizedConstructor; // 0xF0
		::System::Type* _DictionaryKeyType_k__BackingField; // 0xF8
		::System::Type* _genericCollectionDefinitionType; // 0x100
		::System::Boolean _ShouldCreateWrapper_k__BackingField; // 0x108
		::System::Boolean _HasParameterizedCreator_k__BackingField; // 0x109

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT__CTOR_OFFSET))(this, a1);
		}

		::System::Func_2<::System::String*, ::System::String*>* get_DictionaryKeyResolver()
		{
			return ((::System::Func_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYKEYRESOLVER_OFFSET))(this);
		}

		::System::Void set_DictionaryKeyResolver(::System::Func_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_DICTIONARYKEYRESOLVER_OFFSET))(this, a1);
		}

		::System::Type* get_DictionaryKeyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYKEYTYPE_OFFSET))(this);
		}

		::System::Void set_DictionaryKeyType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_DICTIONARYKEYTYPE_OFFSET))(this, a1);
		}

		::System::Type* get_DictionaryValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYVALUETYPE_OFFSET))(this);
		}

		::System::Void set_DictionaryValueType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_DICTIONARYVALUETYPE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonContract* get_KeyContract()
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_KEYCONTRACT_OFFSET))(this);
		}

		::System::Void set_KeyContract(::Newtonsoft::Json::Serialization::JsonContract* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_KEYCONTRACT_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldCreateWrapper()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_SHOULDCREATEWRAPPER_OFFSET))(this);
		}

		::System::Void set_ShouldCreateWrapper(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_SHOULDCREATEWRAPPER_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_ParameterizedCreator()
		{
			return ((::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_PARAMETERIZEDCREATOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_OverrideCreator()
		{
			return ((::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_OVERRIDECREATOR_OFFSET))(this);
		}

		::System::Void set_OverrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_OVERRIDECREATOR_OFFSET))(this, a1);
		}

		::System::Boolean get_HasParameterizedCreator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_HASPARAMETERIZEDCREATOR_OFFSET))(this);
		}

		::System::Void set_HasParameterizedCreator(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_HASPARAMETERIZEDCREATOR_OFFSET))(this, a1);
		}

		::System::Boolean get_HasParameterizedCreatorInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_HASPARAMETERIZEDCREATORINTERNAL_OFFSET))(this);
		}

		::Newtonsoft::Json::Utilities::IWrappedDictionary* CreateWrapper(::System::Object* a1)
		{
			return ((::Newtonsoft::Json::Utilities::IWrappedDictionary*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_CREATEWRAPPER_OFFSET))(this, a1);
		}

		::System::Collections::IDictionary* CreateTemporaryDictionary()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_CREATETEMPORARYDICTIONARY_OFFSET))(this);
		}
	};
}
