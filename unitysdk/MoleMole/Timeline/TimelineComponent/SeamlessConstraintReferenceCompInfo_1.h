#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CGRuntimeUnitLoadType.h"
#include "unitysdk/MoleMole/Timeline/TimelineComponent/SeamlessBaseReferenceCompInfo.h"

namespace MoleMole { class CGRuntimeUnit; }
namespace MoleMole::Timeline::TimelineComponent { class ConstraintSourcePathInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int SeamlessConstraintReferenceCompInfo_1_TypeDefinitionIndex = 59551;

	template <typename TConstraint>
	class SeamlessConstraintReferenceCompInfo_1 : public ::MoleMole::Timeline::TimelineComponent::SeamlessBaseReferenceCompInfo
	{
	public:
		TConstraint Component; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::ConstraintSourcePathInfo*>* SourceInfos; // 0x0
	};
}
