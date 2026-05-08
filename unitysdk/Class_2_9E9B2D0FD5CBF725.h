#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHollowCardOptionItemWidgetController; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_9E9B2D0FD5CBF725_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xFE85230)
#define CLASS_2_9E9B2D0FD5CBF725_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFE85300)
#define CLASS_2_9E9B2D0FD5CBF725_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0xFE85090)
#define CLASS_2_9E9B2D0FD5CBF725__CTOR_OFFSET UNITYSDK_OFFSET(0xFE852F0)

inline static constexpr unsigned int Class_2_9E9B2D0FD5CBF725_TypeDefinitionIndex = 72619;

class Class_2_9E9B2D0FD5CBF725 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_30A064D7BE47C07D<::MoleMole::UIHollowCardOptionItemWidgetController*>* Field_2_0; // 0x18
	::UnityEngine::CanvasGroup* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_3; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E9B2D0FD5CBF725__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9E9B2D0FD5CBF725_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9E9B2D0FD5CBF725_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E9B2D0FD5CBF725_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
