#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_ENABLEGUIATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E328B90)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int EnableGUIAttribute_TypeDefinitionIndex = 7291;

	class EnableGUIAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean forceEditable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ENABLEGUIATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
