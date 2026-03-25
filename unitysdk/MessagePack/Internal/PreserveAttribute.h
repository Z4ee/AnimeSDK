#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MESSAGEPACK_INTERNAL_PRESERVEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x15D60B60)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int PreserveAttribute_TypeDefinitionIndex = 9151;

	class PreserveAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_PRESERVEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
