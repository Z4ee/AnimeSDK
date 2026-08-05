#pragma once
#include "unitysdk/unitysdk.h"

namespace SQLite
{
	inline static constexpr unsigned int CreateTableResult_TypeDefinitionIndex = 39077;

	enum class CreateTableResult : ::System::Int32
	{
		Created = 0,
		Migrated = 1,
	};
}
