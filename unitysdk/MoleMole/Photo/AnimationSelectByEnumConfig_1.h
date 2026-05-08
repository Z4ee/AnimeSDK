#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/EnumAsFlag_1.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/MoleMole/Photo/NapAnimationJobConfig_1.h"
#include "unitysdk/Struct_2_9663F620BC91CEFB.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationSelectByEnumConfig_1_TypeDefinitionIndex = 47858;

	template <typename TEnum>
	class AnimationSelectByEnumConfig_1 : public ::MoleMole::Photo::NapAnimationJobConfig_1<::Struct_2_9663F620BC91CEFB<TEnum>>
	{
	public:
		// static const ::System::Single DefaultBlendTime; // 0x0
		::System::UInt32 alwaysEvaluateField; // 0x0
		TEnum initialActiveSlot; // 0x0
	};
}
