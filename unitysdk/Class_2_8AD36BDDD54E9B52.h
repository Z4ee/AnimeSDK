#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_8AD36BDDD54E9B52_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x142B2750)
#define CLASS_2_8AD36BDDD54E9B52_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x142B2800)
#define CLASS_2_8AD36BDDD54E9B52_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0x142B2590)
#define CLASS_2_8AD36BDDD54E9B52__CTOR_OFFSET UNITYSDK_OFFSET(0x142B27F0)

inline static constexpr unsigned int Class_2_8AD36BDDD54E9B52_TypeDefinitionIndex = 91492;

class Class_2_8AD36BDDD54E9B52 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_5; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UITabButton* Field_2_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AD36BDDD54E9B52__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8AD36BDDD54E9B52_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8AD36BDDD54E9B52_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AD36BDDD54E9B52_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
