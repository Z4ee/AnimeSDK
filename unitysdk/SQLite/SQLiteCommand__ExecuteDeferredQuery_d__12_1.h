#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteCommand; }
namespace SQLite { class TableMapping; }
namespace SQLite { class TableMapping_Column; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace SQLite
{
	inline static constexpr unsigned int SQLiteCommand__ExecuteDeferredQuery_d__12_1_TypeDefinitionIndex = 39068;

	template <typename T>
	class SQLiteCommand__ExecuteDeferredQuery_d__12_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::SQLite::SQLiteCommand* __4__this; // 0x0
		::SQLite::TableMapping* map; // 0x0
		::SQLite::TableMapping* __3__map; // 0x0
		::System::IntPtr _stmt_5__2; // 0x0
		::Il2CppArray<::SQLite::TableMapping_Column*>* _cols_5__3; // 0x0
		::Il2CppArray<::System::Action_3<::System::Object*, ::System::IntPtr, ::System::Int32>*>* _fastColumnSetters_5__4; // 0x0
	};
}
