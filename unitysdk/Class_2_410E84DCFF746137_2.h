#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_410E84DCFF746137_2_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x168CC290)
#define CLASS_2_410E84DCFF746137_2_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x168CC450)
#define CLASS_2_410E84DCFF746137_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x168CC550)
#define CLASS_2_410E84DCFF746137_2__CTOR_OFFSET UNITYSDK_OFFSET(0x168CC540)

inline static constexpr unsigned int Class_2_410E84DCFF746137_2_TypeDefinitionIndex = 70123;

class Class_2_410E84DCFF746137_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_4; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_2_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_2_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
