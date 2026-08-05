#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_C29B2E86E80B4A4E_Class_2_8EA0A9912C2F9EFB;
namespace MoleMole { class UIActivityCheckinFinalRewardWidgetController; }
namespace MoleMole { class UIActivityCheckinProgressBarWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_C29B2E86E80B4A4E_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x14414BA0)
#define CLASS_2_C29B2E86E80B4A4E_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x144146F0)
#define CLASS_2_C29B2E86E80B4A4E_METHOD_2_C478319D36C32837_OFFSET UNITYSDK_OFFSET(0x144149B0)
#define CLASS_2_C29B2E86E80B4A4E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14414CE0)
#define CLASS_2_C29B2E86E80B4A4E__CTOR_OFFSET UNITYSDK_OFFSET(0x14414CD0)

inline static constexpr unsigned int Class_2_C29B2E86E80B4A4E_TypeDefinitionIndex = 89708;

class Class_2_C29B2E86E80B4A4E : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_2; // 0x30
	::UnityEngine::RectTransform* Field_2_1; // 0x38
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_C29B2E86E80B4A4E_Class_2_8EA0A9912C2F9EFB*>*>* Field_2_3; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x48
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCheckinProgressBarWidgetController*>* Field_2_5; // 0x50
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCheckinFinalRewardWidgetController*>* Field_2_11; // 0x58
	::UnityEngine::RectTransform* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C29B2E86E80B4A4E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C29B2E86E80B4A4E_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C29B2E86E80B4A4E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_C29B2E86E80B4A4E_Class_2_8EA0A9912C2F9EFB*>*>* Method_2_C478319D36C32837(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_C29B2E86E80B4A4E_Class_2_8EA0A9912C2F9EFB*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C29B2E86E80B4A4E_METHOD_2_C478319D36C32837_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C29B2E86E80B4A4E_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}
};
