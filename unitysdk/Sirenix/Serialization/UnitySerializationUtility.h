#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/DataFormat.h"
#include "unitysdk/Sirenix/Serialization/SerializationData.h"
#include "unitysdk/Sirenix/Serialization/UnitySerializationUtility_CachedSerializationBackendResult.h"
#include "unitysdk/Sirenix/Serialization/UnitySerializationUtility_UnityObjectCacheData.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class DeserializationContext; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { class ISerializationPolicy; }
namespace Sirenix::Serialization { class PrefabModification; }
namespace Sirenix::Serialization { class SerializationContext; }
namespace Sirenix::Serialization::Utilities { class ICache; }
namespace Sirenix::Serialization::Utilities { class WeakValueGetter; }
namespace Sirenix::Serialization::Utilities { class WeakValueSetter; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class MemberInfo; }
namespace UnityEngine { class Object; }

#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_APPLYPREFABMODIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1B89CB80)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_CALCULATEODINWILLSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B894760)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_CREATEDEFAULTUNITYINITIALIZEDOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1B8A0960)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_CREATEDEFAULTUNITYINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1B8A0780)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_DESERIALIZEPREFABMODIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1B89F1E0)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_DESERIALIZEUNITYOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1B899510)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_DESERIALIZEUNITYOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1B89E560)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_DESERIALIZEUNITYOBJECT_3_OFFSET UNITYSDK_OFFSET(0x1B89B6F0)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_DESERIALIZEUNITYOBJECT_4_OFFSET UNITYSDK_OFFSET(0x1B89CE50)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_DESERIALIZEUNITYOBJECT_OFFSET UNITYSDK_OFFSET(0x1B899340)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GETCACHEDUNITYMEMBERGETTER_OFFSET UNITYSDK_OFFSET(0x1B898C50)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GETCACHEDUNITYMEMBERSETTER_OFFSET UNITYSDK_OFFSET(0x1B89E950)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GETCACHEDUNITYREADER_OFFSET UNITYSDK_OFFSET(0x1B89E6E0)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GETCACHEDUNITYWRITER_OFFSET UNITYSDK_OFFSET(0x1B897E20)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GETODINWILLSERIALIZEMEMBERS_1_OFFSET UNITYSDK_OFFSET(0x1B893CF0)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GETODINWILLSERIALIZEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1B893C70)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GETSTRINGFROMSTREAMANDRESET_OFFSET UNITYSDK_OFFSET(0x1B89F050)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GUESSIFUNITYWILLSERIALIZEPRIVATE_1_OFFSET UNITYSDK_OFFSET(0x1B895340)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GUESSIFUNITYWILLSERIALIZEPRIVATE_OFFSET UNITYSDK_OFFSET(0x1B894CB0)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GUESSIFUNITYWILLSERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1B895050)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GUESSIFUNITYWILLSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B8949C0)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_ODINWILLSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B893DF0)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_SERIALIZEUNITYOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1B897AF0)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_SERIALIZEUNITYOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1B897C60)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_SERIALIZEUNITYOBJECT_3_OFFSET UNITYSDK_OFFSET(0x1B897D80)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_SERIALIZEUNITYOBJECT_4_OFFSET UNITYSDK_OFFSET(0x1B896420)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_SERIALIZEUNITYOBJECT_5_OFFSET UNITYSDK_OFFSET(0x1B898BE0)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_SERIALIZEUNITYOBJECT_6_OFFSET UNITYSDK_OFFSET(0x1B898070)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_SERIALIZEUNITYOBJECT_OFFSET UNITYSDK_OFFSET(0x1B895E00)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8A1090)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int UnitySerializationUtility_TypeDefinitionIndex = 7466;

	class UnitySerializationUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::Sirenix::Serialization::UnitySerializationUtility_CachedSerializationBackendResult>** StaticGet_OdinWillSerializeCache_UnityPolicy()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::Sirenix::Serialization::UnitySerializationUtility_CachedSerializationBackendResult>**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x62F0);
		}
		static ::System::Action_1<::System::Type*>** StaticGet_OnEndSerializeTypeViaReflection()
		{
			return (::System::Action_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x62F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::Sirenix::Serialization::Utilities::WeakValueGetter*>** StaticGet_UnityMemberGetters()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::Sirenix::Serialization::Utilities::WeakValueGetter*>**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6300);
		}
		static ::System::Action_1<::System::Type*>** StaticGet_OnBeginDeserializeTypeViaReflection()
		{
			return (::System::Action_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6308);
		}
		static ::Sirenix::Serialization::ISerializationPolicy** StaticGet_UnityPolicy()
		{
			return (::Sirenix::Serialization::ISerializationPolicy**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6310);
		}
		static ::Sirenix::Serialization::ISerializationPolicy** StaticGet_EverythingPolicy()
		{
			return (::Sirenix::Serialization::ISerializationPolicy**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6318);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::System::Boolean>** StaticGet_UnityWillSerializeMembersCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6320);
		}
		static ::System::Reflection::Assembly** StaticGet_HashSet_Assembly()
		{
			return (::System::Reflection::Assembly**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6328);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::Sirenix::Serialization::Utilities::WeakValueSetter*>** StaticGet_UnityMemberSetters()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::Sirenix::Serialization::Utilities::WeakValueSetter*>**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6330);
		}
		static ::System::Action_1<::System::Type*>** StaticGet_OnEndDeserializeTypeViaReflection()
		{
			return (::System::Action_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6338);
		}
		static ::System::Reflection::Assembly** StaticGet_LinkedList_Assembly()
		{
			return (::System::Reflection::Assembly**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6340);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Boolean>** StaticGet_UnityWillSerializeTypesCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6348);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::Sirenix::Serialization::UnitySerializationUtility_CachedSerializationBackendResult>** StaticGet_OdinWillSerializeCache_EverythingPolicy()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::Sirenix::Serialization::UnitySerializationUtility_CachedSerializationBackendResult>**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6350);
		}
		static ::System::Collections::Generic::Dictionary_2<::Sirenix::Serialization::ISerializationPolicy*, ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::Sirenix::Serialization::UnitySerializationUtility_CachedSerializationBackendResult>*>** StaticGet_OdinWillSerializeCache_CustomPolicies()
		{
			return (::System::Collections::Generic::Dictionary_2<::Sirenix::Serialization::ISerializationPolicy*, ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::Sirenix::Serialization::UnitySerializationUtility_CachedSerializationBackendResult>*>**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6358);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_UnityNeverSerializesTypeNames()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6360);
		}
		static ::System::Reflection::Assembly** StaticGet_String_Assembly()
		{
			return (::System::Reflection::Assembly**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6368);
		}
		static ::System::Action_1<::System::Type*>** StaticGet_OnBeginSerializeTypeViaReflection()
		{
			return (::System::Action_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6370);
		}
		static ::Sirenix::Serialization::ISerializationPolicy** StaticGet_StrictPolicy()
		{
			return (::Sirenix::Serialization::ISerializationPolicy**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6378);
		}
		static ::System::Type** StaticGet_SerializeReferenceAttributeType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6380);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::Sirenix::Serialization::UnitySerializationUtility_CachedSerializationBackendResult>** StaticGet_OdinWillSerializeCache_StrictPolicy()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::Sirenix::Serialization::UnitySerializationUtility_CachedSerializationBackendResult>**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6388);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_UnityNeverSerializesTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x6390);
		}
		static ::System::Boolean* StaticGet_WatchReflectBehaviour()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationUtility_TypeDefinitionIndex)->GetStaticField(0x3280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* GetOdinWillSerializeMembers(::UnityEngine::Object* unityObject, ::Sirenix::Serialization::ISerializationPolicy* policy, ::System::Boolean serializeUnityFields)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*(*)(::UnityEngine::Object*, ::Sirenix::Serialization::ISerializationPolicy*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GETODINWILLSERIALIZEMEMBERS_OFFSET))(unityObject, policy, serializeUnityFields);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* GetOdinWillSerializeMembers_1(::System::Type* type, ::Sirenix::Serialization::ISerializationPolicy* policy, ::System::Boolean serializeUnityFields)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*(*)(::System::Type*, ::Sirenix::Serialization::ISerializationPolicy*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GETODINWILLSERIALIZEMEMBERS_1_OFFSET))(type, policy, serializeUnityFields);
		}

		static ::System::Boolean OdinWillSerialize(::System::Reflection::MemberInfo* member, ::System::Boolean serializeUnityFields, ::Sirenix::Serialization::ISerializationPolicy* policy)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Boolean, ::Sirenix::Serialization::ISerializationPolicy*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_ODINWILLSERIALIZE_OFFSET))(member, serializeUnityFields, policy);
		}

		static ::System::Boolean CalculateOdinWillSerialize(::System::Reflection::MemberInfo* member, ::System::Boolean serializeUnityFields, ::Sirenix::Serialization::ISerializationPolicy* policy)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Boolean, ::Sirenix::Serialization::ISerializationPolicy*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_CALCULATEODINWILLSERIALIZE_OFFSET))(member, serializeUnityFields, policy);
		}

		static ::System::Boolean GuessIfUnityWillSerialize(::System::Reflection::MemberInfo* member)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GUESSIFUNITYWILLSERIALIZE_OFFSET))(member);
		}

		static ::System::Boolean GuessIfUnityWillSerializePrivate(::System::Reflection::MemberInfo* member)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GUESSIFUNITYWILLSERIALIZEPRIVATE_OFFSET))(member);
		}

		static ::System::Boolean GuessIfUnityWillSerialize_1(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GUESSIFUNITYWILLSERIALIZE_1_OFFSET))(type);
		}

		static ::System::Boolean GuessIfUnityWillSerializePrivate_1(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GUESSIFUNITYWILLSERIALIZEPRIVATE_1_OFFSET))(type);
		}

		static ::System::Void SerializeUnityObject(::UnityEngine::Object* unityObject, ::Sirenix::Serialization::SerializationData& data, ::System::Boolean serializeUnityFields, ::Sirenix::Serialization::SerializationContext* context)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Sirenix::Serialization::SerializationData&, ::System::Boolean, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_SERIALIZEUNITYOBJECT_OFFSET))(unityObject, data, serializeUnityFields, context);
		}

		static ::System::Void SerializeUnityObject_1(::UnityEngine::Object* unityObject, ::System::String*& base64Bytes, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*& referencedUnityObjects, ::Sirenix::Serialization::DataFormat format, ::System::Boolean serializeUnityFields, ::Sirenix::Serialization::SerializationContext* context)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*&, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*&, ::Sirenix::Serialization::DataFormat, ::System::Boolean, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_SERIALIZEUNITYOBJECT_1_OFFSET))(unityObject, base64Bytes, referencedUnityObjects, format, serializeUnityFields, context);
		}

		static ::System::Void SerializeUnityObject_2(::UnityEngine::Object* unityObject, ::System::String*& base64Bytes, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*& referencedUnityObjects, ::Sirenix::Serialization::DataFormat format, ::Sirenix::Serialization::UnitySerializationUtility_UnityObjectCacheData& cacheData, ::System::Boolean serializeUnityFields, ::Sirenix::Serialization::SerializationContext* context)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*&, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*&, ::Sirenix::Serialization::DataFormat, ::Sirenix::Serialization::UnitySerializationUtility_UnityObjectCacheData&, ::System::Boolean, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_SERIALIZEUNITYOBJECT_2_OFFSET))(unityObject, base64Bytes, referencedUnityObjects, format, cacheData, serializeUnityFields, context);
		}

		static ::System::Void SerializeUnityObject_3(::UnityEngine::Object* unityObject, ::Il2CppArray<::System::Byte>*& bytes, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*& referencedUnityObjects, ::Sirenix::Serialization::DataFormat format, ::System::Boolean serializeUnityFields, ::Sirenix::Serialization::SerializationContext* context)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Il2CppArray<::System::Byte>*&, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*&, ::Sirenix::Serialization::DataFormat, ::System::Boolean, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_SERIALIZEUNITYOBJECT_3_OFFSET))(unityObject, bytes, referencedUnityObjects, format, serializeUnityFields, context);
		}

		static ::System::Void SerializeUnityObject_4(::UnityEngine::Object* unityObject, ::Il2CppArray<::System::Byte>*& bytes, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*& referencedUnityObjects, ::Sirenix::Serialization::DataFormat format, ::Sirenix::Serialization::UnitySerializationUtility_UnityObjectCacheData& cacheData, ::System::Boolean serializeUnityFields, ::Sirenix::Serialization::SerializationContext* context)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Il2CppArray<::System::Byte>*&, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*&, ::Sirenix::Serialization::DataFormat, ::Sirenix::Serialization::UnitySerializationUtility_UnityObjectCacheData&, ::System::Boolean, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_SERIALIZEUNITYOBJECT_4_OFFSET))(unityObject, bytes, referencedUnityObjects, format, cacheData, serializeUnityFields, context);
		}

		static ::System::Void SerializeUnityObject_5(::UnityEngine::Object* unityObject, ::Sirenix::Serialization::IDataWriter* writer, ::System::Boolean serializeUnityFields)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Sirenix::Serialization::IDataWriter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_SERIALIZEUNITYOBJECT_5_OFFSET))(unityObject, writer, serializeUnityFields);
		}

		static ::System::Void SerializeUnityObject_6(::UnityEngine::Object* unityObject, ::Sirenix::Serialization::IDataWriter* writer, ::Sirenix::Serialization::UnitySerializationUtility_UnityObjectCacheData& cacheData, ::System::Boolean serializeUnityFields)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Sirenix::Serialization::IDataWriter*, ::Sirenix::Serialization::UnitySerializationUtility_UnityObjectCacheData&, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_SERIALIZEUNITYOBJECT_6_OFFSET))(unityObject, writer, cacheData, serializeUnityFields);
		}

		static ::System::Void DeserializeUnityObject(::UnityEngine::Object* unityObject, ::Sirenix::Serialization::SerializationData& data, ::Sirenix::Serialization::DeserializationContext* context)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Sirenix::Serialization::SerializationData&, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_DESERIALIZEUNITYOBJECT_OFFSET))(unityObject, data, context);
		}

		static ::System::Void DeserializeUnityObject_1(::UnityEngine::Object* unityObject, ::Sirenix::Serialization::SerializationData& data, ::Sirenix::Serialization::DeserializationContext* context, ::System::Boolean isPrefabData, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* prefabInstanceUnityObjects, ::Sirenix::Serialization::UnitySerializationUtility_UnityObjectCacheData& cacheData)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Sirenix::Serialization::SerializationData&, ::Sirenix::Serialization::DeserializationContext*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*, ::Sirenix::Serialization::UnitySerializationUtility_UnityObjectCacheData&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_DESERIALIZEUNITYOBJECT_1_OFFSET))(unityObject, data, context, isPrefabData, prefabInstanceUnityObjects, cacheData);
		}

		static ::System::Void DeserializeUnityObject_2(::UnityEngine::Object* unityObject, ::System::String*& base64Bytes, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*& referencedUnityObjects, ::Sirenix::Serialization::DataFormat format, ::Sirenix::Serialization::UnitySerializationUtility_UnityObjectCacheData& cacheData, ::Sirenix::Serialization::DeserializationContext* context)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*&, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*&, ::Sirenix::Serialization::DataFormat, ::Sirenix::Serialization::UnitySerializationUtility_UnityObjectCacheData&, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_DESERIALIZEUNITYOBJECT_2_OFFSET))(unityObject, base64Bytes, referencedUnityObjects, format, cacheData, context);
		}

		static ::System::Void DeserializeUnityObject_3(::UnityEngine::Object* unityObject, ::Il2CppArray<::System::Byte>*& bytes, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*& referencedUnityObjects, ::Sirenix::Serialization::DataFormat format, ::Sirenix::Serialization::UnitySerializationUtility_UnityObjectCacheData& cacheData, ::Sirenix::Serialization::DeserializationContext* context)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Il2CppArray<::System::Byte>*&, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*&, ::Sirenix::Serialization::DataFormat, ::Sirenix::Serialization::UnitySerializationUtility_UnityObjectCacheData&, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_DESERIALIZEUNITYOBJECT_3_OFFSET))(unityObject, bytes, referencedUnityObjects, format, cacheData, context);
		}

		static ::System::Void DeserializeUnityObject_4(::UnityEngine::Object* unityObject, ::Sirenix::Serialization::IDataReader* reader, ::Sirenix::Serialization::UnitySerializationUtility_UnityObjectCacheData& cacheData)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Sirenix::Serialization::IDataReader*, ::Sirenix::Serialization::UnitySerializationUtility_UnityObjectCacheData&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_DESERIALIZEUNITYOBJECT_4_OFFSET))(unityObject, reader, cacheData);
		}

		static ::System::String* GetStringFromStreamAndReset(::System::IO::Stream* stream)
		{
			return ((::System::String*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GETSTRINGFROMSTREAMANDRESET_OFFSET))(stream);
		}

		static ::System::Collections::Generic::List_1<::Sirenix::Serialization::PrefabModification*>* DeserializePrefabModifications(::System::Collections::Generic::List_1<::System::String*>* modifications, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* referencedUnityObjects)
		{
			return ((::System::Collections::Generic::List_1<::Sirenix::Serialization::PrefabModification*>*(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_DESERIALIZEPREFABMODIFICATIONS_OFFSET))(modifications, referencedUnityObjects);
		}

		static ::System::Object* CreateDefaultUnityInitializedObject(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_CREATEDEFAULTUNITYINITIALIZEDOBJECT_OFFSET))(type);
		}

		static ::System::Object* CreateDefaultUnityInitializedObject_1(::System::Type* type, ::System::Int32 depth)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_CREATEDEFAULTUNITYINITIALIZEDOBJECT_1_OFFSET))(type, depth);
		}

		static ::System::Void ApplyPrefabModifications(::UnityEngine::Object* unityObject, ::System::Collections::Generic::List_1<::System::String*>* modificationData, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* referencedUnityObjects)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_APPLYPREFABMODIFICATIONS_OFFSET))(unityObject, modificationData, referencedUnityObjects);
		}

		static ::Sirenix::Serialization::Utilities::WeakValueGetter* GetCachedUnityMemberGetter(::System::Reflection::MemberInfo* member)
		{
			return ((::Sirenix::Serialization::Utilities::WeakValueGetter*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GETCACHEDUNITYMEMBERGETTER_OFFSET))(member);
		}

		static ::Sirenix::Serialization::Utilities::WeakValueSetter* GetCachedUnityMemberSetter(::System::Reflection::MemberInfo* member)
		{
			return ((::Sirenix::Serialization::Utilities::WeakValueSetter*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GETCACHEDUNITYMEMBERSETTER_OFFSET))(member);
		}

		static ::Sirenix::Serialization::Utilities::ICache* GetCachedUnityWriter(::Sirenix::Serialization::DataFormat format, ::System::IO::Stream* stream, ::Sirenix::Serialization::SerializationContext* context)
		{
			return ((::Sirenix::Serialization::Utilities::ICache*(*)(::Sirenix::Serialization::DataFormat, ::System::IO::Stream*, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GETCACHEDUNITYWRITER_OFFSET))(format, stream, context);
		}

		static ::Sirenix::Serialization::Utilities::ICache* GetCachedUnityReader(::Sirenix::Serialization::DataFormat format, ::System::IO::Stream* stream, ::Sirenix::Serialization::DeserializationContext* context)
		{
			return ((::Sirenix::Serialization::Utilities::ICache*(*)(::Sirenix::Serialization::DataFormat, ::System::IO::Stream*, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_GETCACHEDUNITYREADER_OFFSET))(format, stream, context);
		}
	};
}
