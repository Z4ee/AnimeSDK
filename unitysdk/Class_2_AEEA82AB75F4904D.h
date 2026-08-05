#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_2_AEEA82AB75F4904D_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x18E52E80)
#define CLASS_2_AEEA82AB75F4904D_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x18E52C60)
#define CLASS_2_AEEA82AB75F4904D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18E52F80)
#define CLASS_2_AEEA82AB75F4904D__CTOR_OFFSET UNITYSDK_OFFSET(0x18E52F70)

inline static constexpr unsigned int Class_2_AEEA82AB75F4904D_TypeDefinitionIndex = 47092;

class Class_2_AEEA82AB75F4904D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_10; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x38
	::UnityEngine::GameObject* Field_2_1; // 0x40
	::MoleMole::NotificationBadgeEx* Field_2_5; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x50
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEEA82AB75F4904D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AEEA82AB75F4904D_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AEEA82AB75F4904D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEEA82AB75F4904D_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
