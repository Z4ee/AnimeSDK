#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSplineConfig_PathGraphPointRegionTypeMask.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Unreal { class SerializableGameplayTag; }

#define NPCAVATARMESHASSETSSO_FPATHGRAPHPOINTREGIONTYPEMASKTAGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFF78C90)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FPathGraphPointRegionTypeMaskTagConfig_TypeDefinitionIndex = 67215;

class NPCAvatarMeshAssetsSO_FPathGraphPointRegionTypeMaskTagConfig : public ::System::Object
{
public:
	::NPCCrowd::AI::PathGraphSplineConfig_PathGraphPointRegionTypeMask maskFlag; // 0x10
	::Foundation::Unreal::SerializableGameplayTag* gameplayTag; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FPATHGRAPHPOINTREGIONTYPEMASKTAGCONFIG__CTOR_OFFSET))(this);
	}
};
