#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_60638234271CCDB8_5_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x1548B410)
#define CLASS_2_60638234271CCDB8_5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1548B550)
#define CLASS_2_60638234271CCDB8_5_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x1548B0D0)
#define CLASS_2_60638234271CCDB8_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1548B540)

inline static constexpr unsigned int Class_2_60638234271CCDB8_5_TypeDefinitionIndex = 60439;

class Class_2_60638234271CCDB8_5 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_17; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x28
	::Class_2_CA67A9CEB871FFD3* Field_2_7; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_13; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x40
	::UnityEngine::Transform* Field_2_3; // 0x48
	::UnityEngine::GameObject* Field_2_0; // 0x50
	::MoleMole::NotificationBadge* Field_2_11; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x68
	::MoleMole::UIGeneralButtonController* Field_2_16; // 0x70
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x80
	::UnityEngine::RectTransform* Field_2_14; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x90
	::UnityEngine::Animation* Field_2_12; // 0x98
	::UnityEngine::UI::Text* Field_2_1; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_5_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_5_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
