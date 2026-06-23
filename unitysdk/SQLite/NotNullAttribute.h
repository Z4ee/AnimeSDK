#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SQLITE_NOTNULLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6333D0)

namespace SQLite
{
	inline static constexpr unsigned int NotNullAttribute_TypeDefinitionIndex = 38389;

	class NotNullAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
