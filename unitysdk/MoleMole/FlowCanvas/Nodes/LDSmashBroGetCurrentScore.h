#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBROGETCURRENTSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18A408F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBROGETCURRENTSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A40A50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSmashBroGetCurrentScore_TypeDefinitionIndex = 69690;

	class LDSmashBroGetCurrentScore : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBROGETCURRENTSCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBROGETCURRENTSCORE_INVOKE_OFFSET))(this);
		}
	};
}
