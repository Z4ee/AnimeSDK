#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"
#include "unitysdk/MoleMole/Level/RatingType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBRORATINGTHRESHOLDVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x118BB6A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBRORATINGTHRESHOLDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x118BB9A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSmashBroRatingThresholdValue_TypeDefinitionIndex = 88747;

	class LDSmashBroRatingThresholdValue : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Int32, ::MoleMole::Level::RatingType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBRORATINGTHRESHOLDVALUE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::Level::RatingType ratingType)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Level::RatingType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBRORATINGTHRESHOLDVALUE_INVOKE_OFFSET))(this, ratingType);
		}
	};
}
