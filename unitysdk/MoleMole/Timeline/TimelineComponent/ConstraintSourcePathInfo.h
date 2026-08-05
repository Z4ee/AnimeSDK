#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_CONSTRAINTSOURCEPATHINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B6B70E0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_CONSTRAINTSOURCEPATHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6B70A0)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int ConstraintSourcePathInfo_TypeDefinitionIndex = 47736;

	class ConstraintSourcePathInfo : public ::System::Object
	{
	public:
		::System::Int32 SourceIndex; // 0x10
		::System::String* RelativePath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_CONSTRAINTSOURCEPATHINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 sourceIndex, ::UnityEngine::Transform* sourceTransform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_CONSTRAINTSOURCEPATHINFO__CTOR_1_OFFSET))(this, sourceIndex, sourceTransform);
		}
	};
}
