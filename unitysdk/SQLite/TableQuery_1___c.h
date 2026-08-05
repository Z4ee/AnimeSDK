#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class BaseTableQuery_Ordering; }
namespace SQLite { template <typename T> class TableQuery_1_CompileResult; }
namespace SQLite { template <typename T> class TableQuery_1___c; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace SQLite
{
	inline static constexpr unsigned int TableQuery_1___c_TypeDefinitionIndex = 39083;

	template <typename T>
	class TableQuery_1___c : public ::System::Object
	{
	public:
		static ::SQLite::TableQuery_1___c<T>** StaticGet___9()
		{
			return (::SQLite::TableQuery_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(TableQuery_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::SQLite::BaseTableQuery_Ordering*, ::System::String*>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::SQLite::BaseTableQuery_Ordering*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TableQuery_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::SQLite::TableQuery_1_CompileResult<T>*, ::System::String*>** StaticGet___9__37_0()
		{
			return (::System::Func_2<::SQLite::TableQuery_1_CompileResult<T>*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TableQuery_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
