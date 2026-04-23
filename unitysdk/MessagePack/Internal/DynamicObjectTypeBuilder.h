#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Internal/ArgumentField.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/Label.h"

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

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1734D540)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDCUSTOMFORMATTERFIELD_OFFSET UNITYSDK_OFFSET(0x1734DCD0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLEINTKEY_OFFSET UNITYSDK_OFFSET(0x17353A40)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLESTRINGKEY_OFFSET UNITYSDK_OFFSET(0x17352F20)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALCREATEINSTANCEWITHARGUMENTS_OFFSET UNITYSDK_OFFSET(0x17352BC0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x173519C0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDEPTHSTEP_OFFSET UNITYSDK_OFFSET(0x17351AE0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDEPTHUNSTEP_OFFSET UNITYSDK_OFFSET(0x17352400)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYINTKEY_OFFSET UNITYSDK_OFFSET(0x173531C0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYSTRINGKEY_OFFSET UNITYSDK_OFFSET(0x17352500)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEEACHPROPERTYINTKEY_OFFSET UNITYSDK_OFFSET(0x17351DB0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEEACHPROPERTYSTRINGKEY_OFFSET UNITYSDK_OFFSET(0x17351F20)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZELOOPINTKEY_OFFSET UNITYSDK_OFFSET(0x17353890)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZELOOPSTRINGKEY_OFFSET UNITYSDK_OFFSET(0x173528E0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNDIRECTLY_OFFSET UNITYSDK_OFFSET(0x17354700)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNLOCALVARIABLE_OFFSET UNITYSDK_OFFSET(0x17355340)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17352050)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALREADHEADERLENGTH_OFFSET UNITYSDK_OFFSET(0x17351BA0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALRESOLVER_OFFSET UNITYSDK_OFFSET(0x17351C90)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALTRYREADNIL_OFFSET UNITYSDK_OFFSET(0x17351770)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1734FFB0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1734E580)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDTYPE_OFFSET UNITYSDK_OFFSET(0x173492B0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x17350BB0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17355B10)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_TypeDefinitionIndex = 9363;

	class DynamicObjectTypeBuilder : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_getFormatterWithVerify()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x42890);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getResolverFromOptions()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x42898);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ArrayFromNullableReadOnlySequence()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x428A0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_onBeforeSerialize()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x428A8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadStringSpan()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x428B0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getSecurityFromOptions()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x428B8);
		}
		static ::System::Type** StaticGet_refMessagePackReader()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x428C0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_ignoreTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x428C8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_readerDepthGet()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x428D0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_SubtractFullNameRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x428D8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_securityDepthStep()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x428E0);
		}
		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getDeserialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x428E8);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_objectCtor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x428F0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadOnlySpanFromByteArray()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x428F8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_readerDepthSet()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x42900);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_messagePackSerializationExceptionMessageOnlyConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x42908);
		}
		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getSerialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x42910);
		}
		static ::System::Reflection::MethodInfo** StaticGet_onAfterDeserialize()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x42918);
		}
		static ::System::Int32* StaticGet_nameSequence()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0xEED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER__CCTOR_OFFSET))();
		}

		static ::System::Reflection::TypeInfo* BuildType(::MessagePack::Internal::DynamicAssembly* assembly, ::System::Type* type, ::System::Boolean forceStringKey, ::System::Boolean contractless, ::System::Boolean allowPrivate)
		{
			return ((::System::Reflection::TypeInfo*(*)(::MessagePack::Internal::DynamicAssembly*, ::System::Type*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDTYPE_OFFSET))(assembly, type, forceStringKey, contractless, allowPrivate);
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

		static ::System::Void BuildDeserialize(::System::Type* type, ::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::Emit::TypeBuilder* typeBuilder, ::System::Reflection::Emit::ILGenerator* il, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* tryEmitLoadCustomFormatter, ::System::Int32 firstArgIndex)
		{
			return ((::System::Void(*)(::System::Type*, ::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::TypeBuilder*, ::System::Reflection::Emit::ILGenerator*, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZE_OFFSET))(type, info, typeBuilder, il, tryEmitLoadCustomFormatter, firstArgIndex);
		}

		static ::System::Void BuildDeserializeInternalDeserializeEachPropertyStringKey(::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::Emit::TypeBuilder* typeBuilder, ::System::Reflection::Emit::ILGenerator* il, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* tryEmitLoadCustomFormatter, ::System::Boolean canOverwrite, ::MessagePack::Internal::ArgumentField& argReader, ::MessagePack::Internal::ArgumentField argOptions, ::System::Reflection::Emit::LocalBuilder* localResolver, ::System::Reflection::Emit::LocalBuilder* localResult, ::System::Reflection::Emit::LocalBuilder* localLength)
		{
			return ((::System::Void(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::TypeBuilder*, ::System::Reflection::Emit::ILGenerator*, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::System::Boolean, ::MessagePack::Internal::ArgumentField&, ::MessagePack::Internal::ArgumentField, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEEACHPROPERTYSTRINGKEY_OFFSET))(info, typeBuilder, il, tryEmitLoadCustomFormatter, canOverwrite, argReader, argOptions, localResolver, localResult, localLength);
		}

		static ::System::Void BuildDeserializeInternalDeserializeEachPropertyIntKey(::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::Emit::TypeBuilder* typeBuilder, ::System::Reflection::Emit::ILGenerator* il, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* tryEmitLoadCustomFormatter, ::System::Boolean canOverwrite, ::MessagePack::Internal::ArgumentField& argReader, ::MessagePack::Internal::ArgumentField& argOptions, ::System::Reflection::Emit::LocalBuilder* localResolver, ::System::Reflection::Emit::LocalBuilder* localResult, ::System::Reflection::Emit::LocalBuilder* localLength)
		{
			return ((::System::Void(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::TypeBuilder*, ::System::Reflection::Emit::ILGenerator*, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::System::Boolean, ::MessagePack::Internal::ArgumentField&, ::MessagePack::Internal::ArgumentField&, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEEACHPROPERTYINTKEY_OFFSET))(info, typeBuilder, il, tryEmitLoadCustomFormatter, canOverwrite, argReader, argOptions, localResolver, localResult, localLength);
		}

		static ::System::Void BuildDeserializeInternalAssignFieldFromLocalVariableStringKey(::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::Emit::TypeBuilder* typeBuilder, ::System::Reflection::Emit::ILGenerator* il, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* infoList, ::System::Reflection::Emit::LocalBuilder* localResult)
		{
			return ((::System::Void(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::TypeBuilder*, ::System::Reflection::Emit::ILGenerator*, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLESTRINGKEY_OFFSET))(info, typeBuilder, il, infoList, localResult);
		}

		static ::System::Void BuildDeserializeInternalAssignFieldFromLocalVariableIntKey(::System::Reflection::Emit::TypeBuilder* typeBuilder, ::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::Emit::ILGenerator* il, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* infoList, ::System::Reflection::Emit::LocalBuilder* localResult, ::System::Reflection::Emit::LocalBuilder* localLength, ::System::Int32 maxKey)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::TypeBuilder*, ::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLEINTKEY_OFFSET))(typeBuilder, info, il, infoList, localResult, localLength, maxKey);
		}

		static ::System::Void BuildDeserializeInternalCreateInstanceWithArguments(::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::Emit::ILGenerator* il, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* infoList, ::System::Reflection::Emit::LocalBuilder* localResult)
		{
			return ((::System::Void(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALCREATEINSTANCEWITHARGUMENTS_OFFSET))(info, il, infoList, localResult);
		}

		static ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* BuildDeserializeInternalDeserializationInfoArrayStringKey(::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::Emit::ILGenerator* il, ::System::Boolean canOverwrite)
		{
			return ((::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYSTRINGKEY_OFFSET))(info, il, canOverwrite);
		}

		static ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* BuildDeserializeInternalDeserializationInfoArrayIntKey(::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::Emit::ILGenerator* il, ::System::Boolean canOverwrite, ::System::Nullable_1<::System::Reflection::Emit::Label>& gotoDefault, ::System::Int32& maxKey)
		{
			return ((::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::System::Boolean, ::System::Nullable_1<::System::Reflection::Emit::Label>&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYINTKEY_OFFSET))(info, il, canOverwrite, gotoDefault, maxKey);
		}

		static ::System::Void BuildDeserializeInternalDeserializeLoopIntKey(::System::Reflection::Emit::TypeBuilder* typeBuilder, ::System::Reflection::Emit::ILGenerator* il, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* tryEmitLoadCustomFormatter, ::MessagePack::Internal::ArgumentField& argReader, ::MessagePack::Internal::ArgumentField& argOptions, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* infoList, ::System::Reflection::Emit::LocalBuilder* localResolver, ::System::Reflection::Emit::LocalBuilder* localResult, ::System::Reflection::Emit::LocalBuilder* localLength, ::System::Boolean canOverwrite, ::System::Nullable_1<::System::Reflection::Emit::Label> gotoDefault)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::TypeBuilder*, ::System::Reflection::Emit::ILGenerator*, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::MessagePack::Internal::ArgumentField&, ::MessagePack::Internal::ArgumentField&, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Boolean, ::System::Nullable_1<::System::Reflection::Emit::Label>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZELOOPINTKEY_OFFSET))(typeBuilder, il, tryEmitLoadCustomFormatter, argReader, argOptions, infoList, localResolver, localResult, localLength, canOverwrite, gotoDefault);
		}

		static ::System::Void BuildDeserializeInternalDeserializeLoopStringKey(::System::Reflection::Emit::TypeBuilder* typeBuilder, ::System::Reflection::Emit::ILGenerator* il, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* tryEmitLoadCustomFormatter, ::MessagePack::Internal::ArgumentField& argReader, ::MessagePack::Internal::ArgumentField& argOptions, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* infoList, ::System::Reflection::Emit::LocalBuilder* localResolver, ::System::Reflection::Emit::LocalBuilder* localResult, ::System::Reflection::Emit::LocalBuilder* localLength, ::System::Boolean canOverwrite, ::MessagePack::Internal::ObjectSerializationInfo* info)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::TypeBuilder*, ::System::Reflection::Emit::ILGenerator*, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::MessagePack::Internal::ArgumentField&, ::MessagePack::Internal::ArgumentField&, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Boolean, ::MessagePack::Internal::ObjectSerializationInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZELOOPSTRINGKEY_OFFSET))(typeBuilder, il, tryEmitLoadCustomFormatter, argReader, argOptions, infoList, localResolver, localResult, localLength, canOverwrite, info);
		}

		static ::System::Void BuildDeserializeInternalTryReadNil(::System::Type* type, ::System::Reflection::Emit::ILGenerator* il, ::MessagePack::Internal::ArgumentField& argReader)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::ArgumentField&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALTRYREADNIL_OFFSET))(type, il, argReader);
		}

		static ::System::Void BuildDeserializeInternalDepthUnStep(::System::Reflection::Emit::ILGenerator* il, ::MessagePack::Internal::ArgumentField& argReader)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::ArgumentField&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDEPTHUNSTEP_OFFSET))(il, argReader);
		}

		static ::System::Void BuildDeserializeInternalOnAfterDeserialize(::System::Type* type, ::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* localResult)
		{
			return ((::System::Void(*)(::System::Type*, ::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALONAFTERDESERIALIZE_OFFSET))(type, info, il, localResult);
		}

		static ::System::Reflection::Emit::LocalBuilder* BuildDeserializeInternalResolver(::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::Emit::ILGenerator* il, ::MessagePack::Internal::ArgumentField& argOptions)
		{
			return ((::System::Reflection::Emit::LocalBuilder*(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::ArgumentField&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALRESOLVER_OFFSET))(info, il, argOptions);
		}

		static ::System::Reflection::Emit::LocalBuilder* BuildDeserializeInternalReadHeaderLength(::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::Emit::ILGenerator* il, ::MessagePack::Internal::ArgumentField& argReader)
		{
			return ((::System::Reflection::Emit::LocalBuilder*(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::ArgumentField&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALREADHEADERLENGTH_OFFSET))(info, il, argReader);
		}

		static ::System::Void BuildDeserializeInternalDepthStep(::System::Reflection::Emit::ILGenerator* il, ::MessagePack::Internal::ArgumentField& argReader, ::MessagePack::Internal::ArgumentField& argOptions)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::ArgumentField&, ::MessagePack::Internal::ArgumentField&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDEPTHSTEP_OFFSET))(il, argReader, argOptions);
		}

		static ::System::Void BuildDeserializeInternalCreateInstance(::System::Type* type, ::MessagePack::Internal::ObjectSerializationInfo* info, ::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* localResult)
		{
			return ((::System::Void(*)(::System::Type*, ::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALCREATEINSTANCE_OFFSET))(type, info, il, localResult);
		}

		static ::System::Void BuildDeserializeInternalDeserializeValueAssignDirectly(::System::Reflection::Emit::TypeBuilder* typeBuilder, ::System::Reflection::Emit::ILGenerator* il, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* info, ::System::Int32 index, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* tryEmitLoadCustomFormatter, ::MessagePack::Internal::ArgumentField& argReader, ::MessagePack::Internal::ArgumentField& argOptions, ::System::Reflection::Emit::LocalBuilder* localResolver, ::System::Reflection::Emit::LocalBuilder* localResult)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::TypeBuilder*, ::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Int32, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::MessagePack::Internal::ArgumentField&, ::MessagePack::Internal::ArgumentField&, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNDIRECTLY_OFFSET))(typeBuilder, il, info, index, tryEmitLoadCustomFormatter, argReader, argOptions, localResolver, localResult);
		}

		static ::System::Void BuildDeserializeInternalDeserializeValueAssignLocalVariable(::System::Reflection::Emit::ILGenerator* il, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* info, ::System::Int32 index, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* tryEmitLoadCustomFormatter, ::MessagePack::Internal::ArgumentField& argReader, ::MessagePack::Internal::ArgumentField& argOptions, ::System::Reflection::Emit::LocalBuilder* localResolver, ::System::Reflection::Emit::LocalBuilder* localResult)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Int32, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::MessagePack::Internal::ArgumentField&, ::MessagePack::Internal::ArgumentField&, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNLOCALVARIABLE_OFFSET))(il, info, index, tryEmitLoadCustomFormatter, argReader, argOptions, localResolver, localResult);
		}
	};
}
