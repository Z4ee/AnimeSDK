#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_4D90EAA3E9195003_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x1772EC50)
#define CLASS_2_4D90EAA3E9195003_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x1772EA10)
#define CLASS_2_4D90EAA3E9195003_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1772ED40)
#define CLASS_2_4D90EAA3E9195003__CTOR_OFFSET UNITYSDK_OFFSET(0x1772ED30)

inline static constexpr unsigned int Class_2_4D90EAA3E9195003_TypeDefinitionIndex = 44059;

class Class_2_4D90EAA3E9195003 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_11; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::UnityEngine::RectTransform* Field_2_7; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralIconCardRarityWidgetController*>* Field_2_1; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x38
	::UnityEngine::GameObject* Field_2_4; // 0x40
	::UnityEngine::CanvasGroup* Field_2_10; // 0x48
	::UnityEngine::Transform* Field_2_6; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D90EAA3E9195003__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4D90EAA3E9195003_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D90EAA3E9195003_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4D90EAA3E9195003_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
