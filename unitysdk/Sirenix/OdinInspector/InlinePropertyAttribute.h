#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_INLINEPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F770A40)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int InlinePropertyAttribute_TypeDefinitionIndex = 7326;

	class InlinePropertyAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 LabelWidth; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
