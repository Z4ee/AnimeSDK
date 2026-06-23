#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDRandomSelectBase_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTINTFLOATNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12612EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTINTFLOATNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12613000)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRandomSelectIntFloatNode_TypeDefinitionIndex = 68889;

	class LDRandomSelectIntFloatNode : public ::MoleMole::FlowCanvas::Nodes::LDRandomSelectBase_2<::System::Int32, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTINTFLOATNODE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTINTFLOATNODE_INVOKE_OFFSET))(this);
		}
	};
}
