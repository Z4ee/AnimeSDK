#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSAVEENTITYTODATAMAPNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16E4CB10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSAVEENTITYTODATAMAPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E4CEF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSaveEntityToDataMapNode_TypeDefinitionIndex = 42267;

	class LDSaveEntityToDataMapNode : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Boolean, ::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSAVEENTITYTODATAMAPNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::String* entityName, ::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap* savedSource)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSAVEENTITYTODATAMAPNODE_INVOKE_OFFSET))(this, entity, entityName, savedSource);
		}
	};
}
