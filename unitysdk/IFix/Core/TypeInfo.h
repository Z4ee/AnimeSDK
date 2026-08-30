#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_CORE_TYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CDCA0)

namespace IFix::Core
{
	inline static constexpr unsigned int TypeInfo_TypeDefinitionIndex = 10062;

	class TypeInfo : public ::System::Object
	{
	public:
		::System::Boolean IsValueType; // 0x10
		::System::Boolean IsPrimitive; // 0x11
		::System::Boolean IsEnum; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_TYPEINFO__CTOR_OFFSET))(this);
		}
	};
}
