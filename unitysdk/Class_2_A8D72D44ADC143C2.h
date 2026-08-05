#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_A8D72D44ADC143C2_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x167ADDC0)
#define CLASS_2_A8D72D44ADC143C2_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x167ADBC0)
#define CLASS_2_A8D72D44ADC143C2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x167ADE50)
#define CLASS_2_A8D72D44ADC143C2__CTOR_OFFSET UNITYSDK_OFFSET(0x167ADE40)

inline static constexpr unsigned int Class_2_A8D72D44ADC143C2_TypeDefinitionIndex = 62993;

class Class_2_A8D72D44ADC143C2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_6; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x20
	::MoleMole::NotificationBadge* Field_2_4; // 0x28
	::UnityEngine::GameObject* Field_2_8; // 0x30
	::UnityEngine::RectTransform* Field_2_7; // 0x38
	::UnityEngine::UI::Button* Field_2_0; // 0x40
	::MoleMole::MonoGamepadSelectable* Field_2_9; // 0x48
	::UnityEngine::GameObject* Field_2_10; // 0x50
	::MoleMole::NotificationBadgeEx* Field_2_11; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8D72D44ADC143C2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A8D72D44ADC143C2_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A8D72D44ADC143C2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8D72D44ADC143C2_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
