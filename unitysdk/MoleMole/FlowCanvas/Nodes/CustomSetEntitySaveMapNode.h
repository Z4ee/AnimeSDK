#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/CustomSetVariableNode_2.h"

namespace MoleMole::FlowCanvas::Nodes { class EntityData; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CUSTOMSETENTITYSAVEMAPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18411EF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomSetEntitySaveMapNode_TypeDefinitionIndex = 75140;

	class CustomSetEntitySaveMapNode : public ::MoleMole::FlowCanvas::Nodes::CustomSetVariableNode_2<::MoleMole::FlowCanvas::Nodes::EntityData*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CUSTOMSETENTITYSAVEMAPNODE__CTOR_OFFSET))(this);
		}
	};
}
