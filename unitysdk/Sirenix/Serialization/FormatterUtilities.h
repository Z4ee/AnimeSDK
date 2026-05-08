#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class ISerializationPolicy; }
namespace Sirenix::Serialization::Utilities { template <typename T1, typename T2, typename T3> class DoubleLookupDictionary_3; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace UnityEngine { class Object; }

#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES_CREATEUNITYNULL_OFFSET UNITYSDK_OFFSET(0x1B651E40)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES_FINDSERIALIZABLEMEMBERSMAP_OFFSET UNITYSDK_OFFSET(0x1B650E10)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES_FINDSERIALIZABLEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1B651820)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES_GETCONTAINEDTYPE_OFFSET UNITYSDK_OFFSET(0x1B652310)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES_GETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x1B652410)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES_GETPRIVATEMEMBERALIAS_OFFSET UNITYSDK_OFFSET(0x1B652950)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES_GETSERIALIZABLEMEMBERSMAP_OFFSET UNITYSDK_OFFSET(0x1B650960)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES_GETSERIALIZABLEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1B651510)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES_ISPRIMITIVEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1B652280)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES_ISPRIMITIVETYPE_OFFSET UNITYSDK_OFFSET(0x1B6521B0)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES_MEMBERISPRIVATE_OFFSET UNITYSDK_OFFSET(0x1B6527E0)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES_SETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x1B652570)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6502E0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int FormatterUtilities_TypeDefinitionIndex = 7375;

	class FormatterUtilities : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::Utilities::DoubleLookupDictionary_3<::Sirenix::Serialization::ISerializationPolicy*, ::System::Type*, ::Il2CppArray<::System::Reflection::MemberInfo*>*>** StaticGet_MemberArrayCache()
		{
			return (::Sirenix::Serialization::Utilities::DoubleLookupDictionary_3<::Sirenix::Serialization::ISerializationPolicy*, ::System::Type*, ::Il2CppArray<::System::Reflection::MemberInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(FormatterUtilities_TypeDefinitionIndex)->GetStaticField(0x6460);
		}
		static ::System::Reflection::FieldInfo** StaticGet_UnityObjectRuntimeErrorStringField()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(FormatterUtilities_TypeDefinitionIndex)->GetStaticField(0x6468);
		}
		static ::System::Object** StaticGet_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FormatterUtilities_TypeDefinitionIndex)->GetStaticField(0x6470);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_PrimitiveArrayTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(FormatterUtilities_TypeDefinitionIndex)->GetStaticField(0x6478);
		}
		static ::Sirenix::Serialization::Utilities::DoubleLookupDictionary_3<::Sirenix::Serialization::ISerializationPolicy*, ::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::MemberInfo*>*>** StaticGet_MemberMapCache()
		{
			return (::Sirenix::Serialization::Utilities::DoubleLookupDictionary_3<::Sirenix::Serialization::ISerializationPolicy*, ::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::MemberInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(FormatterUtilities_TypeDefinitionIndex)->GetStaticField(0x6480);
		}
		// static const ::System::String* UnityObjectRuntimeErrorString; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::MemberInfo*>* GetSerializableMembersMap(::System::Type* type, ::Sirenix::Serialization::ISerializationPolicy* policy)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::MemberInfo*>*(*)(::System::Type*, ::Sirenix::Serialization::ISerializationPolicy*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES_GETSERIALIZABLEMEMBERSMAP_OFFSET))(type, policy);
		}

		static ::Il2CppArray<::System::Reflection::MemberInfo*>* GetSerializableMembers(::System::Type* type, ::Sirenix::Serialization::ISerializationPolicy* policy)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::System::Type*, ::Sirenix::Serialization::ISerializationPolicy*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES_GETSERIALIZABLEMEMBERS_OFFSET))(type, policy);
		}

		static ::UnityEngine::Object* CreateUnityNull(::System::Type* nullType, ::System::Type* owningType)
		{
			return ((::UnityEngine::Object*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES_CREATEUNITYNULL_OFFSET))(nullType, owningType);
		}

		static ::System::Boolean IsPrimitiveType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES_ISPRIMITIVETYPE_OFFSET))(type);
		}

		static ::System::Boolean IsPrimitiveArrayType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES_ISPRIMITIVEARRAYTYPE_OFFSET))(type);
		}

		static ::System::Type* GetContainedType(::System::Reflection::MemberInfo* member)
		{
			return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES_GETCONTAINEDTYPE_OFFSET))(member);
		}

		static ::System::Object* GetMemberValue(::System::Reflection::MemberInfo* member, ::System::Object* obj)
		{
			return ((::System::Object*(*)(::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES_GETMEMBERVALUE_OFFSET))(member, obj);
		}

		static ::System::Void SetMemberValue(::System::Reflection::MemberInfo* member, ::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES_SETMEMBERVALUE_OFFSET))(member, obj, value);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::MemberInfo*>* FindSerializableMembersMap(::System::Type* type, ::Sirenix::Serialization::ISerializationPolicy* policy)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::MemberInfo*>*(*)(::System::Type*, ::Sirenix::Serialization::ISerializationPolicy*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES_FINDSERIALIZABLEMEMBERSMAP_OFFSET))(type, policy);
		}

		static ::System::Void FindSerializableMembers(::System::Type* type, ::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>* members, ::Sirenix::Serialization::ISerializationPolicy* policy)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>*, ::Sirenix::Serialization::ISerializationPolicy*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES_FINDSERIALIZABLEMEMBERS_OFFSET))(type, members, policy);
		}

		static ::System::Reflection::MemberInfo* GetPrivateMemberAlias(::System::Reflection::MemberInfo* member, ::System::String* prefixString, ::System::String* separatorString)
		{
			return ((::System::Reflection::MemberInfo*(*)(::System::Reflection::MemberInfo*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES_GETPRIVATEMEMBERALIAS_OFFSET))(member, prefixString, separatorString);
		}

		static ::System::Boolean MemberIsPrivate(::System::Reflection::MemberInfo* member)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES_MEMBERISPRIVATE_OFFSET))(member);
		}
	};
}
