#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_E3273D40BBA403A7_1_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x1A88E910)
#define CLASS_2_E3273D40BBA403A7_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1A88EA50)
#define CLASS_2_E3273D40BBA403A7_1_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x1A88E660)
#define CLASS_2_E3273D40BBA403A7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A88EA40)

inline static constexpr unsigned int Class_2_E3273D40BBA403A7_1_TypeDefinitionIndex = 82532;

class Class_2_E3273D40BBA403A7_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_10; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x28
	::UnityEngine::GameObject* Field_2_7; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralIconCardRarityWidgetController*>* Field_2_4; // 0x38
	::UnityEngine::GameObject* Field_2_11; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48
	::UnityEngine::GameObject* Field_2_0; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x60
	::UnityEngine::GameObject* Field_2_5; // 0x68
	::UnityEngine::GameObject* Field_2_6; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3273D40BBA403A7_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E3273D40BBA403A7_1_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E3273D40BBA403A7_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3273D40BBA403A7_1_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
