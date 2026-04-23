#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17348CF0)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17348D30)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_0_OFFSET UNITYSDK_OFFSET(0x17348D40)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_1_OFFSET UNITYSDK_OFFSET(0x17348D80)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_2_OFFSET UNITYSDK_OFFSET(0x17348DC0)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_3_OFFSET UNITYSDK_OFFSET(0x17348EE0)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_4_OFFSET UNITYSDK_OFFSET(0x17348F40)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_5_OFFSET UNITYSDK_OFFSET(0x17349020)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_6_OFFSET UNITYSDK_OFFSET(0x17349100)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_8_OFFSET UNITYSDK_OFFSET(0x17349160)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex = 9361;

	class DynamicGenericResolverGetFormatterHelper___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x42790);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_4()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x42798);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_8()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x427A0);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__1_6()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x427A8);
		}
		static ::MessagePack::Internal::DynamicGenericResolverGetFormatterHelper___c** StaticGet___9()
		{
			return (::MessagePack::Internal::DynamicGenericResolverGetFormatterHelper___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x427B0);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x427B8);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__1_3()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x427C0);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_5()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x427C8);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex)->GetStaticField(0x427D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFormatter_b__1_0(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_0_OFFSET))(this, x);
		}

		::System::Boolean _GetFormatter_b__1_1(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_1_OFFSET))(this, x);
		}

		::System::Boolean _GetFormatter_b__1_2(::System::Type* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_2_OFFSET))(this, x);
		}

		::System::Boolean _GetFormatter_b__1_3(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_3_OFFSET))(this, x);
		}

		::System::Boolean _GetFormatter_b__1_4(::System::Type* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_4_OFFSET))(this, x);
		}

		::System::Boolean _GetFormatter_b__1_5(::System::Type* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_5_OFFSET))(this, x);
		}

		::System::Boolean _GetFormatter_b__1_6(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_6_OFFSET))(this, x);
		}

		::System::Boolean _GetFormatter_b__1_8(::System::Type* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_8_OFFSET))(this, x);
		}
	};
}
