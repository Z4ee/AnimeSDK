#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_NPCCPUTIREPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF5640)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUTirePass_TypeDefinitionIndex = 68095;

	class NPCCPUTirePass : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUTIREPASS__CTOR_OFFSET))(this);
		}
	};
}
