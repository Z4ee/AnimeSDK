#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EnvLocalVolume;
namespace RPG::Client { class EnvironmentSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_24B10CB562F3162A_METHOD_1_23286C4E1BC884C6_OFFSET UNITYSDK_OFFSET(0xCFB63B0)
#define CLASS_1_24B10CB562F3162A_METHOD_1_4310021D693F4B87_OFFSET UNITYSDK_OFFSET(0xCFB4510)
#define CLASS_1_24B10CB562F3162A_METHOD_1_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0xCFB4890)
#define CLASS_1_24B10CB562F3162A_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0xCFB4410)
#define CLASS_1_24B10CB562F3162A_METHOD_1_788680C28AC4B447_OFFSET UNITYSDK_OFFSET(0xCFB5A50)
#define CLASS_1_24B10CB562F3162A_METHOD_1_9FA27692C03EB82C_OFFSET UNITYSDK_OFFSET(0xCFB4700)
#define CLASS_1_24B10CB562F3162A_METHOD_1_B0997313D408BC49_OFFSET UNITYSDK_OFFSET(0xCFB4A40)
#define CLASS_1_24B10CB562F3162A_METHOD_1_CD3491FE1E196278_OFFSET UNITYSDK_OFFSET(0xCFB64A0)
#define CLASS_1_24B10CB562F3162A__CTOR_OFFSET UNITYSDK_OFFSET(0xCFB4400)

inline static constexpr unsigned int Class_1_24B10CB562F3162A_TypeDefinitionIndex = 47758;

class Class_1_24B10CB562F3162A : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::EnvLocalVolume*>** StaticGet_LHEGFPCLBML()
	{
		return (::System::Collections::Generic::List_1<::EnvLocalVolume*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B10CB562F3162A_TypeDefinitionIndex)->GetStaticField(0x61040);
	}
	static ::System::Collections::Generic::List_1<::EnvLocalVolume*>** StaticGet_BNMOAACGJHG()
	{
		return (::System::Collections::Generic::List_1<::EnvLocalVolume*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B10CB562F3162A_TypeDefinitionIndex)->GetStaticField(0x61048);
	}
	static ::System::Boolean* StaticGet_OBHCNLJCFGG()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B10CB562F3162A_TypeDefinitionIndex)->GetStaticField(0x13E10);
	}
	::EnvLocalVolume* BFJFENJJAFP; // 0x10
	::RPG::Client::EnvironmentSystem* NGDKDCIDMBC; // 0x18
	::EnvLocalVolume* LJOHADCJLGN; // 0x20
	::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x28

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

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_1_B0997313D408BC49(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_B0997313D408BC49_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_788680C28AC4B447(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_788680C28AC4B447_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_23286C4E1BC884C6(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_23286C4E1BC884C6_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD3491FE1E196278(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_CD3491FE1E196278_OFFSET))(this, a1);
	}
};
