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

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x14F8D6F0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDCUSTOMFORMATTERFIELD_OFFSET UNITYSDK_OFFSET(0x14F8E1C0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLEINTKEY_OFFSET UNITYSDK_OFFSET(0x14F95B40)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLESTRINGKEY_OFFSET UNITYSDK_OFFSET(0x14F94EB0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALCREATEINSTANCEWITHARGUMENTS_OFFSET UNITYSDK_OFFSET(0x14F94A00)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x14F93240)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDEPTHSTEP_OFFSET UNITYSDK_OFFSET(0x14F934B0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDEPTHUNSTEP_OFFSET UNITYSDK_OFFSET(0x14F94090)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYINTKEY_OFFSET UNITYSDK_OFFSET(0x14F95210)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYSTRINGKEY_OFFSET UNITYSDK_OFFSET(0x14F942D0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEEACHPROPERTYINTKEY_OFFSET UNITYSDK_OFFSET(0x14F93850)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEEACHPROPERTYSTRINGKEY_OFFSET UNITYSDK_OFFSET(0x14F939C0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZELOOPINTKEY_OFFSET UNITYSDK_OFFSET(0x14F958C0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZELOOPSTRINGKEY_OFFSET UNITYSDK_OFFSET(0x14F94660)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNDIRECTLY_OFFSET UNITYSDK_OFFSET(0x14F96DA0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNLOCALVARIABLE_OFFSET UNITYSDK_OFFSET(0x14F97DF0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14F93AF0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALREADHEADERLENGTH_OFFSET UNITYSDK_OFFSET(0x14F93570)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALRESOLVER_OFFSET UNITYSDK_OFFSET(0x14F936D0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALTRYREADNIL_OFFSET UNITYSDK_OFFSET(0x14F92D30)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14F90B50)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x14F8EBC0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDTYPE_OFFSET UNITYSDK_OFFSET(0x14F88350)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x14F91D00)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F98A00)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_TypeDefinitionIndex = 7272;

	class DynamicObjectTypeBuilder : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_getSecurityFromOptions()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9DF0);
		}
		static ::System::Type** StaticGet_refMessagePackReader()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9DF8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getFormatterWithVerify()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E00);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_messagePackSerializationExceptionMessageOnlyConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E08);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_objectCtor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E10);
		}
		static ::System::Reflection::MethodInfo** StaticGet_securityDepthStep()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E18);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadStringSpan()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E20);
		}
		static ::System::Reflection::MethodInfo** StaticGet_readerDepthGet()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E28);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ArrayFromNullableReadOnlySequence()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E30);
		}
		static ::System::Reflection::MethodInfo** StaticGet_onBeforeSerialize()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E38);
		}
		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getDeserialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E40);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getResolverFromOptions()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E48);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_ignoreTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E50);
		}
		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getSerialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E58);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_SubtractFullNameRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E60);
		}
		static ::System::Reflection::MethodInfo** StaticGet_onAfterDeserialize()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E68);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadOnlySpanFromByteArray()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E70);
		}
		static ::System::Reflection::MethodInfo** StaticGet_readerDepthSet()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x9E78);
		}
		static ::System::Int32* StaticGet_nameSequence()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x41F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER__CCTOR_OFFSET))();
		}

		static ::System::Reflection::TypeInfo* BuildType(::MessagePack::Internal::DynamicAssembly* a1, ::System::Type* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Reflection::TypeInfo*(*)(::MessagePack::Internal::DynamicAssembly*, ::System::Type*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDTYPE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void BuildConstructor(::System::Type* a1, ::MessagePack::Internal::ObjectSerializationInfo* a2, ::System::Reflection::ConstructorInfo* a3, ::System::Reflection::Emit::FieldBuilder* a4, ::System::Reflection::Emit::ILGenerator* a5)
		{
			return ((::System::Void(*)(::System::Type*, ::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::ConstructorInfo*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDCONSTRUCTOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::Dictionary_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Reflection::FieldInfo*>* BuildCustomFormatterField(::System::Reflection::Emit::TypeBuilder* a1, ::MessagePack::Internal::ObjectSerializationInfo* a2, ::System::Reflection::Emit::ILGenerator* a3)
		{
			return ((::System::Collections::Generic::Dictionary_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Reflection::FieldInfo*>*(*)(::System::Reflection::Emit::TypeBuilder*, ::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDCUSTOMFORMATTERFIELD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BuildSerialize(::System::Type* a1, ::MessagePack::Internal::ObjectSerializationInfo* a2, ::System::Reflection::Emit::ILGenerator* a3, ::System::Action* a4, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::Type*, ::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::System::Action*, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDSERIALIZE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void EmitSerializeValue(::System::Reflection::Emit::ILGenerator* a1, ::System::Reflection::TypeInfo* a2, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a3, ::System::Int32 a4, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* a5, ::MessagePack::Internal::ArgumentField a6, ::MessagePack::Internal::ArgumentField a7, ::MessagePack::Internal::ArgumentField a8, ::System::Reflection::Emit::LocalBuilder* a9)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::TypeInfo*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::MessagePack::Internal::ArgumentField, ::MessagePack::Internal::ArgumentField, ::MessagePack::Internal::ArgumentField, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITSERIALIZEVALUE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void BuildDeserialize(::System::Type* a1, ::MessagePack::Internal::ObjectSerializationInfo* a2, ::System::Reflection::Emit::TypeBuilder* a3, ::System::Reflection::Emit::ILGenerator* a4, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::Type*, ::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::TypeBuilder*, ::System::Reflection::Emit::ILGenerator*, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void BuildDeserializeInternalDeserializeEachPropertyStringKey(::MessagePack::Internal::ObjectSerializationInfo* a1, ::System::Reflection::Emit::TypeBuilder* a2, ::System::Reflection::Emit::ILGenerator* a3, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* a4, ::System::Boolean a5, ::MessagePack::Internal::ArgumentField& a6, ::MessagePack::Internal::ArgumentField a7, ::System::Reflection::Emit::LocalBuilder* a8, ::System::Reflection::Emit::LocalBuilder* a9, ::System::Reflection::Emit::LocalBuilder* a10)
		{
			return ((::System::Void(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::TypeBuilder*, ::System::Reflection::Emit::ILGenerator*, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::System::Boolean, ::MessagePack::Internal::ArgumentField&, ::MessagePack::Internal::ArgumentField, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEEACHPROPERTYSTRINGKEY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void BuildDeserializeInternalDeserializeEachPropertyIntKey(::MessagePack::Internal::ObjectSerializationInfo* a1, ::System::Reflection::Emit::TypeBuilder* a2, ::System::Reflection::Emit::ILGenerator* a3, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* a4, ::System::Boolean a5, ::MessagePack::Internal::ArgumentField& a6, ::MessagePack::Internal::ArgumentField& a7, ::System::Reflection::Emit::LocalBuilder* a8, ::System::Reflection::Emit::LocalBuilder* a9, ::System::Reflection::Emit::LocalBuilder* a10)
		{
			return ((::System::Void(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::TypeBuilder*, ::System::Reflection::Emit::ILGenerator*, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::System::Boolean, ::MessagePack::Internal::ArgumentField&, ::MessagePack::Internal::ArgumentField&, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEEACHPROPERTYINTKEY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void BuildDeserializeInternalAssignFieldFromLocalVariableStringKey(::MessagePack::Internal::ObjectSerializationInfo* a1, ::System::Reflection::Emit::TypeBuilder* a2, ::System::Reflection::Emit::ILGenerator* a3, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* a4, ::System::Reflection::Emit::LocalBuilder* a5)
		{
			return ((::System::Void(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::TypeBuilder*, ::System::Reflection::Emit::ILGenerator*, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLESTRINGKEY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void BuildDeserializeInternalAssignFieldFromLocalVariableIntKey(::System::Reflection::Emit::TypeBuilder* a1, ::MessagePack::Internal::ObjectSerializationInfo* a2, ::System::Reflection::Emit::ILGenerator* a3, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* a4, ::System::Reflection::Emit::LocalBuilder* a5, ::System::Reflection::Emit::LocalBuilder* a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::TypeBuilder*, ::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLEINTKEY_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void BuildDeserializeInternalCreateInstanceWithArguments(::MessagePack::Internal::ObjectSerializationInfo* a1, ::System::Reflection::Emit::ILGenerator* a2, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* a3, ::System::Reflection::Emit::LocalBuilder* a4)
		{
			return ((::System::Void(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALCREATEINSTANCEWITHARGUMENTS_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* BuildDeserializeInternalDeserializationInfoArrayStringKey(::MessagePack::Internal::ObjectSerializationInfo* a1, ::System::Reflection::Emit::ILGenerator* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYSTRINGKEY_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* BuildDeserializeInternalDeserializationInfoArrayIntKey(::MessagePack::Internal::ObjectSerializationInfo* a1, ::System::Reflection::Emit::ILGenerator* a2, ::System::Boolean a3, ::System::Nullable_1<::System::Reflection::Emit::Label>& a4, ::System::Int32& a5)
		{
			return ((::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::System::Boolean, ::System::Nullable_1<::System::Reflection::Emit::Label>&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYINTKEY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void BuildDeserializeInternalDeserializeLoopIntKey(::System::Reflection::Emit::TypeBuilder* a1, ::System::Reflection::Emit::ILGenerator* a2, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* a3, ::MessagePack::Internal::ArgumentField& a4, ::MessagePack::Internal::ArgumentField& a5, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* a6, ::System::Reflection::Emit::LocalBuilder* a7, ::System::Reflection::Emit::LocalBuilder* a8, ::System::Reflection::Emit::LocalBuilder* a9, ::System::Boolean a10, ::System::Nullable_1<::System::Reflection::Emit::Label> a11)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::TypeBuilder*, ::System::Reflection::Emit::ILGenerator*, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::MessagePack::Internal::ArgumentField&, ::MessagePack::Internal::ArgumentField&, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Boolean, ::System::Nullable_1<::System::Reflection::Emit::Label>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZELOOPINTKEY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::System::Void BuildDeserializeInternalDeserializeLoopStringKey(::System::Reflection::Emit::TypeBuilder* a1, ::System::Reflection::Emit::ILGenerator* a2, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* a3, ::MessagePack::Internal::ArgumentField& a4, ::MessagePack::Internal::ArgumentField& a5, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* a6, ::System::Reflection::Emit::LocalBuilder* a7, ::System::Reflection::Emit::LocalBuilder* a8, ::System::Reflection::Emit::LocalBuilder* a9, ::System::Boolean a10, ::MessagePack::Internal::ObjectSerializationInfo* a11)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::TypeBuilder*, ::System::Reflection::Emit::ILGenerator*, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::MessagePack::Internal::ArgumentField&, ::MessagePack::Internal::ArgumentField&, ::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Boolean, ::MessagePack::Internal::ObjectSerializationInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZELOOPSTRINGKEY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::System::Void BuildDeserializeInternalTryReadNil(::System::Type* a1, ::System::Reflection::Emit::ILGenerator* a2, ::MessagePack::Internal::ArgumentField& a3)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::ArgumentField&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALTRYREADNIL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BuildDeserializeInternalDepthUnStep(::System::Reflection::Emit::ILGenerator* a1, ::MessagePack::Internal::ArgumentField& a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::ArgumentField&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDEPTHUNSTEP_OFFSET))(a1, a2);
		}

		static ::System::Void BuildDeserializeInternalOnAfterDeserialize(::System::Type* a1, ::MessagePack::Internal::ObjectSerializationInfo* a2, ::System::Reflection::Emit::ILGenerator* a3, ::System::Reflection::Emit::LocalBuilder* a4)
		{
			return ((::System::Void(*)(::System::Type*, ::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALONAFTERDESERIALIZE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Reflection::Emit::LocalBuilder* BuildDeserializeInternalResolver(::MessagePack::Internal::ObjectSerializationInfo* a1, ::System::Reflection::Emit::ILGenerator* a2, ::MessagePack::Internal::ArgumentField& a3)
		{
			return ((::System::Reflection::Emit::LocalBuilder*(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::ArgumentField&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALRESOLVER_OFFSET))(a1, a2, a3);
		}

		static ::System::Reflection::Emit::LocalBuilder* BuildDeserializeInternalReadHeaderLength(::MessagePack::Internal::ObjectSerializationInfo* a1, ::System::Reflection::Emit::ILGenerator* a2, ::MessagePack::Internal::ArgumentField& a3)
		{
			return ((::System::Reflection::Emit::LocalBuilder*(*)(::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::ArgumentField&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALREADHEADERLENGTH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BuildDeserializeInternalDepthStep(::System::Reflection::Emit::ILGenerator* a1, ::MessagePack::Internal::ArgumentField& a2, ::MessagePack::Internal::ArgumentField& a3)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::ArgumentField&, ::MessagePack::Internal::ArgumentField&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDEPTHSTEP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BuildDeserializeInternalCreateInstance(::System::Type* a1, ::MessagePack::Internal::ObjectSerializationInfo* a2, ::System::Reflection::Emit::ILGenerator* a3, ::System::Reflection::Emit::LocalBuilder* a4)
		{
			return ((::System::Void(*)(::System::Type*, ::MessagePack::Internal::ObjectSerializationInfo*, ::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALCREATEINSTANCE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BuildDeserializeInternalDeserializeValueAssignDirectly(::System::Reflection::Emit::TypeBuilder* a1, ::System::Reflection::Emit::ILGenerator* a2, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* a3, ::System::Int32 a4, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* a5, ::MessagePack::Internal::ArgumentField& a6, ::MessagePack::Internal::ArgumentField& a7, ::System::Reflection::Emit::LocalBuilder* a8, ::System::Reflection::Emit::LocalBuilder* a9)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::TypeBuilder*, ::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Int32, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::MessagePack::Internal::ArgumentField&, ::MessagePack::Internal::ArgumentField&, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNDIRECTLY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void BuildDeserializeInternalDeserializeValueAssignLocalVariable(::System::Reflection::Emit::ILGenerator* a1, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* a2, ::System::Int32 a3, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* a4, ::MessagePack::Internal::ArgumentField& a5, ::MessagePack::Internal::ArgumentField& a6, ::System::Reflection::Emit::LocalBuilder* a7, ::System::Reflection::Emit::LocalBuilder* a8)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Int32, ::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>*, ::MessagePack::Internal::ArgumentField&, ::MessagePack::Internal::ArgumentField&, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNLOCALVARIABLE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
