#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_065013C948C2A223_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x12B82F80)
#define CLASS_2_065013C948C2A223_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12B83380)
#define CLASS_2_065013C948C2A223_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x12B83210)
#define CLASS_2_065013C948C2A223__CTOR_OFFSET UNITYSDK_OFFSET(0x12B83370)

inline static constexpr unsigned int Class_2_065013C948C2A223_TypeDefinitionIndex = 67814;

class Class_2_065013C948C2A223 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_11; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_14; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x58
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_4; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_065013C948C2A223__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_065013C948C2A223_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_065013C948C2A223_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_065013C948C2A223_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
