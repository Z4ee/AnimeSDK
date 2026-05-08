#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x13991E30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorStateTimeSegment_TypeDefinitionIndex = 71427;

	class AnimatorStateTimeSegment : public ::System::Object
	{
	public:
		::System::Single StartNormalizedTime; // 0x10
		::System::Single EndNormalizedTime; // 0x14
		::System::Boolean MaxStartFrame; // 0x18
		::System::Int32 StartFrame; // 0x1C
		::System::Boolean MaxEndFrame; // 0x20
		::System::Int32 EndFrame; // 0x24
		::System::Int32 FrameCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT__CTOR_OFFSET))(this);
		}
	};
}
