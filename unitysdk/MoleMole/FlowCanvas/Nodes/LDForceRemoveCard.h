#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDFORCEREMOVECARD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1260A630)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFORCEREMOVECARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1260A6C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDForceRemoveCard_TypeDefinitionIndex = 79622;

	class LDForceRemoveCard : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Boolean, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFORCEREMOVECARD__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Int32 cardId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFORCEREMOVECARD_INVOKE_OFFSET))(this, cardId);
		}
	};
}
