#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A8AC1AB191A5FBF8_GET_TURNLIGHTTEAMDAMAGE_OFFSET UNITYSDK_OFFSET(0x186E48C0)
#define CLASS_1_A8AC1AB191A5FBF8_SET_TURNLIGHTTEAMDAMAGE_OFFSET UNITYSDK_OFFSET(0x186E48D0)
#define CLASS_1_A8AC1AB191A5FBF8__CTOR_OFFSET UNITYSDK_OFFSET(0x186E48B0)

inline static constexpr unsigned int Class_1_A8AC1AB191A5FBF8_TypeDefinitionIndex = 79690;

class Class_1_A8AC1AB191A5FBF8 : public ::System::Object
{
public:
	::System::Decimal _TurnLightTeamDamage_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AC1AB191A5FBF8__CTOR_OFFSET))(this);
	}

	::System::Decimal get_TurnLightTeamDamage()
	{
		return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AC1AB191A5FBF8_GET_TURNLIGHTTEAMDAMAGE_OFFSET))(this);
	}

	::System::Void set_TurnLightTeamDamage(::System::Decimal a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + CLASS_1_A8AC1AB191A5FBF8_SET_TURNLIGHTTEAMDAMAGE_OFFSET))(this, a1);
	}
};
