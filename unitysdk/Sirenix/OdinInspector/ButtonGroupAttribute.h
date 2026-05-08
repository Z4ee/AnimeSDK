#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_BUTTONGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F5B0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ButtonGroupAttribute_TypeDefinitionIndex = 7133;

	class ButtonGroupAttribute : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		::System::Void _ctor(::System::String* group, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONGROUPATTRIBUTE__CTOR_OFFSET))(this, group, order);
		}
	};
}
