#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace SQLite { template <typename T> class AsyncTableQuery_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Linq::Expressions { template <typename T> class Expression_1; }

namespace SQLite
{
	inline static constexpr unsigned int AsyncTableQuery_1___c__DisplayClass14_0_TypeDefinitionIndex = 36873;

	template <typename T>
	class AsyncTableQuery_1___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::SQLite::AsyncTableQuery_1<T>* __4__this; // 0x0
		::System::Linq::Expressions::Expression_1<::System::Func_2<T, ::System::Boolean>*>* predExpr; // 0x0
	};
}
