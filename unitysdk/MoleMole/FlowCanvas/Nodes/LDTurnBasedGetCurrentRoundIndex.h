#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETCURRENTROUNDINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D447D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETCURRENTROUNDINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x10D44930)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedGetCurrentRoundIndex_TypeDefinitionIndex = 80959;

	class LDTurnBasedGetCurrentRoundIndex : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETCURRENTROUNDINDEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETCURRENTROUNDINDEX_INVOKE_OFFSET))(this);
		}
	};
}
