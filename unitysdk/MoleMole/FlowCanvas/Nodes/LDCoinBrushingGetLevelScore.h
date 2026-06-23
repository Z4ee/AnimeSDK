#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGGETLEVELSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x171015C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGGETLEVELSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x17101780)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCoinBrushingGetLevelScore_TypeDefinitionIndex = 41654;

	class LDCoinBrushingGetLevelScore : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGGETLEVELSCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGGETLEVELSCORE_INVOKE_OFFSET))(this);
		}
	};
}
