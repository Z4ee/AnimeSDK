#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTAttribute.h"

#define FLUFFYUNDERWARE_DEVTOOLS_ARRAYEXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA49400)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int ArrayExAttribute_TypeDefinitionIndex = 28930;

	class ArrayExAttribute : public ::FluffyUnderware::DevTools::DTAttribute
	{
	public:
		::System::Boolean ShowDelete; // 0x20
		::System::Boolean DropTarget; // 0x21
		::System::Boolean ShowAdd; // 0x22
		::System::Boolean Draggable; // 0x23
		::System::Boolean ShowHeader; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_ARRAYEXATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
