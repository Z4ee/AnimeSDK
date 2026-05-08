#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_PROPERTYSPACEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C020DF0)
#define SIRENIX_ODININSPECTOR_PROPERTYSPACEATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C020E00)
#define SIRENIX_ODININSPECTOR_PROPERTYSPACEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C020DE0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int PropertySpaceAttribute_TypeDefinitionIndex = 7213;

	class PropertySpaceAttribute : public ::System::Attribute
	{
	public:
		::System::Single SpaceBefore; // 0x10
		::System::Single SpaceAfter; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYSPACEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single spaceBefore)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYSPACEATTRIBUTE__CTOR_1_OFFSET))(this, spaceBefore);
		}

		::System::Void _ctor_2(::System::Single spaceBefore, ::System::Single spaceAfter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYSPACEATTRIBUTE__CTOR_2_OFFSET))(this, spaceBefore, spaceAfter);
		}
	};
}
