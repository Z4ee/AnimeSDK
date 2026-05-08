#pragma once
#include "unitysdk/unitysdk.h"

namespace SQLite
{
	inline static constexpr unsigned int CreateTableResult_TypeDefinitionIndex = 36806;

	enum class CreateTableResult : ::System::Int32
	{
		Created = 0,
		Migrated = 1,
	};
}
