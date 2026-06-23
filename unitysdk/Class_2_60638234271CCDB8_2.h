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
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_60638234271CCDB8_2_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x15193050)
#define CLASS_2_60638234271CCDB8_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x151931A0)
#define CLASS_2_60638234271CCDB8_2_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x15192D40)
#define CLASS_2_60638234271CCDB8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15193190)

inline static constexpr unsigned int Class_2_60638234271CCDB8_2_TypeDefinitionIndex = 40000;

class Class_2_60638234271CCDB8_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_12; // 0x18
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_8; // 0x20
	::MoleMole::MonoGamepadModule* Field_2_14; // 0x28
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38
	::UnityEngine::RectTransform* Field_2_5; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x48
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_9; // 0x50
	::UnityEngine::RectTransform* Field_2_13; // 0x58
	::UnityEngine::RectTransform* Field_2_6; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x68
	::UnityEngine::RectTransform* Field_2_7; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x78
	::UnityEngine::RectTransform* Field_2_4; // 0x80
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_2_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_2_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
