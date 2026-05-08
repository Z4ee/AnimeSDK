#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnection; }
namespace System { class String; }

#define SQLITE_PREPAREDSQLLITEINSERTCOMMAND_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B279240)
#define SQLITE_PREPAREDSQLLITEINSERTCOMMAND_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B279170)
#define SQLITE_PREPAREDSQLLITEINSERTCOMMAND_EXECUTENONQUERY_OFFSET UNITYSDK_OFFSET(0x1B278700)
#define SQLITE_PREPAREDSQLLITEINSERTCOMMAND_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B279270)
#define SQLITE_PREPAREDSQLLITEINSERTCOMMAND__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B279300)
#define SQLITE_PREPAREDSQLLITEINSERTCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2786F0)

namespace SQLite
{
	inline static constexpr unsigned int PreparedSqlLiteInsertCommand_TypeDefinitionIndex = 36805;

	class PreparedSqlLiteInsertCommand : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_NullStatement()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(PreparedSqlLiteInsertCommand_TypeDefinitionIndex)->GetStaticField(0x8950);
		}
		::System::String* CommandText; // 0x10
		::SQLite::SQLiteConnection* Connection; // 0x18
		::System::IntPtr Statement; // 0x20
		::System::Boolean Initialized; // 0x28

		::System::Void _ctor(::SQLite::SQLiteConnection* conn, ::System::String* commandText)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::SQLiteConnection*, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_PREPAREDSQLLITEINSERTCOMMAND__CTOR_OFFSET))(this, conn, commandText);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SQLITE_PREPAREDSQLLITEINSERTCOMMAND__CCTOR_OFFSET))();
		}

		::System::Int32 ExecuteNonQuery(::Il2CppArray<::System::Object*>* source)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_PREPAREDSQLLITEINSERTCOMMAND_EXECUTENONQUERY_OFFSET))(this, source);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_PREPAREDSQLLITEINSERTCOMMAND_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_PREPAREDSQLLITEINSERTCOMMAND_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_PREPAREDSQLLITEINSERTCOMMAND_FINALIZE_OFFSET))(this);
		}
	};
}
