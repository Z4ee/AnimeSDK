#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MemberInfo; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18169CB0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_10_OFFSET UNITYSDK_OFFSET(0x18169DE0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_11_OFFSET UNITYSDK_OFFSET(0x18169DF0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_12_OFFSET UNITYSDK_OFFSET(0x18169E10)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_13_OFFSET UNITYSDK_OFFSET(0x18169E20)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_14_OFFSET UNITYSDK_OFFSET(0x18169E30)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_15_OFFSET UNITYSDK_OFFSET(0x18169E40)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_16_OFFSET UNITYSDK_OFFSET(0x18169E50)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_17_OFFSET UNITYSDK_OFFSET(0x18169F10)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_2_OFFSET UNITYSDK_OFFSET(0x18169D60)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_4_OFFSET UNITYSDK_OFFSET(0x18169DB0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_5_OFFSET UNITYSDK_OFFSET(0x18169F20)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_6_OFFSET UNITYSDK_OFFSET(0x18169F40)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_7_OFFSET UNITYSDK_OFFSET(0x1816A0D0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_8_OFFSET UNITYSDK_OFFSET(0x18169D00)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_9_OFFSET UNITYSDK_OFFSET(0x18169D30)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18169CF0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo___c_TypeDefinitionIndex = 7291;

	class ObjectSerializationInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>>** StaticGet___9__27_17()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9820);
		}
		static ::System::Func_2<::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>, ::System::Int32>** StaticGet___9__27_12()
		{
			return (::System::Func_2<::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9828);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__27_2()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9830);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::String*>** StaticGet___9__27_16()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9838);
		}
		static ::MessagePack::Internal::ObjectSerializationInfo___c** StaticGet___9()
		{
			return (::MessagePack::Internal::ObjectSerializationInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9840);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>** StaticGet___9__27_5()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9848);
		}
		static ::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Int32, ::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>>** StaticGet___9__27_11()
		{
			return (::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Int32, ::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9850);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Type*>** StaticGet___9__27_8()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9858);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Int32>** StaticGet___9__27_4()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9860);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Int32>** StaticGet___9__27_10()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9868);
		}
		static ::System::Func_2<::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>** StaticGet___9__27_13()
		{
			return (::System::Func_2<::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9870);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__27_7()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9878);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::String*>** StaticGet___9__27_14()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9880);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>** StaticGet___9__27_6()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9888);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>>** StaticGet___9__27_15()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9890);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::String*>** StaticGet___9__27_9()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x9898);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CTOR_OFFSET))(this);
		}

		::System::Type* _CreateOrNull_b__27_8(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_8_OFFSET))(this, a1);
		}

		::System::String* _CreateOrNull_b__27_9(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_9_OFFSET))(this, a1);
		}

		::System::Boolean _CreateOrNull_b__27_2(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_2_OFFSET))(this, a1);
		}

		::System::Int32 _CreateOrNull_b__27_4(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_4_OFFSET))(this, a1);
		}

		::System::Int32 _CreateOrNull_b__27_10(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_10_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32> _CreateOrNull_b__27_11(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_11_OFFSET))(this, a1, a2);
		}

		::System::Int32 _CreateOrNull_b__27_12(::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_12_OFFSET))(this, a1);
		}

		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* _CreateOrNull_b__27_13(::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32> a1)
		{
			return ((::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*(*)(::PVOID, ::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_13_OFFSET))(this, a1);
		}

		::System::String* _CreateOrNull_b__27_14(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_14_OFFSET))(this, a1);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> _CreateOrNull_b__27_15(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_15_OFFSET))(this, a1);
		}

		::System::String* _CreateOrNull_b__27_16(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_16_OFFSET))(this, a1);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> _CreateOrNull_b__27_17(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_17_OFFSET))(this, a1);
		}

		::System::Int32 _CreateOrNull_b__27_5(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_5_OFFSET))(this, a1);
		}

		::System::Int32 _CreateOrNull_b__27_6(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_6_OFFSET))(this, a1);
		}

		::System::Boolean _CreateOrNull_b__27_7(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_7_OFFSET))(this, a1);
		}
	};
}
