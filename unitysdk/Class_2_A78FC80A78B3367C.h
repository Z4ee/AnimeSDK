#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_97E659ED8D5D259C_21.h"

#define CLASS_2_A78FC80A78B3367C_GET_TOTALROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xBF8C3B0)
#define CLASS_2_A78FC80A78B3367C__CTOR_OFFSET UNITYSDK_OFFSET(0xBF8C3C0)

inline static constexpr unsigned int Class_2_A78FC80A78B3367C_TypeDefinitionIndex = 76486;

class Class_2_A78FC80A78B3367C : public ::Class_1_97E659ED8D5D259C_21
{
public:
	::System::Int32 _TotalRoundCount_k__BackingField; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A78FC80A78B3367C__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_TotalRoundCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A78FC80A78B3367C_GET_TOTALROUNDCOUNT_OFFSET))(this);
	}
};
