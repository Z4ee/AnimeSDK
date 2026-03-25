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

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x15D86570)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D87560)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D86990)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDTYPE_OFFSET UNITYSDK_OFFSET(0x15D85A50)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_ISZEROSTARTSEQUENTIAL_OFFSET UNITYSDK_OFFSET(0x15D882C0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D84860)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D85A40)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver_TypeDefinitionIndex = 9115;

	class DynamicUnionResolver : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x21FE0);
		}
		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getDeserialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x21FE8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_keyMapDictionaryAdd()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x21FF0);
		}
		static ::System::Reflection::FieldInfo** StaticGet_runtimeTypeHandleEqualityComparer()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x21FF8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_typeMapDictionaryAdd()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22000);
		}
		static ::System::Type** StaticGet_refMessagePackReader()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22008);
		}
		static ::System::Reflection::MethodInfo** StaticGet_objectGetType()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22010);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_invalidOperationExceptionConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22018);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getFormatterWithVerify()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22020);
		}
		static ::MessagePack::Resolvers::DynamicUnionResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicUnionResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22028);
		}
		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getSerialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22030);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_objectCtor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22038);
		}
		static ::MessagePack::Internal::DynamicAssemblyFactory** StaticGet_DynamicAssemblyFactory()
		{
			return (::MessagePack::Internal::DynamicAssemblyFactory**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22040);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_intIntKeyValuePairConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22048);
		}
		static ::System::Reflection::MethodInfo** StaticGet_keyMapDictionaryTryGetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22050);
		}
		static ::System::Reflection::MethodInfo** StaticGet_intIntKeyValuePairGetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22058);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getTypeHandle()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22060);
		}
		static ::System::Reflection::MethodInfo** StaticGet_intIntKeyValuePairGetKey()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22068);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_typeMapDictionaryConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22070);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getResolverFromOptions()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22078);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_keyMapDictionaryConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22080);
		}
		static ::System::Reflection::MethodInfo** StaticGet_typeMapDictionaryTryGetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22088);
		}
		static ::System::Type** StaticGet_refKvp()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x22090);
		}
		static ::System::Int32* StaticGet_nameSequence()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x8E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Reflection::TypeInfo* BuildType(::System::Type* type)
		{
			return ((::System::Reflection::TypeInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDTYPE_OFFSET))(type);
		}

		static ::System::Void BuildConstructor(::System::Type* type, ::Il2CppArray<::MessagePack::UnionAttribute*>* infos, ::System::Reflection::ConstructorInfo* method, ::System::Reflection::Emit::FieldBuilder* typeToKeyAndJumpMap, ::System::Reflection::Emit::FieldBuilder* keyToJumpMap, ::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Type*, ::Il2CppArray<::MessagePack::UnionAttribute*>*, ::System::Reflection::ConstructorInfo*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDCONSTRUCTOR_OFFSET))(type, infos, method, typeToKeyAndJumpMap, keyToJumpMap, il);
		}

		static ::System::Void BuildSerialize(::System::Type* type, ::Il2CppArray<::MessagePack::UnionAttribute*>* infos, ::System::Reflection::Emit::MethodBuilder* method, ::System::Reflection::Emit::FieldBuilder* typeToKeyAndJumpMap, ::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Type*, ::Il2CppArray<::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::MethodBuilder*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDSERIALIZE_OFFSET))(type, infos, method, typeToKeyAndJumpMap, il);
		}

		static ::System::Void BuildDeserialize(::System::Type* type, ::Il2CppArray<::MessagePack::UnionAttribute*>* infos, ::System::Reflection::Emit::MethodBuilder* method, ::System::Reflection::Emit::FieldBuilder* keyToJumpMap, ::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Type*, ::Il2CppArray<::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::MethodBuilder*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDDESERIALIZE_OFFSET))(type, infos, method, keyToJumpMap, il);
		}

		static ::System::Boolean IsZeroStartSequential(::Il2CppArray<::MessagePack::UnionAttribute*>* infos)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::MessagePack::UnionAttribute*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_ISZEROSTARTSEQUENTIAL_OFFSET))(infos);
		}
	};
}
