#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MESSAGEPACK_INTERNAL_PRESERVEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x14FA2C50)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int PreserveAttribute_TypeDefinitionIndex = 7257;

	class PreserveAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_PRESERVEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
