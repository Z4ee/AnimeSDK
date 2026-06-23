#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_HIDEDUPLICATEREFERENCEBOXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E328F00)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideDuplicateReferenceBoxAttribute_TypeDefinitionIndex = 7300;

	class HideDuplicateReferenceBoxAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEDUPLICATEREFERENCEBOXATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
