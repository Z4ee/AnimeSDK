#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURNODECOORDFLOOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x118C0A60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURNODECOORDFLOOR__CTOR_OFFSET UNITYSDK_OFFSET(0x118C0C80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetCurNodeCoordFloor_TypeDefinitionIndex = 42247;

	class LD_AbyssS2_GetCurNodeCoordFloor : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Int32, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURNODECOORDFLOOR__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Boolean startFromZero)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURNODECOORDFLOOR_INVOKE_OFFSET))(this, startFromZero);
		}
	};
}
