#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_StorageType_TypeDefinitionIndex = 43566;

	enum class HAPI_StorageType : ::System::Int32
	{
		HAPI_STORAGETYPE_INVALID = -1,
		HAPI_STORAGETYPE_INT = 0,
		HAPI_STORAGETYPE_INT64 = 1,
		HAPI_STORAGETYPE_FLOAT = 2,
		HAPI_STORAGETYPE_FLOAT64 = 3,
		HAPI_STORAGETYPE_STRING = 4,
		HAPI_STORAGETYPE_UINT8 = 5,
		HAPI_STORAGETYPE_INT8 = 6,
		HAPI_STORAGETYPE_INT16 = 7,
		HAPI_STORAGETYPE_MAX = 8,
	};
}
