#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/TransformMode.h"
#include "unitysdk/System/Object.h"

namespace Spine { class VertexAttachment; }

#define SPINE_SPINESKELETONEXTENSIONS_INHERITSROTATION_OFFSET UNITYSDK_OFFSET(0x1ACA5D20)
#define SPINE_SPINESKELETONEXTENSIONS_INHERITSSCALE_OFFSET UNITYSDK_OFFSET(0x1ACA5D30)
#define SPINE_SPINESKELETONEXTENSIONS_ISWEIGHTED_OFFSET UNITYSDK_OFFSET(0x1ACA5CF0)

namespace Spine
{
	inline static constexpr unsigned int SpineSkeletonExtensions_TypeDefinitionIndex = 41377;

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
