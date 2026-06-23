#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_C31B7376E1137A84_METHOD_2_21D544786F2D43F4_OFFSET UNITYSDK_OFFSET(0x12FE5BB0)
#define CLASS_2_C31B7376E1137A84_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x12FE5D20)
#define CLASS_2_C31B7376E1137A84_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12FE5DF0)
#define CLASS_2_C31B7376E1137A84__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE5DE0)

inline static constexpr unsigned int Class_2_C31B7376E1137A84_TypeDefinitionIndex = 67436;

class Class_2_C31B7376E1137A84 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_2; // 0x20
	::MonoUITableScrollV2* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C31B7376E1137A84__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_21D544786F2D43F4(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C31B7376E1137A84_METHOD_2_21D544786F2D43F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C31B7376E1137A84_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C31B7376E1137A84_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
