#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_A4D0711B5DF2DD90_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x137DA7E0)
#define CLASS_2_A4D0711B5DF2DD90_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x137DA700)
#define CLASS_2_A4D0711B5DF2DD90__CTOR_OFFSET UNITYSDK_OFFSET(0x137DA7D0)

inline static constexpr unsigned int Class_2_A4D0711B5DF2DD90_TypeDefinitionIndex = 85026;

class Class_2_A4D0711B5DF2DD90 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::MonoUITableScrollV2* Field_2_1; // 0x20
	::MoleMole::MonoGamepadSpaceList* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4D0711B5DF2DD90__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A4D0711B5DF2DD90_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A4D0711B5DF2DD90_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
