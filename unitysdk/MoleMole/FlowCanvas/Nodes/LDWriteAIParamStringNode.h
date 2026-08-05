#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMSTRINGNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x13839690)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMSTRINGNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x138398D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWriteAIParamStringNode_TypeDefinitionIndex = 52668;

	class LDWriteAIParamStringNode : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Boolean, ::MoleMole::Battle::Entity*, ::System::String*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMSTRINGNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::String* paramName, ::System::String* paramValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMSTRINGNODE_INVOKE_OFFSET))(this, entity, paramName, paramValue);
		}
	};
}
