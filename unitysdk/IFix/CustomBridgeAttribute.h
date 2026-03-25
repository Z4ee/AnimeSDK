#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_CUSTOMBRIDGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B654E0)

namespace IFix
{
	inline static constexpr unsigned int CustomBridgeAttribute_TypeDefinitionIndex = 9812;

	class CustomBridgeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CUSTOMBRIDGEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
