#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_70A81001BF2D6960_Class_1_7E88A0C046C4BEF4;

#define CLASS_1_70A81001BF2D6960___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA0C00)
#define CLASS_1_70A81001BF2D6960___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__0_OFFSET UNITYSDK_OFFSET(0x17DA39A0)
#define CLASS_1_70A81001BF2D6960___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__1_OFFSET UNITYSDK_OFFSET(0x17DA39D0)

inline static constexpr unsigned int Class_1_70A81001BF2D6960___c__DisplayClass18_0_TypeDefinitionIndex = 34656;

class Class_1_70A81001BF2D6960___c__DisplayClass18_0 : public ::System::Object
{
public:
	::Class_1_70A81001BF2D6960_Class_1_7E88A0C046C4BEF4* findContext; // 0x10
	::System::Single maxWeight; // 0x18
	::System::Double sumExp; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70A81001BF2D6960___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Double _SearchMaxWeightPathDirection_b__0(::System::Single weight)
	{
		return ((::System::Double(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_70A81001BF2D6960___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__0_OFFSET))(this, weight);
	}

	::System::Double _SearchMaxWeightPathDirection_b__1(::System::Double weight)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_70A81001BF2D6960___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__1_OFFSET))(this, weight);
	}
};
