#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteCommand; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace SQLite
{
	inline static constexpr unsigned int SQLiteCommand__ExecuteQueryScalars_d__14_1_TypeDefinitionIndex = 39069;

	template <typename T>
	class SQLiteCommand__ExecuteQueryScalars_d__14_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::SQLite::SQLiteCommand* __4__this; // 0x0
		::System::IntPtr _stmt_5__2; // 0x0
	};
}
