#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsResult.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization::FullSerializer { class ISerializationCollector; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsBaseConverter; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsConverter; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsCyclicReferenceManager; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsDirectConverter; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsObjectProcessor; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsSerializer_fsLazyCycleDefinitionWriter; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Object; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ADDCONVERTER_OFFSET UNITYSDK_OFFSET(0x1D1EC0A0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ADD_ONAFTEROBJECTSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1D1EB970)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ADD_ONBEFOREOBJECTSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1D1EB870)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ENSUREDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1D1EAB00)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1D1EC700)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_GETPROCESSORS_OFFSET UNITYSDK_OFFSET(0x1D1EC360)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_GET_IGNORESERIALIZECYCLEREFERENCES_OFFSET UNITYSDK_OFFSET(0x1D1EB850)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_GET_REFERENCESDATABASE_OFFSET UNITYSDK_OFFSET(0x1D1EB830)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_INTERNAL_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1EDD20)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_INTERNAL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1ECF80)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_INVOKE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1EB670)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_INVOKE_ONAFTERSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1EB480)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_INVOKE_ONBEFOREDESERIALIZEAFTERINSTANCECREATION_OFFSET UNITYSDK_OFFSET(0x1D1EB5D0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_INVOKE_ONBEFOREDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1EB530)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_INVOKE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1EB2B0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ISOBJECTDEFINITION_OFFSET UNITYSDK_OFFSET(0x1D1EADF0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ISOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1D1EACC0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ISRESERVEDKEYWORD_OFFSET UNITYSDK_OFFSET(0x1D1EA710)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ISTYPESPECIFIED_OFFSET UNITYSDK_OFFSET(0x1D1EB050)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ISVERSIONED_OFFSET UNITYSDK_OFFSET(0x1D1EAF20)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ISWRAPPEDDATA_OFFSET UNITYSDK_OFFSET(0x1D1EB180)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_PURGETEMPORARYDATA_OFFSET UNITYSDK_OFFSET(0x1D1EC2E0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_REMOVEMETADATA_OFFSET UNITYSDK_OFFSET(0x1D1EA840)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_REMOVE_ONAFTEROBJECTSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1D1EB9F0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_REMOVE_ONBEFOREOBJECTSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1D1EB8F0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_SET_IGNORESERIALIZECYCLEREFERENCES_OFFSET UNITYSDK_OFFSET(0x1D1EB860)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_SET_REFERENCESDATABASE_OFFSET UNITYSDK_OFFSET(0x1D1EB840)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYDESERIALIZEMIGRATION_OFFSET UNITYSDK_OFFSET(0x1D1EF000)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYDESERIALIZEVERSIONING_OFFSET UNITYSDK_OFFSET(0x1D1EED90)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYDESERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1D1ED9D0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1EA4D0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYPOP_OFFSET UNITYSDK_OFFSET(0x1D1ED920)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYPUSH_OFFSET UNITYSDK_OFFSET(0x1D1ED740)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYSERIALIZEVERSIONING_OFFSET UNITYSDK_OFFSET(0x1D1ED510)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYSERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1D1ECBA0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1E9BB0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1EBA70)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsSerializer_TypeDefinitionIndex = 30451;

	class fsSerializer : public ::System::Object
	{
	public:
		// static const ::System::String* KEY_OBJECT_REFERENCE; // 0x0
		// static const ::System::String* KEY_OBJECT_DEFINITION; // 0x0
		// static const ::System::String* KEY_INSTANCE_TYPE; // 0x0
		// static const ::System::String* KEY_VERSION; // 0x0
		// static const ::System::String* KEY_CONTENT; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::ParadoxNotion::Serialization::FullSerializer::fsBaseConverter*>* _cachedConverters; // 0x10
		::System::Collections::Generic::Stack_1<::ParadoxNotion::Serialization::FullSerializer::ISerializationCollector*>* _collectors; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::ParadoxNotion::Serialization::FullSerializer::fsDirectConverter*>* _availableDirectConverters; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor*>*>* _cachedProcessors; // 0x28
		::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor*>* _processors; // 0x30
		::ParadoxNotion::Serialization::FullSerializer::fsCyclicReferenceManager* _references; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::ParadoxNotion::Serialization::FullSerializer::fsBaseConverter*>* _cachedOverrideConverterInstances; // 0x40
		::System::Action_1<::System::Object*>* onBeforeObjectSerialized; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* _ReferencesDatabase_k__BackingField; // 0x50
		::ParadoxNotion::Serialization::FullSerializer::fsSerializer_fsLazyCycleDefinitionWriter* _lazyReferenceWriter; // 0x58
		::System::Action_2<::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* onAfterObjectSerialized; // 0x60
		::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsConverter*>* _availableConverters; // 0x68
		::System::Boolean _IgnoreSerializeCycleReferences_k__BackingField; // 0x70
		::System::Int32 _collectableDepth; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsReservedKeyword(::System::String* key)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ISRESERVEDKEYWORD_OFFSET))(key);
		}

		static ::System::Void RemoveMetaData(::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::System::Void(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_REMOVEMETADATA_OFFSET))(data);
		}

		static ::System::Void EnsureDictionary(::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::System::Void(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ENSUREDICTIONARY_OFFSET))(data);
		}

		static ::System::Boolean IsObjectReference(::ParadoxNotion::Serialization::FullSerializer::fsData* data)
		{
			return ((::System::Boolean(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ISOBJECTREFERENCE_OFFSET))(data);
		}

		static ::System::Boolean IsObjectDefinition(::ParadoxNotion::Serialization::FullSerializer::fsData* data)
		{
			return ((::System::Boolean(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ISOBJECTDEFINITION_OFFSET))(data);
		}

		static ::System::Boolean IsVersioned(::ParadoxNotion::Serialization::FullSerializer::fsData* data)
		{
			return ((::System::Boolean(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ISVERSIONED_OFFSET))(data);
		}

		static ::System::Boolean IsTypeSpecified(::ParadoxNotion::Serialization::FullSerializer::fsData* data)
		{
			return ((::System::Boolean(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ISTYPESPECIFIED_OFFSET))(data);
		}

		static ::System::Boolean IsWrappedData(::ParadoxNotion::Serialization::FullSerializer::fsData* data)
		{
			return ((::System::Boolean(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ISWRAPPEDDATA_OFFSET))(data);
		}

		static ::System::Void Invoke_OnBeforeSerialize(::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor*>* processors, ::System::Type* storageType, ::System::Object* instance)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor*>*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_INVOKE_ONBEFORESERIALIZE_OFFSET))(processors, storageType, instance);
		}

		static ::System::Void Invoke_OnAfterSerialize(::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor*>* processors, ::System::Type* storageType, ::System::Object* instance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor*>*, ::System::Type*, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_INVOKE_ONAFTERSERIALIZE_OFFSET))(processors, storageType, instance, data);
		}

		static ::System::Void Invoke_OnBeforeDeserialize(::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor*>* processors, ::System::Type* storageType, ::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor*>*, ::System::Type*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_INVOKE_ONBEFOREDESERIALIZE_OFFSET))(processors, storageType, data);
		}

		static ::System::Void Invoke_OnBeforeDeserializeAfterInstanceCreation(::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor*>* processors, ::System::Type* storageType, ::System::Object* instance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor*>*, ::System::Type*, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_INVOKE_ONBEFOREDESERIALIZEAFTERINSTANCECREATION_OFFSET))(processors, storageType, instance, data);
		}

		static ::System::Void Invoke_OnAfterDeserialize(::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor*>* processors, ::System::Type* storageType, ::System::Object* instance)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor*>*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_INVOKE_ONAFTERDESERIALIZE_OFFSET))(processors, storageType, instance);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Object*>* get_ReferencesDatabase()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_GET_REFERENCESDATABASE_OFFSET))(this);
		}

		::System::Void set_ReferencesDatabase(::System::Collections::Generic::List_1<::UnityEngine::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_SET_REFERENCESDATABASE_OFFSET))(this, value);
		}

		::System::Boolean get_IgnoreSerializeCycleReferences()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_GET_IGNORESERIALIZECYCLEREFERENCES_OFFSET))(this);
		}

		::System::Void set_IgnoreSerializeCycleReferences(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_SET_IGNORESERIALIZECYCLEREFERENCES_OFFSET))(this, value);
		}

		::System::Void add_onBeforeObjectSerialized(::System::Action_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ADD_ONBEFOREOBJECTSERIALIZED_OFFSET))(this, value);
		}

		::System::Void remove_onBeforeObjectSerialized(::System::Action_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_REMOVE_ONBEFOREOBJECTSERIALIZED_OFFSET))(this, value);
		}

		::System::Void add_onAfterObjectSerialized(::System::Action_2<::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ADD_ONAFTEROBJECTSERIALIZED_OFFSET))(this, value);
		}

		::System::Void remove_onAfterObjectSerialized(::System::Action_2<::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_REMOVE_ONAFTEROBJECTSERIALIZED_OFFSET))(this, value);
		}

		::System::Void PurgeTemporaryData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_PURGETEMPORARYDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor*>* GetProcessors(::System::Type* type)
		{
			return ((::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_GETPROCESSORS_OFFSET))(this, type);
		}

		::System::Void AddConverter(::ParadoxNotion::Serialization::FullSerializer::fsBaseConverter* converter)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsBaseConverter*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_ADDCONVERTER_OFFSET))(this, converter);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsBaseConverter* GetConverter(::System::Type* type, ::System::Type* overrideConverterType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsBaseConverter*(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_GETCONVERTER_OFFSET))(this, type, overrideConverterType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TrySerialize(::System::Type* storageType, ::System::Object* instance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Type*, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYSERIALIZE_OFFSET))(this, storageType, instance, data);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TrySerialize_1(::System::Type* storageType, ::System::Object* instance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& data, ::System::Type* overrideConverterType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Type*, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYSERIALIZE_1_OFFSET))(this, storageType, instance, data, overrideConverterType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult Internal_Serialize(::System::Type* storageType, ::System::Object* instance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& data, ::System::Type* overrideConverterType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Type*, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_INTERNAL_SERIALIZE_OFFSET))(this, storageType, instance, data, overrideConverterType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryDeserialize(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Type* storageType, ::System::Object*& result)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYDESERIALIZE_OFFSET))(this, data, storageType, result);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryDeserialize_1(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Type* storageType, ::System::Object*& result, ::System::Type* overrideConverterType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Type*, ::System::Object*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYDESERIALIZE_1_OFFSET))(this, data, storageType, result, overrideConverterType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult Internal_Deserialize(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Type* storageType, ::System::Object*& result, ::System::Type* overrideConverterType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Type*, ::System::Object*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_INTERNAL_DESERIALIZE_OFFSET))(this, data, storageType, result, overrideConverterType);
		}

		::System::Void TryPush(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYPUSH_OFFSET))(this, o);
		}

		::System::Void TryPop(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYPOP_OFFSET))(this, o);
		}

		::System::Void TrySerializeVersioning(::System::Object* currentInstance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYSERIALIZEVERSIONING_OFFSET))(this, currentInstance, data);
		}

		::System::Void TryDeserializeVersioning(::System::Object*& currentInstance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& currentData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*&, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYDESERIALIZEVERSIONING_OFFSET))(this, currentInstance, currentData);
		}

		::System::Void TryDeserializeMigration(::System::Object*& currentInstance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& currentData, ::System::Type* previousType, ::System::Object* previousInstance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*&, ::ParadoxNotion::Serialization::FullSerializer::fsData*&, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_TRYDESERIALIZEMIGRATION_OFFSET))(this, currentInstance, currentData, previousType, previousInstance);
		}
	};
}
