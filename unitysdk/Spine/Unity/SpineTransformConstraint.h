#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SpineAttributeBase.h"

namespace System { class String; }

#define SPINE_UNITY_SPINETRANSFORMCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD51B80)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineTransformConstraint_TypeDefinitionIndex = 39521;

	class SpineTransformConstraint : public ::Spine::Unity::SpineAttributeBase
	{
	public:
		::System::Void _ctor(::System::String* startsWith, ::System::String* dataField, ::System::Boolean includeNone, ::System::Boolean fallbackToTextField)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINETRANSFORMCONSTRAINT__CTOR_OFFSET))(this, startsWith, dataField, includeNone, fallbackToTextField);
		}
	};
}
