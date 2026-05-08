#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DISABLECONTEXTMENUATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F750)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DisableContextMenuAttribute_TypeDefinitionIndex = 7145;

	class DisableContextMenuAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean DisableForMember; // 0x10
		::System::Boolean DisableForCollectionElements; // 0x11

		::System::Void _ctor(::System::Boolean disableForMember, ::System::Boolean disableCollectionElements)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DISABLECONTEXTMENUATTRIBUTE__CTOR_OFFSET))(this, disableForMember, disableCollectionElements);
		}
	};
}
