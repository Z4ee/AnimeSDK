#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_SHOWININLINEEDITORSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C021210)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ShowInInlineEditorsAttribute_TypeDefinitionIndex = 7224;

	class ShowInInlineEditorsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWININLINEEDITORSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
