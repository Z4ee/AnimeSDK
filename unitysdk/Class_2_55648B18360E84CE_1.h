#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_55648B18360E84CE_1_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x115752A0)
#define CLASS_2_55648B18360E84CE_1_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x11575410)
#define CLASS_2_55648B18360E84CE_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11575500)
#define CLASS_2_55648B18360E84CE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x115754F0)

inline static constexpr unsigned int Class_2_55648B18360E84CE_1_TypeDefinitionIndex = 79719;

class Class_2_55648B18360E84CE_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55648B18360E84CE_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_55648B18360E84CE_1_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_55648B18360E84CE_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55648B18360E84CE_1_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
