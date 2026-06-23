#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraHackOperateType_TypeDefinitionIndex = 55266;

	enum class CameraHackOperateType : ::System::Int32
	{
		CameraView = 1,
		Scan = 0,
		Hack = 99,
		Eavesdrop = 2,
	};
}
