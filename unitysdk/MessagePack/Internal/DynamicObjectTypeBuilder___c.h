#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/Label.h"

namespace MessagePack::Internal { class DynamicObjectTypeBuilder_DeserializeInfo; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x17356F00)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__4_1_OFFSET UNITYSDK_OFFSET(0x17356F20)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCUSTOMFORMATTERFIELD_B__5_0_OFFSET UNITYSDK_OFFSET(0x17356F40)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLEINTKEY_B__12_0_OFFSET UNITYSDK_OFFSET(0x173570D0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLEINTKEY_B__12_1_OFFSET UNITYSDK_OFFSET(0x17357100)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYINTKEY_B__15_0_OFFSET UNITYSDK_OFFSET(0x17357130)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYINTKEY_B__15_1_OFFSET UNITYSDK_OFFSET(0x17357150)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZELOOPINTKEY_B__16_1_OFFSET UNITYSDK_OFFSET(0x17357170)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNDIRECTLY_B__25_0_OFFSET UNITYSDK_OFFSET(0x17357230)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNLOCALVARIABLE_B__26_0_OFFSET UNITYSDK_OFFSET(0x17357270)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALONAFTERDESERIALIZE_B__20_0_OFFSET UNITYSDK_OFFSET(0x17357190)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALONAFTERDESERIALIZE_B__20_1_OFFSET UNITYSDK_OFFSET(0x173571D0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_0_OFFSET UNITYSDK_OFFSET(0x17356F70)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_1_OFFSET UNITYSDK_OFFSET(0x17356FB0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_2_OFFSET UNITYSDK_OFFSET(0x17357010)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_3_OFFSET UNITYSDK_OFFSET(0x17357030)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_4_OFFSET UNITYSDK_OFFSET(0x17357050)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_5_OFFSET UNITYSDK_OFFSET(0x17357070)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_6_OFFSET UNITYSDK_OFFSET(0x17357090)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_7_OFFSET UNITYSDK_OFFSET(0x173570B0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17356EB0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17356EF0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_0_OFFSET UNITYSDK_OFFSET(0x173572B0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_1_OFFSET UNITYSDK_OFFSET(0x17357330)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_2_OFFSET UNITYSDK_OFFSET(0x17357660)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_3_OFFSET UNITYSDK_OFFSET(0x17357900)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_4_OFFSET UNITYSDK_OFFSET(0x17357990)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c_TypeDefinitionIndex = 9370;

	class DynamicObjectTypeBuilder___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__20_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x429A0);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x429A8);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__6_7()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x429B0);
		}
		static ::MessagePack::Internal::DynamicObjectTypeBuilder___c** StaticGet___9()
		{
			return (::MessagePack::Internal::DynamicObjectTypeBuilder___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x429B8);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>** StaticGet___9__6_3()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x429C0);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x429C8);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x429D0);
		}
		static ::System::Func_2<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Reflection::Emit::Label>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Reflection::Emit::Label>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x429D8);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__6_6()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x429E0);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x429E8);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__6_4()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x429F0);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x429F8);
		}
		static ::System::Func_2<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Int32>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x42A00);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x42A08);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x42A10);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>** StaticGet___9__6_5()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x42A18);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x42A20);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x42A28);
		}
		static ::System::Func_2<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x42A30);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x42A38);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x42A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildConstructor_b__4_0(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__4_0_OFFSET))(this, x);
		}

		::System::Boolean _BuildConstructor_b__4_1(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__4_1_OFFSET))(this, x);
		}

		::System::Boolean _BuildCustomFormatterField_b__5_0(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCUSTOMFORMATTERFIELD_B__5_0_OFFSET))(this, x);
		}

		::System::Boolean _BuildSerialize_b__6_0(::System::Type* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_0_OFFSET))(this, x);
		}

		::System::Boolean _BuildSerialize_b__6_1(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_1_OFFSET))(this, x);
		}

		::System::Boolean _BuildSerialize_b__6_2(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_2_OFFSET))(this, x);
		}

		::System::Int32 _BuildSerialize_b__6_3(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_3_OFFSET))(this, x);
		}

		::System::Boolean _BuildSerialize_b__6_4(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_4_OFFSET))(this, x);
		}

		::System::Int32 _BuildSerialize_b__6_5(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_5_OFFSET))(this, x);
		}

		::System::Boolean _BuildSerialize_b__6_6(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_6_OFFSET))(this, x);
		}

		::System::Boolean _BuildSerialize_b__6_7(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_7_OFFSET))(this, x);
		}

		::System::Boolean _BuildDeserializeInternalAssignFieldFromLocalVariableIntKey_b__12_0(::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLEINTKEY_B__12_0_OFFSET))(this, x);
		}

		::System::Int32 _BuildDeserializeInternalAssignFieldFromLocalVariableIntKey_b__12_1(::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLEINTKEY_B__12_1_OFFSET))(this, x);
		}

		::System::Int32 _BuildDeserializeInternalDeserializationInfoArrayIntKey_b__15_0(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYINTKEY_B__15_0_OFFSET))(this, x);
		}

		::System::Int32 _BuildDeserializeInternalDeserializationInfoArrayIntKey_b__15_1(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYINTKEY_B__15_1_OFFSET))(this, x);
		}

		::System::Reflection::Emit::Label _BuildDeserializeInternalDeserializeLoopIntKey_b__16_1(::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* x)
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZELOOPINTKEY_B__16_1_OFFSET))(this, x);
		}

		::System::Boolean _BuildDeserializeInternalOnAfterDeserialize_b__20_0(::System::Type* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALONAFTERDESERIALIZE_B__20_0_OFFSET))(this, x);
		}

		::System::Boolean _BuildDeserializeInternalOnAfterDeserialize_b__20_1(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALONAFTERDESERIALIZE_B__20_1_OFFSET))(this, x);
		}

		::System::Boolean _BuildDeserializeInternalDeserializeValueAssignDirectly_b__25_0(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNDIRECTLY_B__25_0_OFFSET))(this, x);
		}

		::System::Boolean _BuildDeserializeInternalDeserializeValueAssignLocalVariable_b__26_0(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNLOCALVARIABLE_B__26_0_OFFSET))(this, x);
		}

		::System::Boolean __cctor_b__49_0(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_0_OFFSET))(this, x);
		}

		::System::Reflection::MethodInfo* __cctor_b__49_1(::System::Type* t)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_1_OFFSET))(this, t);
		}

		::System::Reflection::MethodInfo* __cctor_b__49_2(::System::Type* t)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_2_OFFSET))(this, t);
		}

		::System::Boolean __cctor_b__49_3(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_3_OFFSET))(this, x);
		}

		::System::Boolean __cctor_b__49_4(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_4_OFFSET))(this, x);
		}
	};
}
