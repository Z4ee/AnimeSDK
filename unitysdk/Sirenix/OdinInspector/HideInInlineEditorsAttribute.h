#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_HIDEININLINEEDITORSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3291D0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideInInlineEditorsAttribute_TypeDefinitionIndex = 7304;

	class HideInInlineEditorsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEININLINEEDITORSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
