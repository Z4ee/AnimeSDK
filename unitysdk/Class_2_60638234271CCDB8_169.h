#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_60638234271CCDB8_169_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF205A60)
#define CLASS_2_60638234271CCDB8_169_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0xF205790)
#define CLASS_2_60638234271CCDB8_169__CTOR_OFFSET UNITYSDK_OFFSET(0xF205A50)

inline static constexpr unsigned int Class_2_60638234271CCDB8_169_TypeDefinitionIndex = 88455;

class Class_2_60638234271CCDB8_169 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_18; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_13; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x28
	::UnityEngine::Transform* Field_2_10; // 0x30
	::UnityEngine::Transform* Field_2_16; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_17; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x48
	::UnityEngine::Transform* Field_2_4; // 0x50
	::MoleMole::MonoGamepadModule* Field_2_20; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x60
	::UnityEngine::Transform* Field_2_6; // 0x68
	::MoleMole::MonoGamepadModule* Field_2_27; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_21; // 0x78
	::MonoUITableScrollV2* Field_2_19; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_23; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_12; // 0x90
	::UnityEngine::Transform* Field_2_0; // 0x98
	::MoleMole::NotificationBadge* Field_2_22; // 0xA0
	::UnityEngine::Transform* Field_2_7; // 0xA8
	::UnityEngine::Transform* Field_2_5; // 0xB0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0xB8
	::UnityEngine::Transform* Field_2_11; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_169__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_169_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_169_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
