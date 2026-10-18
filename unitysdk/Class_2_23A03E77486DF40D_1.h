#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C632DA14C306471D.h"

#define CLASS_2_23A03E77486DF40D_1_GET_EXAMID_OFFSET UNITYSDK_OFFSET(0x1C545AF0)
#define CLASS_2_23A03E77486DF40D_1_SET_EXAMID_OFFSET UNITYSDK_OFFSET(0x1C545B00)
#define CLASS_2_23A03E77486DF40D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C545B10)

inline static constexpr unsigned int Class_2_23A03E77486DF40D_1_TypeDefinitionIndex = 41736;

class Class_2_23A03E77486DF40D_1 : public ::Class_1_C632DA14C306471D
{
public:
	::System::UInt32 _ExamID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_1__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ExamID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_1_GET_EXAMID_OFFSET))(this);
	}

	::System::Void set_ExamID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_1_SET_EXAMID_OFFSET))(this, a1);
	}
};
