#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x161E7B10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x161E7C00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDZeroGmEndNode_TypeDefinitionIndex = 74698;

	class LDZeroGmEndNode : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean success, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType performType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE_INVOKE_OFFSET))(this, success, performType);
		}
	};
}
