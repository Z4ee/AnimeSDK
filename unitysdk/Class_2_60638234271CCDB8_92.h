#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_60638234271CCDB8_92_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x143B6D50)
#define CLASS_2_60638234271CCDB8_92_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x143B6A80)
#define CLASS_2_60638234271CCDB8_92__CTOR_OFFSET UNITYSDK_OFFSET(0x143B6D40)

inline static constexpr unsigned int Class_2_60638234271CCDB8_92_TypeDefinitionIndex = 71195;

class Class_2_60638234271CCDB8_92 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_1; // 0x18
	::UnityEngine::Transform* Field_2_16; // 0x20
	::UnityEngine::Transform* Field_2_5; // 0x28
	::UnityEngine::Transform* Field_2_4; // 0x30
	::MonoUITableScrollV2* Field_2_13; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x40
	::UnityEngine::Transform* Field_2_2; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_17; // 0x50
	::MoleMole::UIGeneralButtonController* Field_2_14; // 0x58
	::MoleMole::MonoGamepadModule* Field_2_20; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x68
	::UnityEngine::Transform* Field_2_0; // 0x70
	::MoleMole::MonoGamepadModule* Field_2_21; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_19; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x98
	::MoleMole::NotificationBadge* Field_2_18; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0xA8
	::UnityEngine::Transform* Field_2_3; // 0xB0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_12; // 0xB8
	::UnityEngine::Transform* Field_2_6; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_92__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_92_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_92_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
