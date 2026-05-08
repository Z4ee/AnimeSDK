#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x139984A0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x13998460)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment_TypeDefinitionIndex = 79920;

	class AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment : public ::System::Object
	{
	public:
		::System::Single toNormalizedTime; // 0x10
		::System::Single fromNormalizedTime; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single from, ::System::Single to)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT__CTOR_1_OFFSET))(this, from, to);
		}
	};
}
