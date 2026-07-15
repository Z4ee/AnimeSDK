#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int FileDownloadErrorCode_TypeDefinitionIndex = 44554;

	enum class FileDownloadErrorCode : ::System::Int32
	{
		Null = 0,
		Default = -9000,
		NetworkError = -9001,
		Timeout = -9002,
		MD5Retry = -9003,
		MD5Failure = -9004,
		DiskOutOfSpace = -9005,
		FileException = -9006,
		PermissionDenied = -9007,
		FileExists = -9008,
		TaskCancel = -9009,
	};
}
