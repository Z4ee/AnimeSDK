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

#define SYSTEM_ATTRIBUTE_AREFIELDVALUESEQUAL_OFFSET UNITYSDK_OFFSET(0x1859D8C0)
#define SYSTEM_ATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1859D610)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_10_OFFSET UNITYSDK_OFFSET(0x1859D410)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1859C4C0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_2_OFFSET UNITYSDK_OFFSET(0x1859C700)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_3_OFFSET UNITYSDK_OFFSET(0x1859CBB0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_4_OFFSET UNITYSDK_OFFSET(0x1859CDB0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_5_OFFSET UNITYSDK_OFFSET(0x1859CF90)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_6_OFFSET UNITYSDK_OFFSET(0x1859D0A0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_7_OFFSET UNITYSDK_OFFSET(0x1859D260)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_8_OFFSET UNITYSDK_OFFSET(0x1859D270)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_9_OFFSET UNITYSDK_OFFSET(0x1859D400)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1859C4B0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1859CB50)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1859CF30)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_3_OFFSET UNITYSDK_OFFSET(0x1859D4E0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_4_OFFSET UNITYSDK_OFFSET(0x1859D570)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1859CAE0)
#define SYSTEM_ATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1859DD20)
#define SYSTEM_ATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x1859DEA0)
#define SYSTEM_ATTRIBUTE_INTERNALGETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1859BCC0)
#define SYSTEM_ATTRIBUTE_INTERNALGETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1859BC70)
#define SYSTEM_ATTRIBUTE_INTERNALISDEFINED_1_OFFSET UNITYSDK_OFFSET(0x1859C4A0)
#define SYSTEM_ATTRIBUTE_INTERNALISDEFINED_OFFSET UNITYSDK_OFFSET(0x1859C490)
#define SYSTEM_ATTRIBUTE_INTERNALPARAMGETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1859BD10)
#define SYSTEM_ATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1859DEB0)
#define SYSTEM_ATTRIBUTE_ISDEFINED_1_OFFSET UNITYSDK_OFFSET(0x1859C910)
#define SYSTEM_ATTRIBUTE_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1859C900)
#define SYSTEM_ATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1859D600)

namespace System
{
	inline static constexpr unsigned int Attribute_TypeDefinitionIndex = 200;

	class Attribute : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Attribute*>* InternalGetCustomAttributes(::System::Reflection::PropertyInfo* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::PropertyInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_INTERNALGETCUSTOMATTRIBUTES_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Attribute*>* InternalGetCustomAttributes_1(::System::Reflection::EventInfo* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::EventInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_INTERNALGETCUSTOMATTRIBUTES_1_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Attribute*>* InternalParamGetCustomAttributes(::System::Reflection::ParameterInfo* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::ParameterInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_INTERNALPARAMGETCUSTOMATTRIBUTES_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean InternalIsDefined(::System::Reflection::PropertyInfo* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_INTERNALISDEFINED_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean InternalIsDefined_1(::System::Reflection::EventInfo* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_INTERNALISDEFINED_1_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes(::System::Reflection::MemberInfo* a1, ::System::Type* a2)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_1(::System::Reflection::MemberInfo* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_1_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_2(::System::Reflection::MemberInfo* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDefined(::System::Reflection::MemberInfo* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_ISDEFINED_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDefined_1(::System::Reflection::MemberInfo* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_ISDEFINED_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Attribute* GetCustomAttribute(::System::Reflection::MemberInfo* a1, ::System::Type* a2)
		{
			return ((::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET))(a1, a2);
		}

		static ::System::Attribute* GetCustomAttribute_1(::System::Reflection::MemberInfo* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_1_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_3(::System::Reflection::ParameterInfo* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::ParameterInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_3_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_4(::System::Reflection::ParameterInfo* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::ParameterInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_4_OFFSET))(a1, a2);
		}

		static ::System::Attribute* GetCustomAttribute_2(::System::Reflection::ParameterInfo* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::System::Attribute*(*)(::System::Reflection::ParameterInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_2_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_5(::System::Reflection::Module* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Module*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_5_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_6(::System::Reflection::Module* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Module*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_6_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_7(::System::Reflection::Assembly* a1, ::System::Type* a2)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Assembly*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_7_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_8(::System::Reflection::Assembly* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Assembly*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_8_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_9(::System::Reflection::Assembly* a1)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_9_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_10(::System::Reflection::Assembly* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Assembly*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_10_OFFSET))(a1, a2);
		}

		static ::System::Attribute* GetCustomAttribute_3(::System::Reflection::Assembly* a1, ::System::Type* a2)
		{
			return ((::System::Attribute*(*)(::System::Reflection::Assembly*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_3_OFFSET))(a1, a2);
		}

		static ::System::Attribute* GetCustomAttribute_4(::System::Reflection::Assembly* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::System::Attribute*(*)(::System::Reflection::Assembly*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_4_OFFSET))(a1, a2, a3);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Boolean AreFieldValuesEqual(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_AREFIELDVALUESEQUAL_OFFSET))(a1, a2);
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
