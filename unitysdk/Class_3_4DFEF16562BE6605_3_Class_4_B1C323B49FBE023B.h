#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_EC48112425141A9B.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_4DFEF16562BE6605_3_CLASS_4_B1C323B49FBE023B_METHOD_4_2C9354E7DDE94265_OFFSET UNITYSDK_OFFSET(0x12790900)
#define CLASS_3_4DFEF16562BE6605_3_CLASS_4_B1C323B49FBE023B_METHOD_4_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x12790A00)
#define CLASS_3_4DFEF16562BE6605_3_CLASS_4_B1C323B49FBE023B__CTOR_OFFSET UNITYSDK_OFFSET(0x12790BB0)

inline static constexpr unsigned int Class_3_4DFEF16562BE6605_3_Class_4_B1C323B49FBE023B_TypeDefinitionIndex = 69060;

class Class_3_4DFEF16562BE6605_3_Class_4_B1C323B49FBE023B : public ::Class_3_EC48112425141A9B
{
public:
	::Class_2_FDFE69FE7B72463B* Field_4_2; // 0x28
	::UnityEngine::RectTransform* Field_4_1; // 0x30
	::UnityEngine::RectTransform* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DFEF16562BE6605_3_CLASS_4_B1C323B49FBE023B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_2C9354E7DDE94265(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_4DFEF16562BE6605_3_CLASS_4_B1C323B49FBE023B_METHOD_4_2C9354E7DDE94265_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DFEF16562BE6605_3_CLASS_4_B1C323B49FBE023B_METHOD_4_DDA8A2337932DF10_OFFSET))(this);
	}
};
