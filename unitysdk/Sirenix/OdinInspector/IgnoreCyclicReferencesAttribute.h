#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_IGNORECYCLICREFERENCESATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F770870)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int IgnoreCyclicReferencesAttribute_TypeDefinitionIndex = 7321;

	class IgnoreCyclicReferencesAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_IGNORECYCLICREFERENCESATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
