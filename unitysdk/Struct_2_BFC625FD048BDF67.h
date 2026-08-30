#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_BFC625FD048BDF67_GET_BLOCKDELAYTIME_OFFSET UNITYSDK_OFFSET(0xD510)
#define STRUCT_2_BFC625FD048BDF67_GET_LOADINGWHEELDELAY_OFFSET UNITYSDK_OFFSET(0xD4F0)
#define STRUCT_2_BFC625FD048BDF67_GET_MAXWAITTIME_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define STRUCT_2_BFC625FD048BDF67_GET_RSPCMDID_OFFSET UNITYSDK_OFFSET(0x2DE6A30)
#define STRUCT_2_BFC625FD048BDF67_METHOD_2_5195D737E4E00164_OFFSET UNITYSDK_OFFSET(0x1537EBE0)
#define STRUCT_2_BFC625FD048BDF67__CTOR_OFFSET UNITYSDK_OFFSET(0x2DE6A40)

inline static constexpr unsigned int Struct_2_BFC625FD048BDF67_TypeDefinitionIndex = 69365;

struct alignas(4) Struct_2_BFC625FD048BDF67
{
	// static const ::System::Single DGLNJBJKAJB; // 0x0
	// static const ::System::Single EPDCKPDMLPO; // 0x0
	// static const ::System::Single JFOIAFEKNIN; // 0x0
	::System::UInt16 _RspCmdID_k__BackingField; // 0x10
	::System::Single _MaxWaitTime_k__BackingField; // 0x14
	::System::Single _LoadingWheelDelay_k__BackingField; // 0x18
	::System::Single _BlockDelayTime_k__BackingField; // 0x1C

	::System::Void _ctor(::System::UInt16 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_BFC625FD048BDF67__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt16 get_RspCmdID()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BFC625FD048BDF67_GET_RSPCMDID_OFFSET))(this);
	}

	::System::Single get_MaxWaitTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BFC625FD048BDF67_GET_MAXWAITTIME_OFFSET))(this);
	}

	::System::Single get_LoadingWheelDelay()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BFC625FD048BDF67_GET_LOADINGWHEELDELAY_OFFSET))(this);
	}

	::System::Single get_BlockDelayTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BFC625FD048BDF67_GET_BLOCKDELAYTIME_OFFSET))(this);
	}

	static ::Struct_2_BFC625FD048BDF67 Method_2_5195D737E4E00164(::System::UInt16 a1)
	{
		return ((::Struct_2_BFC625FD048BDF67(*)(::System::UInt16))((::PBYTE)hIl2Cpp + STRUCT_2_BFC625FD048BDF67_METHOD_2_5195D737E4E00164_OFFSET))(a1);
	}
};
