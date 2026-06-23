#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"
#include "unitysdk/MoleMole/Level/RatingType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONRANKTHRESHOLD_INVOKE_OFFSET UNITYSDK_OFFSET(0x17E6BE50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONRANKTHRESHOLD__CTOR_OFFSET UNITYSDK_OFFSET(0x17E6C050)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetAbyssDungeonRankThreshold_TypeDefinitionIndex = 62569;

	class LDGetAbyssDungeonRankThreshold : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Int32, ::MoleMole::Level::RatingType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONRANKTHRESHOLD__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::Level::RatingType rank)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Level::RatingType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONRANKTHRESHOLD_INVOKE_OFFSET))(this, rank);
		}
	};
}
