#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_48851D22FB651A33_1_METHOD_2_5DE301B3C0032BA5_OFFSET UNITYSDK_OFFSET(0x165A13C0)
#define CLASS_2_48851D22FB651A33_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x165A1510)
#define CLASS_2_48851D22FB651A33_1__CTOR_OFFSET UNITYSDK_OFFSET(0x165A1500)

inline static constexpr unsigned int Class_2_48851D22FB651A33_1_TypeDefinitionIndex = 66108;

class Class_2_48851D22FB651A33_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_5; // 0x20
	::UnityEngine::GameObject* Field_2_2; // 0x28
	::UnityEngine::GameObject* Field_2_3; // 0x30
	::UnityEngine::GameObject* Field_2_4; // 0x38
	::UnityEngine::GameObject* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48851D22FB651A33_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5DE301B3C0032BA5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_48851D22FB651A33_1_METHOD_2_5DE301B3C0032BA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_48851D22FB651A33_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
