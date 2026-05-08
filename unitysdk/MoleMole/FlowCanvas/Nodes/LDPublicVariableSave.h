#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESAVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16E4B810)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E4B990)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableSave_TypeDefinitionIndex = 47886;

	class LDPublicVariableSave : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESAVE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESAVE_INVOKE_OFFSET))(this);
		}
	};
}
