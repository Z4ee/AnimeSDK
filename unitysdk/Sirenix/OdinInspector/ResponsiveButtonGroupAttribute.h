#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ButtonSizes.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_RESPONSIVEBUTTONGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1F771560)
#define SIRENIX_ODININSPECTOR_RESPONSIVEBUTTONGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7714E0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ResponsiveButtonGroupAttribute_TypeDefinitionIndex = 7352;

	class ResponsiveButtonGroupAttribute : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		::System::Boolean UniformLayout; // 0x30
		::Sirenix::OdinInspector::ButtonSizes DefaultButtonSize; // 0x34

		::System::Void _ctor(::System::String* group)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_RESPONSIVEBUTTONGROUPATTRIBUTE__CTOR_OFFSET))(this, group);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_RESPONSIVEBUTTONGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, other);
		}
	};
}
