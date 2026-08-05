#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace SQLite
{
	inline static constexpr unsigned int TableQuery_1_CompileResult_TypeDefinitionIndex = 39082;

	template <typename T>
	class TableQuery_1_CompileResult : public ::System::Object
	{
	public:
		::System::String* _CommandText_k__BackingField; // 0x0
		::System::Object* _Value_k__BackingField; // 0x0
	};
}
