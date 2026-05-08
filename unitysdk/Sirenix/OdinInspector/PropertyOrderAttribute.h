#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_PROPERTYORDERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C020D30)
#define SIRENIX_ODININSPECTOR_PROPERTYORDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C020D20)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int PropertyOrderAttribute_TypeDefinitionIndex = 7210;

	class PropertyOrderAttribute : public ::System::Attribute
	{
	public:
		::System::Single Order; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYORDERATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYORDERATTRIBUTE__CTOR_1_OFFSET))(this, order);
		}
	};
}
