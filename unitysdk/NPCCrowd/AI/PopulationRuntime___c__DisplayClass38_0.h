#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class NPCPoolConfig; }

#define NPCCROWD_AI_POPULATIONRUNTIME___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF4E8950)
#define NPCCROWD_AI_POPULATIONRUNTIME___C__DISPLAYCLASS38_0__INITIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0xF4E8960)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PopulationRuntime___c__DisplayClass38_0_TypeDefinitionIndex = 81244;

	class PopulationRuntime___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Int32 poolId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Initialize_b__0(::NPCCrowd::AI::NPCPoolConfig* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::NPCPoolConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME___C__DISPLAYCLASS38_0__INITIALIZE_B__0_OFFSET))(this, p);
		}
	};
}
