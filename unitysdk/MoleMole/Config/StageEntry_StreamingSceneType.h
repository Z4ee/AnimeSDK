#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int StageEntry_StreamingSceneType_TypeDefinitionIndex = 87183;

	enum class StageEntry_StreamingSceneType : ::System::Int32
	{
		MESH_STREAMING = 1,
		GAMEOBJECT_STREAMING = 2,
		NON_STREAMING = 0,
	};
}
