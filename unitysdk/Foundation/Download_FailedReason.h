#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int Download_FailedReason_TypeDefinitionIndex = 7917;

	enum class Download_FailedReason : ::System::Int32
	{
		DiskNotEnough = 1,
		Other = 7,
		NullBufferInReceiveData = 9,
		IOFailedInCompleteContent = 12,
		None = 0,
		FileLenghCheckFaild = 4,
		HashCheckFaild = 3,
		CreateTempFileFailed = 11,
		IOFailedInReceiveData = 10,
		TimeOut = 8,
		RequestException = 6,
		NotReachable = 2,
		ServerException = 5,
	};
}
