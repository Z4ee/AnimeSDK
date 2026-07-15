#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_CORE_XIDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B560010)

namespace IFix::Core
{
	inline static constexpr unsigned int XIDAttribute_TypeDefinitionIndex = 9755;

	class XIDAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 ID; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_XIDATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
