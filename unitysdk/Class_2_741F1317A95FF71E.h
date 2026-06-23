#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_741F1317A95FF71E_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x13263430)
#define CLASS_2_741F1317A95FF71E_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x13263230)
#define CLASS_2_741F1317A95FF71E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x132634C0)
#define CLASS_2_741F1317A95FF71E__CTOR_OFFSET UNITYSDK_OFFSET(0x132634B0)

inline static constexpr unsigned int Class_2_741F1317A95FF71E_TypeDefinitionIndex = 83129;

class Class_2_741F1317A95FF71E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_3; // 0x18
	::MonoUITableScrollV2* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::UnityEngine::UI::Text* Field_2_2; // 0x38
	::UnityEngine::UI::Text* Field_2_1; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x48
	::MonoUITableScrollV2* Field_2_0; // 0x50
	::UnityEngine::UI::Text* Field_2_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_741F1317A95FF71E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_741F1317A95FF71E_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_741F1317A95FF71E_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_741F1317A95FF71E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
