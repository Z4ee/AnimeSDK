#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodManager_LodType_TypeDefinitionIndex = 55000;

	enum class NPCCrowdLodManager_LodType : ::System::Int32
	{
		PhotoMode = 2,
		CameraDistance = 1,
		AvatarDistance = 0,
	};
}
