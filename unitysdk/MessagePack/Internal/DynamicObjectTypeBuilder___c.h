#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/Label.h"

namespace MessagePack { template <typename T> class Utilities_GetWriterBytesAction_1; }
namespace MessagePack::Internal { class DynamicObjectTypeBuilder_DeserializeInfo; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C6219C0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__5_1_OFFSET UNITYSDK_OFFSET(0x1C6219E0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCUSTOMFORMATTERFIELD_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C621A00)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZE_B__9_10_OFFSET UNITYSDK_OFFSET(0x1C621C50)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZE_B__9_1_OFFSET UNITYSDK_OFFSET(0x1C621C10)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZE_B__9_2_OFFSET UNITYSDK_OFFSET(0x1C621BB0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZE_B__9_3_OFFSET UNITYSDK_OFFSET(0x1C621BD0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZE_B__9_9_OFFSET UNITYSDK_OFFSET(0x1C621BF0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDFORMATTERTODYNAMICMETHOD_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C621970)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDFORMATTERTODYNAMICMETHOD_B__4_1_OFFSET UNITYSDK_OFFSET(0x1C621990)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDFORMATTERTODYNAMICMETHOD_B__4_2_OFFSET UNITYSDK_OFFSET(0x1C6219A0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1C621A30)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_1_OFFSET UNITYSDK_OFFSET(0x1C621A70)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_2_OFFSET UNITYSDK_OFFSET(0x1C621AF0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_3_OFFSET UNITYSDK_OFFSET(0x1C621B10)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_4_OFFSET UNITYSDK_OFFSET(0x1C621B30)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_5_OFFSET UNITYSDK_OFFSET(0x1C621B50)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_6_OFFSET UNITYSDK_OFFSET(0x1C621B70)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_7_OFFSET UNITYSDK_OFFSET(0x1C621B90)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C621920)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C621960)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__EMITDESERIALIZEVALUE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1C621CD0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__EMITNEWOBJECT_B__11_0_OFFSET UNITYSDK_OFFSET(0x1C621D10)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__EMITNEWOBJECT_B__11_1_OFFSET UNITYSDK_OFFSET(0x1C621D40)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x1C621D70)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__36_1_OFFSET UNITYSDK_OFFSET(0x1C621DF0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__36_2_OFFSET UNITYSDK_OFFSET(0x1C622120)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__36_3_OFFSET UNITYSDK_OFFSET(0x1C6223C0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__36_4_OFFSET UNITYSDK_OFFSET(0x1C622450)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c_TypeDefinitionIndex = 29303;

	class DynamicObjectTypeBuilder___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x238F0);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x238F8);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__7_2()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23900);
		}
		static ::MessagePack::Utilities_GetWriterBytesAction_1<::System::String*>** StaticGet___9__4_1()
		{
			return (::MessagePack::Utilities_GetWriterBytesAction_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23908);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__4_2()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23910);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>** StaticGet___9__9_2()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23918);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__7_6()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23920);
		}
		static ::System::Func_2<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Boolean>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23928);
		}
		static ::MessagePack::Internal::DynamicObjectTypeBuilder___c** StaticGet___9()
		{
			return (::MessagePack::Internal::DynamicObjectTypeBuilder___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23930);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23938);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__7_7()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23940);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23948);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23950);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23958);
		}
		static ::System::Func_2<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Reflection::Emit::Label>** StaticGet___9__9_9()
		{
			return (::System::Func_2<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Reflection::Emit::Label>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23960);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>** StaticGet___9__7_3()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23968);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__7_4()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23970);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__9_10()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23978);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23980);
		}
		static ::System::Func_2<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23988);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>** StaticGet___9__9_3()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23990);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>** StaticGet___9__7_5()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x23998);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x239A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildFormatterToDynamicMethod_b__4_0(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDFORMATTERTODYNAMICMETHOD_B__4_0_OFFSET))(this, x);
		}

		::System::Void _BuildFormatterToDynamicMethod_b__4_1(::MessagePack::MessagePackWriter& writer, ::System::String* arg)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDFORMATTERTODYNAMICMETHOD_B__4_1_OFFSET))(this, writer, arg);
		}

		::System::Boolean _BuildFormatterToDynamicMethod_b__4_2(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDFORMATTERTODYNAMICMETHOD_B__4_2_OFFSET))(this, x);
		}

		::System::Boolean _BuildConstructor_b__5_0(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__5_0_OFFSET))(this, x);
		}

		::System::Boolean _BuildConstructor_b__5_1(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__5_1_OFFSET))(this, x);
		}

		::System::Boolean _BuildCustomFormatterField_b__6_0(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCUSTOMFORMATTERFIELD_B__6_0_OFFSET))(this, x);
		}

		::System::Boolean _BuildSerialize_b__7_0(::System::Type* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_0_OFFSET))(this, x);
		}

		::System::Boolean _BuildSerialize_b__7_1(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_1_OFFSET))(this, x);
		}

		::System::Boolean _BuildSerialize_b__7_2(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_2_OFFSET))(this, x);
		}

		::System::Int32 _BuildSerialize_b__7_3(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_3_OFFSET))(this, x);
		}

		::System::Boolean _BuildSerialize_b__7_4(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_4_OFFSET))(this, x);
		}

		::System::Int32 _BuildSerialize_b__7_5(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_5_OFFSET))(this, x);
		}

		::System::Boolean _BuildSerialize_b__7_6(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_6_OFFSET))(this, x);
		}

		::System::Boolean _BuildSerialize_b__7_7(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__7_7_OFFSET))(this, x);
		}

		::System::Int32 _BuildDeserialize_b__9_2(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZE_B__9_2_OFFSET))(this, x);
		}

		::System::Int32 _BuildDeserialize_b__9_3(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZE_B__9_3_OFFSET))(this, x);
		}

		::System::Reflection::Emit::Label _BuildDeserialize_b__9_9(::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* x)
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZE_B__9_9_OFFSET))(this, x);
		}

		::System::Boolean _BuildDeserialize_b__9_1(::System::Type* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZE_B__9_1_OFFSET))(this, x);
		}

		::System::Boolean _BuildDeserialize_b__9_10(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZE_B__9_10_OFFSET))(this, x);
		}

		::System::Boolean _EmitDeserializeValue_b__10_0(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__EMITDESERIALIZEVALUE_B__10_0_OFFSET))(this, x);
		}

		::System::Boolean _EmitNewObject_b__11_0(::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__EMITNEWOBJECT_B__11_0_OFFSET))(this, x);
		}

		::System::Boolean _EmitNewObject_b__11_1(::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__EMITNEWOBJECT_B__11_1_OFFSET))(this, x);
		}

		::System::Boolean __cctor_b__36_0(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__36_0_OFFSET))(this, x);
		}

		::System::Reflection::MethodInfo* __cctor_b__36_1(::System::Type* t)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__36_1_OFFSET))(this, t);
		}

		::System::Reflection::MethodInfo* __cctor_b__36_2(::System::Type* t)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__36_2_OFFSET))(this, t);
		}

		::System::Boolean __cctor_b__36_3(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__36_3_OFFSET))(this, x);
		}

		::System::Boolean __cctor_b__36_4(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__36_4_OFFSET))(this, x);
		}
	};
}
