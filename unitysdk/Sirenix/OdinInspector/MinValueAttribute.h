#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_MINVALUEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C020740)
#define SIRENIX_ODININSPECTOR_MINVALUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C020730)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int MinValueAttribute_TypeDefinitionIndex = 7198;

	class MinValueAttribute : public ::System::Attribute
	{
	public:
		::System::String* Expression; // 0x10
		::System::Double MinValue; // 0x18

		::System::Void _ctor(::System::Double minValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MINVALUEATTRIBUTE__CTOR_OFFSET))(this, minValue);
		}

		::System::Void _ctor_1(::System::String* expression)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MINVALUEATTRIBUTE__CTOR_1_OFFSET))(this, expression);
		}
	};
}
