#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_177.h"

#define CLASS_2_6C9B57E0660C13FA_1_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x9A03D80)
#define CLASS_2_6C9B57E0660C13FA_1_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x9A03D90)
#define CLASS_2_6C9B57E0660C13FA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9A03DA0)

inline static constexpr unsigned int Class_2_6C9B57E0660C13FA_1_TypeDefinitionIndex = 71162;

class Class_2_6C9B57E0660C13FA_1 : public ::Class_1_43BD383C98B4C0C5_177
{
public:
	::System::UInt32 _EventID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C9B57E0660C13FA_1__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_EventID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C9B57E0660C13FA_1_GET_EVENTID_OFFSET))(this);
	}

	::System::Void set_EventID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6C9B57E0660C13FA_1_SET_EVENTID_OFFSET))(this, value);
	}
};
