#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_911A40000FB6D691_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x12C68C30)
#define CLASS_2_911A40000FB6D691_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x12C689F0)
#define CLASS_2_911A40000FB6D691_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12C68CC0)
#define CLASS_2_911A40000FB6D691__CTOR_OFFSET UNITYSDK_OFFSET(0x12C68CB0)

inline static constexpr unsigned int Class_2_911A40000FB6D691_TypeDefinitionIndex = 79971;

class Class_2_911A40000FB6D691 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_6; // 0x18
	::UnityEngine::Canvas* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_9; // 0x28
	::UnityEngine::CanvasGroup* Field_2_15; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x40
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_7; // 0x48
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_0; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_14; // 0x60
	::UnityEngine::RectTransform* Field_2_4; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_911A40000FB6D691__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_911A40000FB6D691_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_911A40000FB6D691_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_911A40000FB6D691_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
