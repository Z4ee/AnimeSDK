#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define JETBRAINS_ANNOTATIONS_NOTNULLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B276680)

namespace JetBrains::Annotations
{
	inline static constexpr unsigned int NotNullAttribute_TypeDefinitionIndex = 3995;

	class NotNullAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JETBRAINS_ANNOTATIONS_NOTNULLATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
