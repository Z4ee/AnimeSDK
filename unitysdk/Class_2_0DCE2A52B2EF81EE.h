#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIBackFlowActivitySelectAvatarWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_0DCE2A52B2EF81EE_METHOD_2_15B17EE0839F395B_OFFSET UNITYSDK_OFFSET(0x14234980)
#define CLASS_2_0DCE2A52B2EF81EE_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x14234B60)
#define CLASS_2_0DCE2A52B2EF81EE_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x14234770)
#define CLASS_2_0DCE2A52B2EF81EE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14234C30)
#define CLASS_2_0DCE2A52B2EF81EE__CTOR_OFFSET UNITYSDK_OFFSET(0x14234C20)

inline static constexpr unsigned int Class_2_0DCE2A52B2EF81EE_TypeDefinitionIndex = 75405;

class Class_2_0DCE2A52B2EF81EE : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadCustomList* Field_2_10; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::UnityEngine::Animation* Field_2_11; // 0x28
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIBackFlowActivitySelectAvatarWidgetController*>*>* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DCE2A52B2EF81EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0DCE2A52B2EF81EE_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIBackFlowActivitySelectAvatarWidgetController*>*>* Method_2_15B17EE0839F395B(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIBackFlowActivitySelectAvatarWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0DCE2A52B2EF81EE_METHOD_2_15B17EE0839F395B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0DCE2A52B2EF81EE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DCE2A52B2EF81EE_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
