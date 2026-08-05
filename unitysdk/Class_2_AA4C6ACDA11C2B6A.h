#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivitySkyPopRewardWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_8EFAD1842D6DB295;

#define CLASS_2_AA4C6ACDA11C2B6A_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x164292F0)
#define CLASS_2_AA4C6ACDA11C2B6A_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x164290D0)
#define CLASS_2_AA4C6ACDA11C2B6A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x164293F0)
#define CLASS_2_AA4C6ACDA11C2B6A__CTOR_OFFSET UNITYSDK_OFFSET(0x164293E0)

inline static constexpr unsigned int Class_2_AA4C6ACDA11C2B6A_TypeDefinitionIndex = 43103;

class Class_2_AA4C6ACDA11C2B6A : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::MoleMole::MonoGamepadModule* Field_2_9; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38
	::Class_3_8EFAD1842D6DB295<::MoleMole::UIActivitySkyPopRewardWidgetController*>* Field_2_6; // 0x40
	::Class_3_8EFAD1842D6DB295<::MoleMole::UIActivitySkyPopRewardWidgetController*>* Field_2_7; // 0x48
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_11; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA4C6ACDA11C2B6A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AA4C6ACDA11C2B6A_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA4C6ACDA11C2B6A_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AA4C6ACDA11C2B6A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
