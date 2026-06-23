#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_SERIALIZATION_EXCLUDEDATAFROMINSPECTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E68D6F0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ExcludeDataFromInspectorAttribute_TypeDefinitionIndex = 7505;

	class ExcludeDataFromInspectorAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_EXCLUDEDATAFROMINSPECTORATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
