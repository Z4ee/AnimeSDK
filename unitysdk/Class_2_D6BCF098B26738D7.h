#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_D6BCF098B26738D7_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x1337C9F0)
#define CLASS_2_D6BCF098B26738D7_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1337CBB0)
#define CLASS_2_D6BCF098B26738D7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1337CCB0)
#define CLASS_2_D6BCF098B26738D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1337CCA0)

inline static constexpr unsigned int Class_2_D6BCF098B26738D7_TypeDefinitionIndex = 40136;

class Class_2_D6BCF098B26738D7 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6BCF098B26738D7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D6BCF098B26738D7_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D6BCF098B26738D7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6BCF098B26738D7_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
