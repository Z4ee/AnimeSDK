#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_04E253897FA11EFE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x174E7140)
#define CLASS_2_04E253897FA11EFE_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x174E7010)
#define CLASS_2_04E253897FA11EFE__CTOR_OFFSET UNITYSDK_OFFSET(0x174E7130)

inline static constexpr unsigned int Class_2_04E253897FA11EFE_TypeDefinitionIndex = 84721;

class Class_2_04E253897FA11EFE : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_1; // 0x18
	::UnityEngine::RectTransform* Field_2_7; // 0x20
	::UnityEngine::RectTransform* Field_2_6; // 0x28
	::UnityEngine::CanvasGroup* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_5; // 0x38
	::UnityEngine::RectTransform* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E253897FA11EFE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04E253897FA11EFE_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04E253897FA11EFE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
