#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EnvLocalVolume;
namespace RPG::Client { class EnvironmentSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_24B10CB562F3162A_METHOD_1_4BBC62D06BCB2C45_OFFSET UNITYSDK_OFFSET(0x12B02690)
#define CLASS_1_24B10CB562F3162A_METHOD_1_4C57AFD6EC2152F9_OFFSET UNITYSDK_OFFSET(0x12B01500)
#define CLASS_1_24B10CB562F3162A_METHOD_1_788680C28AC4B447_OFFSET UNITYSDK_OFFSET(0x12B01710)
#define CLASS_1_24B10CB562F3162A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12B01290)
#define CLASS_1_24B10CB562F3162A_METHOD_1_EAD5177FE130DC9E_OFFSET UNITYSDK_OFFSET(0x12B012F0)
#define CLASS_1_24B10CB562F3162A_METHOD_1_FB446A946DCFB5C3_OFFSET UNITYSDK_OFFSET(0x12B02120)
#define CLASS_1_24B10CB562F3162A__CTOR_OFFSET UNITYSDK_OFFSET(0x12B01230)

inline static constexpr unsigned int Class_1_24B10CB562F3162A_TypeDefinitionIndex = 44089;

class Class_1_24B10CB562F3162A : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::EnvLocalVolume*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::EnvLocalVolume*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B10CB562F3162A_TypeDefinitionIndex)->GetStaticField(0xB7D0);
	}
	static ::System::Collections::Generic::List_1<::EnvLocalVolume*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::EnvLocalVolume*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B10CB562F3162A_TypeDefinitionIndex)->GetStaticField(0xB7D8);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B10CB562F3162A_TypeDefinitionIndex)->GetStaticField(0x44B0);
	}
	::EnvLocalVolume* Field_1_5; // 0x10
	::EnvLocalVolume* Field_1_4; // 0x18
	::RPG::Client::EnvironmentSystem* Field_1_0; // 0x20
	::UnityEngine::Vector3 Field_1_6; // 0x28

	::System::Void _ctor(::RPG::Client::EnvironmentSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvironmentSystem*))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_EAD5177FE130DC9E(::EnvLocalVolume* a1)
	{
		return ((::System::Void(*)(::EnvLocalVolume*))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_EAD5177FE130DC9E_OFFSET))(a1);
	}

	static ::System::Void Method_1_4C57AFD6EC2152F9(::EnvLocalVolume* a1)
	{
		return ((::System::Void(*)(::EnvLocalVolume*))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_4C57AFD6EC2152F9_OFFSET))(a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_788680C28AC4B447(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_788680C28AC4B447_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FB446A946DCFB5C3(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_FB446A946DCFB5C3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4BBC62D06BCB2C45(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_24B10CB562F3162A_METHOD_1_4BBC62D06BCB2C45_OFFSET))(this, a1);
	}
};
