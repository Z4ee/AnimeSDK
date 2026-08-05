#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class MonoUILoopText;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_ACC3BE6A5FB4D20F_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x13474790)
#define CLASS_2_ACC3BE6A5FB4D20F_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x13474970)
#define CLASS_2_ACC3BE6A5FB4D20F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13474A40)
#define CLASS_2_ACC3BE6A5FB4D20F__CTOR_OFFSET UNITYSDK_OFFSET(0x13474A30)

inline static constexpr unsigned int Class_2_ACC3BE6A5FB4D20F_TypeDefinitionIndex = 42496;

class Class_2_ACC3BE6A5FB4D20F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_6; // 0x18
	::UnityEngine::UI::Text* Field_2_0; // 0x20
	::UnityEngine::Animation* Field_2_2; // 0x28
	::UnityEngine::RectTransform* Field_2_1; // 0x30
	::UnityEngine::GameObject* Field_2_11; // 0x38
	::UnityEngine::RectTransform* Field_2_4; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x48
	::MonoUILoopText* Field_2_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACC3BE6A5FB4D20F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ACC3BE6A5FB4D20F_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ACC3BE6A5FB4D20F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACC3BE6A5FB4D20F_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
