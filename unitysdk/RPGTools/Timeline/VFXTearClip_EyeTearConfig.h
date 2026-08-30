#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/VFXTearClip_EyeTearState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGTOOLS_TIMELINE_VFXTEARCLIP_EYETEARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF3A080)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VFXTearClip_EyeTearConfig_TypeDefinitionIndex = 48537;

	class VFXTearClip_EyeTearConfig : public ::System::Object
	{
	public:
		::RPGTools::Timeline::VFXTearClip_EyeTearState State; // 0x10
		::System::Boolean JumpToState; // 0x14
		::System::Single TransitionSpeed; // 0x18
		::System::Single LoopSpeed; // 0x1C
		::UnityEngine::Vector3 OffsetPosition; // 0x20
		::UnityEngine::Vector3 OffsetRotation; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARCLIP_EYETEARCONFIG__CTOR_OFFSET))(this);
		}
	};
}
