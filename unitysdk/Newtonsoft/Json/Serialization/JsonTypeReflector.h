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

#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_CREATEJSONCONVERTERINSTANCE_OFFSET UNITYSDK_OFFSET(0x18851C50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETASSOCIATEDMETADATATYPE_OFFSET UNITYSDK_OFFSET(0x1886D080)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETASSOCIATEMETADATATYPEFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1886D0E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETDATACONTRACTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18849320)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETDATAMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18851980)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETJSONCONVERTERCREATOR_OFFSET UNITYSDK_OFFSET(0x1886CE70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETJSONCONVERTER_OFFSET UNITYSDK_OFFSET(0x1884C850)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETOBJECTMEMBERSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x18849120)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETTYPECONVERTER_OFFSET UNITYSDK_OFFSET(0x1886D050)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_FULLYTRUSTED_OFFSET UNITYSDK_OFFSET(0x1884A380)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_REFLECTIONDELEGATEFACTORY_OFFSET UNITYSDK_OFFSET(0x1884B410)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1886D310)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonTypeReflector_TypeDefinitionIndex = 9394;

	class JsonTypeReflector : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Utilities::ReflectionObject** StaticGet__metadataTypeAttributeReflectionObject()
		{
			return (::Newtonsoft::Json::Utilities::ReflectionObject**)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector_TypeDefinitionIndex)->GetStaticField(0x301F0);
		}
		static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::JsonConverter*>*>** StaticGet_JsonConverterCreatorCache()
		{
			return (::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::JsonConverter*>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector_TypeDefinitionIndex)->GetStaticField(0x301F8);
		}
		static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>** StaticGet_AssociatedMetadataTypesCache()
		{
			return (::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector_TypeDefinitionIndex)->GetStaticField(0x30200);
		}
		static ::System::Nullable_1<::System::Boolean>* StaticGet__fullyTrusted()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector_TypeDefinitionIndex)->GetStaticField(0x9FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR__CCTOR_OFFSET))();
		}

		static ::System::Runtime::Serialization::DataContractAttribute* GetDataContractAttribute(::System::Type* a1)
		{
			return ((::System::Runtime::Serialization::DataContractAttribute*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETDATACONTRACTATTRIBUTE_OFFSET))(a1);
		}

		static ::System::Runtime::Serialization::DataMemberAttribute* GetDataMemberAttribute(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Runtime::Serialization::DataMemberAttribute*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETDATAMEMBERATTRIBUTE_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::MemberSerialization GetObjectMemberSerialization(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Newtonsoft::Json::MemberSerialization(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETOBJECTMEMBERSERIALIZATION_OFFSET))(a1, a2);
		}

		static ::Newtonsoft::Json::JsonConverter* GetJsonConverter(::System::Object* a1)
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETJSONCONVERTER_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::JsonConverter* CreateJsonConverterInstance(::System::Type* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_CREATEJSONCONVERTERINSTANCE_OFFSET))(a1, a2);
		}

		static ::System::Func_2<::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::JsonConverter*>* GetJsonConverterCreator(::System::Type* a1)
		{
			return ((::System::Func_2<::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::JsonConverter*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETJSONCONVERTERCREATOR_OFFSET))(a1);
		}

		static ::System::ComponentModel::TypeConverter* GetTypeConverter(::System::Type* a1)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETTYPECONVERTER_OFFSET))(a1);
		}

		static ::System::Type* GetAssociatedMetadataType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETASSOCIATEDMETADATATYPE_OFFSET))(a1);
		}

		static ::System::Type* GetAssociateMetadataTypeFromAttribute(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETASSOCIATEMETADATATYPEFROMATTRIBUTE_OFFSET))(a1);
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
