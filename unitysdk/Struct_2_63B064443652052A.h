#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_63B064443652052A_GET_ENDWHENCYCLEENDED_OFFSET UNITYSDK_OFFSET(0x2DF0510)
#define STRUCT_2_63B064443652052A_GET_FLYSPEED_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define STRUCT_2_63B064443652052A_GET_INTERVAL_OFFSET UNITYSDK_OFFSET(0xD4B0)
#define STRUCT_2_63B064443652052A_GET_NEEDRANDOMSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x15C450)
#define STRUCT_2_63B064443652052A_GET_REPEATCOUNT_OFFSET UNITYSDK_OFFSET(0xDAB0)
#define STRUCT_2_63B064443652052A_SET_ENDWHENCYCLEENDED_OFFSET UNITYSDK_OFFSET(0x2DF0520)
#define STRUCT_2_63B064443652052A_SET_FLYSPEED_OFFSET UNITYSDK_OFFSET(0xD4E0)
#define STRUCT_2_63B064443652052A_SET_INTERVAL_OFFSET UNITYSDK_OFFSET(0xD4C0)
#define STRUCT_2_63B064443652052A_SET_NEEDRANDOMSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x15C980)
#define STRUCT_2_63B064443652052A_SET_REPEATCOUNT_OFFSET UNITYSDK_OFFSET(0xDAC0)

inline static constexpr unsigned int Struct_2_63B064443652052A_TypeDefinitionIndex = 68898;

struct alignas(4) Struct_2_63B064443652052A
{
	::System::Single _Interval_k__BackingField; // 0x10
	::System::Single _FlySpeed_k__BackingField; // 0x14
	::System::UInt32 _RepeatCount_k__BackingField; // 0x18
	::System::Boolean _NeedRandomStartIndex_k__BackingField; // 0x1C
	::System::Boolean _EndWhenCycleEnded_k__BackingField; // 0x1D

	::System::Single get_Interval()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_63B064443652052A_GET_INTERVAL_OFFSET))(this);
	}

	::System::Void set_Interval(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_63B064443652052A_SET_INTERVAL_OFFSET))(this, a1);
	}

	::System::Single get_FlySpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_63B064443652052A_GET_FLYSPEED_OFFSET))(this);
	}

	::System::Void set_FlySpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_63B064443652052A_SET_FLYSPEED_OFFSET))(this, a1);
	}

	::System::UInt32 get_RepeatCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_63B064443652052A_GET_REPEATCOUNT_OFFSET))(this);
	}

	::System::Void set_RepeatCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_63B064443652052A_SET_REPEATCOUNT_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedRandomStartIndex()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_63B064443652052A_GET_NEEDRANDOMSTARTINDEX_OFFSET))(this);
	}

	::System::Void set_NeedRandomStartIndex(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_63B064443652052A_SET_NEEDRANDOMSTARTINDEX_OFFSET))(this, a1);
	}

	::System::Boolean get_EndWhenCycleEnded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_63B064443652052A_GET_ENDWHENCYCLEENDED_OFFSET))(this);
	}

	::System::Void set_EndWhenCycleEnded(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_63B064443652052A_SET_ENDWHENCYCLEENDED_OFFSET))(this, a1);
	}
};
