#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_C5648417729068B0_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x148CE2A0)
#define CLASS_2_C5648417729068B0_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x148CE540)
#define CLASS_2_C5648417729068B0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x148CE5F0)
#define CLASS_2_C5648417729068B0__CTOR_OFFSET UNITYSDK_OFFSET(0x148CE5E0)

inline static constexpr unsigned int Class_2_C5648417729068B0_TypeDefinitionIndex = 55769;

class Class_2_C5648417729068B0 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_12; // 0x18
	::UnityEngine::RectTransform* Field_2_15; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_10; // 0x28
	::UnityEngine::UI::Text* Field_2_6; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_19; // 0x38
	::UnityEngine::UI::Text* Field_2_4; // 0x40
	::UnityEngine::RectTransform* Field_2_14; // 0x48
	::UnityEngine::RectTransform* Field_2_9; // 0x50
	::UnityEngine::UI::Text* Field_2_5; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x60
	::UnityEngine::GameObject* Field_2_7; // 0x68
	::UnityEngine::RectTransform* Field_2_13; // 0x70
	::UnityEngine::RectTransform* Field_2_8; // 0x78
	::UnityEngine::GameObject* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5648417729068B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C5648417729068B0_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C5648417729068B0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5648417729068B0_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
