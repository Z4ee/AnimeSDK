#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelZeroGetRoomIndexNode_RoomFormat.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMINDEXNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1427C940)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMINDEXNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1427CD50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelZeroGetRoomIndexNode_TypeDefinitionIndex = 71592;

	class LDLevelZeroGetRoomIndexNode : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::String*, ::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMINDEXNODE__CTOR_OFFSET))(this);
		}

		::System::String* Invoke(::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat format)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMINDEXNODE_INVOKE_OFFSET))(this, format);
		}
	};
}
