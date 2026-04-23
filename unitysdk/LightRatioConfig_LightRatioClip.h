#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomQueryType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define LIGHTRATIOCONFIG_LIGHTRATIOCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x90B8CB0)

inline static constexpr unsigned int LightRatioConfig_LightRatioClip_TypeDefinitionIndex = 44307;

class LightRatioConfig_LightRatioClip : public ::System::Object
{
public:
	::System::String* name; // 0x10
	::RPG::CustomRP::CustomQueryType queryType; // 0x18
	::System::Single lightRatioPerScreen; // 0x1C
	::System::Single lightRatioPerScreenHighEnd; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTRATIOCONFIG_LIGHTRATIOCLIP__CTOR_OFFSET))(this);
	}
};
