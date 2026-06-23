#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_POPULATIONPOOLREF_GETCLAMPEDWEIGHT_OFFSET UNITYSDK_OFFSET(0x6243E0)
#define NPCCROWD_AI_POPULATIONPOOLREF__CTOR_OFFSET UNITYSDK_OFFSET(0x6243D0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PopulationPoolRef_TypeDefinitionIndex = 70436;

	struct alignas(4) PopulationPoolRef
	{
		::System::Int32 poolID; // 0x10
		::System::Single weight; // 0x14

		::System::Void _ctor(::System::Int32 poolID, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONPOOLREF__CTOR_OFFSET))(this, poolID, weight);
		}

		::System::Single GetClampedWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONPOOLREF_GETCLAMPEDWEIGHT_OFFSET))(this);
		}
	};
}
