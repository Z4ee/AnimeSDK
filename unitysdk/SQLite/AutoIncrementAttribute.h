#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SQLITE_AUTOINCREMENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2761D0)

namespace SQLite
{
	inline static constexpr unsigned int AutoIncrementAttribute_TypeDefinitionIndex = 36772;

	class AutoIncrementAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_AUTOINCREMENTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
