#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/MusicRhythmPropType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86;
class Class_1_5713C98DC6CE30C7_Class_1_BF8BA8FF7344779F;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5713C98DC6CE30C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19213DA0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_1F6F64FEB4FA07BE_OFFSET UNITYSDK_OFFSET(0x19214770)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x19213FB0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_360AEA6D5E7DA4A5_OFFSET UNITYSDK_OFFSET(0x19215BD0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x192148D0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x19214500)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x19214010)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_BF30D9EEF7A9F1A8_OFFSET UNITYSDK_OFFSET(0x19214EF0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_C2D32A7D60D00984_OFFSET UNITYSDK_OFFSET(0x19214550)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_D78E7E5921B8B1C4_OFFSET UNITYSDK_OFFSET(0x19214D20)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_E0474ABD724209BE_OFFSET UNITYSDK_OFFSET(0x19214930)
#define CLASS_1_5713C98DC6CE30C7__CCTOR_OFFSET UNITYSDK_OFFSET(0x19216800)
#define CLASS_1_5713C98DC6CE30C7__CTOR_OFFSET UNITYSDK_OFFSET(0x19213BD0)

inline static constexpr unsigned int Class_1_5713C98DC6CE30C7_TypeDefinitionIndex = 57500;

class Class_1_5713C98DC6CE30C7 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x2FD20);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x2FD28);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x2FD30);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x2FD38);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x8410);
	}
	static ::System::Single* StaticGet_Field_1_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x8414);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x8418);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x841C);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x8420);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x8424);
	}
	::System::Collections::Generic::List_1<::Class_1_5713C98DC6CE30C7_Class_1_BF8BA8FF7344779F*>* Field_1_10; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_11; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86*>* Field_1_12; // 0x20
	::Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86* Field_1_13; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86*>* Field_1_14; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* Field_1_15; // 0x38
	::UnityEngine::Transform* Field_1_16; // 0x40
	::UnityEngine::GameObject* Field_1_17; // 0x48
	::RPG::GameCore::GameEntity* Field_1_18; // 0x50
	::System::Int32 Field_1_19; // 0x58
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_20; // 0x5C
	::UnityEngine::Vector3 Field_1_21; // 0x6C
	::System::Single Field_1_22; // 0x78

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

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
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

	::System::Void Method_1_E0474ABD724209BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_E0474ABD724209BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_D78E7E5921B8B1C4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_D78E7E5921B8B1C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF30D9EEF7A9F1A8(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_BF30D9EEF7A9F1A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_360AEA6D5E7DA4A5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_360AEA6D5E7DA4A5_OFFSET))(this, a1);
	}
};
