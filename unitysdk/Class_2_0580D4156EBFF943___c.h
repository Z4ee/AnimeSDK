#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CustomButton_VoidDelegate; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_0580D4156EBFF943___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB1B7A0)
#define CLASS_2_0580D4156EBFF943___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAB1B7E0)
#define CLASS_2_0580D4156EBFF943___C___ONBIND_B__1_2_OFFSET UNITYSDK_OFFSET(0xAB1B7F0)

inline static constexpr unsigned int Class_2_0580D4156EBFF943___c_TypeDefinitionIndex = 67540;

class Class_2_0580D4156EBFF943___c : public ::System::Object
{
public:
	static ::Class_2_0580D4156EBFF943___c** StaticGet___9()
	{
		return (::Class_2_0580D4156EBFF943___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0580D4156EBFF943___c_TypeDefinitionIndex)->GetStaticField(0x79F0);
	}
	static ::RPG::Client::CustomButton_VoidDelegate** StaticGet___9__1_2()
	{
		return (::RPG::Client::CustomButton_VoidDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0580D4156EBFF943___c_TypeDefinitionIndex)->GetStaticField(0x79F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnBind_b__1_2(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943___C___ONBIND_B__1_2_OFFSET))(this, a1);
	}
};
