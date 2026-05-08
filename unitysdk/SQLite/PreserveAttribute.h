#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SQLITE_PRESERVEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B279310)

namespace SQLite
{
	inline static constexpr unsigned int PreserveAttribute_TypeDefinitionIndex = 36777;

	class PreserveAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean AllMembers; // 0x10
		::System::Boolean Conditional; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_PRESERVEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
