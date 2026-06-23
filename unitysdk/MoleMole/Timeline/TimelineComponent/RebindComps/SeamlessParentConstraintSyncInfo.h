#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CGRuntimeUnitLoadType.h"
#include "unitysdk/MoleMole/Timeline/TimelineComponent/SeamlessConstraintReferenceCompInfo_1.h"

namespace MoleMole { class CGRuntimeUnit; }
namespace UnityEngine::Animations { class ParentConstraint; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARENTCONSTRAINTSYNCINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1740C030)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARENTCONSTRAINTSYNCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1740C020)

namespace MoleMole::Timeline::TimelineComponent::RebindComps
{
	inline static constexpr unsigned int SeamlessParentConstraintSyncInfo_TypeDefinitionIndex = 65036;

	class SeamlessParentConstraintSyncInfo : public ::MoleMole::Timeline::TimelineComponent::SeamlessConstraintReferenceCompInfo_1<::UnityEngine::Animations::ParentConstraint*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARENTCONSTRAINTSYNCINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MoleMole::CGRuntimeUnit* runtimeUnit, ::UnityEngine::Animations::ParentConstraint* component, ::MoleMole::CGRuntimeUnitLoadType loadType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CGRuntimeUnit*, ::UnityEngine::Animations::ParentConstraint*, ::MoleMole::CGRuntimeUnitLoadType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARENTCONSTRAINTSYNCINFO__CTOR_1_OFFSET))(this, runtimeUnit, component, loadType);
		}
	};
}
