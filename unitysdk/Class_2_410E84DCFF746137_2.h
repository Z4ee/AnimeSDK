#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_410E84DCFF746137_2_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x117AF5A0)
#define CLASS_2_410E84DCFF746137_2_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x117AF770)
#define CLASS_2_410E84DCFF746137_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x117AF840)
#define CLASS_2_410E84DCFF746137_2__CTOR_OFFSET UNITYSDK_OFFSET(0x117AF830)

inline static constexpr unsigned int Class_2_410E84DCFF746137_2_TypeDefinitionIndex = 64903;

class Class_2_410E84DCFF746137_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_2; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_1; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_2_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_2_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
