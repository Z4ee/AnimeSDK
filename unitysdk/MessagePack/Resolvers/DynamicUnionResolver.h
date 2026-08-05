#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack { class UnionAttribute; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace MessagePack::Internal { class DynamicAssembly; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Lazy_1; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }
namespace System::Reflection::Emit { class FieldBuilder; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class MethodBuilder; }
namespace System::Text::RegularExpressions { class Regex; }

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1E728590)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E729530)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7289B0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDTYPE_OFFSET UNITYSDK_OFFSET(0x1E727850)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_ISZEROSTARTSEQUENTIAL_OFFSET UNITYSDK_OFFSET(0x1E72A1A0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7267F0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E727840)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver_TypeDefinitionIndex = 29950;

	class DynamicUnionResolver : public ::System::Object
	{
	public:
		static ::System::Reflection::ConstructorInfo** StaticGet_typeMapDictionaryConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x25FD0);
		}
		static ::System::Type** StaticGet_refMessagePackReader()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x25FD8);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_objectCtor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x25FE0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getFormatterWithVerify()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x25FE8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getTypeHandle()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x25FF0);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_keyMapDictionaryConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x25FF8);
		}
		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getSerialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26000);
		}
		static ::System::Reflection::MethodInfo** StaticGet_keyMapDictionaryAdd()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26008);
		}
		static ::System::Reflection::MethodInfo** StaticGet_typeMapDictionaryAdd()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26010);
		}
		static ::System::Reflection::MethodInfo** StaticGet_keyMapDictionaryTryGetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26018);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26020);
		}
		static ::System::Reflection::FieldInfo** StaticGet_runtimeTypeHandleEqualityComparer()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26028);
		}
		static ::System::Reflection::MethodInfo** StaticGet_objectGetType()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26030);
		}
		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getDeserialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26038);
		}
		static ::MessagePack::Resolvers::DynamicUnionResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicUnionResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26040);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getResolverFromOptions()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26048);
		}
		static ::System::Reflection::MethodInfo** StaticGet_intIntKeyValuePairGetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26050);
		}
		static ::System::Lazy_1<::MessagePack::Internal::DynamicAssembly*>** StaticGet_DynamicAssembly()
		{
			return (::System::Lazy_1<::MessagePack::Internal::DynamicAssembly*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26058);
		}
		static ::System::Reflection::MethodInfo** StaticGet_typeMapDictionaryTryGetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26060);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_intIntKeyValuePairConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26068);
		}
		static ::System::Reflection::MethodInfo** StaticGet_intIntKeyValuePairGetKey()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26070);
		}
		static ::System::Type** StaticGet_refKvp()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26078);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_invalidOperationExceptionConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26080);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_SubtractFullNameRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x26088);
		}
		static ::System::Int32* StaticGet_nameSequence()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x7AC0);
		}
		// static const ::System::String* ModuleName; // 0x0

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
