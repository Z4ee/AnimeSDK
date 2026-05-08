#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_LABELWIDTHATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0203F0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int LabelWidthAttribute_TypeDefinitionIndex = 7193;

	class LabelWidthAttribute : public ::System::Attribute
	{
	public:
		::System::Single Width; // 0x10

		::System::Void _ctor(::System::Single width)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LABELWIDTHATTRIBUTE__CTOR_OFFSET))(this, width);
		}
	};
}
