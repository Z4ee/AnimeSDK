#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHollowCardOptionItemWidgetController; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_9E9B2D0FD5CBF725_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x15B64210)
#define CLASS_2_9E9B2D0FD5CBF725_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15B642E0)
#define CLASS_2_9E9B2D0FD5CBF725_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x15B64070)
#define CLASS_2_9E9B2D0FD5CBF725__CTOR_OFFSET UNITYSDK_OFFSET(0x15B642D0)

inline static constexpr unsigned int Class_2_9E9B2D0FD5CBF725_TypeDefinitionIndex = 49599;

class Class_2_9E9B2D0FD5CBF725 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_0; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIHollowCardOptionItemWidgetController*>* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_5; // 0x28
	::UnityEngine::RectTransform* Field_2_7; // 0x30
	::UnityEngine::RectTransform* Field_2_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E9B2D0FD5CBF725__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9E9B2D0FD5CBF725_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9E9B2D0FD5CBF725_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E9B2D0FD5CBF725_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
