#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { template <typename T> class ObjectConstructor_1; }
namespace Newtonsoft::Json::Utilities { class ReflectionMember; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Reflection { class MethodBase; }

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1887BEE0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_CREATE_OFFSET UNITYSDK_OFFSET(0x1887BED0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1887BDE0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1887BCE0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GET_CREATOR_OFFSET UNITYSDK_OFFSET(0x1887BC10)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x1887BC30)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_SET_CREATOR_OFFSET UNITYSDK_OFFSET(0x1887BC20)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_SET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x1887BC40)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1887BC50)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionObject_TypeDefinitionIndex = 9297;

	class ReflectionObject : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _Creator_k__BackingField; // 0x10
		::System::Collections::Generic::IDictionary_2<::System::String*, ::Newtonsoft::Json::Utilities::ReflectionMember*>* _Members_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_Creator()
		{
			return ((::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GET_CREATOR_OFFSET))(this);
		}

		::System::Void set_Creator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_SET_CREATOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::Newtonsoft::Json::Utilities::ReflectionMember*>* get_Members()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::Newtonsoft::Json::Utilities::ReflectionMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GET_MEMBERS_OFFSET))(this);
		}

		::System::Void set_Members(::System::Collections::Generic::IDictionary_2<::System::String*, ::Newtonsoft::Json::Utilities::ReflectionMember*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::Newtonsoft::Json::Utilities::ReflectionMember*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_SET_MEMBERS_OFFSET))(this, a1);
		}

		::System::Object* GetValue(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Type* GetType(::System::String* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GETTYPE_OFFSET))(this, a1);
		}

		static ::Newtonsoft::Json::Utilities::ReflectionObject* Create(::System::Type* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::Newtonsoft::Json::Utilities::ReflectionObject*(*)(::System::Type*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_CREATE_OFFSET))(a1, a2);
		}

		static ::Newtonsoft::Json::Utilities::ReflectionObject* Create_1(::System::Type* a1, ::System::Reflection::MethodBase* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::Newtonsoft::Json::Utilities::ReflectionObject*(*)(::System::Type*, ::System::Reflection::MethodBase*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_CREATE_1_OFFSET))(a1, a2, a3);
		}
	};
}
