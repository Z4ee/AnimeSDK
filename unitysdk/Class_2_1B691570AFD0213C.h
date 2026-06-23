#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUILoopText;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_1B691570AFD0213C_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x10F30530)
#define CLASS_2_1B691570AFD0213C_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x10F30730)
#define CLASS_2_1B691570AFD0213C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10F30800)
#define CLASS_2_1B691570AFD0213C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F307F0)

inline static constexpr unsigned int Class_2_1B691570AFD0213C_TypeDefinitionIndex = 68765;

class Class_2_1B691570AFD0213C : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x18
	::MonoUITableScrollV2* Field_2_6; // 0x20
	::UnityEngine::UI::Text* Field_2_1; // 0x28
	::MonoUILoopText* Field_2_3; // 0x30
	::UnityEngine::UI::Text* Field_2_4; // 0x38
	::UnityEngine::GameObject* Field_2_5; // 0x40
	::UnityEngine::UI::Text* Field_2_2; // 0x48
	::UnityEngine::Transform* Field_2_7; // 0x50
	::UnityEngine::Animation* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B691570AFD0213C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B691570AFD0213C_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B691570AFD0213C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B691570AFD0213C_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
