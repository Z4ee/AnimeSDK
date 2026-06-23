#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCAnimatorRuntimeInstanceAnimClipData.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Accessories { class NPCAccessoryAnimationAssetsSO; }
namespace NPCCrowd::Accessories { class NPCAccessoryAnimatorManager; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Avatar; }

#define NPCCROWD_ANIMATION_NPCACCESSORYCPUANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD5CD520)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAccessoryCPUAnimator_TypeDefinitionIndex = 74124;

	class NPCAccessoryCPUAnimator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYCPUANIMATOR__CTOR_OFFSET))(this);
		}
	};
}
