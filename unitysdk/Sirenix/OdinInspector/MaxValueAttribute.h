#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_MAXVALUEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C020670)
#define SIRENIX_ODININSPECTOR_MAXVALUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C020660)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int MaxValueAttribute_TypeDefinitionIndex = 7196;

	class MaxValueAttribute : public ::System::Attribute
	{
	public:
		::System::String* Expression; // 0x10
		::System::Double MaxValue; // 0x18

		::System::Void _ctor(::System::Double maxValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MAXVALUEATTRIBUTE__CTOR_OFFSET))(this, maxValue);
		}

		::System::Void _ctor_1(::System::String* expression)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MAXVALUEATTRIBUTE__CTOR_1_OFFSET))(this, expression);
		}
	};
}
