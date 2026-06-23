#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_4213727AF74D4ECF_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x15171760)
#define CLASS_2_4213727AF74D4ECF_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x15171540)
#define CLASS_2_4213727AF74D4ECF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15171850)
#define CLASS_2_4213727AF74D4ECF__CTOR_OFFSET UNITYSDK_OFFSET(0x15171840)

inline static constexpr unsigned int Class_2_4213727AF74D4ECF_TypeDefinitionIndex = 40656;

class Class_2_4213727AF74D4ECF : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_8; // 0x18
	::UnityEngine::UI::Text* Field_2_6; // 0x20
	::UnityEngine::GameObject* Field_2_1; // 0x28
	::UnityEngine::GameObject* Field_2_7; // 0x30
	::UnityEngine::GameObject* Field_2_4; // 0x38
	::Class_2_CA67A9CEB871FFD3* Field_2_3; // 0x40
	::UnityEngine::CanvasGroup* Field_2_0; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x50
	::UnityEngine::GameObject* Field_2_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4213727AF74D4ECF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4213727AF74D4ECF_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4213727AF74D4ECF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4213727AF74D4ECF_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
