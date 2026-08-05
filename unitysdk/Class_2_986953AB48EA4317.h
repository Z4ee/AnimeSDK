#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_986953AB48EA4317_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10F330F0)
#define CLASS_2_986953AB48EA4317_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x10F32FF0)
#define CLASS_2_986953AB48EA4317__CTOR_OFFSET UNITYSDK_OFFSET(0x10F330E0)

inline static constexpr unsigned int Class_2_986953AB48EA4317_TypeDefinitionIndex = 41709;

class Class_2_986953AB48EA4317 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_7; // 0x20
	::UnityEngine::RectTransform* Field_2_5; // 0x28
	::UnityEngine::RectTransform* Field_2_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_986953AB48EA4317__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_986953AB48EA4317_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_986953AB48EA4317_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
