#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodManager_LodType_TypeDefinitionIndex = 57939;

	enum class NPCCrowdLodManager_LodType : ::System::Int32
	{
		AvatarDistance = 0,
		CameraDistance = 1,
		PhotoMode = 2,
	};
}
