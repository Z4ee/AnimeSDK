#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIActivityWeaponRewardGetWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_4847D01F96D1727F_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x11D29120)
#define CLASS_2_4847D01F96D1727F_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x11D29350)
#define CLASS_2_4847D01F96D1727F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11D29420)
#define CLASS_2_4847D01F96D1727F__CTOR_OFFSET UNITYSDK_OFFSET(0x11D29410)

inline static constexpr unsigned int Class_2_4847D01F96D1727F_TypeDefinitionIndex = 56469;

class Class_2_4847D01F96D1727F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityWeaponRewardGetWidgetController*>* Field_2_5; // 0x18
	::MoleMole::MonoGamepadRegion* Field_2_2; // 0x20
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* Field_2_6; // 0x28
	::MonoUITableScrollV2* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4847D01F96D1727F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4847D01F96D1727F_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4847D01F96D1727F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4847D01F96D1727F_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
