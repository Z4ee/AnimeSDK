#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/MemberSerialization.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json { class JsonContainerAttribute; }
namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json::Serialization { class NamingStrategy; }
namespace Newtonsoft::Json::Utilities { class ReflectionDelegateFactory; }
namespace Newtonsoft::Json::Utilities { class ReflectionObject; }
namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class ThreadSafeStore_2; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::ComponentModel { class TypeConverter; }
namespace System::Reflection { class MemberInfo; }
namespace System::Runtime::Serialization { class DataContractAttribute; }
namespace System::Runtime::Serialization { class DataMemberAttribute; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_CREATEJSONCONVERTERINSTANCE_OFFSET UNITYSDK_OFFSET(0x1DF720E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_CREATENAMINGSTRATEGYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1DF721E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETASSOCIATEDMETADATATYPE_OFFSET UNITYSDK_OFFSET(0x1DF72630)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETASSOCIATEMETADATATYPEFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DF726C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETCONTAINERNAMINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1DF722E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETCREATOR_OFFSET UNITYSDK_OFFSET(0x1DF72360)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETDATACONTRACTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DF71930)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETDATAMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DF719C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETJSONCONVERTER_OFFSET UNITYSDK_OFFSET(0x1DF71F00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETOBJECTMEMBERSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1DF71CB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETTYPECONVERTER_OFFSET UNITYSDK_OFFSET(0x1DF725D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_DYNAMICCODEGENERATION_OFFSET UNITYSDK_OFFSET(0x1DF72940)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_FULLYTRUSTED_OFFSET UNITYSDK_OFFSET(0x1DF72A00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_REFLECTIONDELEGATEFACTORY_OFFSET UNITYSDK_OFFSET(0x1DF72530)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF72B50)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonTypeReflector_TypeDefinitionIndex = 7145;

	class JsonTypeReflector : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::Il2CppArray<::System::Object*>*, ::System::Object*>*>** StaticGet_CreatorCache()
		{
			return (::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::Il2CppArray<::System::Object*>*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector_TypeDefinitionIndex)->GetStaticField(0x60C0);
		}
		static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>** StaticGet_AssociatedMetadataTypesCache()
		{
			return (::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector_TypeDefinitionIndex)->GetStaticField(0x60C8);
		}
		static ::Newtonsoft::Json::Utilities::ReflectionObject** StaticGet__metadataTypeAttributeReflectionObject()
		{
			return (::Newtonsoft::Json::Utilities::ReflectionObject**)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector_TypeDefinitionIndex)->GetStaticField(0x60D0);
		}
		static ::System::Nullable_1<::System::Boolean>* StaticGet__fullyTrusted()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector_TypeDefinitionIndex)->GetStaticField(0x3290);
		}
		static ::System::Nullable_1<::System::Boolean>* StaticGet__dynamicCodeGeneration()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector_TypeDefinitionIndex)->GetStaticField(0x3292);
		}
		// static const ::System::String* IdPropertyName; // 0x0
		// static const ::System::String* RefPropertyName; // 0x0
		// static const ::System::String* TypePropertyName; // 0x0
		// static const ::System::String* ValuePropertyName; // 0x0
		// static const ::System::String* ArrayValuesPropertyName; // 0x0
		// static const ::System::String* ShouldSerializePrefix; // 0x0
		// static const ::System::String* SpecifiedPostfix; // 0x0

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

		static ::Newtonsoft::Json::Serialization::NamingStrategy* CreateNamingStrategyInstance(::System::Type* namingStrategyType, ::Il2CppArray<::System::Object*>* converterArgs)
		{
			return ((::Newtonsoft::Json::Serialization::NamingStrategy*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_CREATENAMINGSTRATEGYINSTANCE_OFFSET))(namingStrategyType, converterArgs);
		}

		static ::Newtonsoft::Json::Serialization::NamingStrategy* GetContainerNamingStrategy(::Newtonsoft::Json::JsonContainerAttribute* containerAttribute)
		{
			return ((::Newtonsoft::Json::Serialization::NamingStrategy*(*)(::Newtonsoft::Json::JsonContainerAttribute*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETCONTAINERNAMINGSTRATEGY_OFFSET))(containerAttribute);
		}

		static ::System::Func_2<::Il2CppArray<::System::Object*>*, ::System::Object*>* GetCreator(::System::Type* type)
		{
			return ((::System::Func_2<::Il2CppArray<::System::Object*>*, ::System::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETCREATOR_OFFSET))(type);
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

		static ::System::Boolean get_DynamicCodeGeneration()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_DYNAMICCODEGENERATION_OFFSET))();
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
