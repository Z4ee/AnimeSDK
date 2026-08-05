#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CutSceneEndMode_TypeDefinitionIndex = 73593;

	enum class CutSceneEndMode : ::System::Byte
	{
		Destory = 0x1,
		PlayFinished = 0x0,
	};
}
