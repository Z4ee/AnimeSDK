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

#define CLASS_1_5713C98DC6CE30C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1442C1F0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_1F6F64FEB4FA07BE_OFFSET UNITYSDK_OFFSET(0x1442CA60)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1442C360)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x1442C3C0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x1442CBC0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x1442C7F0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_AD9D221401A49B93_OFFSET UNITYSDK_OFFSET(0x1442DEC0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_BF30D9EEF7A9F1A8_OFFSET UNITYSDK_OFFSET(0x1442D1E0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_C2D32A7D60D00984_OFFSET UNITYSDK_OFFSET(0x1442C840)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_D78E7E5921B8B1C4_OFFSET UNITYSDK_OFFSET(0x1442D010)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_E0474ABD724209BE_OFFSET UNITYSDK_OFFSET(0x1442CC20)
#define CLASS_1_5713C98DC6CE30C7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1442EA30)
#define CLASS_1_5713C98DC6CE30C7__CTOR_OFFSET UNITYSDK_OFFSET(0x1442C020)

inline static constexpr unsigned int Class_1_5713C98DC6CE30C7_TypeDefinitionIndex = 56261;

class Class_1_5713C98DC6CE30C7 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x3DFD0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x3DFD8);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x3DFE0);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x3DFE8);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0xB8F0);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0xB8F4);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0xB8F8);
	}
	static ::System::Single* StaticGet_Field_1_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0xB8FC);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0xB900);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0xB904);
	}
	::UnityEngine::Transform* Field_1_10; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5713C98DC6CE30C7_Class_1_BF8BA8FF7344779F*>* Field_1_11; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86*>* Field_1_12; // 0x20
	::RPG::GameCore::GameEntity* Field_1_13; // 0x28
	::UnityEngine::GameObject* Field_1_14; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_15; // 0x38
	::System::Collections::Generic::List_1<::Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86*>* Field_1_16; // 0x40
	::Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86* Field_1_17; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* Field_1_18; // 0x50
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_19; // 0x58
	::UnityEngine::Vector3 Field_1_20; // 0x68
	::System::Single Field_1_21; // 0x74
	::System::Int32 Field_1_22; // 0x78

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

	::System::Void Method_1_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
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

	::System::Void Method_1_AD9D221401A49B93(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_METHOD_1_AD9D221401A49B93_OFFSET))(this, a1);
	}
};
