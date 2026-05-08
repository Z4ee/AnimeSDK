#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SQLITE_PRIMARYKEYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B279320)

namespace SQLite
{
	inline static constexpr unsigned int PrimaryKeyAttribute_TypeDefinitionIndex = 36771;

	class PrimaryKeyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_PRIMARYKEYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
