#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1383CF00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1383D0E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetLevelZeroRoomIndex_TypeDefinitionIndex = 67765;

	class LD_GetLevelZeroRoomIndex : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMINDEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMINDEX_INVOKE_OFFSET))(this);
		}
	};
}
