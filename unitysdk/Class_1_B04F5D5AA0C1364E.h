#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_26;
class Class_2_3616FDE8A71D0590;

#define CLASS_1_B04F5D5AA0C1364E_GET_ENABLEINFINITETACTICSREFRESH_OFFSET UNITYSDK_OFFSET(0x1C0F6CB0)
#define CLASS_1_B04F5D5AA0C1364E_GET_IGNORECOLORDICECONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0x1C0F6C90)
#define CLASS_1_B04F5D5AA0C1364E_SET_ENABLEINFINITETACTICSREFRESH_OFFSET UNITYSDK_OFFSET(0x1C0F6CC0)
#define CLASS_1_B04F5D5AA0C1364E_SET_IGNORECOLORDICECONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0x1C0F6CA0)
#define CLASS_1_B04F5D5AA0C1364E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C9C50)

inline static constexpr unsigned int Class_1_B04F5D5AA0C1364E_TypeDefinitionIndex = 35789;

class Class_1_B04F5D5AA0C1364E : public ::System::Object
{
public:
	::Class_2_3616FDE8A71D0590* EEFMDEHLLFI; // 0x10
	::Class_0_16E4307DCC419505_26* FLMODBLFAGD; // 0x18
	::System::Boolean _IgnoreColorDiceConditionCheck_k__BackingField; // 0x20
	::System::Boolean _EnableInfiniteTacticsRefresh_k__BackingField; // 0x21

	::System::Void _ctor(::Class_0_16E4307DCC419505_26* a1, ::Class_2_3616FDE8A71D0590* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_26*, ::Class_2_3616FDE8A71D0590*))((::PBYTE)hIl2Cpp + CLASS_1_B04F5D5AA0C1364E__CTOR_OFFSET))(this, a1, a2);
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
