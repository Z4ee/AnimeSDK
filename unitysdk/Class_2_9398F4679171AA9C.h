#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_9398F4679171AA9C_METHOD_2_6C6C02341A6C6B8A_OFFSET UNITYSDK_OFFSET(0x12F1FA80)
#define CLASS_2_9398F4679171AA9C_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x12F1FC20)
#define CLASS_2_9398F4679171AA9C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12F1FCF0)
#define CLASS_2_9398F4679171AA9C__CTOR_OFFSET UNITYSDK_OFFSET(0x12F1FCE0)

inline static constexpr unsigned int Class_2_9398F4679171AA9C_TypeDefinitionIndex = 69728;

class Class_2_9398F4679171AA9C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9398F4679171AA9C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C6C02341A6C6B8A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9398F4679171AA9C_METHOD_2_6C6C02341A6C6B8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9398F4679171AA9C_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9398F4679171AA9C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
