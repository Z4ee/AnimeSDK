#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack { class UnionAttribute; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace MessagePack::Internal { class DynamicAssemblyFactory; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }
namespace System::Reflection::Emit { class FieldBuilder; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class MethodBuilder; }

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1D56DA50)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D56F730)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D56E320)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDTYPE_OFFSET UNITYSDK_OFFSET(0x1D56CEE0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_ISZEROSTARTSEQUENTIAL_OFFSET UNITYSDK_OFFSET(0x1D5711D0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D56B8E0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D56CED0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver_TypeDefinitionIndex = 7207;

	class DynamicUnionResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Internal::DynamicAssemblyFactory** StaticGet_DynamicAssemblyFactory()
		{
			return (::MessagePack::Internal::DynamicAssemblyFactory**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x38880);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getFormatterWithVerify()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x38888);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_intIntKeyValuePairConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x38890);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_keyMapDictionaryConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x38898);
		}
		static ::System::Reflection::MethodInfo** StaticGet_objectGetType()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x388A0);
		}
		static ::System::Type** StaticGet_refKvp()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x388A8);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x388B0);
		}
		static ::System::Type** StaticGet_refMessagePackReader()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x388B8);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_objectCtor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x388C0);
		}
		static ::MessagePack::Resolvers::DynamicUnionResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicUnionResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x388C8);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_invalidOperationExceptionConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x388D0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_typeMapDictionaryTryGetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x388D8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_intIntKeyValuePairGetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x388E0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_intIntKeyValuePairGetKey()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x388E8);
		}
		static ::System::Reflection::FieldInfo** StaticGet_runtimeTypeHandleEqualityComparer()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x388F0);
		}
		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getDeserialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x388F8);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_typeMapDictionaryConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x38900);
		}
		static ::System::Reflection::MethodInfo** StaticGet_keyMapDictionaryTryGetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x38908);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getTypeHandle()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x38910);
		}
		static ::System::Reflection::MethodInfo** StaticGet_typeMapDictionaryAdd()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x38918);
		}
		static ::System::Reflection::MethodInfo** StaticGet_keyMapDictionaryAdd()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x38920);
		}
		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getSerialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x38928);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getResolverFromOptions()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x38930);
		}
		static ::System::Int32* StaticGet_nameSequence()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0xEBA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Reflection::TypeInfo* BuildType(::System::Type* a1)
		{
			return ((::System::Reflection::TypeInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDTYPE_OFFSET))(a1);
		}

		static ::System::Void BuildConstructor(::System::Type* a1, ::Il2CppArray<::MessagePack::UnionAttribute*>* a2, ::System::Reflection::ConstructorInfo* a3, ::System::Reflection::Emit::FieldBuilder* a4, ::System::Reflection::Emit::FieldBuilder* a5, ::System::Reflection::Emit::ILGenerator* a6)
		{
			return ((::System::Void(*)(::System::Type*, ::Il2CppArray<::MessagePack::UnionAttribute*>*, ::System::Reflection::ConstructorInfo*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDCONSTRUCTOR_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void BuildSerialize(::System::Type* a1, ::Il2CppArray<::MessagePack::UnionAttribute*>* a2, ::System::Reflection::Emit::MethodBuilder* a3, ::System::Reflection::Emit::FieldBuilder* a4, ::System::Reflection::Emit::ILGenerator* a5)
		{
			return ((::System::Void(*)(::System::Type*, ::Il2CppArray<::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::MethodBuilder*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDSERIALIZE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void BuildDeserialize(::System::Type* a1, ::Il2CppArray<::MessagePack::UnionAttribute*>* a2, ::System::Reflection::Emit::MethodBuilder* a3, ::System::Reflection::Emit::FieldBuilder* a4, ::System::Reflection::Emit::ILGenerator* a5)
		{
			return ((::System::Void(*)(::System::Type*, ::Il2CppArray<::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::MethodBuilder*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDDESERIALIZE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean IsZeroStartSequential(::Il2CppArray<::MessagePack::UnionAttribute*>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::MessagePack::UnionAttribute*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_ISZEROSTARTSEQUENTIAL_OFFSET))(a1);
		}
	};
}
