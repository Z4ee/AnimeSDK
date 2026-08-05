#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SQLITE_BASETABLEQUERY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FA500)

namespace SQLite
{
	inline static constexpr unsigned int BaseTableQuery_TypeDefinitionIndex = 39079;

	class BaseTableQuery : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_BASETABLEQUERY__CTOR_OFFSET))(this);
		}
	};
}
