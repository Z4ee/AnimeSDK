#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStateMgr_CmdType_TypeDefinitionIndex = 41766;

	enum class CameraStateMgr_CmdType : ::System::Int32
	{
		SPAWN = 0,
		UNSPAWN = 1,
	};
}
