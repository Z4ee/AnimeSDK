#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_SHOWININSPECTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76FAB0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ShowInInspectorAttribute_TypeDefinitionIndex = 7360;

	class ShowInInspectorAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWININSPECTORATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
