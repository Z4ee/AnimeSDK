#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_C7387D40D4120A48_4_Class_2_731776FB5F89A061;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIABBattlePhaseWidgetController; }
namespace MoleMole { class UIABInLevelGeneralWidgetController; }
namespace MoleMole { class UIABStandbyPhaseWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_C7387D40D4120A48_4_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x118A3CB0)
#define CLASS_2_C7387D40D4120A48_4_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x118A3950)
#define CLASS_2_C7387D40D4120A48_4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x118A3DC0)
#define CLASS_2_C7387D40D4120A48_4__CTOR_OFFSET UNITYSDK_OFFSET(0x118A3DB0)

inline static constexpr unsigned int Class_2_C7387D40D4120A48_4_TypeDefinitionIndex = 40122;

class Class_2_C7387D40D4120A48_4 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadRegion* Field_2_8; // 0x18
	::MoleMole::MonoGamepadNestedListDelegate* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x28
	::UnityEngine::RectTransform* Field_2_13; // 0x30
	::UnityEngine::Transform* Field_2_12; // 0x38
	::UnityEngine::RectTransform* Field_2_15; // 0x40
	::MoleMole::MonoGamepadNestedListDelegate* Field_2_4; // 0x48
	::UnityEngine::RectTransform* Field_2_10; // 0x50
	::UnityEngine::UI::Extension::UIImgEventTrigger* Field_2_3; // 0x58
	::MoleMole::MonoGamepadRegion* Field_2_7; // 0x60
	::Class_2_0D31A1661D004892<::Class_2_C7387D40D4120A48_4_Class_2_731776FB5F89A061*>* Field_2_5; // 0x68
	::MoleMole::MonoGamepadNestedListDelegate* Field_2_9; // 0x70
	::UnityEngine::RectTransform* Field_2_16; // 0x78
	::Class_3_30A064D7BE47C07D<::MoleMole::UIABBattlePhaseWidgetController*>* Field_2_1; // 0x80
	::UnityEngine::RectTransform* Field_2_14; // 0x88
	::Class_3_30A064D7BE47C07D<::MoleMole::UIABStandbyPhaseWidgetController*>* Field_2_2; // 0x90
	::Class_3_30A064D7BE47C07D<::MoleMole::UIABInLevelGeneralWidgetController*>* Field_2_0; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_4_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_4_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
