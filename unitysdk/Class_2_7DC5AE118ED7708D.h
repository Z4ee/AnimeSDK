#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7DC5AE118ED7708D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13389520)
#define CLASS_2_7DC5AE118ED7708D_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x13389360)
#define CLASS_2_7DC5AE118ED7708D__CTOR_OFFSET UNITYSDK_OFFSET(0x13389510)

inline static constexpr unsigned int Class_2_7DC5AE118ED7708D_TypeDefinitionIndex = 55232;

class Class_2_7DC5AE118ED7708D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_11; // 0x18
	::UnityEngine::Transform* Field_2_5; // 0x20
	::UnityEngine::RectTransform* Field_2_10; // 0x28
	::UnityEngine::GameObject* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_9; // 0x38
	::UnityEngine::GameObject* Field_2_8; // 0x40
	::UnityEngine::UI::Text* Field_2_2; // 0x48
	::UnityEngine::UI::Text* Field_2_4; // 0x50
	::UnityEngine::RectTransform* Field_2_6; // 0x58
	::UnityEngine::GameObject* Field_2_7; // 0x60
	::UnityEngine::UI::Text* Field_2_3; // 0x68
	::UnityEngine::GameObject* Field_2_1; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DC5AE118ED7708D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7DC5AE118ED7708D_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7DC5AE118ED7708D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
