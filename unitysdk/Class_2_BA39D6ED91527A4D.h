#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_BA39D6ED91527A4D_Class_2_CC03AAEE6FCC732C_9;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class GridLayoutGroup; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_BA39D6ED91527A4D_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x11F41300)
#define CLASS_2_BA39D6ED91527A4D_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x11F414E0)
#define CLASS_2_BA39D6ED91527A4D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11F41590)
#define CLASS_2_BA39D6ED91527A4D__CTOR_OFFSET UNITYSDK_OFFSET(0x11F41580)

inline static constexpr unsigned int Class_2_BA39D6ED91527A4D_TypeDefinitionIndex = 47598;

class Class_2_BA39D6ED91527A4D : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_BA39D6ED91527A4D_Class_2_CC03AAEE6FCC732C_9*>* Field_2_6; // 0x18
	::UnityEngine::RectTransform* Field_2_2; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_BA39D6ED91527A4D_Class_2_CC03AAEE6FCC732C_9*>* Field_2_5; // 0x28
	::UnityEngine::RectTransform* Field_2_3; // 0x30
	::UnityEngine::CanvasGroup* Field_2_1; // 0x38
	::UnityEngine::UI::GridLayoutGroup* Field_2_4; // 0x40
	::UnityEngine::CanvasGroup* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA39D6ED91527A4D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BA39D6ED91527A4D_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA39D6ED91527A4D_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BA39D6ED91527A4D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
