#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_JobStatus_TypeDefinitionIndex = 38292;

	enum class HAPI_JobStatus : ::System::Int32
	{
		HAPI_JOB_STATUS_RUNNING = 0,
		HAPI_JOB_STATUS_IDLE = 1,
		HAPI_JOB_STATUS_MAX = 2,
	};
}
