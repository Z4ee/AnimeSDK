#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }

#define CLASS_2_0BDA461375E67B4B_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x14467590)
#define CLASS_2_0BDA461375E67B4B_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x14467770)
#define CLASS_2_0BDA461375E67B4B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14467840)
#define CLASS_2_0BDA461375E67B4B__CTOR_OFFSET UNITYSDK_OFFSET(0x14467830)

inline static constexpr unsigned int Class_2_0BDA461375E67B4B_TypeDefinitionIndex = 57470;

class Class_2_0BDA461375E67B4B : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_0; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_7; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BDA461375E67B4B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0BDA461375E67B4B_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0BDA461375E67B4B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BDA461375E67B4B_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
