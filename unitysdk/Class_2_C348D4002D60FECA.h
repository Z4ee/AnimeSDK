#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_C348D4002D60FECA_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x13B986B0)
#define CLASS_2_C348D4002D60FECA_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x13B98820)
#define CLASS_2_C348D4002D60FECA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13B98910)
#define CLASS_2_C348D4002D60FECA__CTOR_OFFSET UNITYSDK_OFFSET(0x13B98900)

inline static constexpr unsigned int Class_2_C348D4002D60FECA_TypeDefinitionIndex = 76504;

class Class_2_C348D4002D60FECA : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x20
	::MoleMole::MonoGamepadModule* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C348D4002D60FECA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C348D4002D60FECA_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C348D4002D60FECA_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C348D4002D60FECA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
