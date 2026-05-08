#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTAttribute.h"

#define FLUFFYUNDERWARE_DEVTOOLS_ARRAYEXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C80A0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int ArrayExAttribute_TypeDefinitionIndex = 25832;

	class ArrayExAttribute : public ::FluffyUnderware::DevTools::DTAttribute
	{
	public:
		::System::Boolean Draggable; // 0x20
		::System::Boolean ShowHeader; // 0x21
		::System::Boolean DropTarget; // 0x22
		::System::Boolean ShowDelete; // 0x23
		::System::Boolean ShowAdd; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_ARRAYEXATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
