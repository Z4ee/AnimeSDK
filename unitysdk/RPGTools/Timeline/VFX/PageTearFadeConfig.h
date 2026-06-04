#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPGTOOLS_TIMELINE_VFX_PAGETEARFADECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD06A170)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int PageTearFadeConfig_TypeDefinitionIndex = 45950;

	class PageTearFadeConfig : public ::System::Object
	{
	public:
		::System::Single TearAngle; // 0x10
		::System::Single TearDuration; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_PAGETEARFADECONFIG__CTOR_OFFSET))(this);
		}
	};
}
