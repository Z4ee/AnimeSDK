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

#define CLASS_1_5713C98DC6CE30C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163BC5D0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_1F6F64FEB4FA07BE_OFFSET UNITYSDK_OFFSET(0x163BCFA0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x163BC7E0)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_360AEA6D5E7DA4A5_OFFSET UNITYSDK_OFFSET(0x163BE410)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x163BD100)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x163BCD30)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x163BC840)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_BF30D9EEF7A9F1A8_OFFSET UNITYSDK_OFFSET(0x163BD730)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_C2D32A7D60D00984_OFFSET UNITYSDK_OFFSET(0x163BCD80)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_D78E7E5921B8B1C4_OFFSET UNITYSDK_OFFSET(0x163BD560)
#define CLASS_1_5713C98DC6CE30C7_METHOD_1_E0474ABD724209BE_OFFSET UNITYSDK_OFFSET(0x163BD160)
#define CLASS_1_5713C98DC6CE30C7__CCTOR_OFFSET UNITYSDK_OFFSET(0x163BF040)
#define CLASS_1_5713C98DC6CE30C7__CTOR_OFFSET UNITYSDK_OFFSET(0x163BC400)

inline static constexpr unsigned int Class_1_5713C98DC6CE30C7_TypeDefinitionIndex = 60317;

class Class_1_5713C98DC6CE30C7 : public ::System::Object
{
public:
	static ::System::String** StaticGet_ICEBBOPPAOH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x5C900);
	}
	static ::System::String** StaticGet_CJNOIBEOAFA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x5C908);
	}
	static ::System::String** StaticGet_CEODFDGHPPO()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x5C910);
	}
	static ::System::String** StaticGet_JMPCCDNCODM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x5C918);
	}
	static ::System::Single* StaticGet_FFJKBNAHAFA()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x130B0);
	}
	static ::System::Int32* StaticGet_BBCJKGPEPAF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x130B4);
	}
	static ::System::Int32* StaticGet_JDILJDFJBMM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x130B8);
	}
	static ::System::Int32* StaticGet_MMEKAEBKHGC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x130BC);
	}
	static ::System::Int32* StaticGet_MLEDIEKPADF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x130C0);
	}
	static ::System::Int32* StaticGet_IKGNGKCPPLJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_TypeDefinitionIndex)->GetStaticField(0x130C4);
	}
	::System::Collections::Generic::List_1<::System::String*>* KFJCCHGKIDB; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86*>* BAIENHLAKDL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86*>* HGCNLFIMDKL; // 0x20
	::UnityEngine::GameObject* PHLIBDMIHHP; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* BKLHLKGDFNK; // 0x30
	::System::Collections::Generic::List_1<::Class_1_5713C98DC6CE30C7_Class_1_BF8BA8FF7344779F*>* GECAOGJCCBE; // 0x38
	::UnityEngine::Transform* CDGPBICDJEO; // 0x40
	::RPG::GameCore::GameEntity* KDCHKNNCNLC; // 0x48
	::Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86* GBBPKOEKFKP; // 0x50
	::System::Single LJEOPKOBAGF; // 0x58
	::System::Int32 PJHBEBBPKDG; // 0x5C
	::UnityEngine::Vector3 AHAJBOAPBMC; // 0x60
	::System::Nullable_1<::UnityEngine::Vector3> PAIBLILBHKH; // 0x6C

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
