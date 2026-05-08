#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_16631B45AB309748_Class_2_4877DA0A22A30501;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_16631B45AB309748_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x10434960)
#define CLASS_2_16631B45AB309748_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x10434BB0)
#define CLASS_2_16631B45AB309748_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10434C80)
#define CLASS_2_16631B45AB309748__CTOR_OFFSET UNITYSDK_OFFSET(0x10434C70)

inline static constexpr unsigned int Class_2_16631B45AB309748_TypeDefinitionIndex = 58524;

class Class_2_16631B45AB309748 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x30
	::UnityEngine::RectTransform* Field_2_6; // 0x38
	::UnityEngine::RectTransform* Field_2_7; // 0x40
	::UnityEngine::RectTransform* Field_2_5; // 0x48
	::MoleMole::MonoGamepadSelectable* Field_2_3; // 0x50
	::Class_2_0D31A1661D004892<::Class_2_16631B45AB309748_Class_2_4877DA0A22A30501*>* Field_2_4; // 0x58
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16631B45AB309748__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16631B45AB309748_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16631B45AB309748_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16631B45AB309748_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
