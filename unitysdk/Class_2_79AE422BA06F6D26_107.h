#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_79AE422BA06F6D26_107_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x12802320)
#define CLASS_2_79AE422BA06F6D26_107_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12802800)
#define CLASS_2_79AE422BA06F6D26_107_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x12802670)
#define CLASS_2_79AE422BA06F6D26_107__CTOR_OFFSET UNITYSDK_OFFSET(0x128027F0)

inline static constexpr unsigned int Class_2_79AE422BA06F6D26_107_TypeDefinitionIndex = 47389;

class Class_2_79AE422BA06F6D26_107 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_6; // 0x20
	::UnityEngine::Transform* Field_2_4; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_12; // 0x30
	::UnityEngine::RectTransform* Field_2_14; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x40
	::UnityEngine::RectTransform* Field_2_13; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_17; // 0x50
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_7; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x60
	::UnityEngine::RectTransform* Field_2_16; // 0x68
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x70
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x78
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_2; // 0x80
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x88
	::Class_3_30A064D7BE47C07D<::MoleMole::UIDoubleTipsInfoWidgetController*>* Field_2_5; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x98
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_107__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_107_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_107_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_107_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
