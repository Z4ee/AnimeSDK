#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0A490681D87FEF21;
class Class_1_877AA22B04AFB81F_2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_70A81001BF2D6960___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA0A30)
#define CLASS_1_70A81001BF2D6960___C__DISPLAYCLASS14_0__GETFARTARGETROUGHGOALWEIGHTCOMPUTER_B__0_OFFSET UNITYSDK_OFFSET(0x17DA36D0)
#define CLASS_1_70A81001BF2D6960___C__DISPLAYCLASS14_0__GETFARTARGETROUGHGOALWEIGHTCOMPUTER_B__1_OFFSET UNITYSDK_OFFSET(0x17DA3730)

inline static constexpr unsigned int Class_1_70A81001BF2D6960___c__DisplayClass14_0_TypeDefinitionIndex = 34654;

class Class_1_70A81001BF2D6960___c__DisplayClass14_0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* preferPos; // 0x10
	::System::Int32 xDiff; // 0x18
	::System::Int32 yDiff; // 0x1C
	::System::Int32 targetY; // 0x20
	::System::Int32 targetX; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70A81001BF2D6960___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Single _GetFarTargetRoughGoalWeightComputer_b__0(::Class_1_0A490681D87FEF21* cat, ::Class_1_877AA22B04AFB81F_2* posComp, ::System::UInt32 fieldX, ::System::UInt32 fieldY)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_0A490681D87FEF21*, ::Class_1_877AA22B04AFB81F_2*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_70A81001BF2D6960___C__DISPLAYCLASS14_0__GETFARTARGETROUGHGOALWEIGHTCOMPUTER_B__0_OFFSET))(this, cat, posComp, fieldX, fieldY);
	}

	::System::Single _GetFarTargetRoughGoalWeightComputer_b__1(::Class_1_0A490681D87FEF21* cat, ::Class_1_877AA22B04AFB81F_2* posComp, ::System::UInt32 fieldX, ::System::UInt32 fieldY)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_0A490681D87FEF21*, ::Class_1_877AA22B04AFB81F_2*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_70A81001BF2D6960___C__DISPLAYCLASS14_0__GETFARTARGETROUGHGOALWEIGHTCOMPUTER_B__1_OFFSET))(this, cat, posComp, fieldX, fieldY);
	}
};
