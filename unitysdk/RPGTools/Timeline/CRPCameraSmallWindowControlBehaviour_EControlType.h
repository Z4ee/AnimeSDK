#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSmallWindowControlBehaviour_EControlType_TypeDefinitionIndex = 46122;

	enum class CRPCameraSmallWindowControlBehaviour_EControlType : ::System::Int32
	{
		CenterAndSize = 0,
		SyncUIRect = 1,
		MeshUI = 2,
	};
}
