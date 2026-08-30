#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/MemberSerialization.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json::Serialization { class DefaultContractResolverState; }
namespace Newtonsoft::Json::Serialization { class IContractResolver; }
namespace Newtonsoft::Json::Serialization { class IValueProvider; }
namespace Newtonsoft::Json::Serialization { class JsonArrayContract; }
namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json::Serialization { class JsonDictionaryContract; }
namespace Newtonsoft::Json::Serialization { class JsonISerializableContract; }
namespace Newtonsoft::Json::Serialization { class JsonLinqContract; }
namespace Newtonsoft::Json::Serialization { class JsonObjectContract; }
namespace Newtonsoft::Json::Serialization { class JsonPrimitiveContract; }
namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace Newtonsoft::Json::Serialization { class JsonPropertyCollection; }
namespace Newtonsoft::Json::Serialization { class JsonStringContract; }
namespace Newtonsoft::Json::Serialization { class SerializationCallback; }
namespace Newtonsoft::Json::Serialization { class SerializationErrorCallback; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CANCONVERTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1BECF0D0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEARRAYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1BECCC30)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONSTRUCTORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BEC8580)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONTRACT_OFFSET UNITYSDK_OFFSET(0x1BECE900)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEDICTIONARYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1BECB800)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEISERIALIZABLECONTRACT_OFFSET UNITYSDK_OFFSET(0x1BECE590)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATELINQCONTRACT_OFFSET UNITYSDK_OFFSET(0x1BECE510)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEMEMBERVALUEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1BED0200)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEOBJECTCONTRACT_OFFSET UNITYSDK_OFFSET(0x1BEC5A70)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPRIMITIVECONTRACT_OFFSET UNITYSDK_OFFSET(0x1BECE3B0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BECFA80)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTYFROMCONSTRUCTORPARAMETER_OFFSET UNITYSDK_OFFSET(0x1BEC8EF0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1BED02B0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESHOULDSERIALIZETEST_OFFSET UNITYSDK_OFFSET(0x1BED05E0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESTRINGCONTRACT_OFFSET UNITYSDK_OFFSET(0x1BECE860)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETATTRIBUTECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1BEC6630)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCALLBACKMETHODSFORTYPE_OFFSET UNITYSDK_OFFSET(0x1BECA0F0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLASSHIERARCHYFORTYPE_OFFSET UNITYSDK_OFFSET(0x1BEC8190)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLRTYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x1BECF6D0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETDEFAULTCREATOR_OFFSET UNITYSDK_OFFSET(0x1BEC9E40)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETEXTENSIONDATAMEMBERFORTYPE_OFFSET UNITYSDK_OFFSET(0x1BEC7440)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETPARAMETERIZEDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1BEC7040)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETRESOLVEDPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BED12E0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETSERIALIZABLEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1BEC4990)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1BEC4580)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET UNITYSDK_OFFSET(0x1BEC4480)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BEC44C0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEINTERFACE_OFFSET UNITYSDK_OFFSET(0x1BEC44B0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BEC4450)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_SERIALIZECOMPILERGENERATEDMEMBERS_OFFSET UNITYSDK_OFFSET(0x1BEC44A0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_INITIALIZECONTRACT_OFFSET UNITYSDK_OFFSET(0x1BEC6120)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISICONVERTIBLE_OFFSET UNITYSDK_OFFSET(0x1BECF3A0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISJSONPRIMITIVETYPE_OFFSET UNITYSDK_OFFSET(0x1BECEF20)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISVALIDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BECAF20)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECALLBACKMETHODS_OFFSET UNITYSDK_OFFSET(0x1BEC9ED0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACTCONVERTER_OFFSET UNITYSDK_OFFSET(0x1BEC9C90)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET UNITYSDK_OFFSET(0x1BEC45D0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEDICTIONARYKEY_OFFSET UNITYSDK_OFFSET(0x1BED1250)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BED1240)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETEXTENSIONDATADELEGATES_OFFSET UNITYSDK_OFFSET(0x1BEC7610)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETISSPECIFIEDACTIONS_OFFSET UNITYSDK_OFFSET(0x1BED08F0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETPROPERTYSETTINGSFROMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BEC94C0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET UNITYSDK_OFFSET(0x1BEC4490)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNORESERIALIZABLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BEC44D0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSERIALIZEENTITYMEMBER_OFFSET UNITYSDK_OFFSET(0x1BEC5740)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1BECAF10)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1BECAF00)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BED1370)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEC43D0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC44E0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver_TypeDefinitionIndex = 9647;

	class DefaultContractResolver : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Serialization::IContractResolver** StaticGet__instance()
		{
			return (::Newtonsoft::Json::Serialization::IContractResolver**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver_TypeDefinitionIndex)->GetStaticField(0x3D5B0);
		}
		static ::System::Object** StaticGet_TypeContractCacheLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver_TypeDefinitionIndex)->GetStaticField(0x3D5B8);
		}
		static ::Newtonsoft::Json::Serialization::DefaultContractResolverState** StaticGet__sharedState()
		{
			return (::Newtonsoft::Json::Serialization::DefaultContractResolverState**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver_TypeDefinitionIndex)->GetStaticField(0x3D5C0);
		}
		static ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>** StaticGet_BuiltInConverters()
		{
			return (::Il2CppArray<::Newtonsoft::Json::JsonConverter*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver_TypeDefinitionIndex)->GetStaticField(0x3D5C8);
		}
		::Newtonsoft::Json::Serialization::DefaultContractResolverState* _instanceState; // 0x10
		::System::Reflection::BindingFlags _DefaultMembersSearchFlags_k__BackingField; // 0x18
		::System::Boolean _sharedCache; // 0x1C
		::System::Boolean _SerializeCompilerGeneratedMembers_k__BackingField; // 0x1D
		::System::Boolean _IgnoreSerializableAttribute_k__BackingField; // 0x1E
		::System::Boolean _IgnoreSerializableInterface_k__BackingField; // 0x1F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER__CCTOR_OFFSET))();
		}

		static ::Newtonsoft::Json::Serialization::IContractResolver* get_Instance()
		{
			return ((::Newtonsoft::Json::Serialization::IContractResolver*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_INSTANCE_OFFSET))();
		}

		::System::Reflection::BindingFlags get_DefaultMembersSearchFlags()
		{
			return ((::System::Reflection::BindingFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET))(this);
		}

		::System::Void set_DefaultMembersSearchFlags(::System::Reflection::BindingFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET))(this, a1);
		}

		::System::Boolean get_SerializeCompilerGeneratedMembers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_SERIALIZECOMPILERGENERATEDMEMBERS_OFFSET))(this);
		}

		::System::Boolean get_IgnoreSerializableInterface()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEINTERFACE_OFFSET))(this);
		}

		::System::Boolean get_IgnoreSerializableAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_IgnoreSerializableAttribute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNORESERIALIZABLEATTRIBUTE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::DefaultContractResolverState* GetState()
		{
			return ((::Newtonsoft::Json::Serialization::DefaultContractResolverState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETSTATE_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::JsonContract* ResolveContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>* GetSerializableMembers(::System::Type* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETSERIALIZABLEMEMBERS_OFFSET))(this, a1);
		}

		::System::Boolean ShouldSerializeEntityMember(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSERIALIZEENTITYMEMBER_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonObjectContract* CreateObjectContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonObjectContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEOBJECTCONTRACT_OFFSET))(this, a1);
		}

		::System::Reflection::MemberInfo* GetExtensionDataMemberForType(::System::Type* a1)
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETEXTENSIONDATAMEMBERFORTYPE_OFFSET))(this, a1);
		}

		static ::System::Void SetExtensionDataDelegates(::Newtonsoft::Json::Serialization::JsonObjectContract* a1, ::System::Reflection::MemberInfo* a2)
		{
			return ((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonObjectContract*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETEXTENSIONDATADELEGATES_OFFSET))(a1, a2);
		}

		::System::Reflection::ConstructorInfo* GetAttributeConstructor(::System::Type* a1)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETATTRIBUTECONSTRUCTOR_OFFSET))(this, a1);
		}

		::System::Reflection::ConstructorInfo* GetParameterizedConstructor(::System::Type* a1)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETPARAMETERIZEDCONSTRUCTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::JsonProperty*>* CreateConstructorParameters(::System::Reflection::ConstructorInfo* a1, ::Newtonsoft::Json::Serialization::JsonPropertyCollection* a2)
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::JsonProperty*>*(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::Newtonsoft::Json::Serialization::JsonPropertyCollection*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONSTRUCTORPARAMETERS_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* CreatePropertyFromConstructorParameter(::Newtonsoft::Json::Serialization::JsonProperty* a1, ::System::Reflection::ParameterInfo* a2)
		{
			return ((::Newtonsoft::Json::Serialization::JsonProperty*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTYFROMCONSTRUCTORPARAMETER_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::JsonConverter* ResolveContractConverter(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACTCONVERTER_OFFSET))(this, a1);
		}

		::System::Func_1<::System::Object*>* GetDefaultCreator(::System::Type* a1)
		{
			return ((::System::Func_1<::System::Object*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETDEFAULTCREATOR_OFFSET))(this, a1);
		}

		::System::Void InitializeContract(::Newtonsoft::Json::Serialization::JsonContract* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_INITIALIZECONTRACT_OFFSET))(this, a1);
		}

		::System::Void ResolveCallbackMethods(::Newtonsoft::Json::Serialization::JsonContract* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECALLBACKMETHODS_OFFSET))(this, a1, a2);
		}

		::System::Void GetCallbackMethodsForType(::System::Type* a1, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& a2, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& a3, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& a4, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& a5, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*& a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*&, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*&, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*&, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*&, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCALLBACKMETHODSFORTYPE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean ShouldSkipDeserialized(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPDESERIALIZED_OFFSET))(a1);
		}

		static ::System::Boolean ShouldSkipSerializing(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPSERIALIZING_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::System::Type*>* GetClassHierarchyForType(::System::Type* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLASSHIERARCHYFORTYPE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonDictionaryContract* CreateDictionaryContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonDictionaryContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEDICTIONARYCONTRACT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonArrayContract* CreateArrayContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonArrayContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEARRAYCONTRACT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonPrimitiveContract* CreatePrimitiveContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonPrimitiveContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPRIMITIVECONTRACT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonLinqContract* CreateLinqContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonLinqContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATELINQCONTRACT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonISerializableContract* CreateISerializableContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonISerializableContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEISERIALIZABLECONTRACT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonStringContract* CreateStringContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonStringContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESTRINGCONTRACT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonContract* CreateContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONTRACT_OFFSET))(this, a1);
		}

		static ::System::Boolean IsJsonPrimitiveType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISJSONPRIMITIVETYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsIConvertible(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISICONVERTIBLE_OFFSET))(a1);
		}

		static ::System::Boolean CanConvertToString(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CANCONVERTTOSTRING_OFFSET))(a1);
		}

		static ::System::Boolean IsValidCallback(::System::Reflection::MethodInfo* a1, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a2, ::System::Type* a3, ::System::Reflection::MethodInfo* a4, ::System::Type*& a5)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Type*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISVALIDCALLBACK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* GetClrTypeFullName(::System::Type* a1)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLRTYPEFULLNAME_OFFSET))(a1);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::JsonProperty*>* CreateProperties(::System::Type* a1, ::Newtonsoft::Json::MemberSerialization a2)
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::JsonProperty*>*(*)(::PVOID, ::System::Type*, ::Newtonsoft::Json::MemberSerialization))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTIES_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::Serialization::IValueProvider* CreateMemberValueProvider(::System::Reflection::MemberInfo* a1)
		{
			return ((::Newtonsoft::Json::Serialization::IValueProvider*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEMEMBERVALUEPROVIDER_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* CreateProperty(::System::Reflection::MemberInfo* a1, ::Newtonsoft::Json::MemberSerialization a2)
		{
			return ((::Newtonsoft::Json::Serialization::JsonProperty*(*)(::PVOID, ::System::Reflection::MemberInfo*, ::Newtonsoft::Json::MemberSerialization))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void SetPropertySettingsFromAttributes(::Newtonsoft::Json::Serialization::JsonProperty* a1, ::System::Object* a2, ::System::String* a3, ::System::Type* a4, ::Newtonsoft::Json::MemberSerialization a5, ::System::Boolean& a6)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::System::String*, ::System::Type*, ::Newtonsoft::Json::MemberSerialization, ::System::Boolean&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETPROPERTYSETTINGSFROMATTRIBUTES_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Predicate_1<::System::Object*>* CreateShouldSerializeTest(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Predicate_1<::System::Object*>*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESHOULDSERIALIZETEST_OFFSET))(this, a1);
		}

		::System::Void SetIsSpecifiedActions(::Newtonsoft::Json::Serialization::JsonProperty* a1, ::System::Reflection::MemberInfo* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Reflection::MemberInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETISSPECIFIEDACTIONS_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ResolvePropertyName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEPROPERTYNAME_OFFSET))(this, a1);
		}

		::System::String* ResolveDictionaryKey(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEDICTIONARYKEY_OFFSET))(this, a1);
		}

		::System::String* GetResolvedPropertyName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETRESOLVEDPROPERTYNAME_OFFSET))(this, a1);
		}
	};
}
