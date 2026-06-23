#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETARROWUINODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1580D520)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETARROWUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1580D620)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDestroyTargetArrowUINode_TypeDefinitionIndex = 66260;

	class LDDestroyTargetArrowUINode : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETARROWUINODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETARROWUINODE_INVOKE_OFFSET))(this, key);
		}
	};
}
