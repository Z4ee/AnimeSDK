#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAMONSTERCLEAR_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BB8C40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAMONSTERCLEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB8CD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_MarkAreaMonsterClear_TypeDefinitionIndex = 62092;

	class LD_AbyssS2_MarkAreaMonsterClear : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAMONSTERCLEAR__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAMONSTERCLEAR_INVOKE_OFFSET))(this);
		}
	};
}
