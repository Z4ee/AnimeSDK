#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SQLITE_SQLITECONNECTIONWITHLOCK_FAKELOCKWRAPPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B288460)
#define SQLITE_SQLITECONNECTIONWITHLOCK_FAKELOCKWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B288450)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnectionWithLock_FakeLockWrapper_TypeDefinitionIndex = 36882;

	class SQLiteConnectionWithLock_FakeLockWrapper : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONWITHLOCK_FAKELOCKWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONWITHLOCK_FAKELOCKWRAPPER_DISPOSE_OFFSET))(this);
		}
	};
}
