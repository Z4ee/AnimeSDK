#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_10C1CA4432641F33_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB535130)
#define CLASS_1_10C1CA4432641F33_METHOD_1_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0xB5352C0)
#define CLASS_1_10C1CA4432641F33_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0xB535220)
#define CLASS_1_10C1CA4432641F33_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB535180)
#define CLASS_1_10C1CA4432641F33__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5353C0)
#define CLASS_1_10C1CA4432641F33__CTOR_OFFSET UNITYSDK_OFFSET(0xB534F40)

inline static constexpr unsigned int Class_1_10C1CA4432641F33_TypeDefinitionIndex = 78983;

class Class_1_10C1CA4432641F33 : public ::System::Object
{
public:
	static ::System::String** StaticGet_HFJLGKGPKOM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0x5AAD0);
	}
	static ::System::Int32* StaticGet_ECOIODPLNOO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0x139D0);
	}
	static ::System::Int32* StaticGet_GPDFLOGAMIP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0x139D4);
	}
	static ::System::Int32* StaticGet_OMDPHFLEHEF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0x139D8);
	}
	static ::System::Int32* StaticGet_PBAEAGEPDCH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0x139DC);
	}
	static ::System::Int32* StaticGet_NPHHMJPMMHM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0x139E0);
	}
	::UnityEngine::Animator* MABMPCKBKNI; // 0x10

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_10C1CA4432641F33__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10C1CA4432641F33__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10C1CA4432641F33_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10C1CA4432641F33_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10C1CA4432641F33_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_1_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_10C1CA4432641F33_METHOD_1_1CD1133DC003C11C_OFFSET))(this, a1);
	}
};
