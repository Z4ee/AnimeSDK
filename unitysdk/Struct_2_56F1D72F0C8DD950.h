#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_56F1D72F0C8DD950_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xE620)
#define STRUCT_2_56F1D72F0C8DD950_GET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0x1D40)
#define STRUCT_2_56F1D72F0C8DD950_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xFDF0)
#define STRUCT_2_56F1D72F0C8DD950_GET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0x94F0)
#define STRUCT_2_56F1D72F0C8DD950_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x3260)
#define STRUCT_2_56F1D72F0C8DD950_METHOD_2_5B320434CE0783AC_OFFSET UNITYSDK_OFFSET(0xC1A39A0)
#define STRUCT_2_56F1D72F0C8DD950_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define STRUCT_2_56F1D72F0C8DD950_SET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0x94C0)
#define STRUCT_2_56F1D72F0C8DD950_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xFE00)
#define STRUCT_2_56F1D72F0C8DD950_SET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0x9500)
#define STRUCT_2_56F1D72F0C8DD950_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xDD9C0)

inline static constexpr unsigned int Struct_2_56F1D72F0C8DD950_TypeDefinitionIndex = 67898;

struct alignas(8) Struct_2_56F1D72F0C8DD950
{
	::System::UInt32 _ActivityID_k__BackingField; // 0x10
	::System::UInt32 _BeginTimeStamp_k__BackingField; // 0x14
	::RPG::Client::DateTimePro _BeginTimeDate_k__BackingField; // 0x18
	::System::UInt32 _EndTimeStamp_k__BackingField; // 0x20
	::RPG::Client::DateTimePro _EndTimeDate_k__BackingField; // 0x28

	static ::Struct_2_56F1D72F0C8DD950 Method_2_5B320434CE0783AC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Struct_2_56F1D72F0C8DD950(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_56F1D72F0C8DD950_METHOD_2_5B320434CE0783AC_OFFSET))(a1, a2, a3);
	}

	::System::UInt32 get_ActivityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_56F1D72F0C8DD950_GET_ACTIVITYID_OFFSET))(this);
	}

	::System::Void set_ActivityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_56F1D72F0C8DD950_SET_ACTIVITYID_OFFSET))(this, a1);
	}

	::System::UInt32 get_BeginTimeStamp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_56F1D72F0C8DD950_GET_BEGINTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_BeginTimeStamp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_56F1D72F0C8DD950_SET_BEGINTIMESTAMP_OFFSET))(this, a1);
	}

	::RPG::Client::DateTimePro get_BeginTimeDate()
	{
		return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_56F1D72F0C8DD950_GET_BEGINTIMEDATE_OFFSET))(this);
	}

	::System::Void set_BeginTimeDate(::RPG::Client::DateTimePro a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + STRUCT_2_56F1D72F0C8DD950_SET_BEGINTIMEDATE_OFFSET))(this, a1);
	}

	::System::UInt32 get_EndTimeStamp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_56F1D72F0C8DD950_GET_ENDTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_EndTimeStamp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_56F1D72F0C8DD950_SET_ENDTIMESTAMP_OFFSET))(this, a1);
	}

	::RPG::Client::DateTimePro get_EndTimeDate()
	{
		return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_56F1D72F0C8DD950_GET_ENDTIMEDATE_OFFSET))(this);
	}

	::System::Void set_EndTimeDate(::RPG::Client::DateTimePro a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + STRUCT_2_56F1D72F0C8DD950_SET_ENDTIMEDATE_OFFSET))(this, a1);
	}
};
