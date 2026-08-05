#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NODECANVAS_FRAMEWORK_BLACKBOARDONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBBBEC0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int BlackboardOnlyAttribute_TypeDefinitionIndex = 30257;

	class BlackboardOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARDONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
