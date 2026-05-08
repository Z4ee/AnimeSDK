#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/FNPCAttachPointNameHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_NPCCPUANIMATIONSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBDE56E0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimationSlotInfo_TypeDefinitionIndex = 57409;

	class NPCCPUAnimationSlotInfo : public ::System::Object
	{
	public:
		::NPCCrowd::FNPCAttachPointNameHandle attachSlotName; // 0x10
		::System::Int32 avatarBoneId; // 0x14
		::System::String* animationBonePath; // 0x18
		::System::String* boneTransformName; // 0x20
		::UnityEngine::Vector3 attachOffset; // 0x28
		::UnityEngine::Quaternion attachDirection; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONSLOTINFO__CTOR_OFFSET))(this);
		}
	};
}
