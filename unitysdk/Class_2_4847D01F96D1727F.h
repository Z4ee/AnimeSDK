#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIActivityWeaponRewardGetWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_4847D01F96D1727F_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x12B52FF0)
#define CLASS_2_4847D01F96D1727F_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x12B53220)
#define CLASS_2_4847D01F96D1727F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12B532F0)
#define CLASS_2_4847D01F96D1727F__CTOR_OFFSET UNITYSDK_OFFSET(0x12B532E0)

inline static constexpr unsigned int Class_2_4847D01F96D1727F_TypeDefinitionIndex = 48429;

class Class_2_4847D01F96D1727F : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadRegion* Field_2_7; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* Field_2_11; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityWeaponRewardGetWidgetController*>* Field_2_4; // 0x40
	::MonoUITableScrollV2* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4847D01F96D1727F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4847D01F96D1727F_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4847D01F96D1727F_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4847D01F96D1727F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
