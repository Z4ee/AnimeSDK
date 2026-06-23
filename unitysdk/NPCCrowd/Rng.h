#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_RNG_GETSEQUENCE_1_OFFSET UNITYSDK_OFFSET(0xEBDE9E0)
#define NPCCROWD_RNG_GETSEQUENCE_OFFSET UNITYSDK_OFFSET(0x652030)
#define NPCCROWD_RNG_SHUFFLE_OFFSET UNITYSDK_OFFSET(0x652020)
#define NPCCROWD_RNG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x651FD0)
#define NPCCROWD_RNG__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

namespace NPCCrowd
{
	inline static constexpr unsigned int Rng_TypeDefinitionIndex = 81957;

	struct alignas(4) Rng
	{
		::System::UInt32 m_state; // 0x10

		::System::Void _ctor(::System::UInt32 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_RNG__CTOR_OFFSET))(this, seed);
		}

		::System::Void _ctor_1(::System::Int32 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_RNG__CTOR_1_OFFSET))(this, seed);
		}

		::NPCCrowd::Rng Shuffle()
		{
			return ((::NPCCrowd::Rng(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_RNG_SHUFFLE_OFFSET))(this);
		}

		/*
		::NPCCrowd::Rng_RngSequence GetSequence(::System::Int32 index)
		{
			return ((::NPCCrowd::Rng_RngSequence(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_RNG_GETSEQUENCE_OFFSET))(this, index);
		}
		*/

		/*
		static ::NPCCrowd::Rng_RngSequence GetSequence_1(::System::Int32 seed, ::System::Int32 index)
		{
			return ((::NPCCrowd::Rng_RngSequence(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_RNG_GETSEQUENCE_1_OFFSET))(seed, index);
		}
		*/
	};
}
