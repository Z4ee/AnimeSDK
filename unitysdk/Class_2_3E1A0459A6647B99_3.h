#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_3E1A0459A6647B99_3_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x13D888E0)
#define CLASS_2_3E1A0459A6647B99_3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13D88970)
#define CLASS_2_3E1A0459A6647B99_3_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0x13D88710)
#define CLASS_2_3E1A0459A6647B99_3__CTOR_OFFSET UNITYSDK_OFFSET(0x13D88960)

inline static constexpr unsigned int Class_2_3E1A0459A6647B99_3_TypeDefinitionIndex = 44171;

class Class_2_3E1A0459A6647B99_3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x28
	::UnityEngine::RectTransform* Field_2_1; // 0x30
	::UnityEngine::RectTransform* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_3_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_3_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
