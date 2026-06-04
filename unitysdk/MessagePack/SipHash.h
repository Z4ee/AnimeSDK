#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define MESSAGEPACK_SIPHASH_COMPUTE_OFFSET UNITYSDK_OFFSET(0x181800A0)
#define MESSAGEPACK_SIPHASH__CTOR_OFFSET UNITYSDK_OFFSET(0x18180C00)

namespace MessagePack
{
	inline static constexpr unsigned int SipHash_TypeDefinitionIndex = 7198;

	class SipHash : public ::System::Object
	{
	public:
		::System::UInt64 initialState1; // 0x10
		::System::UInt64 initialState0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SIPHASH__CTOR_OFFSET))(this);
		}

		::System::Int64 Compute(::System::ReadOnlySpan_1<::System::Byte> a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SIPHASH_COMPUTE_OFFSET))(this, a1);
		}
	};
}
