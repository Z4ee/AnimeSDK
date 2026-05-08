#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_13B0F8CFF863C291_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x13B87DE0)
#define CLASS_2_13B0F8CFF863C291_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x13B87BA0)
#define CLASS_2_13B0F8CFF863C291_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13B87EB0)
#define CLASS_2_13B0F8CFF863C291__CTOR_OFFSET UNITYSDK_OFFSET(0x13B87EA0)

inline static constexpr unsigned int Class_2_13B0F8CFF863C291_TypeDefinitionIndex = 67219;

class Class_2_13B0F8CFF863C291 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x20
	::UnityEngine::UI::Text* Field_2_6; // 0x28
	::UnityEngine::UI::Text* Field_2_2; // 0x30
	::UnityEngine::GameObject* Field_2_11; // 0x38
	::UnityEngine::GameObject* Field_2_9; // 0x40
	::UnityEngine::GameObject* Field_2_3; // 0x48
	::UnityEngine::GameObject* Field_2_7; // 0x50
	::UnityEngine::UI::Text* Field_2_0; // 0x58
	::UnityEngine::GameObject* Field_2_8; // 0x60
	::UnityEngine::GameObject* Field_2_10; // 0x68
	::MoleMole::MonoGamepadSelectable* Field_2_5; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13B0F8CFF863C291__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_13B0F8CFF863C291_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13B0F8CFF863C291_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_13B0F8CFF863C291_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
