#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_HIDELABELATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7705F0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideLabelAttribute_TypeDefinitionIndex = 7316;

	class HideLabelAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean ForceHide; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDELABELATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
