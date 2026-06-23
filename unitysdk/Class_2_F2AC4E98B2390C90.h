#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_F2AC4E98B2390C90_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1073A240)
#define CLASS_2_F2AC4E98B2390C90_METHOD_2_EF166AE12F718387_OFFSET UNITYSDK_OFFSET(0x10739EF0)
#define CLASS_2_F2AC4E98B2390C90__CTOR_OFFSET UNITYSDK_OFFSET(0x1073A230)

inline static constexpr unsigned int Class_2_F2AC4E98B2390C90_TypeDefinitionIndex = 60019;

class Class_2_F2AC4E98B2390C90 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_2; // 0x18
	::UnityEngine::GameObject* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::UnityEngine::RectTransform* Field_2_3; // 0x40
	::MoleMole::UIGeneralButtonController* Field_2_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2AC4E98B2390C90__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EF166AE12F718387(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2AC4E98B2390C90_METHOD_2_EF166AE12F718387_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2AC4E98B2390C90_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
