#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTPropertyAttribute.h"
#include "unitysdk/FluffyUnderware/DevTools/PathSelectorAttribute_DialogMode.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_PATHSELECTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D4E80)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int PathSelectorAttribute_TypeDefinitionIndex = 25873;

	class PathSelectorAttribute : public ::FluffyUnderware::DevTools::DTPropertyAttribute
	{
	public:
		::System::String* Directory; // 0x30
		::System::String* DefaultName; // 0x38
		::System::String* Title; // 0x40
		::System::String* Extension; // 0x48
		::FluffyUnderware::DevTools::PathSelectorAttribute_DialogMode Mode; // 0x50

		::System::Void _ctor(::FluffyUnderware::DevTools::PathSelectorAttribute_DialogMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::PathSelectorAttribute_DialogMode))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_PATHSELECTORATTRIBUTE__CTOR_OFFSET))(this, mode);
		}
	};
}
