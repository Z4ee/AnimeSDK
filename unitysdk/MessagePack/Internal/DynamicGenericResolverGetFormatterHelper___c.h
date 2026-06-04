#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18156B10)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18156B50)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_0_OFFSET UNITYSDK_OFFSET(0x18156B60)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_1_OFFSET UNITYSDK_OFFSET(0x18156BA0)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_2_OFFSET UNITYSDK_OFFSET(0x18156BE0)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_3_OFFSET UNITYSDK_OFFSET(0x18156D00)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_4_OFFSET UNITYSDK_OFFSET(0x18156D60)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_5_OFFSET UNITYSDK_OFFSET(0x18156E40)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_6_OFFSET UNITYSDK_OFFSET(0x18156F20)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_8_OFFSET UNITYSDK_OFFSET(0x18156F80)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex = 7264;

	class DynamicGenericResolverGetFormatterHelper___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_5()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x9380);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x9388);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x9390);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x9398);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__1_3()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x93A0);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_4()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x93A8);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__1_6()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x93B0);
		}
		static ::MessagePack::Internal::DynamicGenericResolverGetFormatterHelper___c** StaticGet___9()
		{
			return (::MessagePack::Internal::DynamicGenericResolverGetFormatterHelper___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x93B8);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_8()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x93C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFormatter_b__1_0(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormatter_b__1_1(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormatter_b__1_2(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_2_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormatter_b__1_3(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_3_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormatter_b__1_4(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_4_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormatter_b__1_5(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_5_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormatter_b__1_6(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_6_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormatter_b__1_8(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_8_OFFSET))(this, a1);
		}
	};
}
