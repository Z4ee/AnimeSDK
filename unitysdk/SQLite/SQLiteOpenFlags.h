#pragma once
#include "unitysdk/unitysdk.h"

namespace SQLite
{
	inline static constexpr unsigned int SQLiteOpenFlags_TypeDefinitionIndex = 39024;

	enum class SQLiteOpenFlags : ::System::Int32
	{
		ReadOnly = 1,
		ReadWrite = 2,
		Create = 4,
		Uri = 64,
		Memory = 128,
		NoMutex = 32768,
		FullMutex = 65536,
		SharedCache = 131072,
		PrivateCache = 262144,
		ProtectionComplete = 1048576,
		ProtectionCompleteUnlessOpen = 2097152,
		ProtectionCompleteUntilFirstUserAuthentication = 3145728,
		ProtectionNone = 4194304,
	};
}
