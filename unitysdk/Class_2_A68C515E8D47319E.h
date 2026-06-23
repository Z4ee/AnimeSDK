#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILinearProgressBar; }

#define CLASS_2_A68C515E8D47319E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13D31990)
#define CLASS_2_A68C515E8D47319E_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x13D318F0)
#define CLASS_2_A68C515E8D47319E__CTOR_OFFSET UNITYSDK_OFFSET(0x13D31980)

inline static constexpr unsigned int Class_2_A68C515E8D47319E_TypeDefinitionIndex = 60072;

class Class_2_A68C515E8D47319E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILinearProgressBar* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A68C515E8D47319E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A68C515E8D47319E_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A68C515E8D47319E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
