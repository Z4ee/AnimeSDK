#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_6998B76DE2AD2577_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x17270460)
#define CLASS_2_6998B76DE2AD2577_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x17270200)
#define CLASS_2_6998B76DE2AD2577_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17270530)
#define CLASS_2_6998B76DE2AD2577__CTOR_OFFSET UNITYSDK_OFFSET(0x17270520)

inline static constexpr unsigned int Class_2_6998B76DE2AD2577_TypeDefinitionIndex = 61292;

class Class_2_6998B76DE2AD2577 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::UnityEngine::Transform* Field_2_11; // 0x20
	::UnityEngine::UI::Text* Field_2_0; // 0x28
	::UnityEngine::RectTransform* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_7; // 0x38
	::UnityEngine::RectTransform* Field_2_5; // 0x40
	::UnityEngine::UI::Text* Field_2_10; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_12; // 0x50
	::UnityEngine::GameObject* Field_2_1; // 0x58
	::UnityEngine::RectTransform* Field_2_9; // 0x60
	::UnityEngine::GameObject* Field_2_6; // 0x68
	::UnityEngine::RectTransform* Field_2_8; // 0x70
	::UnityEngine::RectTransform* Field_2_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6998B76DE2AD2577__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6998B76DE2AD2577_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6998B76DE2AD2577_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6998B76DE2AD2577_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
