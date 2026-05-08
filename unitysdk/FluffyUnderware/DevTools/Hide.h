#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTAttribute.h"

#define FLUFFYUNDERWARE_DEVTOOLS_HIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D4840)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int Hide_TypeDefinitionIndex = 25830;

	class Hide : public ::FluffyUnderware::DevTools::DTAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_HIDE__CTOR_OFFSET))(this);
		}
	};
}
