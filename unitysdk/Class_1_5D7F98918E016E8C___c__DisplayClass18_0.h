#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5D7F98918E016E8C_Class_1_7E88A0C046C4BEF4;

#define CLASS_1_5D7F98918E016E8C___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1661AD70)
#define CLASS_1_5D7F98918E016E8C___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__0_OFFSET UNITYSDK_OFFSET(0x1661D450)
#define CLASS_1_5D7F98918E016E8C___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__1_OFFSET UNITYSDK_OFFSET(0x1661D480)

inline static constexpr unsigned int Class_1_5D7F98918E016E8C___c__DisplayClass18_0_TypeDefinitionIndex = 28922;

class Class_1_5D7F98918E016E8C___c__DisplayClass18_0 : public ::System::Object
{
public:
	::Class_1_5D7F98918E016E8C_Class_1_7E88A0C046C4BEF4* findContext; // 0x10
	::System::Double sumExp; // 0x18
	::System::Single maxWeight; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7F98918E016E8C___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Double _SearchMaxWeightPathDirection_b__0(::System::Single weight)
	{
		return ((::System::Double(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D7F98918E016E8C___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__0_OFFSET))(this, weight);
	}

	::System::Double _SearchMaxWeightPathDirection_b__1(::System::Double weight)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_5D7F98918E016E8C___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__1_OFFSET))(this, weight);
	}
};
