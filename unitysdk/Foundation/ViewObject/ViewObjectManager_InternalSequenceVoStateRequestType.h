#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_InternalSequenceVoStateRequestType_TypeDefinitionIndex = 73627;

	enum class ViewObjectManager_InternalSequenceVoStateRequestType : ::System::Int32
	{
		READ = 0,
		UNKNOWN = -1,
		WRITE = 1,
	};
}
