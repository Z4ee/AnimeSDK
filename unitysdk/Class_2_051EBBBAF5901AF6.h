#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_051EBBBAF5901AF6_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x13909B80)
#define CLASS_2_051EBBBAF5901AF6_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x13909DD0)
#define CLASS_2_051EBBBAF5901AF6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13909F10)
#define CLASS_2_051EBBBAF5901AF6__CTOR_OFFSET UNITYSDK_OFFSET(0x13909F00)

inline static constexpr unsigned int Class_2_051EBBBAF5901AF6_TypeDefinitionIndex = 65084;

class Class_2_051EBBBAF5901AF6 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadNavigatableList* Field_2_9; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::MonoUITableScrollV2* Field_2_5; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x40
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_3; // 0x48
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_4; // 0x50
	::UnityEngine::RectTransform* Field_2_6; // 0x58
	::UnityEngine::RectTransform* Field_2_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_051EBBBAF5901AF6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_051EBBBAF5901AF6_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_051EBBBAF5901AF6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_051EBBBAF5901AF6_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
