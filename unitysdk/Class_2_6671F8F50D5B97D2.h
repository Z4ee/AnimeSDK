#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIActivityIconLiveBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_6671F8F50D5B97D2_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x12B5D3D0)
#define CLASS_2_6671F8F50D5B97D2_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x12B5D190)
#define CLASS_2_6671F8F50D5B97D2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12B5D4F0)
#define CLASS_2_6671F8F50D5B97D2__CTOR_OFFSET UNITYSDK_OFFSET(0x12B5D4E0)

inline static constexpr unsigned int Class_2_6671F8F50D5B97D2_TypeDefinitionIndex = 62309;

class Class_2_6671F8F50D5B97D2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityIconLiveBtnWidgetController*>* Field_2_6; // 0x18
	::UnityEngine::RectTransform* Field_2_11; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_0; // 0x30
	::MoleMole::NotificationBadgeEx* Field_2_4; // 0x38
	::Class_3_826A30478DA34A69<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_7; // 0x40
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityIconLiveBtnWidgetController*>* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6671F8F50D5B97D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6671F8F50D5B97D2_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6671F8F50D5B97D2_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6671F8F50D5B97D2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
