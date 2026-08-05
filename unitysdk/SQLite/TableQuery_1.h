#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/BaseTableQuery.h"
#include "unitysdk/System/Nullable_1.h"

namespace SQLite { class BaseTableQuery_Ordering; }
namespace SQLite { class SQLiteCommand; }
namespace SQLite { class SQLiteConnection; }
namespace SQLite { class TableMapping; }
namespace SQLite { template <typename T> class TableQuery_1; }
namespace SQLite { template <typename T> class TableQuery_1_CompileResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq::Expressions { class BinaryExpression; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { template <typename T> class Expression_1; }

namespace SQLite
{
	inline static constexpr unsigned int TableQuery_1_TypeDefinitionIndex = 39081;

	template <typename T>
	class TableQuery_1 : public ::SQLite::BaseTableQuery
	{
	public:
		::SQLite::SQLiteConnection* _Connection_k__BackingField; // 0x0
		::SQLite::TableMapping* _Table_k__BackingField; // 0x0
		::System::Linq::Expressions::Expression* _where; // 0x0
		::System::Collections::Generic::List_1<::SQLite::BaseTableQuery_Ordering*>* _orderBys; // 0x0
		::System::Nullable_1<::System::Int32> _limit; // 0x0
		::System::Nullable_1<::System::Int32> _offset; // 0x0
		::SQLite::BaseTableQuery* _joinInner; // 0x0
		::System::Linq::Expressions::Expression* _joinInnerKeySelector; // 0x0
		::SQLite::BaseTableQuery* _joinOuter; // 0x0
		::System::Linq::Expressions::Expression* _joinOuterKeySelector; // 0x0
		::System::Linq::Expressions::Expression* _joinSelector; // 0x0
		::System::Linq::Expressions::Expression* _selector; // 0x0
		::System::Boolean _deferred; // 0x0
	};
}
