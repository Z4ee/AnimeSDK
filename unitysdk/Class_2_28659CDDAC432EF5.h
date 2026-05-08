#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_28659CDDAC432EF5_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x10C61B90)
#define CLASS_2_28659CDDAC432EF5_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x10C61900)
#define CLASS_2_28659CDDAC432EF5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10C61C20)
#define CLASS_2_28659CDDAC432EF5__CTOR_OFFSET UNITYSDK_OFFSET(0x10C61C10)

inline static constexpr unsigned int Class_2_28659CDDAC432EF5_TypeDefinitionIndex = 59712;

class Class_2_28659CDDAC432EF5 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadSelectable* Field_2_7; // 0x18
	::UnityEngine::GameObject* Field_2_10; // 0x20
	::UnityEngine::GameObject* Field_2_9; // 0x28
	::UnityEngine::GameObject* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::MoleMole::MonoGamepadCustomList* Field_2_8; // 0x40
	::MoleMole::MonoGamepadModule* Field_2_11; // 0x48
	::UnityEngine::RectTransform* Field_2_12; // 0x50
	::UnityEngine::GameObject* Field_2_2; // 0x58
	::UnityEngine::GameObject* Field_2_3; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x68
	::UnityEngine::GameObject* Field_2_1; // 0x70
	::Class_2_FDFE69FE7B72463B* Field_2_6; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28659CDDAC432EF5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_28659CDDAC432EF5_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28659CDDAC432EF5_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_28659CDDAC432EF5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
