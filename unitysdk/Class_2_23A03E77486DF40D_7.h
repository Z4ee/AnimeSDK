#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_210.h"

#define CLASS_2_23A03E77486DF40D_7_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x15F0C5F0)
#define CLASS_2_23A03E77486DF40D_7_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x15F0C600)
#define CLASS_2_23A03E77486DF40D_7__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0C610)

inline static constexpr unsigned int Class_2_23A03E77486DF40D_7_TypeDefinitionIndex = 77581;

class Class_2_23A03E77486DF40D_7 : public ::Class_1_43BD383C98B4C0C5_210
{
public:
	::System::UInt32 _EventID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_7__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_EventID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_7_GET_EVENTID_OFFSET))(this);
	}

	::System::Void set_EventID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_7_SET_EVENTID_OFFSET))(this, a1);
	}
};
