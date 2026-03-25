#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_25;
class Class_2_099B78418029B3B1_1;

#define CLASS_1_B04F5D5AA0C1364E_GET_IGNORECOLORDICECONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0x16730AA0)
#define CLASS_1_B04F5D5AA0C1364E_SET_IGNORECOLORDICECONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0x16730AB0)
#define CLASS_1_B04F5D5AA0C1364E__CTOR_OFFSET UNITYSDK_OFFSET(0x16730AC0)

inline static constexpr unsigned int Class_1_B04F5D5AA0C1364E_TypeDefinitionIndex = 28567;

class Class_1_B04F5D5AA0C1364E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_25* Field_1_0; // 0x10
	::Class_2_099B78418029B3B1_1* Field_1_1; // 0x18
	::System::Boolean _IgnoreColorDiceConditionCheck_k__BackingField; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_25* a1, ::Class_2_099B78418029B3B1_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_25*, ::Class_2_099B78418029B3B1_1*))((::PBYTE)hIl2Cpp + CLASS_1_B04F5D5AA0C1364E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IgnoreColorDiceConditionCheck()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B04F5D5AA0C1364E_GET_IGNORECOLORDICECONDITIONCHECK_OFFSET))(this);
	}

	::System::Void set_IgnoreColorDiceConditionCheck(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B04F5D5AA0C1364E_SET_IGNORECOLORDICECONDITIONCHECK_OFFSET))(this, value);
	}
};
