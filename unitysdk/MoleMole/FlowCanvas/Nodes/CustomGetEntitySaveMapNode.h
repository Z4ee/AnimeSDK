#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/CustomGetVariableNode_2.h"

namespace MoleMole::FlowCanvas::Nodes { class EntityData; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CUSTOMGETENTITYSAVEMAPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAD0B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomGetEntitySaveMapNode_TypeDefinitionIndex = 60550;

	class CustomGetEntitySaveMapNode : public ::MoleMole::FlowCanvas::Nodes::CustomGetVariableNode_2<::MoleMole::FlowCanvas::Nodes::EntityData*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CUSTOMGETENTITYSAVEMAPNODE__CTOR_OFFSET))(this);
		}
	};
}
