#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class AudioLineEffect;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILinearProgressBar; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_780A0D5A906DB477_METHOD_2_5268AE5605C75CF4_OFFSET UNITYSDK_OFFSET(0x1A556FA0)
#define CLASS_2_780A0D5A906DB477_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x1A556DA0)
#define CLASS_2_780A0D5A906DB477_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1A557100)
#define CLASS_2_780A0D5A906DB477__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5570F0)

inline static constexpr unsigned int Class_2_780A0D5A906DB477_TypeDefinitionIndex = 55997;

class Class_2_780A0D5A906DB477 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_15; // 0x18
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_11; // 0x20
	::UnityEngine::RectTransform* Field_2_4; // 0x28
	::UnityEngine::GameObject* Field_2_5; // 0x30
	::UnityEngine::RectTransform* Field_2_8; // 0x38
	::UnityEngine::RectTransform* Field_2_12; // 0x40
	::AudioLineEffect* Field_2_13; // 0x48
	::UnityEngine::RectTransform* Field_2_14; // 0x50
	::Class_2_FDFE69FE7B72463B* Field_2_9; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_2_7; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x68
	::UnityEngine::UI::Extension::UILinearProgressBar* Field_2_10; // 0x70
	::MoleMole::UIGeneralButtonController* Field_2_6; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_780A0D5A906DB477__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_780A0D5A906DB477_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Method_2_5268AE5605C75CF4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_780A0D5A906DB477_METHOD_2_5268AE5605C75CF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_780A0D5A906DB477_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
