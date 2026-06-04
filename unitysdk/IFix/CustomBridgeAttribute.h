#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_CUSTOMBRIDGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FAB280)

namespace IFix
{
	inline static constexpr unsigned int CustomBridgeAttribute_TypeDefinitionIndex = 9774;

	class CustomBridgeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CUSTOMBRIDGEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
