#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define CLASS_2_002C7611F6FCF80A_GET_CMDID_OFFSET UNITYSDK_OFFSET(0xBCD0B20)
#define CLASS_2_002C7611F6FCF80A_GET_TIMEOUTMS_OFFSET UNITYSDK_OFFSET(0xBCD0B30)
#define CLASS_2_002C7611F6FCF80A__CTOR_OFFSET UNITYSDK_OFFSET(0xBCD0B40)

inline static constexpr unsigned int Class_2_002C7611F6FCF80A_TypeDefinitionIndex = 69368;

class Class_2_002C7611F6FCF80A : public ::System::Exception
{
public:
	::System::Int32 _TimeoutMs_k__BackingField; // 0x88
	::System::UInt16 _CmdID_k__BackingField; // 0x8C

	::System::Void _ctor(::System::UInt16 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_002C7611F6FCF80A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt16 get_CmdID()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_002C7611F6FCF80A_GET_CMDID_OFFSET))(this);
	}

	::System::Int32 get_TimeoutMs()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_002C7611F6FCF80A_GET_TIMEOUTMS_OFFSET))(this);
	}
};
