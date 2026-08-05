#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_410E84DCFF746137_5_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x133D5FD0)
#define CLASS_2_410E84DCFF746137_5_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x133D61C0)
#define CLASS_2_410E84DCFF746137_5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x133D6270)
#define CLASS_2_410E84DCFF746137_5__CTOR_OFFSET UNITYSDK_OFFSET(0x133D6260)

inline static constexpr unsigned int Class_2_410E84DCFF746137_5_TypeDefinitionIndex = 71438;

class Class_2_410E84DCFF746137_5 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_7; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x20
	::UnityEngine::RectTransform* Field_2_6; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_4; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x40
	::UnityEngine::RectTransform* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_5_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_5_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
