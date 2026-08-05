#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_75FB4A09078427E5_1_METHOD_2_21D544786F2D43F4_OFFSET UNITYSDK_OFFSET(0x12ED9140)
#define CLASS_2_75FB4A09078427E5_1_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x12ED92B0)
#define CLASS_2_75FB4A09078427E5_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12ED9380)
#define CLASS_2_75FB4A09078427E5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12ED9370)

inline static constexpr unsigned int Class_2_75FB4A09078427E5_1_TypeDefinitionIndex = 62214;

class Class_2_75FB4A09078427E5_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75FB4A09078427E5_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_21D544786F2D43F4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_75FB4A09078427E5_1_METHOD_2_21D544786F2D43F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75FB4A09078427E5_1_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_75FB4A09078427E5_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
