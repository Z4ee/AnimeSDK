#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MemberInfo; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E725A30)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_0_OFFSET UNITYSDK_OFFSET(0x1E725AE0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_10_OFFSET UNITYSDK_OFFSET(0x1E725BC0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_2_OFFSET UNITYSDK_OFFSET(0x1E725B30)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_3_OFFSET UNITYSDK_OFFSET(0x1E725BD0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_4_OFFSET UNITYSDK_OFFSET(0x1E725BF0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_5_OFFSET UNITYSDK_OFFSET(0x1E725A80)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_6_OFFSET UNITYSDK_OFFSET(0x1E725AB0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_7_OFFSET UNITYSDK_OFFSET(0x1E725B60)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_8_OFFSET UNITYSDK_OFFSET(0x1E725B70)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_9_OFFSET UNITYSDK_OFFSET(0x1E725B80)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E725A70)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo___c_TypeDefinitionIndex = 31321;

	class ObjectSerializationInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>>** StaticGet___9__29_8()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x25F50);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>>** StaticGet___9__29_10()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x25F58);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>** StaticGet___9__29_3()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x25F60);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::String*>** StaticGet___9__29_9()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x25F68);
		}
		static ::MessagePack::Internal::ObjectSerializationInfo___c** StaticGet___9()
		{
			return (::MessagePack::Internal::ObjectSerializationInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x25F70);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Int32>** StaticGet___9__29_2()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x25F78);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::String*>** StaticGet___9__29_7()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x25F80);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Type*>** StaticGet___9__29_5()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x25F88);
		}
		static ::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>** StaticGet___9__29_4()
		{
			return (::System::Func_2<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x25F90);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::String*>** StaticGet___9__29_6()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x25F98);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo___c_TypeDefinitionIndex)->GetStaticField(0x25FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CTOR_OFFSET))(this);
		}

		::System::Type* _CreateOrNull_b__29_5(::System::Reflection::MemberInfo* m)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_5_OFFSET))(this, m);
		}

		::System::String* _CreateOrNull_b__29_6(::System::Reflection::MemberInfo* m)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_6_OFFSET))(this, m);
		}

		::System::Boolean _CreateOrNull_b__29_0(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_0_OFFSET))(this, x);
		}

		::System::Int32 _CreateOrNull_b__29_2(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_2_OFFSET))(this, x);
		}

		::System::String* _CreateOrNull_b__29_7(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> x)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_7_OFFSET))(this, x);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> _CreateOrNull_b__29_8(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> x)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_8_OFFSET))(this, x);
		}

		::System::String* _CreateOrNull_b__29_9(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> x)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_9_OFFSET))(this, x);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> _CreateOrNull_b__29_10(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*> x)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_10_OFFSET))(this, x);
		}

		::System::Int32 _CreateOrNull_b__29_3(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_3_OFFSET))(this, x);
		}

		::System::Int32 _CreateOrNull_b__29_4(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__29_4_OFFSET))(this, x);
		}
	};
}
