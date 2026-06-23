#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int Download_FailedReason_TypeDefinitionIndex = 8235;

	enum class Download_FailedReason : ::System::Int32
	{
		RequestException = 6,
		Other = 7,
		IOFailedInCompleteContent = 12,
		NotReachable = 2,
		NullBufferInReceiveData = 9,
		CreateTempFileFailed = 11,
		TimeOut = 8,
		None = 0,
		IOFailedInReceiveData = 10,
		FileLenghCheckFaild = 4,
		DiskNotEnough = 1,
		ServerException = 5,
		HashCheckFaild = 3,
	};
}
