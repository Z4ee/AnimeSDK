#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterAdventureSomatoType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AI/ObstacleAvoidanceType.h"

#define STRUCT_2_6B303821F3B24153_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x3AF34D0)

inline static constexpr unsigned int Struct_2_6B303821F3B24153_TypeDefinitionIndex = 57284;

struct alignas(4) Struct_2_6B303821F3B24153
{
	::System::Int32 FCLEEPHAKFH; // 0x10
	::System::Single IDKONBFPBLH; // 0x14
	::UnityEngine::AI::ObstacleAvoidanceType BGPLJEOOFPO; // 0x18
	::System::Int32 NEAHPHHILED; // 0x1C
	::RPG::GameCore::CharacterAdventureSomatoType JPHDDEFGPFF; // 0x20

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6B303821F3B24153_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
