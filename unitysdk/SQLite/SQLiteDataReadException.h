#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/SQLiteException.h"
#include "unitysdk/UnityEngine/SQLite3_Result.h"

namespace System { class String; }
namespace System { class Type; }

#define SQLITE_SQLITEDATAREADEXCEPTION_NEW_1_OFFSET UNITYSDK_OFFSET(0x1D63F6C0)
#define SQLITE_SQLITEDATAREADEXCEPTION_NEW_OFFSET UNITYSDK_OFFSET(0x1D644950)
#define SQLITE_SQLITEDATAREADEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D6448A0)
#define SQLITE_SQLITEDATAREADEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D644800)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteDataReadException_TypeDefinitionIndex = 38360;

	class SQLiteDataReadException : public ::SQLite::SQLiteException
	{
	public:
		::System::Type* ValueType; // 0x90
		::System::Int32 ColumnIndex; // 0x98

		::System::Void _ctor(::UnityEngine::SQLite3_Result r, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SQLite3_Result, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEDATAREADEXCEPTION__CTOR_OFFSET))(this, r, message);
		}

		::System::Void _ctor_1(::UnityEngine::SQLite3_Result r, ::System::String* message, ::System::Int32 columnIndex, ::System::Type* valueType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SQLite3_Result, ::System::String*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEDATAREADEXCEPTION__CTOR_1_OFFSET))(this, r, message, columnIndex, valueType);
		}

		static ::SQLite::SQLiteDataReadException* New(::UnityEngine::SQLite3_Result r, ::System::String* message)
		{
			return ((::SQLite::SQLiteDataReadException*(*)(::UnityEngine::SQLite3_Result, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEDATAREADEXCEPTION_NEW_OFFSET))(r, message);
		}

		static ::SQLite::SQLiteDataReadException* New_1(::UnityEngine::SQLite3_Result r, ::System::String* message, ::System::Int32 columnIndex, ::System::Type* valueType)
		{
			return ((::SQLite::SQLiteDataReadException*(*)(::UnityEngine::SQLite3_Result, ::System::String*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEDATAREADEXCEPTION_NEW_1_OFFSET))(r, message, columnIndex, valueType);
		}
	};
}
