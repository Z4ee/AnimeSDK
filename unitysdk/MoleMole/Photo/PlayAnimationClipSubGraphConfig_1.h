#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class AnimationModifyCurveConfig; }
namespace MoleMole::Photo { class PlayableGraphClipConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayAnimationClipSubGraphConfig_1_TypeDefinitionIndex = 83580;

	template <typename T>
	class PlayAnimationClipSubGraphConfig_1 : public ::System::Object
	{
	public:
		::MoleMole::Photo::PlayableGraphClipConfig* clip; // 0x0
		::MoleMole::Photo::AnimationModifyCurveConfig* curve; // 0x0
		::System::Single playRate; // 0x0
	};
}
