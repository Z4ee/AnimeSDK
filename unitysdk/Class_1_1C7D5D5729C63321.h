#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1C7D5D5729C63321_GET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0x1704E3E0)
#define CLASS_1_1C7D5D5729C63321_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1704E180)
#define CLASS_1_1C7D5D5729C63321_GET_PLAYTIME_OFFSET UNITYSDK_OFFSET(0x1704E1A0)
#define CLASS_1_1C7D5D5729C63321_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1704E0F0)
#define CLASS_1_1C7D5D5729C63321_GET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x1704E110)
#define CLASS_1_1C7D5D5729C63321_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x1704E380)
#define CLASS_1_1C7D5D5729C63321_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1704E320)
#define CLASS_1_1C7D5D5729C63321_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1704E130)
#define CLASS_1_1C7D5D5729C63321_METHOD_1_E8C07C74D3D8F211_OFFSET UNITYSDK_OFFSET(0x1704E400)
#define CLASS_1_1C7D5D5729C63321_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x1704E1C0)
#define CLASS_1_1C7D5D5729C63321_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x1704E2B0)
#define CLASS_1_1C7D5D5729C63321_SET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0x1704E3F0)
#define CLASS_1_1C7D5D5729C63321_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1704E190)
#define CLASS_1_1C7D5D5729C63321_SET_PLAYTIME_OFFSET UNITYSDK_OFFSET(0x1704E1B0)
#define CLASS_1_1C7D5D5729C63321_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1704E100)
#define CLASS_1_1C7D5D5729C63321_SET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x1704E120)
#define CLASS_1_1C7D5D5729C63321__CTOR_OFFSET UNITYSDK_OFFSET(0x1704E450)

inline static constexpr unsigned int Class_1_1C7D5D5729C63321_TypeDefinitionIndex = 75512;

class Class_1_1C7D5D5729C63321 : public ::System::Object
{
public:
	::System::Single _TimeScale_k__BackingField; // 0x10
	::System::Single _UnscaledDeltaTime_k__BackingField; // 0x14
	::System::Single _PlayTime_k__BackingField; // 0x18
	::System::Single _CurrentTime_k__BackingField; // 0x1C
	::System::UInt64 _CurrentFrame_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321__CTOR_OFFSET))(this);
	}

	::System::Single get_TimeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_GET_TIMESCALE_OFFSET))(this);
	}

	::System::Void set_TimeScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_SET_TIMESCALE_OFFSET))(this, a1);
	}

	::System::Single get_UnscaledDeltaTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_GET_UNSCALEDDELTATIME_OFFSET))(this);
	}

	::System::Void set_UnscaledDeltaTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_SET_UNSCALEDDELTATIME_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single get_CurrentTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_GET_CURRENTTIME_OFFSET))(this);
	}

	::System::Void set_CurrentTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_SET_CURRENTTIME_OFFSET))(this, a1);
	}

	::System::Single get_PlayTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_GET_PLAYTIME_OFFSET))(this);
	}

	::System::Void set_PlayTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_SET_PLAYTIME_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::UInt64 get_CurrentFrame()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_GET_CURRENTFRAME_OFFSET))(this);
	}

	::System::Void set_CurrentFrame(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_SET_CURRENTFRAME_OFFSET))(this, a1);
	}

	::System::Void Method_1_E8C07C74D3D8F211(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_1C7D5D5729C63321_METHOD_1_E8C07C74D3D8F211_OFFSET))(this, a1);
	}
};
