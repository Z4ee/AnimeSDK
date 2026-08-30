#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_10C1CA4432641F33_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB697EF0)
#define CLASS_1_10C1CA4432641F33_METHOD_1_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0xB698080)
#define CLASS_1_10C1CA4432641F33_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0xB697FE0)
#define CLASS_1_10C1CA4432641F33_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB697F40)
#define CLASS_1_10C1CA4432641F33__CCTOR_OFFSET UNITYSDK_OFFSET(0xB698180)
#define CLASS_1_10C1CA4432641F33__CTOR_OFFSET UNITYSDK_OFFSET(0xB697D00)

inline static constexpr unsigned int Class_1_10C1CA4432641F33_TypeDefinitionIndex = 78513;

class Class_1_10C1CA4432641F33 : public ::System::Object
{
public:
	static ::System::String** StaticGet_HFJLGKGPKOM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0x65A10);
	}
	static ::System::Int32* StaticGet_OMDPHFLEHEF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0x14F30);
	}
	static ::System::Int32* StaticGet_GPDFLOGAMIP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0x14F34);
	}
	static ::System::Int32* StaticGet_PBAEAGEPDCH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0x14F38);
	}
	static ::System::Int32* StaticGet_ECOIODPLNOO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0x14F3C);
	}
	static ::System::Int32* StaticGet_NPHHMJPMMHM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0x14F40);
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
