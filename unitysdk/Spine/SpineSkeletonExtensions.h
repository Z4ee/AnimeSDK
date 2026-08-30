#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/TransformMode.h"
#include "unitysdk/System/Object.h"

namespace Spine { class VertexAttachment; }

#define SPINE_SPINESKELETONEXTENSIONS_INHERITSROTATION_OFFSET UNITYSDK_OFFSET(0x18304E80)
#define SPINE_SPINESKELETONEXTENSIONS_INHERITSSCALE_OFFSET UNITYSDK_OFFSET(0x18304E90)
#define SPINE_SPINESKELETONEXTENSIONS_ISWEIGHTED_OFFSET UNITYSDK_OFFSET(0x18304E50)

namespace Spine
{
	inline static constexpr unsigned int SpineSkeletonExtensions_TypeDefinitionIndex = 43803;

	class SpineSkeletonExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsWeighted(::Spine::VertexAttachment* a1)
		{
			return ((::System::Boolean(*)(::Spine::VertexAttachment*))((::PBYTE)hIl2Cpp + SPINE_SPINESKELETONEXTENSIONS_ISWEIGHTED_OFFSET))(a1);
		}

		static ::System::Boolean InheritsRotation(::Spine::TransformMode a1)
		{
			return ((::System::Boolean(*)(::Spine::TransformMode))((::PBYTE)hIl2Cpp + SPINE_SPINESKELETONEXTENSIONS_INHERITSROTATION_OFFSET))(a1);
		}

		static ::System::Boolean InheritsScale(::Spine::TransformMode a1)
		{
			return ((::System::Boolean(*)(::Spine::TransformMode))((::PBYTE)hIl2Cpp + SPINE_SPINESKELETONEXTENSIONS_INHERITSSCALE_OFFSET))(a1);
		}
	};
}
