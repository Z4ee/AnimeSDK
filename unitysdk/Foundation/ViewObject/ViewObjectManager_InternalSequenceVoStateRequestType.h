#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_InternalSequenceVoStateRequestType_TypeDefinitionIndex = 55553;

	enum class ViewObjectManager_InternalSequenceVoStateRequestType : ::System::Int32
	{
		READ = 0,
		WRITE = 1,
		UNKNOWN = -1,
	};
}
