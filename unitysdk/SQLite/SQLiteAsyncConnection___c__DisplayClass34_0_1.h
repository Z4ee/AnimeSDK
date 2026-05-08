#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteAsyncConnection; }
namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass34_0_1_TypeDefinitionIndex = 36819;

	template <typename T>
	class SQLiteAsyncConnection___c__DisplayClass34_0_1 : public ::System::Object
	{
	public:
		::SQLite::SQLiteAsyncConnection* __4__this; // 0x0
		::System::Func_2<::SQLite::SQLiteConnectionWithLock*, T>* transact; // 0x0
	};
}
