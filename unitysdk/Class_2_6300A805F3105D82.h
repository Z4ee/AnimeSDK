#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }

#define CLASS_2_6300A805F3105D82_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x177314E0)
#define CLASS_2_6300A805F3105D82_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x17731650)
#define CLASS_2_6300A805F3105D82_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17731740)
#define CLASS_2_6300A805F3105D82__CTOR_OFFSET UNITYSDK_OFFSET(0x17731730)

inline static constexpr unsigned int Class_2_6300A805F3105D82_TypeDefinitionIndex = 50478;

class Class_2_6300A805F3105D82 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6300A805F3105D82__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6300A805F3105D82_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6300A805F3105D82_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6300A805F3105D82_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
