#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/UpdateTiming.h"

namespace Spine { class Skeleton; }
namespace Spine::Unity { class ISkeletonAnimationDelegate; }
namespace Spine::Unity { class UpdateBonesDelegate; }

namespace Spine::Unity
{
	inline static constexpr unsigned int ISkeletonAnimation_TypeDefinitionIndex = 42269;

	class ISkeletonAnimation
	{
	public:
	};
}
