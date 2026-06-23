#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_0D60BA6FE2D95E6C_METHOD_2_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0x126A1AB0)
#define CLASS_2_0D60BA6FE2D95E6C_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x126A1CE0)
#define CLASS_2_0D60BA6FE2D95E6C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x126A1DF0)
#define CLASS_2_0D60BA6FE2D95E6C__CTOR_OFFSET UNITYSDK_OFFSET(0x126A1DE0)

inline static constexpr unsigned int Class_2_0D60BA6FE2D95E6C_TypeDefinitionIndex = 75257;

class Class_2_0D60BA6FE2D95E6C : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_3; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::UnityEngine::Animation* Field_2_6; // 0x30
	::UnityEngine::GameObject* Field_2_9; // 0x38
	::UnityEngine::GameObject* Field_2_8; // 0x40
	::MoleMole::MonoGamepadCustomList* Field_2_4; // 0x48
	::UnityEngine::GameObject* Field_2_2; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x58
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D60BA6FE2D95E6C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E09E70D88F8EDD3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D60BA6FE2D95E6C_METHOD_2_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D60BA6FE2D95E6C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D60BA6FE2D95E6C_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
