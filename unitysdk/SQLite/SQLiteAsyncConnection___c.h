#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SQLITE_SQLITEASYNCCONNECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B27C030)
#define SQLITE_SQLITEASYNCCONNECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27C070)
#define SQLITE_SQLITEASYNCCONNECTION___C__ENABLEWRITEAHEADLOGGINGASYNC_B__12_0_OFFSET UNITYSDK_OFFSET(0x1B27C080)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection___c_TypeDefinitionIndex = 36816;

	class SQLiteAsyncConnection___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::SQLite::SQLiteConnectionWithLock*, ::System::Object*>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::SQLite::SQLiteConnectionWithLock*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SQLiteAsyncConnection___c_TypeDefinitionIndex)->GetStaticField(0x27320);
		}
		static ::SQLite::SQLiteAsyncConnection___c** StaticGet___9()
		{
			return (::SQLite::SQLiteAsyncConnection___c**)Il2CppClass::FromTypeDefinitionIndex(SQLiteAsyncConnection___c_TypeDefinitionIndex)->GetStaticField(0x27328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__CTOR_OFFSET))(this);
		}

		::System::Object* _EnableWriteAheadLoggingAsync_b__12_0(::SQLite::SQLiteConnectionWithLock* conn)
		{
			return ((::System::Object*(*)(::PVOID, ::SQLite::SQLiteConnectionWithLock*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION___C__ENABLEWRITEAHEADLOGGINGASYNC_B__12_0_OFFSET))(this, conn);
		}
	};
}
