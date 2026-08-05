#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTNORMALSELECTIONCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B1B0F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTNORMALSELECTIONCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B1100)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_NextNormalSelectionCount_TypeDefinitionIndex = 68688;

	class LD_AbyssS2_NextNormalSelectionCount : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTNORMALSELECTIONCOUNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTNORMALSELECTIONCOUNT_INVOKE_OFFSET))(this);
		}
	};
}
