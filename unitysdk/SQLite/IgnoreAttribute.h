#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SQLITE_IGNOREATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B276FB0)

namespace SQLite
{
	inline static constexpr unsigned int IgnoreAttribute_TypeDefinitionIndex = 36774;

	class IgnoreAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_IGNOREATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
