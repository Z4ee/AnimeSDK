#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_051EBBBAF5901AF6_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x12918380)
#define CLASS_2_051EBBBAF5901AF6_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x129185D0)
#define CLASS_2_051EBBBAF5901AF6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12918710)
#define CLASS_2_051EBBBAF5901AF6__CTOR_OFFSET UNITYSDK_OFFSET(0x12918700)

inline static constexpr unsigned int Class_2_051EBBBAF5901AF6_TypeDefinitionIndex = 72633;

class Class_2_051EBBBAF5901AF6 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x18
	::MoleMole::MonoGamepadNavigatableList* Field_2_8; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_6; // 0x30
	::UnityEngine::RectTransform* Field_2_7; // 0x38
	::UnityEngine::RectTransform* Field_2_11; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x48
	::MonoUITableScrollV2* Field_2_4; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_051EBBBAF5901AF6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_051EBBBAF5901AF6_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_051EBBBAF5901AF6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_051EBBBAF5901AF6_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
