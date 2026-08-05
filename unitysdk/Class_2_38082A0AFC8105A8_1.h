#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_38082A0AFC8105A8_1_METHOD_2_21D544786F2D43F4_OFFSET UNITYSDK_OFFSET(0x153823C0)
#define CLASS_2_38082A0AFC8105A8_1_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x15382530)
#define CLASS_2_38082A0AFC8105A8_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15382600)
#define CLASS_2_38082A0AFC8105A8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x153825F0)

inline static constexpr unsigned int Class_2_38082A0AFC8105A8_1_TypeDefinitionIndex = 67397;

class Class_2_38082A0AFC8105A8_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x20
	::UnityEngine::Animation* Field_2_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38082A0AFC8105A8_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_21D544786F2D43F4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_38082A0AFC8105A8_1_METHOD_2_21D544786F2D43F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38082A0AFC8105A8_1_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_38082A0AFC8105A8_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
