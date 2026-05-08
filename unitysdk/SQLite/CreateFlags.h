#pragma once
#include "unitysdk/unitysdk.h"

namespace SQLite
{
	inline static constexpr unsigned int CreateFlags_TypeDefinitionIndex = 36754;

	enum class CreateFlags : ::System::Int32
	{
		None = 0,
		ImplicitPK = 1,
		ImplicitIndex = 2,
		AllImplicit = 3,
		AutoIncPK = 4,
		FullTextSearch3 = 256,
		FullTextSearch4 = 512,
	};
}
