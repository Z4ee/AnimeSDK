#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EnvLocalVolume;
namespace RPG::Client { class EnvironmentSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_24B10CB562F3162A_METHOD_1_4310021D693F4B87_OFFSET UNITYSDK_OFFSET(0xBF98410)
#define CLASS_1_24B10CB562F3162A_METHOD_1_788680C28AC4B447_OFFSET UNITYSDK_OFFSET(0xBF997A0)
#define CLASS_1_24B10CB562F3162A_METHOD_1_85F9AAEEA394BE31_OFFSET UNITYSDK_OFFSET(0xBF9A100)
#define CLASS_1_24B10CB562F3162A_METHOD_1_9FA27692C03EB82C_OFFSET UNITYSDK_OFFSET(0xBF98600)
#define CLASS_1_24B10CB562F3162A_METHOD_1_B0997313D408BC49_OFFSET UNITYSDK_OFFSET(0xBF98790)
#define CLASS_1_24B10CB562F3162A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBF983B0)
#define CLASS_1_24B10CB562F3162A_METHOD_1_CD3491FE1E196278_OFFSET UNITYSDK_OFFSET(0xBF9A1E0)
#define CLASS_1_24B10CB562F3162A__CTOR_OFFSET UNITYSDK_OFFSET(0xBF98350)

inline static constexpr unsigned int Class_1_24B10CB562F3162A_TypeDefinitionIndex = 45508;

class Class_1_24B10CB562F3162A : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::EnvLocalVolume*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::EnvLocalVolume*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B10CB562F3162A_TypeDefinitionIndex)->GetStaticField(0x36010);
	}
	static ::System::Collections::Generic::List_1<::EnvLocalVolume*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::EnvLocalVolume*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B10CB562F3162A_TypeDefinitionIndex)->GetStaticField(0x36018);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B10CB562F3162A_TypeDefinitionIndex)->GetStaticField(0x8F20);
	}
	::RPG::Client::EnvironmentSystem* Field_1_3; // 0x10
	::EnvLocalVolume* Field_1_4; // 0x18
	::EnvLocalVolume* Field_1_5; // 0x20
	::UnityEngine::Vector3 Field_1_6; // 0x28

	::System::Void _ctor(::RPG::Client::EnvironmentSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvironmentSystem*))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_4310021D693F4B87(::EnvLocalVolume* a1)
	{
		return ((::System::Void(*)(::EnvLocalVolume*))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_4310021D693F4B87_OFFSET))(a1);
	}

	static ::System::Void Method_1_9FA27692C03EB82C(::EnvLocalVolume* a1)
	{
		return ((::System::Void(*)(::EnvLocalVolume*))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_9FA27692C03EB82C_OFFSET))(a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_B0997313D408BC49(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_B0997313D408BC49_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_788680C28AC4B447(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_788680C28AC4B447_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_85F9AAEEA394BE31(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_85F9AAEEA394BE31_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD3491FE1E196278(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_CD3491FE1E196278_OFFSET))(this, a1);
	}
};
