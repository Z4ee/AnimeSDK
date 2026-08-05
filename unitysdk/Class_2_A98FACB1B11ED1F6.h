#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_A98FACB1B11ED1F6_Class_2_8DF41E559120EF31;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIRABInLevelBattleWidgetController; }
namespace MoleMole { class UIRABInLevelBottomWidgetController; }
namespace MoleMole { class UIRABInLevelRightWidgetController; }
namespace MoleMole { class UIRABInLevelTipsWidgetController; }
namespace MoleMole { class UIRABInLevelTopWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_A98FACB1B11ED1F6_METHOD_2_44B69BBA3A965CE1_OFFSET UNITYSDK_OFFSET(0x124CDE40)
#define CLASS_2_A98FACB1B11ED1F6_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x124CE150)
#define CLASS_2_A98FACB1B11ED1F6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x124CE290)
#define CLASS_2_A98FACB1B11ED1F6__CTOR_OFFSET UNITYSDK_OFFSET(0x124CE280)

inline static constexpr unsigned int Class_2_A98FACB1B11ED1F6_TypeDefinitionIndex = 63643;

class Class_2_A98FACB1B11ED1F6 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_10; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIRABInLevelTopWidgetController*>* Field_2_6; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_A98FACB1B11ED1F6_Class_2_8DF41E559120EF31*>* Field_2_2; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIRABInLevelRightWidgetController*>* Field_2_4; // 0x38
	::UnityEngine::UI::Extension::UIImgEventTrigger* Field_2_3; // 0x40
	::Class_3_826A30478DA34A69<::MoleMole::UIRABInLevelTipsWidgetController*>* Field_2_11; // 0x48
	::Class_3_826A30478DA34A69<::MoleMole::UIRABInLevelBattleWidgetController*>* Field_2_7; // 0x50
	::Class_3_826A30478DA34A69<::MoleMole::UIRABInLevelBottomWidgetController*>* Field_2_5; // 0x58
	::UnityEngine::Transform* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A98FACB1B11ED1F6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_44B69BBA3A965CE1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A98FACB1B11ED1F6_METHOD_2_44B69BBA3A965CE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A98FACB1B11ED1F6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A98FACB1B11ED1F6_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}
};
