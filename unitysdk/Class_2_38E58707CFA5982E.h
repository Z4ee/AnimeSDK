#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_38E58707CFA5982E_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x12B81220)
#define CLASS_2_38E58707CFA5982E_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x12B81080)
#define CLASS_2_38E58707CFA5982E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12B812B0)
#define CLASS_2_38E58707CFA5982E__CTOR_OFFSET UNITYSDK_OFFSET(0x12B812A0)

inline static constexpr unsigned int Class_2_38E58707CFA5982E_TypeDefinitionIndex = 48286;

class Class_2_38E58707CFA5982E : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_4; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30
	::MonoUITableScrollV2* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38E58707CFA5982E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_38E58707CFA5982E_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_38E58707CFA5982E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38E58707CFA5982E_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
