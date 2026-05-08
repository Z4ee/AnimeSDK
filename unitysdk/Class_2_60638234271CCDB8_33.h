#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_60638234271CCDB8_33_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x12DB5D30)
#define CLASS_2_60638234271CCDB8_33_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12DB5E80)
#define CLASS_2_60638234271CCDB8_33_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x12DB5A20)
#define CLASS_2_60638234271CCDB8_33__CTOR_OFFSET UNITYSDK_OFFSET(0x12DB5E70)

inline static constexpr unsigned int Class_2_60638234271CCDB8_33_TypeDefinitionIndex = 43952;

class Class_2_60638234271CCDB8_33 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_5; // 0x18
	::MoleMole::MonoGamepadModule* Field_2_14; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x28
	::UnityEngine::RectTransform* Field_2_12; // 0x30
	::UnityEngine::RectTransform* Field_2_4; // 0x38
	::UnityEngine::RectTransform* Field_2_7; // 0x40
	::UnityEngine::RectTransform* Field_2_13; // 0x48
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x58
	::Class_3_30A064D7BE47C07D<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_9; // 0x60
	::Class_3_30A064D7BE47C07D<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_8; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x70
	::UnityEngine::RectTransform* Field_2_6; // 0x78
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x80
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_33__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_33_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_33_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_33_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
