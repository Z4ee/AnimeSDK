#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_8469E7523673A92C_11_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x155E2230)
#define CLASS_2_8469E7523673A92C_11_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x155E2300)
#define CLASS_2_8469E7523673A92C_11_METHOD_2_F485ED5438CB5FFD_OFFSET UNITYSDK_OFFSET(0x155E20E0)
#define CLASS_2_8469E7523673A92C_11__CTOR_OFFSET UNITYSDK_OFFSET(0x155E22F0)

inline static constexpr unsigned int Class_2_8469E7523673A92C_11_TypeDefinitionIndex = 67015;

class Class_2_8469E7523673A92C_11 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C_11__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F485ED5438CB5FFD(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C_11_METHOD_2_F485ED5438CB5FFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C_11_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C_11_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
