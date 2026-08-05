#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_C03C66A5789815D6_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x178D1980)
#define CLASS_2_C03C66A5789815D6_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x178D1B30)
#define CLASS_2_C03C66A5789815D6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x178D1C00)
#define CLASS_2_C03C66A5789815D6__CTOR_OFFSET UNITYSDK_OFFSET(0x178D1BF0)

inline static constexpr unsigned int Class_2_C03C66A5789815D6_TypeDefinitionIndex = 87395;

class Class_2_C03C66A5789815D6 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_4; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x30
	::UnityEngine::RectTransform* Field_2_11; // 0x38
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C03C66A5789815D6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C03C66A5789815D6_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C03C66A5789815D6_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C03C66A5789815D6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
