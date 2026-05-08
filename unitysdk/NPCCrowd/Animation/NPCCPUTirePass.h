#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_NPCCPUTIREPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x11D962D0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUTirePass_TypeDefinitionIndex = 48814;

	class NPCCPUTirePass : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUTIREPASS__CTOR_OFFSET))(this);
		}
	};
}
