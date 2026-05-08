#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/GroupAttribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_ASGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C80C0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int AsGroupAttribute_TypeDefinitionIndex = 25826;

	class AsGroupAttribute : public ::FluffyUnderware::DevTools::GroupAttribute
	{
	public:
		::System::Void _ctor(::System::String* pathAndName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_ASGROUPATTRIBUTE__CTOR_OFFSET))(this, pathAndName);
		}
	};
}
