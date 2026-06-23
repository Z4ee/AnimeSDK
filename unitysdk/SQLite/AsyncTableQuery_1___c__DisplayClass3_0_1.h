#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace SQLite { template <typename T> class AsyncTableQuery_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace SQLite
{
	inline static constexpr unsigned int AsyncTableQuery_1___c__DisplayClass3_0_1_TypeDefinitionIndex = 38482;

	template <typename T, typename U>
	class AsyncTableQuery_1___c__DisplayClass3_0_1 : public ::System::Object
	{
	public:
		::SQLite::AsyncTableQuery_1<T>* __4__this; // 0x0
		::System::Func_2<::SQLite::SQLiteConnectionWithLock*, U>* write; // 0x0
	};
}
