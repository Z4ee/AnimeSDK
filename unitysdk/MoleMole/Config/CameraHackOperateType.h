#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraHackOperateType_TypeDefinitionIndex = 71765;

	enum class CameraHackOperateType : ::System::Int32
	{
		Eavesdrop = 2,
		CameraView = 1,
		Scan = 0,
		Hack = 99,
	};
}
