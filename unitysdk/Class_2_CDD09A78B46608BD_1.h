#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAchievementAnimConfig; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_CDD09A78B46608BD_1_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x16653A30)
#define CLASS_2_CDD09A78B46608BD_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16653B80)
#define CLASS_2_CDD09A78B46608BD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16653B70)

inline static constexpr unsigned int Class_2_CDD09A78B46608BD_1_TypeDefinitionIndex = 38350;

class Class_2_CDD09A78B46608BD_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::Config::UIAchievementAnimConfig* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_4; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x28
	::UnityEngine::RectTransform* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD09A78B46608BD_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CDD09A78B46608BD_1_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CDD09A78B46608BD_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
