#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CustomButton_VoidDelegate; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_31B0794C985DE24C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9832810)
#define CLASS_2_31B0794C985DE24C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9832840)
#define CLASS_2_31B0794C985DE24C___C___SETUPVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x9832850)

inline static constexpr unsigned int Class_2_31B0794C985DE24C___c_TypeDefinitionIndex = 66465;

class Class_2_31B0794C985DE24C___c : public ::System::Object
{
public:
	static ::RPG::Client::CustomButton_VoidDelegate** StaticGet___9__7_0()
	{
		return (::RPG::Client::CustomButton_VoidDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_2_31B0794C985DE24C___c_TypeDefinitionIndex)->GetStaticField(0xC950);
	}
	static ::Class_2_31B0794C985DE24C___c** StaticGet___9()
	{
		return (::Class_2_31B0794C985DE24C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_31B0794C985DE24C___c_TypeDefinitionIndex)->GetStaticField(0xC958);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_31B0794C985DE24C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31B0794C985DE24C___C__CTOR_OFFSET))(this);
	}

	::System::Void __SetupView_b__7_0(::UnityEngine::GameObject* _)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_31B0794C985DE24C___C___SETUPVIEW_B__7_0_OFFSET))(this, _);
	}
};
