#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_9E5C60401935EF42_2_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x1113F310)
#define CLASS_2_9E5C60401935EF42_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1113F4B0)
#define CLASS_2_9E5C60401935EF42_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1113F4A0)

inline static constexpr unsigned int Class_2_9E5C60401935EF42_2_TypeDefinitionIndex = 73301;

class Class_2_9E5C60401935EF42_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_3; // 0x18
	::UnityEngine::CanvasGroup* Field_2_2; // 0x20
	::UnityEngine::CanvasGroup* Field_2_1; // 0x28
	::UnityEngine::CanvasGroup* Field_2_4; // 0x30
	::UnityEngine::RectTransform* Field_2_7; // 0x38
	::Class_2_FDFE69FE7B72463B* Field_2_5; // 0x40
	::UnityEngine::CanvasGroup* Field_2_0; // 0x48
	::UnityEngine::RectTransform* Field_2_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E5C60401935EF42_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9E5C60401935EF42_2_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9E5C60401935EF42_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
