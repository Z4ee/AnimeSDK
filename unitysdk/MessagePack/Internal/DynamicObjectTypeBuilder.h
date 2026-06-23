#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Internal/ArgumentField.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class DynamicAssembly; }
namespace MessagePack::Internal { class DynamicObjectTypeBuilder_DeserializeInfo; }
namespace MessagePack::Internal { class ObjectSerializationInfo; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class Action; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }
namespace System::Reflection::Emit { class FieldBuilder; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class LocalBuilder; }
namespace System::Reflection::Emit { class TypeBuilder; }
namespace System::Text::RegularExpressions { class Regex; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1CC391A0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDCUSTOMFORMATTERFIELD_OFFSET UNITYSDK_OFFSET(0x1CC398F0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CC3AF00)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDFORMATTERTODYNAMICMETHOD_OFFSET UNITYSDK_OFFSET(0x1CC3BFC0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CC39DA0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDTYPE_OFFSET UNITYSDK_OFFSET(0x1CC38A00)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITDESERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1CC3D940)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITNEWOBJECTCONSTRUCTORARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1CC3E000)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITNEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1CC3CE90)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1CC3C2D0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_ISOPTIMIZETARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1CC3CCA0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_MATCHES_OFFSET UNITYSDK_OFFSET(0x1CC3E2C0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC3E450)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_TypeDefinitionIndex = 29282;

	class DynamicObjectTypeBuilder : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_ReadOnlySpanFromByteArray()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x239B0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_securityDepthStep()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x239B8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ArrayFromNullableReadOnlySequence()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x239C0);
		}
		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getDeserialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x239C8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_readerDepthSet()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x239D0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_onBeforeSerialize()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x239D8);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_objectCtor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x239E0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_readerDepthGet()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x239E8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadStringSpan()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x239F0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getSecurityFromOptions()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x239F8);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_messagePackSerializationExceptionMessageOnlyConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x23A00);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getResolverFromOptions()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x23A08);
		}
		static ::System::Reflection::MethodInfo** StaticGet_onAfterDeserialize()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x23A10);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_ignoreTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x23A18);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_SubtractFullNameRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x23A20);
		}
		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getSerialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x23A28);
		}
		static ::System::Type** StaticGet_refMessagePackReader()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x23A30);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getFormatterWithVerify()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x23A38);
		}
		static ::System::Int32* StaticGet_nameSequence()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x7A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER__CCTOR_OFFSET))();
		}

		static ::System::Reflection::TypeInfo* BuildType(::MessagePack::Internal::DynamicAssembly* assembly, ::System::Type* type, ::System::Boolean forceStringKey, ::System::Boolean contractless)
		{
			return ((::System::Reflection::TypeInfo*(*)(::MessagePack::Internal::DynamicAssembly*, ::System::Type*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDTYPE_OFFSET))(assembly, type, forceStringKey, contractless);
		}

		static ::System::Object* BuildFormatterToDynamicMethod(::System::Type* type, ::System::Boolean forceStringKey, ::System::Boolean contractless, ::System::Boolean allowPrivate)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDFORMATTERTODYNAMICMETHOD_OFFSET))(type, forceStringKey, contractless, allowPrivate);
		}

		static ::System::Void BuildConstructor(::System::Type* type, ::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::ConstructorInfo* method, ::System::Reflection::Emit::FieldBuilder* stringByteKeysField, ::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Type*, ::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::ConstructorInfo*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDCONSTRUCTOR_OFFSET))(type, info, method, stringByteKeysField, il);
		}

		static ::System::Collections::Generic::Dictionary_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Reflection::FieldInfo*>* BuildCustomFormatterField(::System::Reflection::Emit::TypeBuilder* builder, ::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Collections::Generic::Dictionary_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Reflection::FieldInfo*>*(*)(::System::Reflection::Emit::TypeBuilder*, ::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDCUSTOMFORMATTERFIELD_OFFSET))(builder, info, il);
		}

		static ::System::Void BuildSerialize(::System::Type* type, ::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::Emit::ILGenerator* il, ::System::Action* emitStringByteKeys, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* tryEmitLoadCustomFormatter, ::System::Int32 firstArgIndex)
		{
			return ((::System::Void(*)(::System::Type*, ::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::System::Action*, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDSERIALIZE_OFFSET))(type, info, il, emitStringByteKeys, tryEmitLoadCustomFormatter, firstArgIndex);
		}

		static ::System::Void EmitSerializeValue(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::TypeInfo* type, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* member, ::System::Int32 index, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* tryEmitLoadCustomFormatter, ::MessagePack::Internal::ArgumentField argWriter, ::MessagePack::Internal::ArgumentField argValue, ::MessagePack::Internal::ArgumentField argOptions, ::System::Reflection::Emit::LocalBuilder* localResolver)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::TypeInfo*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::MessagePack::Internal::ArgumentField, ::MessagePack::Internal::ArgumentField, ::MessagePack::Internal::ArgumentField, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITSERIALIZEVALUE_OFFSET))(il, type, member, index, tryEmitLoadCustomFormatter, argWriter, argValue, argOptions, localResolver);
		}

		static ::System::Void BuildDeserialize(::System::Type* type, ::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::Emit::ILGenerator* il, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* tryEmitLoadCustomFormatter, ::System::Int32 firstArgIndex)
		{
			return ((::System::Void(*)(::System::Type*, ::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZE_OFFSET))(type, info, il, tryEmitLoadCustomFormatter, firstArgIndex);
		}

		static ::System::Void EmitDeserializeValue(::System::Reflection::Emit::ILGenerator* il, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* info, ::System::Int32 index, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* tryEmitLoadCustomFormatter, ::MessagePack::Internal::ArgumentField argReader, ::MessagePack::Internal::ArgumentField argOptions, ::System::Reflection::Emit::LocalBuilder* localResolver)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Int32, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::MessagePack::Internal::ArgumentField, ::MessagePack::Internal::ArgumentField, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITDESERIALIZEVALUE_OFFSET))(il, info, index, tryEmitLoadCustomFormatter, argReader, argOptions, localResolver);
		}

		static ::System::Reflection::Emit::LocalBuilder* EmitNewObject(::System::Reflection::Emit::ILGenerator* il, ::System::Type* type, ::MessagePack::Internal::ObjectSerializationInfo* info, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* members)
		{
			return ((::System::Reflection::Emit::LocalBuilder*(*)(::System::Reflection::Emit::ILGenerator*, ::System::Type*, ::MessagePack::Internal::ObjectSerializationInfo*, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITNEWOBJECT_OFFSET))(il, type, info, members);
		}

		static ::System::Void EmitNewObjectConstructorArguments(::System::Reflection::Emit::ILGenerator* il, ::MessagePack::Internal::ObjectSerializationInfo* info, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* members)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::ObjectSerializationInfo*, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITNEWOBJECTCONSTRUCTORARGUMENTS_OFFSET))(il, info, members);
		}

		static ::System::Boolean IsOptimizeTargetType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_ISOPTIMIZETARGETTYPE_OFFSET))(type);
		}

		static ::System::Boolean Matches(::System::Reflection::MethodInfo* m, ::System::Int32 parameterIndex, ::System::Type* desiredType)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_MATCHES_OFFSET))(m, parameterIndex, desiredType);
		}
	};
}
