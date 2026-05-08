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
namespace Newtonsoft::Json::Serialization { class NamingStrategy; }
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

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CANCONVERTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1B5FA790)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEARRAYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1B5F9870)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONSTRUCTORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B5F68A0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONTRACT_OFFSET UNITYSDK_OFFSET(0x1B5FA140)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEDICTIONARYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1B5F9190)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEISERIALIZABLECONTRACT_OFFSET UNITYSDK_OFFSET(0x1B5F9CE0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATELINQCONTRACT_OFFSET UNITYSDK_OFFSET(0x1B5F9C80)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEMEMBERVALUEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1B5FB410)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEOBJECTCONTRACT_OFFSET UNITYSDK_OFFSET(0x1B5F41A0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPRIMITIVECONTRACT_OFFSET UNITYSDK_OFFSET(0x1B5F9C20)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B5FAFA0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTYFROMCONSTRUCTORPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B5F6B90)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B5FB4E0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESHOULDSERIALIZETEST_OFFSET UNITYSDK_OFFSET(0x1B5FB7E0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESTRINGCONTRACT_OFFSET UNITYSDK_OFFSET(0x1B5FA090)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETATTRIBUTECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1B5F4AB0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCALLBACKMETHODSFORTYPE_OFFSET UNITYSDK_OFFSET(0x1B5F7D80)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLASSHIERARCHYFORTYPE_OFFSET UNITYSDK_OFFSET(0x1B5F6110)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLRTYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x1B5FAD40)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETDEFAULTCREATOR_OFFSET UNITYSDK_OFFSET(0x1B5F76E0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETEXTENSIONDATAMEMBERFORTYPE_OFFSET UNITYSDK_OFFSET(0x1B5F5240)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETPARAMETERIZEDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1B5F50A0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETRESOLVEDPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1B5FBF50)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETSERIALIZABLEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1B5F2E30)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1B5F2A10)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET UNITYSDK_OFFSET(0x1B5F27F0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_DYNAMICCODEGENERATION_OFFSET UNITYSDK_OFFSET(0x1B5F26E0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B5F2850)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEINTERFACE_OFFSET UNITYSDK_OFFSET(0x1B5F2830)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B5F2680)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_NAMINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1B5F2870)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_SERIALIZECOMPILERGENERATEDMEMBERS_OFFSET UNITYSDK_OFFSET(0x1B5F2810)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_INITIALIZECONTRACT_OFFSET UNITYSDK_OFFSET(0x1B5F4530)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISICONVERTIBLE_OFFSET UNITYSDK_OFFSET(0x1B5FAA00)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISJSONPRIMITIVETYPE_OFFSET UNITYSDK_OFFSET(0x1B5FA580)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISVALIDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B5F8C30)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECALLBACKMETHODS_OFFSET UNITYSDK_OFFSET(0x1B5F7960)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACTCONVERTER_OFFSET UNITYSDK_OFFSET(0x1B5F7680)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET UNITYSDK_OFFSET(0x1B5F2A70)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEDICTIONARYKEY_OFFSET UNITYSDK_OFFSET(0x1B5FBF10)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1B5FBEF0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETEXTENSIONDATADELEGATES_OFFSET UNITYSDK_OFFSET(0x1B5F53F0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETISSPECIFIEDACTIONS_OFFSET UNITYSDK_OFFSET(0x1B5FBA60)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETPROPERTYSETTINGSFROMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1B5F6F80)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET UNITYSDK_OFFSET(0x1B5F2800)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNORESERIALIZABLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B5F2860)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNORESERIALIZABLEINTERFACE_OFFSET UNITYSDK_OFFSET(0x1B5F2840)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_NAMINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1B5F2880)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_SERIALIZECOMPILERGENERATEDMEMBERS_OFFSET UNITYSDK_OFFSET(0x1B5F2820)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSERIALIZEENTITYMEMBER_OFFSET UNITYSDK_OFFSET(0x1B5F4090)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1B5F8C20)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1B5F8C10)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5FBF60)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B5F2950)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5F2890)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver_TypeDefinitionIndex = 6966;

	class DefaultContractResolver : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_TypeContractCacheLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver_TypeDefinitionIndex)->GetStaticField(0x5E00);
		}
		static ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>** StaticGet_BuiltInConverters()
		{
			return (::Il2CppArray<::Newtonsoft::Json::JsonConverter*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver_TypeDefinitionIndex)->GetStaticField(0x5E08);
		}
		static ::Newtonsoft::Json::Serialization::DefaultContractResolverState** StaticGet__sharedState()
		{
			return (::Newtonsoft::Json::Serialization::DefaultContractResolverState**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver_TypeDefinitionIndex)->GetStaticField(0x5E10);
		}
		static ::Newtonsoft::Json::Serialization::IContractResolver** StaticGet__instance()
		{
			return (::Newtonsoft::Json::Serialization::IContractResolver**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver_TypeDefinitionIndex)->GetStaticField(0x5E18);
		}
		::Newtonsoft::Json::Serialization::DefaultContractResolverState* _instanceState; // 0x10
		::Newtonsoft::Json::Serialization::NamingStrategy* _NamingStrategy_k__BackingField; // 0x18
		::System::Reflection::BindingFlags _DefaultMembersSearchFlags_k__BackingField; // 0x20
		::System::Boolean _sharedCache; // 0x24
		::System::Boolean _IgnoreSerializableAttribute_k__BackingField; // 0x25
		::System::Boolean _IgnoreSerializableInterface_k__BackingField; // 0x26
		::System::Boolean _SerializeCompilerGeneratedMembers_k__BackingField; // 0x27

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean shareCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER__CTOR_1_OFFSET))(this, shareCache);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER__CCTOR_OFFSET))();
		}

		static ::Newtonsoft::Json::Serialization::IContractResolver* get_Instance()
		{
			return ((::Newtonsoft::Json::Serialization::IContractResolver*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean get_DynamicCodeGeneration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_DYNAMICCODEGENERATION_OFFSET))(this);
		}

		::System::Reflection::BindingFlags get_DefaultMembersSearchFlags()
		{
			return ((::System::Reflection::BindingFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET))(this);
		}

		::System::Void set_DefaultMembersSearchFlags(::System::Reflection::BindingFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET))(this, value);
		}

		::System::Boolean get_SerializeCompilerGeneratedMembers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_SERIALIZECOMPILERGENERATEDMEMBERS_OFFSET))(this);
		}

		::System::Void set_SerializeCompilerGeneratedMembers(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_SERIALIZECOMPILERGENERATEDMEMBERS_OFFSET))(this, value);
		}

		::System::Boolean get_IgnoreSerializableInterface()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEINTERFACE_OFFSET))(this);
		}

		::System::Void set_IgnoreSerializableInterface(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNORESERIALIZABLEINTERFACE_OFFSET))(this, value);
		}

		::System::Boolean get_IgnoreSerializableAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_IgnoreSerializableAttribute(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNORESERIALIZABLEATTRIBUTE_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::NamingStrategy* get_NamingStrategy()
		{
			return ((::Newtonsoft::Json::Serialization::NamingStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_NAMINGSTRATEGY_OFFSET))(this);
		}

		::System::Void set_NamingStrategy(::Newtonsoft::Json::Serialization::NamingStrategy* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::NamingStrategy*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_NAMINGSTRATEGY_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::DefaultContractResolverState* GetState()
		{
			return ((::Newtonsoft::Json::Serialization::DefaultContractResolverState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETSTATE_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::JsonContract* ResolveContract(::System::Type* type)
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>* GetSerializableMembers(::System::Type* objectType)
		{
			return ((::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETSERIALIZABLEMEMBERS_OFFSET))(this, objectType);
		}

		::System::Boolean ShouldSerializeEntityMember(::System::Reflection::MemberInfo* memberInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSERIALIZEENTITYMEMBER_OFFSET))(this, memberInfo);
		}

		::Newtonsoft::Json::Serialization::JsonObjectContract* CreateObjectContract(::System::Type* objectType)
		{
			return ((::Newtonsoft::Json::Serialization::JsonObjectContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEOBJECTCONTRACT_OFFSET))(this, objectType);
		}

		::System::Reflection::MemberInfo* GetExtensionDataMemberForType(::System::Type* type)
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETEXTENSIONDATAMEMBERFORTYPE_OFFSET))(this, type);
		}

		static ::System::Void SetExtensionDataDelegates(::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::System::Reflection::MemberInfo* member)
		{
			return ((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonObjectContract*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETEXTENSIONDATADELEGATES_OFFSET))(contract, member);
		}

		::System::Reflection::ConstructorInfo* GetAttributeConstructor(::System::Type* objectType)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETATTRIBUTECONSTRUCTOR_OFFSET))(this, objectType);
		}

		::System::Reflection::ConstructorInfo* GetParameterizedConstructor(::System::Type* objectType)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETPARAMETERIZEDCONSTRUCTOR_OFFSET))(this, objectType);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::JsonProperty*>* CreateConstructorParameters(::System::Reflection::ConstructorInfo* constructor, ::Newtonsoft::Json::Serialization::JsonPropertyCollection* memberProperties)
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::JsonProperty*>*(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::Newtonsoft::Json::Serialization::JsonPropertyCollection*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONSTRUCTORPARAMETERS_OFFSET))(this, constructor, memberProperties);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* CreatePropertyFromConstructorParameter(::Newtonsoft::Json::Serialization::JsonProperty* matchingMemberProperty, ::System::Reflection::ParameterInfo* parameterInfo)
		{
			return ((::Newtonsoft::Json::Serialization::JsonProperty*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTYFROMCONSTRUCTORPARAMETER_OFFSET))(this, matchingMemberProperty, parameterInfo);
		}

		::Newtonsoft::Json::JsonConverter* ResolveContractConverter(::System::Type* objectType)
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACTCONVERTER_OFFSET))(this, objectType);
		}

		::System::Func_1<::System::Object*>* GetDefaultCreator(::System::Type* createdType)
		{
			return ((::System::Func_1<::System::Object*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETDEFAULTCREATOR_OFFSET))(this, createdType);
		}

		::System::Void InitializeContract(::Newtonsoft::Json::Serialization::JsonContract* contract)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_INITIALIZECONTRACT_OFFSET))(this, contract);
		}

		::System::Void ResolveCallbackMethods(::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECALLBACKMETHODS_OFFSET))(this, contract, t);
		}

		::System::Void GetCallbackMethodsForType(::System::Type* type, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& onSerializing, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& onSerialized, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& onDeserializing, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& onDeserialized, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*& onError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*&, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*&, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*&, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*&, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCALLBACKMETHODSFORTYPE_OFFSET))(this, type, onSerializing, onSerialized, onDeserializing, onDeserialized, onError);
		}

		static ::System::Boolean ShouldSkipDeserialized(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPDESERIALIZED_OFFSET))(t);
		}

		static ::System::Boolean ShouldSkipSerializing(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPSERIALIZING_OFFSET))(t);
		}

		::System::Collections::Generic::List_1<::System::Type*>* GetClassHierarchyForType(::System::Type* type)
		{
			return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLASSHIERARCHYFORTYPE_OFFSET))(this, type);
		}

		::Newtonsoft::Json::Serialization::JsonDictionaryContract* CreateDictionaryContract(::System::Type* objectType)
		{
			return ((::Newtonsoft::Json::Serialization::JsonDictionaryContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEDICTIONARYCONTRACT_OFFSET))(this, objectType);
		}

		::Newtonsoft::Json::Serialization::JsonArrayContract* CreateArrayContract(::System::Type* objectType)
		{
			return ((::Newtonsoft::Json::Serialization::JsonArrayContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEARRAYCONTRACT_OFFSET))(this, objectType);
		}

		::Newtonsoft::Json::Serialization::JsonPrimitiveContract* CreatePrimitiveContract(::System::Type* objectType)
		{
			return ((::Newtonsoft::Json::Serialization::JsonPrimitiveContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPRIMITIVECONTRACT_OFFSET))(this, objectType);
		}

		::Newtonsoft::Json::Serialization::JsonLinqContract* CreateLinqContract(::System::Type* objectType)
		{
			return ((::Newtonsoft::Json::Serialization::JsonLinqContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATELINQCONTRACT_OFFSET))(this, objectType);
		}

		::Newtonsoft::Json::Serialization::JsonISerializableContract* CreateISerializableContract(::System::Type* objectType)
		{
			return ((::Newtonsoft::Json::Serialization::JsonISerializableContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEISERIALIZABLECONTRACT_OFFSET))(this, objectType);
		}

		::Newtonsoft::Json::Serialization::JsonStringContract* CreateStringContract(::System::Type* objectType)
		{
			return ((::Newtonsoft::Json::Serialization::JsonStringContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESTRINGCONTRACT_OFFSET))(this, objectType);
		}

		::Newtonsoft::Json::Serialization::JsonContract* CreateContract(::System::Type* objectType)
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONTRACT_OFFSET))(this, objectType);
		}

		static ::System::Boolean IsJsonPrimitiveType(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISJSONPRIMITIVETYPE_OFFSET))(t);
		}

		static ::System::Boolean IsIConvertible(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISICONVERTIBLE_OFFSET))(t);
		}

		static ::System::Boolean CanConvertToString(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CANCONVERTTOSTRING_OFFSET))(type);
		}

		static ::System::Boolean IsValidCallback(::System::Reflection::MethodInfo* method, ::Il2CppArray<::System::Reflection::ParameterInfo*>* parameters, ::System::Type* attributeType, ::System::Reflection::MethodInfo* currentCallback, ::System::Type*& prevAttributeType)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Type*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISVALIDCALLBACK_OFFSET))(method, parameters, attributeType, currentCallback, prevAttributeType);
		}

		static ::System::String* GetClrTypeFullName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLRTYPEFULLNAME_OFFSET))(type);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::JsonProperty*>* CreateProperties(::System::Type* type, ::Newtonsoft::Json::MemberSerialization memberSerialization)
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::JsonProperty*>*(*)(::PVOID, ::System::Type*, ::Newtonsoft::Json::MemberSerialization))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTIES_OFFSET))(this, type, memberSerialization);
		}

		::Newtonsoft::Json::Serialization::IValueProvider* CreateMemberValueProvider(::System::Reflection::MemberInfo* member)
		{
			return ((::Newtonsoft::Json::Serialization::IValueProvider*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEMEMBERVALUEPROVIDER_OFFSET))(this, member);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* CreateProperty(::System::Reflection::MemberInfo* member, ::Newtonsoft::Json::MemberSerialization memberSerialization)
		{
			return ((::Newtonsoft::Json::Serialization::JsonProperty*(*)(::PVOID, ::System::Reflection::MemberInfo*, ::Newtonsoft::Json::MemberSerialization))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTY_OFFSET))(this, member, memberSerialization);
		}

		::System::Void SetPropertySettingsFromAttributes(::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Object* attributeProvider, ::System::String* name, ::System::Type* declaringType, ::Newtonsoft::Json::MemberSerialization memberSerialization, ::System::Boolean& allowNonPublicAccess)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::System::String*, ::System::Type*, ::Newtonsoft::Json::MemberSerialization, ::System::Boolean&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETPROPERTYSETTINGSFROMATTRIBUTES_OFFSET))(this, property, attributeProvider, name, declaringType, memberSerialization, allowNonPublicAccess);
		}

		::System::Predicate_1<::System::Object*>* CreateShouldSerializeTest(::System::Reflection::MemberInfo* member)
		{
			return ((::System::Predicate_1<::System::Object*>*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESHOULDSERIALIZETEST_OFFSET))(this, member);
		}

		::System::Void SetIsSpecifiedActions(::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Reflection::MemberInfo* member, ::System::Boolean allowNonPublicAccess)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Reflection::MemberInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETISSPECIFIEDACTIONS_OFFSET))(this, property, member, allowNonPublicAccess);
		}

		::System::String* ResolvePropertyName(::System::String* propertyName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEPROPERTYNAME_OFFSET))(this, propertyName);
		}

		::System::String* ResolveDictionaryKey(::System::String* dictionaryKey)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEDICTIONARYKEY_OFFSET))(this, dictionaryKey);
		}

		::System::String* GetResolvedPropertyName(::System::String* propertyName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETRESOLVEDPROPERTYNAME_OFFSET))(this, propertyName);
		}
	};
}
