#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMINTNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x11610EB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMINTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x116110F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWriteAIParamIntNode_TypeDefinitionIndex = 85760;

	class LDWriteAIParamIntNode : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Boolean, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMINTNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::String* paramName, ::System::Int32 paramValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMINTNODE_INVOKE_OFFSET))(this, entity, paramName, paramValue);
		}
	};
}
