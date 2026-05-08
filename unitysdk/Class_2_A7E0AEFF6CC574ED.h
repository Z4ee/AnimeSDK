#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
class MonoLayoutElementProcessor;
namespace MoleMole { class GradientColor; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_A7E0AEFF6CC574ED_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x140ED2B0)
#define CLASS_2_A7E0AEFF6CC574ED_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x140ED430)
#define CLASS_2_A7E0AEFF6CC574ED__CTOR_OFFSET UNITYSDK_OFFSET(0x140ED420)

inline static constexpr unsigned int Class_2_A7E0AEFF6CC574ED_TypeDefinitionIndex = 41479;

class Class_2_A7E0AEFF6CC574ED : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x18
	::MoleMole::GradientColor* Field_2_4; // 0x20
	::UnityEngine::RectTransform* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::MonoLayoutElementProcessor* Field_2_6; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7E0AEFF6CC574ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A7E0AEFF6CC574ED_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A7E0AEFF6CC574ED_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
