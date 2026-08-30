#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_4D3F8674ABF7F9DE_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x5F00)
#define STRUCT_2_4D3F8674ABF7F9DE_GET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0x6020)
#define STRUCT_2_4D3F8674ABF7F9DE_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1E120)
#define STRUCT_2_4D3F8674ABF7F9DE_GET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0x2CFE0)
#define STRUCT_2_4D3F8674ABF7F9DE_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x6E30)
#define STRUCT_2_4D3F8674ABF7F9DE_METHOD_2_7D05A69CCAEADD9A_OFFSET UNITYSDK_OFFSET(0xC147C30)
#define STRUCT_2_4D3F8674ABF7F9DE_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x2E950)
#define STRUCT_2_4D3F8674ABF7F9DE_SET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0x9500)
#define STRUCT_2_4D3F8674ABF7F9DE_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x2200)
#define STRUCT_2_4D3F8674ABF7F9DE_SET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0x2CFF0)
#define STRUCT_2_4D3F8674ABF7F9DE_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x2AA0)

inline static constexpr unsigned int Struct_2_4D3F8674ABF7F9DE_TypeDefinitionIndex = 67896;

struct alignas(8) Struct_2_4D3F8674ABF7F9DE
{
	::System::UInt32 _ActivityID_k__BackingField; // 0x10
	::System::UInt32 _BeginTimeStamp_k__BackingField; // 0x14
	::RPG::Client::DateTimePro _BeginTimeDate_k__BackingField; // 0x18
	::System::UInt32 _EndTimeStamp_k__BackingField; // 0x20
	::RPG::Client::DateTimePro _EndTimeDate_k__BackingField; // 0x28

	static ::Struct_2_4D3F8674ABF7F9DE Method_2_7D05A69CCAEADD9A(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Struct_2_4D3F8674ABF7F9DE(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_4D3F8674ABF7F9DE_METHOD_2_7D05A69CCAEADD9A_OFFSET))(a1, a2, a3);
	}

	::System::UInt32 get_ActivityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4D3F8674ABF7F9DE_GET_ACTIVITYID_OFFSET))(this);
	}

	::System::Void set_ActivityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_4D3F8674ABF7F9DE_SET_ACTIVITYID_OFFSET))(this, a1);
	}

	::System::UInt32 get_BeginTimeStamp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4D3F8674ABF7F9DE_GET_BEGINTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_BeginTimeStamp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_4D3F8674ABF7F9DE_SET_BEGINTIMESTAMP_OFFSET))(this, a1);
	}

	::RPG::Client::DateTimePro get_BeginTimeDate()
	{
		return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4D3F8674ABF7F9DE_GET_BEGINTIMEDATE_OFFSET))(this);
	}

	::System::Void set_BeginTimeDate(::RPG::Client::DateTimePro a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + STRUCT_2_4D3F8674ABF7F9DE_SET_BEGINTIMEDATE_OFFSET))(this, a1);
	}

	::System::UInt32 get_EndTimeStamp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4D3F8674ABF7F9DE_GET_ENDTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_EndTimeStamp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_4D3F8674ABF7F9DE_SET_ENDTIMESTAMP_OFFSET))(this, a1);
	}

	::RPG::Client::DateTimePro get_EndTimeDate()
	{
		return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4D3F8674ABF7F9DE_GET_ENDTIMEDATE_OFFSET))(this);
	}

	::System::Void set_EndTimeDate(::RPG::Client::DateTimePro a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + STRUCT_2_4D3F8674ABF7F9DE_SET_ENDTIMEDATE_OFFSET))(this, a1);
	}
};
