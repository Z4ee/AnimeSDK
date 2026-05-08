#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUNDID_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BB6900)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUNDID__CTOR_OFFSET UNITYSDK_OFFSET(0x10BB6A60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetRoundID_TypeDefinitionIndex = 61377;

	class LD_AbyssS2_GetRoundID : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUNDID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUNDID_INVOKE_OFFSET))(this);
		}
	};
}
