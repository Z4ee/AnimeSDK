#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/Label.h"

namespace MessagePack { class UnionAttribute; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodInfo; }
template <typename T1, typename T2> class __f__AnonymousType0_2;

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDDESERIALIZE_B__12_1_OFFSET UNITYSDK_OFFSET(0x15D88C80)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDSERIALIZE_B__11_1_OFFSET UNITYSDK_OFFSET(0x15D88C60)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDTYPE_B__9_0_OFFSET UNITYSDK_OFFSET(0x15D88C40)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D88350)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D88390)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x15D883A0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_1_OFFSET UNITYSDK_OFFSET(0x15D88420)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_2_OFFSET UNITYSDK_OFFSET(0x15D88750)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_3_OFFSET UNITYSDK_OFFSET(0x15D88A10)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_4_OFFSET UNITYSDK_OFFSET(0x15D88A50)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_5_OFFSET UNITYSDK_OFFSET(0x15D88AE0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_6_OFFSET UNITYSDK_OFFSET(0x15D88B70)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_7_OFFSET UNITYSDK_OFFSET(0x15D88C00)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver___c_TypeDefinitionIndex = 9119;

	class DynamicUnionResolver___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::Label>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::Label>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver___c_TypeDefinitionIndex)->GetStaticField(0x234E0);
		}
		static ::MessagePack::Resolvers::DynamicUnionResolver___c** StaticGet___9()
		{
			return (::MessagePack::Resolvers::DynamicUnionResolver___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver___c_TypeDefinitionIndex)->GetStaticField(0x234E8);
		}
		static ::System::Func_2<::MessagePack::UnionAttribute*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::MessagePack::UnionAttribute*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver___c_TypeDefinitionIndex)->GetStaticField(0x234F0);
		}
		static ::System::Func_2<::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::Label>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::Label>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver___c_TypeDefinitionIndex)->GetStaticField(0x234F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__5_0(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_0_OFFSET))(this, x);
		}

		::System::Reflection::MethodInfo* __cctor_b__5_1(::System::Type* t)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_1_OFFSET))(this, t);
		}

		::System::Reflection::MethodInfo* __cctor_b__5_2(::System::Type* t)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_2_OFFSET))(this, t);
		}

		::System::Boolean __cctor_b__5_3(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_3_OFFSET))(this, x);
		}

		::System::Boolean __cctor_b__5_4(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_4_OFFSET))(this, x);
		}

		::System::Boolean __cctor_b__5_5(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_5_OFFSET))(this, x);
		}

		::System::Boolean __cctor_b__5_6(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_6_OFFSET))(this, x);
		}

		::System::Boolean __cctor_b__5_7(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_7_OFFSET))(this, x);
		}

		::System::Int32 _BuildType_b__9_0(::MessagePack::UnionAttribute* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::UnionAttribute*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDTYPE_B__9_0_OFFSET))(this, x);
		}

		::System::Reflection::Emit::Label _BuildSerialize_b__11_1(::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>* x)
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID, ::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDSERIALIZE_B__11_1_OFFSET))(this, x);
		}

		::System::Reflection::Emit::Label _BuildDeserialize_b__12_1(::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>* x)
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID, ::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDDESERIALIZE_B__12_1_OFFSET))(this, x);
		}
	};
}
