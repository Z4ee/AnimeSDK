#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_ATTRIBUTE_AREFIELDVALUESEQUAL_OFFSET UNITYSDK_OFFSET(0x177E3AC0)
#define SYSTEM_ATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x177E3800)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_10_OFFSET UNITYSDK_OFFSET(0x177E35F0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x177E2740)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_2_OFFSET UNITYSDK_OFFSET(0x177E2940)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_3_OFFSET UNITYSDK_OFFSET(0x177E2DA0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_4_OFFSET UNITYSDK_OFFSET(0x177E2F90)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_5_OFFSET UNITYSDK_OFFSET(0x177E3150)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_6_OFFSET UNITYSDK_OFFSET(0x177E3260)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_7_OFFSET UNITYSDK_OFFSET(0x177E3430)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_8_OFFSET UNITYSDK_OFFSET(0x177E3440)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_9_OFFSET UNITYSDK_OFFSET(0x177E35E0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x177E2730)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x177E2D40)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x177E30F0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_3_OFFSET UNITYSDK_OFFSET(0x177E36D0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_4_OFFSET UNITYSDK_OFFSET(0x177E3760)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x177E2CD0)
#define SYSTEM_ATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177E3F20)
#define SYSTEM_ATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x177E40B0)
#define SYSTEM_ATTRIBUTE_INTERNALGETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x177E20E0)
#define SYSTEM_ATTRIBUTE_INTERNALGETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x177E20A0)
#define SYSTEM_ATTRIBUTE_INTERNALISDEFINED_1_OFFSET UNITYSDK_OFFSET(0x177E2720)
#define SYSTEM_ATTRIBUTE_INTERNALISDEFINED_OFFSET UNITYSDK_OFFSET(0x177E2710)
#define SYSTEM_ATTRIBUTE_INTERNALPARAMGETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x177E2120)
#define SYSTEM_ATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x177E40C0)
#define SYSTEM_ATTRIBUTE_ISDEFINED_1_OFFSET UNITYSDK_OFFSET(0x177E2B10)
#define SYSTEM_ATTRIBUTE_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x177E2B00)
#define SYSTEM_ATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x177E37F0)

namespace System
{
	inline static constexpr unsigned int Attribute_TypeDefinitionIndex = 201;

	class Attribute : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Attribute*>* InternalGetCustomAttributes(::System::Reflection::PropertyInfo* element, ::System::Type* type, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::PropertyInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_INTERNALGETCUSTOMATTRIBUTES_OFFSET))(element, type, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* InternalGetCustomAttributes_1(::System::Reflection::EventInfo* element, ::System::Type* type, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::EventInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_INTERNALGETCUSTOMATTRIBUTES_1_OFFSET))(element, type, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* InternalParamGetCustomAttributes(::System::Reflection::ParameterInfo* parameter, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::ParameterInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_INTERNALPARAMGETCUSTOMATTRIBUTES_OFFSET))(parameter, attributeType, inherit);
		}

		static ::System::Boolean InternalIsDefined(::System::Reflection::PropertyInfo* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_INTERNALISDEFINED_OFFSET))(element, attributeType, inherit);
		}

		static ::System::Boolean InternalIsDefined_1(::System::Reflection::EventInfo* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_INTERNALISDEFINED_1_OFFSET))(element, attributeType, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes(::System::Reflection::MemberInfo* element, ::System::Type* type)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_OFFSET))(element, type);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_1(::System::Reflection::MemberInfo* element, ::System::Type* type, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_1_OFFSET))(element, type, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_2(::System::Reflection::MemberInfo* element, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_2_OFFSET))(element, inherit);
		}

		static ::System::Boolean IsDefined(::System::Reflection::MemberInfo* element, ::System::Type* attributeType)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_ISDEFINED_OFFSET))(element, attributeType);
		}

		static ::System::Boolean IsDefined_1(::System::Reflection::MemberInfo* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_ISDEFINED_1_OFFSET))(element, attributeType, inherit);
		}

		static ::System::Attribute* GetCustomAttribute(::System::Reflection::MemberInfo* element, ::System::Type* attributeType)
		{
			return ((::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET))(element, attributeType);
		}

		static ::System::Attribute* GetCustomAttribute_1(::System::Reflection::MemberInfo* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_1_OFFSET))(element, attributeType, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_3(::System::Reflection::ParameterInfo* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::ParameterInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_3_OFFSET))(element, attributeType, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_4(::System::Reflection::ParameterInfo* element, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::ParameterInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_4_OFFSET))(element, inherit);
		}

		static ::System::Attribute* GetCustomAttribute_2(::System::Reflection::ParameterInfo* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Attribute*(*)(::System::Reflection::ParameterInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_2_OFFSET))(element, attributeType, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_5(::System::Reflection::Module* element, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Module*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_5_OFFSET))(element, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_6(::System::Reflection::Module* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Module*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_6_OFFSET))(element, attributeType, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_7(::System::Reflection::Assembly* element, ::System::Type* attributeType)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Assembly*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_7_OFFSET))(element, attributeType);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_8(::System::Reflection::Assembly* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Assembly*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_8_OFFSET))(element, attributeType, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_9(::System::Reflection::Assembly* element)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_9_OFFSET))(element);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_10(::System::Reflection::Assembly* element, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Assembly*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_10_OFFSET))(element, inherit);
		}

		static ::System::Attribute* GetCustomAttribute_3(::System::Reflection::Assembly* element, ::System::Type* attributeType)
		{
			return ((::System::Attribute*(*)(::System::Reflection::Assembly*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_3_OFFSET))(element, attributeType);
		}

		static ::System::Attribute* GetCustomAttribute_4(::System::Reflection::Assembly* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Attribute*(*)(::System::Reflection::Assembly*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_4_OFFSET))(element, attributeType, inherit);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		static ::System::Boolean AreFieldValuesEqual(::System::Object* thisValue, ::System::Object* thatValue)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_AREFIELDVALUESEQUAL_OFFSET))(thisValue, thatValue);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
