#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CC0939E8A15669B_Class_1_7E88A0C046C4BEF4;

#define CLASS_1_6CC0939E8A15669B___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9AA30)
#define CLASS_1_6CC0939E8A15669B___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__0_OFFSET UNITYSDK_OFFSET(0x14A9D640)
#define CLASS_1_6CC0939E8A15669B___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__1_OFFSET UNITYSDK_OFFSET(0x14A9D670)

inline static constexpr unsigned int Class_1_6CC0939E8A15669B___c__DisplayClass18_0_TypeDefinitionIndex = 35721;

class Class_1_6CC0939E8A15669B___c__DisplayClass18_0 : public ::System::Object
{
public:
	::Class_1_6CC0939E8A15669B_Class_1_7E88A0C046C4BEF4* findContext; // 0x10
	::System::Double sumExp; // 0x18
	::System::Single maxWeight; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CC0939E8A15669B___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Double _SearchMaxWeightPathDirection_b__0(::System::Single a1)
	{
		return ((::System::Double(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6CC0939E8A15669B___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__0_OFFSET))(this, a1);
	}

	::System::Double _SearchMaxWeightPathDirection_b__1(::System::Double a1)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_6CC0939E8A15669B___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__1_OFFSET))(this, a1);
	}
};
