#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/Label.h"

namespace MessagePack { class UnionAttribute; }
namespace MessagePack::Internal { class DynamicAssembly; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodInfo; }
template <typename T1, typename T2> class __f__AnonymousType0_2;

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDDESERIALIZE_B__13_1_OFFSET UNITYSDK_OFFSET(0x1E8C04E0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDSERIALIZE_B__12_1_OFFSET UNITYSDK_OFFSET(0x1E8C04C0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDTYPE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1E8C04A0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BFB40)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BFB80)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x1E8BFB90)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_1_OFFSET UNITYSDK_OFFSET(0x1E8BFC10)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_2_OFFSET UNITYSDK_OFFSET(0x1E8BFC90)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_3_OFFSET UNITYSDK_OFFSET(0x1E8BFFC0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_4_OFFSET UNITYSDK_OFFSET(0x1E8C0270)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_5_OFFSET UNITYSDK_OFFSET(0x1E8C02B0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_6_OFFSET UNITYSDK_OFFSET(0x1E8C0340)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_7_OFFSET UNITYSDK_OFFSET(0x1E8C03D0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_8_OFFSET UNITYSDK_OFFSET(0x1E8C0460)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver___c_TypeDefinitionIndex = 29951;

	class DynamicUnionResolver___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::Label>** StaticGet___9__13_1()
		{
			return (::System::Func_2<::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::Label>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver___c_TypeDefinitionIndex)->GetStaticField(0x25EF0);
		}
		static ::System::Func_2<::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::Label>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::Label>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver___c_TypeDefinitionIndex)->GetStaticField(0x25EF8);
		}
		static ::System::Func_2<::MessagePack::UnionAttribute*, ::System::Int32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::MessagePack::UnionAttribute*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver___c_TypeDefinitionIndex)->GetStaticField(0x25F00);
		}
		static ::MessagePack::Resolvers::DynamicUnionResolver___c** StaticGet___9()
		{
			return (::MessagePack::Resolvers::DynamicUnionResolver___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver___c_TypeDefinitionIndex)->GetStaticField(0x25F08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__CTOR_OFFSET))(this);
		}

		::MessagePack::Internal::DynamicAssembly* __cctor_b__6_0()
		{
			return ((::MessagePack::Internal::DynamicAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_0_OFFSET))(this);
		}

		::System::Boolean __cctor_b__6_1(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_1_OFFSET))(this, x);
		}

		::System::Reflection::MethodInfo* __cctor_b__6_2(::System::Type* t)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_2_OFFSET))(this, t);
		}

		::System::Reflection::MethodInfo* __cctor_b__6_3(::System::Type* t)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_3_OFFSET))(this, t);
		}

		::System::Boolean __cctor_b__6_4(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_4_OFFSET))(this, x);
		}

		::System::Boolean __cctor_b__6_5(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_5_OFFSET))(this, x);
		}

		::System::Boolean __cctor_b__6_6(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_6_OFFSET))(this, x);
		}

		::System::Boolean __cctor_b__6_7(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_7_OFFSET))(this, x);
		}

		::System::Boolean __cctor_b__6_8(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__6_8_OFFSET))(this, x);
		}

		::System::Int32 _BuildType_b__10_0(::MessagePack::UnionAttribute* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::UnionAttribute*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDTYPE_B__10_0_OFFSET))(this, x);
		}

		::System::Reflection::Emit::Label _BuildSerialize_b__12_1(::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>* x)
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID, ::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDSERIALIZE_B__12_1_OFFSET))(this, x);
		}

		::System::Reflection::Emit::Label _BuildDeserialize_b__13_1(::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>* x)
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID, ::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDDESERIALIZE_B__13_1_OFFSET))(this, x);
		}
	};
}
