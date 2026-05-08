#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIInputFieldEx; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_ACBB3CD79BA01531_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xE91E480)
#define CLASS_2_ACBB3CD79BA01531_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0xE91E230)
#define CLASS_2_ACBB3CD79BA01531_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xE91E570)
#define CLASS_2_ACBB3CD79BA01531__CTOR_OFFSET UNITYSDK_OFFSET(0xE91E560)

inline static constexpr unsigned int Class_2_ACBB3CD79BA01531_TypeDefinitionIndex = 45754;

class Class_2_ACBB3CD79BA01531 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x20
	::UnityEngine::UI::Text* Field_2_1; // 0x28
	::UnityEngine::GameObject* Field_2_3; // 0x30
	::UnityEngine::GameObject* Field_2_10; // 0x38
	::UnityEngine::Transform* Field_2_11; // 0x40
	::MoleMole::UIInputFieldEx* Field_2_4; // 0x48
	::UnityEngine::UI::Text* Field_2_8; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x58
	::UnityEngine::UI::Text* Field_2_5; // 0x60
	::UnityEngine::UI::Text* Field_2_0; // 0x68
	::UnityEngine::Transform* Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACBB3CD79BA01531__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ACBB3CD79BA01531_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACBB3CD79BA01531_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ACBB3CD79BA01531_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
