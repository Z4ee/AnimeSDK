#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define CLASS_1_1436FD164D3717FF_METHOD_1_22D241F33C31C9D0_OFFSET UNITYSDK_OFFSET(0x1B473680)
#define CLASS_1_1436FD164D3717FF_METHOD_1_55D722AD0D925CAB_OFFSET UNITYSDK_OFFSET(0x1B473750)
#define CLASS_1_1436FD164D3717FF_METHOD_1_664006F71CBC08D3_OFFSET UNITYSDK_OFFSET(0x1B473700)
#define CLASS_1_1436FD164D3717FF_METHOD_1_9DFA38DC06DDE5D9_OFFSET UNITYSDK_OFFSET(0x1B473810)
#define CLASS_1_1436FD164D3717FF_METHOD_1_A9DFC8BA71ABC3AF_OFFSET UNITYSDK_OFFSET(0x1B473640)
#define CLASS_1_1436FD164D3717FF_METHOD_1_EF5216F17A6D0045_OFFSET UNITYSDK_OFFSET(0x1B4734F0)

inline static constexpr unsigned int Class_1_1436FD164D3717FF_TypeDefinitionIndex = 7712;

class Class_1_1436FD164D3717FF : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::UInt64 Method_1_EF5216F17A6D0045(::System::String* a1)
	{
		return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1436FD164D3717FF_METHOD_1_EF5216F17A6D0045_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_A9DFC8BA71ABC3AF(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1436FD164D3717FF_METHOD_1_A9DFC8BA71ABC3AF_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_22D241F33C31C9D0(::System::IO::Stream* a1)
	{
		return ((::System::Int32(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_1436FD164D3717FF_METHOD_1_22D241F33C31C9D0_OFFSET))(a1);
	}

	static ::System::String* Method_1_664006F71CBC08D3(::System::Int32 a1, ::System::Byte a2)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_1436FD164D3717FF_METHOD_1_664006F71CBC08D3_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_55D722AD0D925CAB(::System::UInt32 a1, ::System::Byte a2)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_1436FD164D3717FF_METHOD_1_55D722AD0D925CAB_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_9DFA38DC06DDE5D9(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1436FD164D3717FF_METHOD_1_9DFA38DC06DDE5D9_OFFSET))(a1);
	}
};
