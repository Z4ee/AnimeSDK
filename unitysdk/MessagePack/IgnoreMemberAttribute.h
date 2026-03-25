#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MESSAGEPACK_IGNOREMEMBERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x15D1E560)

namespace MessagePack
{
	inline static constexpr unsigned int IgnoreMemberAttribute_TypeDefinitionIndex = 6546;

	class IgnoreMemberAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_IGNOREMEMBERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
