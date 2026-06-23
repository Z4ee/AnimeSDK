#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_AF44BA000349C331_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1A4E7D70)
#define CLASS_2_AF44BA000349C331_2_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x1A4E7C90)
#define CLASS_2_AF44BA000349C331_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E7D60)

inline static constexpr unsigned int Class_2_AF44BA000349C331_2_TypeDefinitionIndex = 73803;

class Class_2_AF44BA000349C331_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::UnityEngine::UI::Text* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF44BA000349C331_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AF44BA000349C331_2_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AF44BA000349C331_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
