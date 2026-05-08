#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UICinemaRewardLevelRowWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_FEC40CC23204DEDF_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x14097550)
#define CLASS_2_FEC40CC23204DEDF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14097650)
#define CLASS_2_FEC40CC23204DEDF_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x140972D0)
#define CLASS_2_FEC40CC23204DEDF__CTOR_OFFSET UNITYSDK_OFFSET(0x14097640)

inline static constexpr unsigned int Class_2_FEC40CC23204DEDF_TypeDefinitionIndex = 71148;

class Class_2_FEC40CC23204DEDF : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::UnityEngine::RectTransform* Field_2_6; // 0x30
	::Class_3_30A064D7BE47C07D<::MoleMole::UICinemaRewardLevelRowWidgetController*>* Field_2_5; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x40
	::MonoUITableScrollV2* Field_2_1; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x50
	::Class_3_30A064D7BE47C07D<::MoleMole::UICinemaRewardLevelRowWidgetController*>* Field_2_4; // 0x58
	::UnityEngine::RectTransform* Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC40CC23204DEDF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FEC40CC23204DEDF_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC40CC23204DEDF_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FEC40CC23204DEDF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
