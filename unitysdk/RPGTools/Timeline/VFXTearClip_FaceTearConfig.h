#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/VFXTearClip_FaceTearState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGTOOLS_TIMELINE_VFXTEARCLIP_FACETEARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB92D3C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VFXTearClip_FaceTearConfig_TypeDefinitionIndex = 44828;

	class VFXTearClip_FaceTearConfig : public ::System::Object
	{
	public:
		::RPGTools::Timeline::VFXTearClip_FaceTearState State; // 0x10
		::System::Boolean JumpToState; // 0x14
		::System::Single TransitionSpeed; // 0x18
		::System::Single LoopSpeed; // 0x1C
		::UnityEngine::Vector3 OffsetPosition; // 0x20
		::UnityEngine::Vector3 OffsetRotation; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARCLIP_FACETEARCONFIG__CTOR_OFFSET))(this);
		}
	};
}
