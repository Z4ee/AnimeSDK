#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_InternalSequenceVoStateRequestType_TypeDefinitionIndex = 66404;

	enum class ViewObjectManager_InternalSequenceVoStateRequestType : ::System::Int32
	{
		UNKNOWN = -1,
		WRITE = 1,
		READ = 0,
	};
}
