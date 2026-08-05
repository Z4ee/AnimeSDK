#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_410E84DCFF746137_1_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x14D54490)
#define CLASS_2_410E84DCFF746137_1_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x14D54680)
#define CLASS_2_410E84DCFF746137_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14D54750)
#define CLASS_2_410E84DCFF746137_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14D54740)

inline static constexpr unsigned int Class_2_410E84DCFF746137_1_TypeDefinitionIndex = 42301;

class Class_2_410E84DCFF746137_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::UnityEngine::RectTransform* Field_2_6; // 0x20
	::UnityEngine::RectTransform* Field_2_5; // 0x28
	::UnityEngine::RectTransform* Field_2_7; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_1_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_1_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
