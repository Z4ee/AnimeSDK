#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_DESIGN_NODESHOWPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA0070)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int NodeShowPropertyAttribute_TypeDefinitionIndex = 30681;

	class NodeShowPropertyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_NODESHOWPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
