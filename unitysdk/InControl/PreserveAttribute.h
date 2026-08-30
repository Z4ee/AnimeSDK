#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define INCONTROL_PRESERVEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B578250)

namespace InControl
{
	inline static constexpr unsigned int PreserveAttribute_TypeDefinitionIndex = 39615;

	class PreserveAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PRESERVEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
