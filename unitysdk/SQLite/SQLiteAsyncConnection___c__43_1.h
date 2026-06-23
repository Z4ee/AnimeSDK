#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace SQLite { template <typename T> class SQLiteAsyncConnection___c__43_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c__43_1_TypeDefinitionIndex = 38434;

	template <typename T>
	class SQLiteAsyncConnection___c__43_1 : public ::System::Object
	{
	public:
		static ::SQLite::SQLiteAsyncConnection___c__43_1<T>** StaticGet___9()
		{
			return (::SQLite::SQLiteAsyncConnection___c__43_1<T>**)Il2CppClass::FromTypeDefinitionIndex(SQLiteAsyncConnection___c__43_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::SQLite::SQLiteConnectionWithLock*, ::System::Int32>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::SQLite::SQLiteConnectionWithLock*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SQLiteAsyncConnection___c__43_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
