#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define HDG_BUTTONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xA118180)

namespace Hdg
{
	inline static constexpr unsigned int ButtonAttribute_TypeDefinitionIndex = 44290;

	class ButtonAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_BUTTONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
