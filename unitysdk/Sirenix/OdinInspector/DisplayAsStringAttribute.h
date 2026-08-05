#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DISPLAYASSTRINGATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F76FED0)
#define SIRENIX_ODININSPECTOR_DISPLAYASSTRINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76FEC0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DisplayAsStringAttribute_TypeDefinitionIndex = 7289;

	class DisplayAsStringAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean Overflow; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DISPLAYASSTRINGATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean overflow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DISPLAYASSTRINGATTRIBUTE__CTOR_1_OFFSET))(this, overflow);
		}
	};
}
