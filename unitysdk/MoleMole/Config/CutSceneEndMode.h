#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CutSceneEndMode_TypeDefinitionIndex = 54180;

	enum class CutSceneEndMode : ::System::Byte
	{
		PlayFinished = 0x0,
		Destory = 0x1,
	};
}
