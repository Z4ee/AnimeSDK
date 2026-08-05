#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_754022533D501C3E_7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15421690)
#define CLASS_2_754022533D501C3E_7_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x15421560)
#define CLASS_2_754022533D501C3E_7__CTOR_OFFSET UNITYSDK_OFFSET(0x15421680)

inline static constexpr unsigned int Class_2_754022533D501C3E_7_TypeDefinitionIndex = 57420;

class Class_2_754022533D501C3E_7 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x18
	::UnityEngine::RectTransform* Field_2_11; // 0x20
	::UnityEngine::RectTransform* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x30
	::UnityEngine::RectTransform* Field_2_4; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_754022533D501C3E_7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_754022533D501C3E_7_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_754022533D501C3E_7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
