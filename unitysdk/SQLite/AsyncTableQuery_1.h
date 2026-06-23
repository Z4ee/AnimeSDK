#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace SQLite { template <typename T> class AsyncTableQuery_1; }
namespace SQLite { template <typename T> class TableQuery_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq::Expressions { template <typename T> class Expression_1; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace SQLite
{
	inline static constexpr unsigned int AsyncTableQuery_1_TypeDefinitionIndex = 38480;

	template <typename T>
	class AsyncTableQuery_1 : public ::System::Object
	{
	public:
		::SQLite::TableQuery_1<T>* _innerQuery; // 0x0
	};
}
