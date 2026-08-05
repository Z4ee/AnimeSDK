#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/TransformMode.h"
#include "unitysdk/System/Object.h"

namespace Spine { class VertexAttachment; }

#define SPINE_SPINESKELETONEXTENSIONS_INHERITSROTATION_OFFSET UNITYSDK_OFFSET(0x1C154230)
#define SPINE_SPINESKELETONEXTENSIONS_INHERITSSCALE_OFFSET UNITYSDK_OFFSET(0x1C154240)
#define SPINE_SPINESKELETONEXTENSIONS_ISWEIGHTED_OFFSET UNITYSDK_OFFSET(0x1C154200)

namespace Spine
{
	inline static constexpr unsigned int SpineSkeletonExtensions_TypeDefinitionIndex = 40082;

	class SpineSkeletonExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsWeighted(::Spine::VertexAttachment* va)
		{
			return ((::System::Boolean(*)(::Spine::VertexAttachment*))((::PBYTE)hIl2Cpp + SPINE_SPINESKELETONEXTENSIONS_ISWEIGHTED_OFFSET))(va);
		}

		static ::System::Boolean InheritsRotation(::Spine::TransformMode mode)
		{
			return ((::System::Boolean(*)(::Spine::TransformMode))((::PBYTE)hIl2Cpp + SPINE_SPINESKELETONEXTENSIONS_INHERITSROTATION_OFFSET))(mode);
		}

		static ::System::Boolean InheritsScale(::Spine::TransformMode mode)
		{
			return ((::System::Boolean(*)(::Spine::TransformMode))((::PBYTE)hIl2Cpp + SPINE_SPINESKELETONEXTENSIONS_INHERITSSCALE_OFFSET))(mode);
		}
	};
}
