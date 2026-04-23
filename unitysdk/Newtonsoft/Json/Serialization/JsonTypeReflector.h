#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/MemberSerialization.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json::Utilities { class ReflectionDelegateFactory; }
namespace Newtonsoft::Json::Utilities { class ReflectionObject; }
namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class ThreadSafeStore_2; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::ComponentModel { class TypeConverter; }
namespace System::Reflection { class MemberInfo; }
namespace System::Runtime::Serialization { class DataContractAttribute; }
namespace System::Runtime::Serialization { class DataMemberAttribute; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_CREATEJSONCONVERTERINSTANCE_OFFSET UNITYSDK_OFFSET(0x17AA2040)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETASSOCIATEDMETADATATYPE_OFFSET UNITYSDK_OFFSET(0x17ABE650)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETASSOCIATEMETADATATYPEFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17ABE6B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETDATACONTRACTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17A98F90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETDATAMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17AA1D70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETJSONCONVERTERCREATOR_OFFSET UNITYSDK_OFFSET(0x17ABE450)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETJSONCONVERTER_OFFSET UNITYSDK_OFFSET(0x17A9C5F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETOBJECTMEMBERSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x17A98D50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETTYPECONVERTER_OFFSET UNITYSDK_OFFSET(0x17ABE620)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_FULLYTRUSTED_OFFSET UNITYSDK_OFFSET(0x17A9A1D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_REFLECTIONDELEGATEFACTORY_OFFSET UNITYSDK_OFFSET(0x17A9B290)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x17ABE900)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonTypeReflector_TypeDefinitionIndex = 8491;

	class JsonTypeReflector : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Utilities::ReflectionObject** StaticGet__metadataTypeAttributeReflectionObject()
		{
			return (::Newtonsoft::Json::Utilities::ReflectionObject**)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector_TypeDefinitionIndex)->GetStaticField(0x34F80);
		}
		static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::JsonConverter*>*>** StaticGet_JsonConverterCreatorCache()
		{
			return (::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::JsonConverter*>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector_TypeDefinitionIndex)->GetStaticField(0x34F88);
		}
		static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>** StaticGet_AssociatedMetadataTypesCache()
		{
			return (::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector_TypeDefinitionIndex)->GetStaticField(0x34F90);
		}
		static ::System::Nullable_1<::System::Boolean>* StaticGet__fullyTrusted()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector_TypeDefinitionIndex)->GetStaticField(0xD080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR__CCTOR_OFFSET))();
		}

		static ::System::Runtime::Serialization::DataContractAttribute* GetDataContractAttribute(::System::Type* type)
		{
			return ((::System::Runtime::Serialization::DataContractAttribute*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETDATACONTRACTATTRIBUTE_OFFSET))(type);
		}

		static ::System::Runtime::Serialization::DataMemberAttribute* GetDataMemberAttribute(::System::Reflection::MemberInfo* memberInfo)
		{
			return ((::System::Runtime::Serialization::DataMemberAttribute*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETDATAMEMBERATTRIBUTE_OFFSET))(memberInfo);
		}

		static ::Newtonsoft::Json::MemberSerialization GetObjectMemberSerialization(::System::Type* objectType, ::System::Boolean ignoreSerializableAttribute)
		{
			return ((::Newtonsoft::Json::MemberSerialization(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETOBJECTMEMBERSERIALIZATION_OFFSET))(objectType, ignoreSerializableAttribute);
		}

		static ::Newtonsoft::Json::JsonConverter* GetJsonConverter(::System::Object* attributeProvider)
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETJSONCONVERTER_OFFSET))(attributeProvider);
		}

		static ::Newtonsoft::Json::JsonConverter* CreateJsonConverterInstance(::System::Type* converterType, ::Il2CppArray<::System::Object*>* converterArgs)
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_CREATEJSONCONVERTERINSTANCE_OFFSET))(converterType, converterArgs);
		}

		static ::System::Func_2<::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::JsonConverter*>* GetJsonConverterCreator(::System::Type* converterType)
		{
			return ((::System::Func_2<::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::JsonConverter*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETJSONCONVERTERCREATOR_OFFSET))(converterType);
		}

		static ::System::ComponentModel::TypeConverter* GetTypeConverter(::System::Type* type)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETTYPECONVERTER_OFFSET))(type);
		}

		static ::System::Type* GetAssociatedMetadataType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETASSOCIATEDMETADATATYPE_OFFSET))(type);
		}

		static ::System::Type* GetAssociateMetadataTypeFromAttribute(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETASSOCIATEMETADATATYPEFROMATTRIBUTE_OFFSET))(type);
		}

		static ::System::Boolean get_FullyTrusted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_FULLYTRUSTED_OFFSET))();
		}

		static ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* get_ReflectionDelegateFactory()
		{
			return ((::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_REFLECTIONDELEGATEFACTORY_OFFSET))();
		}
	};
}
