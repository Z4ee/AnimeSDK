#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DONTVALIDATEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E328B60)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DontValidateAttribute_TypeDefinitionIndex = 7288;

	class DontValidateAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DONTVALIDATEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
