#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BD67E5EC91589BF1.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/Struct_2_61D95EB9B5A93E74.h"

class Class_0_16E4307DCC419505_325;
namespace MoleMole { class UITowerDefenseMainPageController; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_A6BF7A01B65B2D11_METHOD_2_06953990A6298473_OFFSET UNITYSDK_OFFSET(0x193C6D20)
#define CLASS_2_A6BF7A01B65B2D11_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x193C75E0)
#define CLASS_2_A6BF7A01B65B2D11_METHOD_2_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x193C6EE0)
#define CLASS_2_A6BF7A01B65B2D11_METHOD_2_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x193C74A0)
#define CLASS_2_A6BF7A01B65B2D11_METHOD_2_D0FF215AEC76A26C_OFFSET UNITYSDK_OFFSET(0x193C73F0)
#define CLASS_2_A6BF7A01B65B2D11_METHOD_2_DDD96D9A4D81BA4B_OFFSET UNITYSDK_OFFSET(0x193C7740)
#define CLASS_2_A6BF7A01B65B2D11__CTOR_OFFSET UNITYSDK_OFFSET(0x193C6D00)

inline static constexpr unsigned int Class_2_A6BF7A01B65B2D11_TypeDefinitionIndex = 78237;

class Class_2_A6BF7A01B65B2D11 : public ::Class_1_BD67E5EC91589BF1
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x10
	::MoleMole::UITowerDefenseMainPageController* Field_2_3; // 0x18
	::System::Int32 Field_2_1; // 0x20
	::System::Int32 Field_2_2; // 0x24
	::System::Single Field_2_7; // 0x28

	::System::Void _ctor(::MoleMole::UITowerDefenseMainPageController* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A6BF7A01B65B2D11__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_325* Method_2_06953990A6298473()
	{
		return ((::Class_0_16E4307DCC419505_325*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6BF7A01B65B2D11_METHOD_2_06953990A6298473_OFFSET))(this);
	}

	::Struct_2_61D95EB9B5A93E74 Method_2_D0FF215AEC76A26C(::MoleMole::InputActionEvent a1)
	{
		return ((::Struct_2_61D95EB9B5A93E74(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_A6BF7A01B65B2D11_METHOD_2_D0FF215AEC76A26C_OFFSET))(this, a1);
	}

	::System::Void Method_2_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6BF7A01B65B2D11_METHOD_2_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6BF7A01B65B2D11_METHOD_2_0868EF727040C390_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_325* Method_2_DDD96D9A4D81BA4B(::MoleMole::UITowerDefenseMainPageController* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::Class_0_16E4307DCC419505_325*(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A6BF7A01B65B2D11_METHOD_2_DDD96D9A4D81BA4B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6BF7A01B65B2D11_METHOD_2_81A66FB988DFA6AA_OFFSET))(this);
	}
};
