#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTAttribute.h"

#define FLUFFYUNDERWARE_DEVTOOLS_INLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA55DC0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int Inline_TypeDefinitionIndex = 28929;

	class Inline : public ::FluffyUnderware::DevTools::DTAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INLINE__CTOR_OFFSET))(this);
		}
	};
}
