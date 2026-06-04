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

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDDESERIALIZE_B__12_1_OFFSET UNITYSDK_OFFSET(0x18190E00)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDSERIALIZE_B__11_1_OFFSET UNITYSDK_OFFSET(0x18190DE0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDTYPE_B__9_0_OFFSET UNITYSDK_OFFSET(0x18190DC0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18190620)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18190660)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x18190670)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_1_OFFSET UNITYSDK_OFFSET(0x181906F0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_2_OFFSET UNITYSDK_OFFSET(0x18190980)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_3_OFFSET UNITYSDK_OFFSET(0x18190BC0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_4_OFFSET UNITYSDK_OFFSET(0x18190C00)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_5_OFFSET UNITYSDK_OFFSET(0x18190C80)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_6_OFFSET UNITYSDK_OFFSET(0x18190D00)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_7_OFFSET UNITYSDK_OFFSET(0x18190D80)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver___c_TypeDefinitionIndex = 7219;

	class DynamicUnionResolver___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::Label>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::Label>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver___c_TypeDefinitionIndex)->GetStaticField(0xA3A0);
		}
		static ::System::Func_2<::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::Label>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::Label>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver___c_TypeDefinitionIndex)->GetStaticField(0xA3A8);
		}
		static ::MessagePack::Resolvers::DynamicUnionResolver___c** StaticGet___9()
		{
			return (::MessagePack::Resolvers::DynamicUnionResolver___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver___c_TypeDefinitionIndex)->GetStaticField(0xA3B0);
		}
		static ::System::Func_2<::MessagePack::UnionAttribute*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::MessagePack::UnionAttribute*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver___c_TypeDefinitionIndex)->GetStaticField(0xA3B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__5_0(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_0_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* __cctor_b__5_1(::System::Type* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_1_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* __cctor_b__5_2(::System::Type* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_2_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__5_3(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_3_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__5_4(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_4_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__5_5(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_5_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__5_6(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_6_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__5_7(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_7_OFFSET))(this, a1);
		}

		::System::Int32 _BuildType_b__9_0(::MessagePack::UnionAttribute* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::UnionAttribute*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDTYPE_B__9_0_OFFSET))(this, a1);
		}

		::System::Reflection::Emit::Label _BuildSerialize_b__11_1(::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>* a1)
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID, ::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDSERIALIZE_B__11_1_OFFSET))(this, a1);
		}

		::System::Reflection::Emit::Label _BuildDeserialize_b__12_1(::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>* a1)
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID, ::__f__AnonymousType0_2<::System::Reflection::Emit::Label, ::MessagePack::UnionAttribute*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDDESERIALIZE_B__12_1_OFFSET))(this, a1);
		}
	};
}
