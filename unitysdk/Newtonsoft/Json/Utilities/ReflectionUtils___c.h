#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class ParameterInfo; }

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF0FA10)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF0FA40)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__GETCHILDPRIVATEFIELDS_B__39_0_OFFSET UNITYSDK_OFFSET(0x1BF0FC30)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__GETDEFAULTCONSTRUCTOR_B__10_0_OFFSET UNITYSDK_OFFSET(0x1BF0FA50)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__GETFIELDSANDPROPERTIES_B__29_0_OFFSET UNITYSDK_OFFSET(0x1BF0FB10)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__GETMEMBERINFOFROMTYPE_B__37_0_OFFSET UNITYSDK_OFFSET(0x1BF0FBA0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionUtils___c_TypeDefinitionIndex = 9622;

	class ReflectionUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionUtils___c_TypeDefinitionIndex)->GetStaticField(0x560);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::String*>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionUtils___c_TypeDefinitionIndex)->GetStaticField(0x568);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__37_0()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionUtils___c_TypeDefinitionIndex)->GetStaticField(0x570);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionUtils___c_TypeDefinitionIndex)->GetStaticField(0x578);
		}
		static ::Newtonsoft::Json::Utilities::ReflectionUtils___c** StaticGet___9()
		{
			return (::Newtonsoft::Json::Utilities::ReflectionUtils___c**)Il2CppClass::FromTypeDefinitionIndex(ReflectionUtils___c_TypeDefinitionIndex)->GetStaticField(0x580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDefaultConstructor_b__10_0(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__GETDEFAULTCONSTRUCTOR_B__10_0_OFFSET))(this, a1);
		}

		::System::String* _GetFieldsAndProperties_b__29_0(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__GETFIELDSANDPROPERTIES_B__29_0_OFFSET))(this, a1);
		}

		::System::Type* _GetMemberInfoFromType_b__37_0(::System::Reflection::ParameterInfo* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__GETMEMBERINFOFROMTYPE_B__37_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetChildPrivateFields_b__39_0(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__GETCHILDPRIVATEFIELDS_B__39_0_OFFSET))(this, a1);
		}
	};
}
