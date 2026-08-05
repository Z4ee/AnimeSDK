#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBottomRewardInfoWidgetController; }
namespace MoleMole { class UIYorozuyaVideoInfoWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_60638234271CCDB8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1723B5D0)
#define CLASS_2_60638234271CCDB8_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1723B460)
#define CLASS_2_60638234271CCDB8_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x1723B080)
#define CLASS_2_60638234271CCDB8__CTOR_OFFSET UNITYSDK_OFFSET(0x1723B5C0)

inline static constexpr unsigned int Class_2_60638234271CCDB8_TypeDefinitionIndex = 45438;

class Class_2_60638234271CCDB8 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_11; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralBottomRewardInfoWidgetController*>* Field_2_12; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIYorozuyaVideoInfoWidgetController*>* Field_2_15; // 0x38
	::UnityEngine::GameObject* Field_2_8; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_14; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_18; // 0x50
	::UnityEngine::GameObject* Field_2_17; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_22; // 0x68
	::UnityEngine::GameObject* Field_2_20; // 0x70
	::Class_2_FDFE69FE7B72463B* Field_2_9; // 0x78
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_23; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x90
	::UnityEngine::GameObject* Field_2_19; // 0x98
	::MonoUITableScrollV2* Field_2_7; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_16; // 0xA8
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_21; // 0xB0
	::Class_2_B4378B46E0020E85* Field_2_13; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}
};
