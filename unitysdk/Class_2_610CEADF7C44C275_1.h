#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_610CEADF7C44C275_1_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x1662EF40)
#define CLASS_2_610CEADF7C44C275_1_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1662F0E0)
#define CLASS_2_610CEADF7C44C275_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1662F1E0)
#define CLASS_2_610CEADF7C44C275_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1662F1D0)

inline static constexpr unsigned int Class_2_610CEADF7C44C275_1_TypeDefinitionIndex = 51201;

class Class_2_610CEADF7C44C275_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_610CEADF7C44C275_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_610CEADF7C44C275_1_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_610CEADF7C44C275_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_610CEADF7C44C275_1_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
