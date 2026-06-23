#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/UnityEngine/SQLite3_Result.h"

namespace System { class String; }

#define SQLITE_SQLITEEXCEPTION_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x1D644A30)
#define SQLITE_SQLITEEXCEPTION_NEW_OFFSET UNITYSDK_OFFSET(0x1D634DA0)
#define SQLITE_SQLITEEXCEPTION_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x1D644A40)
#define SQLITE_SQLITEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D633640)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteException_TypeDefinitionIndex = 38359;

	class SQLiteException : public ::System::Exception
	{
	public:
		::UnityEngine::SQLite3_Result _Result_k__BackingField; // 0x88

		::System::Void _ctor(::UnityEngine::SQLite3_Result r, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SQLite3_Result, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEEXCEPTION__CTOR_OFFSET))(this, r, message);
		}

		::UnityEngine::SQLite3_Result get_Result()
		{
			return ((::UnityEngine::SQLite3_Result(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEEXCEPTION_GET_RESULT_OFFSET))(this);
		}

		::System::Void set_Result(::UnityEngine::SQLite3_Result value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SQLite3_Result))((::PBYTE)hIl2Cpp + SQLITE_SQLITEEXCEPTION_SET_RESULT_OFFSET))(this, value);
		}

		static ::SQLite::SQLiteException* New(::UnityEngine::SQLite3_Result r, ::System::String* message)
		{
			return ((::SQLite::SQLiteException*(*)(::UnityEngine::SQLite3_Result, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEEXCEPTION_NEW_OFFSET))(r, message);
		}
	};
}
