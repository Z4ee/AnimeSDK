#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBottomRewardInfoWidgetController; }
namespace MoleMole { class UIGeneralItemBtnWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_79AE422BA06F6D26_202_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x121C4860)
#define CLASS_2_79AE422BA06F6D26_202_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x121C4D40)
#define CLASS_2_79AE422BA06F6D26_202_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x121C4BD0)
#define CLASS_2_79AE422BA06F6D26_202__CTOR_OFFSET UNITYSDK_OFFSET(0x121C4D30)

inline static constexpr unsigned int Class_2_79AE422BA06F6D26_202_TypeDefinitionIndex = 63551;

class Class_2_79AE422BA06F6D26_202 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_12; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30
	::MonoUITableScrollV2* Field_2_1; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x50
	::UnityEngine::RectTransform* Field_2_14; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x68
	::MoleMole::MonoGamepadNavigatableList* Field_2_6; // 0x70
	::UnityEngine::GameObject* Field_2_13; // 0x78
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralItemBtnWidgetController*>* Field_2_16; // 0x80
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralBottomRewardInfoWidgetController*>* Field_2_7; // 0x88
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_202__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_202_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_202_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_202_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
