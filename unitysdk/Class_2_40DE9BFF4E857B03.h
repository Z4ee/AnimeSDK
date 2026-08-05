#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_40DE9BFF4E857B03_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x18C87930)
#define CLASS_2_40DE9BFF4E857B03_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x18C87730)
#define CLASS_2_40DE9BFF4E857B03_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18C87A30)
#define CLASS_2_40DE9BFF4E857B03__CTOR_OFFSET UNITYSDK_OFFSET(0x18C87A20)

inline static constexpr unsigned int Class_2_40DE9BFF4E857B03_TypeDefinitionIndex = 71485;

class Class_2_40DE9BFF4E857B03 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITabButton* Field_2_6; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x30
	::UnityEngine::UI::Text* Field_2_0; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x40
	::MoleMole::NotificationBadgeEx* Field_2_10; // 0x48
	::UnityEngine::RectTransform* Field_2_11; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40DE9BFF4E857B03__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_40DE9BFF4E857B03_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_40DE9BFF4E857B03_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40DE9BFF4E857B03_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
