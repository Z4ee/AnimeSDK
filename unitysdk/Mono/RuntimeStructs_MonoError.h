#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Mono
{
	inline static constexpr unsigned int RuntimeStructs_MonoError_TypeDefinitionIndex = 18;

	struct alignas(8) RuntimeStructs_MonoError
	{
		::System::UInt16 error_code; // 0x10
		::System::UInt16 hidden_0; // 0x12
		::System::IntPtr hidden_1; // 0x18
		::System::IntPtr hidden_2; // 0x20
		::System::IntPtr hidden_3; // 0x28
		::System::IntPtr hidden_4; // 0x30
		::System::IntPtr hidden_5; // 0x38
		::System::IntPtr hidden_6; // 0x40
		::System::IntPtr hidden_7; // 0x48
		::System::IntPtr hidden_8; // 0x50
		::System::IntPtr hidden_11; // 0x58
		::System::IntPtr hidden_12; // 0x60
		::System::IntPtr hidden_13; // 0x68
		::System::IntPtr hidden_14; // 0x70
		::System::IntPtr hidden_15; // 0x78
		::System::IntPtr hidden_16; // 0x80
		::System::IntPtr hidden_17; // 0x88
		::System::IntPtr hidden_18; // 0x90
	};
}
