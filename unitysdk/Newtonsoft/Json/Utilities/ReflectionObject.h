#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { template <typename T> class ObjectConstructor_1; }
namespace Newtonsoft::Json::Utilities { class ReflectionMember; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Reflection { class MethodBase; }

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_CREATE_1_OFFSET UNITYSDK_OFFSET(0x164A1C80)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_CREATE_OFFSET UNITYSDK_OFFSET(0x164A1C70)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GETTYPE_OFFSET UNITYSDK_OFFSET(0x164A1B80)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GETVALUE_OFFSET UNITYSDK_OFFSET(0x164A1A80)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GET_CREATOR_OFFSET UNITYSDK_OFFSET(0x164A19B0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x164A19D0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_SET_CREATOR_OFFSET UNITYSDK_OFFSET(0x164A19C0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_SET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x164A19E0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x164A19F0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionObject_TypeDefinitionIndex = 8248;

	class ReflectionObject : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::String*, ::Newtonsoft::Json::Utilities::ReflectionMember*>* _Members_k__BackingField; // 0x10
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _Creator_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_Creator()
		{
			return ((::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GET_CREATOR_OFFSET))(this);
		}

		::System::Void set_Creator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_SET_CREATOR_OFFSET))(this, value);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::Newtonsoft::Json::Utilities::ReflectionMember*>* get_Members()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::Newtonsoft::Json::Utilities::ReflectionMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GET_MEMBERS_OFFSET))(this);
		}

		::System::Void set_Members(::System::Collections::Generic::IDictionary_2<::System::String*, ::Newtonsoft::Json::Utilities::ReflectionMember*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::Newtonsoft::Json::Utilities::ReflectionMember*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_SET_MEMBERS_OFFSET))(this, value);
		}

		::System::Object* GetValue(::System::Object* target, ::System::String* member)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GETVALUE_OFFSET))(this, target, member);
		}

		::System::Type* GetType(::System::String* member)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GETTYPE_OFFSET))(this, member);
		}

		static ::Newtonsoft::Json::Utilities::ReflectionObject* Create(::System::Type* t, ::Il2CppArray<::System::String*>* memberNames)
		{
			return ((::Newtonsoft::Json::Utilities::ReflectionObject*(*)(::System::Type*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_CREATE_OFFSET))(t, memberNames);
		}

		static ::Newtonsoft::Json::Utilities::ReflectionObject* Create_1(::System::Type* t, ::System::Reflection::MethodBase* creator, ::Il2CppArray<::System::String*>* memberNames)
		{
			return ((::Newtonsoft::Json::Utilities::ReflectionObject*(*)(::System::Type*, ::System::Reflection::MethodBase*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_CREATE_1_OFFSET))(t, creator, memberNames);
		}
	};
}
