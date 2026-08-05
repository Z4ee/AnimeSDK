#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SQLITE_BASETABLEQUERY_ORDERING_GET_ASCENDING_OFFSET UNITYSDK_OFFSET(0x1E9FA530)
#define SQLITE_BASETABLEQUERY_ORDERING_GET_COLUMNNAME_OFFSET UNITYSDK_OFFSET(0x1E9FA510)
#define SQLITE_BASETABLEQUERY_ORDERING_SET_ASCENDING_OFFSET UNITYSDK_OFFSET(0x1E9FA540)
#define SQLITE_BASETABLEQUERY_ORDERING_SET_COLUMNNAME_OFFSET UNITYSDK_OFFSET(0x1E9FA520)
#define SQLITE_BASETABLEQUERY_ORDERING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FA550)

namespace SQLite
{
	inline static constexpr unsigned int BaseTableQuery_Ordering_TypeDefinitionIndex = 39080;

	class BaseTableQuery_Ordering : public ::System::Object
	{
	public:
		::System::String* _ColumnName_k__BackingField; // 0x10
		::System::Boolean _Ascending_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_BASETABLEQUERY_ORDERING__CTOR_OFFSET))(this);
		}

		::System::String* get_ColumnName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_BASETABLEQUERY_ORDERING_GET_COLUMNNAME_OFFSET))(this);
		}

		::System::Void set_ColumnName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_BASETABLEQUERY_ORDERING_SET_COLUMNNAME_OFFSET))(this, value);
		}

		::System::Boolean get_Ascending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_BASETABLEQUERY_ORDERING_GET_ASCENDING_OFFSET))(this);
		}

		::System::Void set_Ascending(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_BASETABLEQUERY_ORDERING_SET_ASCENDING_OFFSET))(this, value);
		}
	};
}
