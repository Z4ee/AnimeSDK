#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ExeCode_TypeDefinitionIndex = 56894;

	enum class ExeCode : ::System::Int32
	{
		None = 0,
		Running = 1,
		Success = 2,
		Failure = 3,
		Cancel = 4,
		ThreadAbort = 5,
		Null = 6,
		Empty = 7,
		Exception = 8,
		FileNotFound = 9,
		MD5NotMatch = 10,
		Delete = 11,
		Rename = 12,
		HPatch = 13,
		HPatchApplyFail = 14,
		HPatchCopyFail = 15,
		ExecuteException = 16,
		UnPack = 17,
		DownloadException = 18,
		HttpSizeNotMatch = 19,
		RenameSourceNotFound = 20,
		Stop = 21,
		IOError = 100,
		DiskFull = 101,
		NetError = 200,
	};
}
