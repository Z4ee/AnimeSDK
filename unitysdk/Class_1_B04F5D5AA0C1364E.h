#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_24;
class Class_2_3616FDE8A71D0590_1;

#define CLASS_1_B04F5D5AA0C1364E_GET_ENABLEINFINITETACTICSREFRESH_OFFSET UNITYSDK_OFFSET(0x18A19500)
#define CLASS_1_B04F5D5AA0C1364E_GET_IGNORECOLORDICECONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0x18A194E0)
#define CLASS_1_B04F5D5AA0C1364E_SET_ENABLEINFINITETACTICSREFRESH_OFFSET UNITYSDK_OFFSET(0x18A19510)
#define CLASS_1_B04F5D5AA0C1364E_SET_IGNORECOLORDICECONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0x18A194F0)
#define CLASS_1_B04F5D5AA0C1364E__CTOR_OFFSET UNITYSDK_OFFSET(0x18A19520)

inline static constexpr unsigned int Class_1_B04F5D5AA0C1364E_TypeDefinitionIndex = 34546;

class Class_1_B04F5D5AA0C1364E : public ::System::Object
{
public:
	::Class_2_3616FDE8A71D0590_1* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_24* Field_1_1; // 0x18
	::System::Boolean _EnableInfiniteTacticsRefresh_k__BackingField; // 0x20
	::System::Boolean _IgnoreColorDiceConditionCheck_k__BackingField; // 0x21

	::System::Void _ctor(::Class_0_16E4307DCC419505_24* a1, ::Class_2_3616FDE8A71D0590_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_24*, ::Class_2_3616FDE8A71D0590_1*))((::PBYTE)hIl2Cpp + CLASS_1_B04F5D5AA0C1364E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IgnoreColorDiceConditionCheck()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B04F5D5AA0C1364E_GET_IGNORECOLORDICECONDITIONCHECK_OFFSET))(this);
	}

	::System::Void set_IgnoreColorDiceConditionCheck(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B04F5D5AA0C1364E_SET_IGNORECOLORDICECONDITIONCHECK_OFFSET))(this, a1);
	}

	::System::Boolean get_EnableInfiniteTacticsRefresh()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B04F5D5AA0C1364E_GET_ENABLEINFINITETACTICSREFRESH_OFFSET))(this);
	}

	::System::Void set_EnableInfiniteTacticsRefresh(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B04F5D5AA0C1364E_SET_ENABLEINFINITETACTICSREFRESH_OFFSET))(this, a1);
	}
};
