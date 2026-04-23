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

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1735C940)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_10_OFFSET UNITYSDK_OFFSET(0x1735CA70)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_11_OFFSET UNITYSDK_OFFSET(0x1735CA80)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_12_OFFSET UNITYSDK_OFFSET(0x1735CAA0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_13_OFFSET UNITYSDK_OFFSET(0x1735CAB0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_14_OFFSET UNITYSDK_OFFSET(0x1735CAC0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_15_OFFSET UNITYSDK_OFFSET(0x1735CAD0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_16_OFFSET UNITYSDK_OFFSET(0x1735CAE0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_17_OFFSET UNITYSDK_OFFSET(0x1735CBB0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_2_OFFSET UNITYSDK_OFFSET(0x1735C9F0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_4_OFFSET UNITYSDK_OFFSET(0x1735CA40)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_5_OFFSET UNITYSDK_OFFSET(0x1735CBC0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_6_OFFSET UNITYSDK_OFFSET(0x1735CBE0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_7_OFFSET UNITYSDK_OFFSET(0x1735CD70)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_8_OFFSET UNITYSDK_OFFSET(0x1735C990)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_9_OFFSET UNITYSDK_OFFSET(0x1735C9C0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1735C980)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo___c_TypeDefinitionIndex = 9388;

	class ObjectSerializationInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::String*>** StaticGet___9__27_16()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x43330);
		}
		static ::System::Func_2<::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>** StaticGet___9__27_13()
		{
			return (::System::Func_2<::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x43338);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>** StaticGet___9__27_6()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x43340);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Type*>** StaticGet___9__27_8()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x43348);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>** StaticGet___9__27_5()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x43350);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Int32>** StaticGet___9__27_4()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x43358);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::String*>** StaticGet___9__27_9()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x43360);
		}
		static ::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Int32, ::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>>** StaticGet___9__27_11()
		{
			return (::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Int32, ::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x43368);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>>** StaticGet___9__27_15()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x43370);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>** StaticGet___9__27_7()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x43378);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__27_2()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x43380);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::String*>** StaticGet___9__27_14()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x43388);
		}
		static ::MessagePack::Internal::ObjectSerializationInfo___c** StaticGet___9()
		{
			return (::MessagePack::Internal::ObjectSerializationInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x43390);
		}
		static ::System::Func_2<::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>, ::System::Int32>** StaticGet___9__27_12()
		{
			return (::System::Func_2<::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x43398);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Int32>** StaticGet___9__27_10()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x433A0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>>** StaticGet___9__27_17()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x433A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CTOR_OFFSET))(this);
		}

		::System::Type* _CreateOrNull_b__27_8(::System::Reflection::MemberInfo* m)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_8_OFFSET))(this, m);
		}

		::System::String* _CreateOrNull_b__27_9(::System::Reflection::MemberInfo* m)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_9_OFFSET))(this, m);
		}

		::System::Boolean _CreateOrNull_b__27_2(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_2_OFFSET))(this, x);
		}

		::System::Int32 _CreateOrNull_b__27_4(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_4_OFFSET))(this, x);
		}

		::System::Int32 _CreateOrNull_b__27_10(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_10_OFFSET))(this, x);
		}

		::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32> _CreateOrNull_b__27_11(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> x, ::System::Int32 i)
		{
			return ((::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_11_OFFSET))(this, x, i);
		}

		::System::Int32 _CreateOrNull_b__27_12(::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32> x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_12_OFFSET))(this, x);
		}

		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* _CreateOrNull_b__27_13(::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32> x)
		{
			return ((::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*(*)(::PVOID, ::System::ValueTuple_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_13_OFFSET))(this, x);
		}

		::System::String* _CreateOrNull_b__27_14(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> x)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_14_OFFSET))(this, x);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> _CreateOrNull_b__27_15(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> x)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_15_OFFSET))(this, x);
		}

		::System::String* _CreateOrNull_b__27_16(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> x)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_16_OFFSET))(this, x);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> _CreateOrNull_b__27_17(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> x)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_17_OFFSET))(this, x);
		}

		::System::Int32 _CreateOrNull_b__27_5(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_5_OFFSET))(this, x);
		}

		::System::Int32 _CreateOrNull_b__27_6(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_6_OFFSET))(this, x);
		}

		::System::Boolean _CreateOrNull_b__27_7(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_7_OFFSET))(this, m);
		}
	};
}
