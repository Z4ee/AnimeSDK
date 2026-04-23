#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/MusicRhythmPropType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5713C98DC6CE30C7_Class_1_413A93C6BBC780F1;
class Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5713C98DC6CE30C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1288B3E0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_004FC3575B6BDB3C_OFFSET UNITYSDK_OFFSET(0x128880E0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_1F6F64FEB4FA07BE_OFFSET UNITYSDK_OFFSET(0x1288BC40)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1288B570)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x1288BDA0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x1288B9D0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_B96F1E8A3443563C_OFFSET UNITYSDK_OFFSET(0x1288C6B0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x1288B5D0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_C2D32A7D60D00984_OFFSET UNITYSDK_OFFSET(0x1288BA20)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_E345CF42437FEAFF_OFFSET UNITYSDK_OFFSET(0x1288BE00)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_ED60CE426DBC8E38_OFFSET UNITYSDK_OFFSET(0x1288C120)
#define CLASS_1_5713C98DC6CE30C7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1288D120)
#define CLASS_1_5713C98DC6CE30C7__CTOR_OFFSET UNITYSDK_OFFSET(0x1288B210)

inline static constexpr unsigned int Class_1_5713C98DC6CE30C7_TypeDefinitionIndex = 55510;

class Class_1_5713C98DC6CE30C7 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_15()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x62440);
	}
	static ::System::String** StaticGet_Field_1_14()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x62448);
	}
	static ::System::String** StaticGet_Field_1_16()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x62450);
	}
	static ::System::String** StaticGet_Field_1_13()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x62458);
	}
	static ::System::Int32* StaticGet_Field_1_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x105A0);
	}
	static ::System::Int32* StaticGet_Field_1_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x105A4);
	}
	static ::System::Single* StaticGet_Field_1_17()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x105A8);
	}
	static ::System::Int32* StaticGet_Field_1_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x105AC);
	}
	static ::System::Int32* StaticGet_Field_1_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x105B0);
	}
	static ::System::Int32* StaticGet_Field_1_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x105B4);
	}
	::UnityEngine::GameObject* Field_1_8; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_3; // 0x18
	::UnityEngine::Transform* Field_1_0; // 0x20
	::RPG::GameCore::GameEntity* Field_1_1; // 0x28
	::Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86* Field_1_11; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86*>* Field_1_2; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* Field_1_5; // 0x40
	::System::Collections::Generic::List_1<::Class_1_5713C98DC6CE30C7_Class_1_413A93C6BBC780F1*>* Field_1_7; // 0x48
	::System::Collections::Generic::List_1<::Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86*>* Field_1_4; // 0x50
	::System::Single Field_1_9; // 0x58
	::UnityEngine::Vector3 Field_1_6; // 0x5C
	::System::Int32 Field_1_10; // 0x68
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_12; // 0x6C

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C2D32A7D60D00984(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Vector3 a3, ::RPG::Client::Prop::MusicRhythmPropType a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::RPG::Client::Prop::MusicRhythmPropType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_C2D32A7D60D00984_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_1F6F64FEB4FA07BE(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_1F6F64FEB4FA07BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_1_E345CF42437FEAFF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_E345CF42437FEAFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED60CE426DBC8E38(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_ED60CE426DBC8E38_OFFSET))(this, a1);
	}

	::System::Void Method_1_004FC3575B6BDB3C(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_004FC3575B6BDB3C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B96F1E8A3443563C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_B96F1E8A3443563C_OFFSET))(this, a1);
	}
};
