#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define CLASS_2_32FC4C7B00DA066D_METHOD_2_63BBC99244640EE0_OFFSET UNITYSDK_OFFSET(0x16B28450)
#define CLASS_2_32FC4C7B00DA066D_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x16B28650)
#define CLASS_2_32FC4C7B00DA066D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16B28740)
#define CLASS_2_32FC4C7B00DA066D__CTOR_OFFSET UNITYSDK_OFFSET(0x16B28730)

inline static constexpr unsigned int Class_2_32FC4C7B00DA066D_TypeDefinitionIndex = 61774;

class Class_2_32FC4C7B00DA066D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_7; // 0x18
	::UnityEngine::Transform* Field_2_0; // 0x20
	::MonoUITableScrollV2* Field_2_1; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x30
	::MoleMole::MonoGamepadNestedListDelegate* Field_2_2; // 0x38
	::UnityEngine::UI::VerticalLayoutGroup* Field_2_3; // 0x40
	::UnityEngine::GameObject* Field_2_8; // 0x48
	::UnityEngine::UI::Text* Field_2_4; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32FC4C7B00DA066D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_63BBC99244640EE0(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_32FC4C7B00DA066D_METHOD_2_63BBC99244640EE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32FC4C7B00DA066D_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_32FC4C7B00DA066D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
