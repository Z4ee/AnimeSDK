#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__DisplayClass86_0_1_TypeDefinitionIndex = 39137;

	template <typename T>
	class SQLiteAsyncConnection___c__DisplayClass86_0_1 : public ::System::Object
	{
	public:
		::System::String* query; // 0x0
		::Il2CppArray<::System::Object*>* args; // 0x0
	};
}
