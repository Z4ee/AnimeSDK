#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TimelineComponent/NoSeamlessBaseReferenceCompInfo.h"

namespace MoleMole::Timeline::TimelineComponent { class ConstraintSourcePathInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int NoSeamlessConstraintReferenceCompInfo_1_TypeDefinitionIndex = 71843;

	template <typename TConstraint>
	class NoSeamlessConstraintReferenceCompInfo_1 : public ::MoleMole::Timeline::TimelineComponent::NoSeamlessBaseReferenceCompInfo
	{
	public:
		::System::String* RelativePath; // 0x0
		TConstraint Component; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::ConstraintSourcePathInfo*>* SourceInfos; // 0x0
	};
}
