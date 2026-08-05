#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_5E2FBACADDB625B7_26_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB190A80)
#define CLASS_2_5E2FBACADDB625B7_26_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0xB190910)
#define CLASS_2_5E2FBACADDB625B7_26__CTOR_OFFSET UNITYSDK_OFFSET(0xB190A70)

inline static constexpr unsigned int Class_2_5E2FBACADDB625B7_26_TypeDefinitionIndex = 65346;

class Class_2_5E2FBACADDB625B7_26 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_7; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_6; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38
	::UnityEngine::RectTransform* Field_2_5; // 0x40
	::UnityEngine::RectTransform* Field_2_3; // 0x48
	::UnityEngine::RectTransform* Field_2_0; // 0x50
	::UnityEngine::RectTransform* Field_2_11; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E2FBACADDB625B7_26__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5E2FBACADDB625B7_26_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5E2FBACADDB625B7_26_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
