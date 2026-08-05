#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_5E2FBACADDB625B7_25_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x155E2040)
#define CLASS_2_5E2FBACADDB625B7_25_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x155E1F10)
#define CLASS_2_5E2FBACADDB625B7_25__CTOR_OFFSET UNITYSDK_OFFSET(0x155E2030)

inline static constexpr unsigned int Class_2_5E2FBACADDB625B7_25_TypeDefinitionIndex = 62594;

class Class_2_5E2FBACADDB625B7_25 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_6; // 0x20
	::UnityEngine::RectTransform* Field_2_7; // 0x28
	::UnityEngine::RectTransform* Field_2_1; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38
	::UnityEngine::RectTransform* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E2FBACADDB625B7_25__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5E2FBACADDB625B7_25_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5E2FBACADDB625B7_25_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
