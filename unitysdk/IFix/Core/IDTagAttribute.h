#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_CORE_IDTAGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4BC350)

namespace IFix::Core
{
	inline static constexpr unsigned int IDTagAttribute_TypeDefinitionIndex = 10033;

	class IDTagAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 ID; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_IDTAGATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
