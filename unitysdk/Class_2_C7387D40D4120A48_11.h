#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDailyQuestHandBookWidgetController; }
namespace MoleMole { class UIHandBookManualWidgetController; }
namespace MoleMole { class UIHandBookPrimerWidgetController; }
namespace MoleMole { class UIHandBookProxyQuestWidgetController; }
namespace MoleMole { class UIHandBookTabBtnsTipsWidgetController; }
namespace MoleMole { class UIHandBookTacticsWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class Class_3_30A064D7BE47C07D;
template <typename T> class Class_3_6630F8877346891C;

#define CLASS_2_C7387D40D4120A48_11_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x135809E0)
#define CLASS_2_C7387D40D4120A48_11_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13580FB0)
#define CLASS_2_C7387D40D4120A48_11_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x13580E20)
#define CLASS_2_C7387D40D4120A48_11__CTOR_OFFSET UNITYSDK_OFFSET(0x13580FA0)

inline static constexpr unsigned int Class_2_C7387D40D4120A48_11_TypeDefinitionIndex = 56028;

class Class_2_C7387D40D4120A48_11 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_30A064D7BE47C07D<::MoleMole::UIHandBookManualWidgetController*>* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UITabButton* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UITabButton* Field_2_6; // 0x28
	::Class_3_30A064D7BE47C07D<::MoleMole::UIHandBookProxyQuestWidgetController*>* Field_2_9; // 0x30
	::UnityEngine::UI::Extension::UITabButton* Field_2_12; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::MoleMole::MonoInputKey* Field_2_10; // 0x48
	::Class_3_30A064D7BE47C07D<::MoleMole::UIHandBookTacticsWidgetController*>* Field_2_11; // 0x50
	::Class_3_30A064D7BE47C07D<::MoleMole::UIHandBookPrimerWidgetController*>* Field_2_16; // 0x58
	::Class_2_134E5210FBBAC6E5* Field_2_1; // 0x60
	::Class_3_30A064D7BE47C07D<::MoleMole::UIHandBookManualWidgetController*>* Field_2_8; // 0x68
	::UnityEngine::UI::Extension::UITabButton* Field_2_7; // 0x70
	::Class_3_6630F8877346891C<::MoleMole::UIHandBookTabBtnsTipsWidgetController*>* Field_2_17; // 0x78
	::UnityEngine::RectTransform* Field_2_15; // 0x80
	::UnityEngine::Transform* Field_2_14; // 0x88
	::UnityEngine::UI::Extension::UITabButton* Field_2_3; // 0x90
	::Class_3_30A064D7BE47C07D<::MoleMole::UIDailyQuestHandBookWidgetController*>* Field_2_5; // 0x98
	::MonoUITableScrollV2* Field_2_13; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_11__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_11_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_11_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_11_METHOD_2_DD784213055292FB_OFFSET))(this);
	}
};
