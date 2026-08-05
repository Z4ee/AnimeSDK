#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_84B525E249D8B43F_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x135D6B10)
#define CLASS_2_84B525E249D8B43F_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x135D6D50)
#define CLASS_2_84B525E249D8B43F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x135D6E90)
#define CLASS_2_84B525E249D8B43F__CTOR_OFFSET UNITYSDK_OFFSET(0x135D6E80)

inline static constexpr unsigned int Class_2_84B525E249D8B43F_TypeDefinitionIndex = 78070;

class Class_2_84B525E249D8B43F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B525E249D8B43F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_84B525E249D8B43F_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_84B525E249D8B43F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B525E249D8B43F_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
