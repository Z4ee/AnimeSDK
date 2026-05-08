#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int Download_FailedReason_TypeDefinitionIndex = 7918;

	enum class Download_FailedReason : ::System::Int32
	{
		NotReachable = 2,
		FileLenghCheckFaild = 4,
		IOFailedInCompleteContent = 12,
		ServerException = 5,
		CreateTempFileFailed = 11,
		RequestException = 6,
		DiskNotEnough = 1,
		HashCheckFaild = 3,
		IOFailedInReceiveData = 10,
		TimeOut = 8,
		None = 0,
		Other = 7,
		NullBufferInReceiveData = 9,
	};
}
