#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x16D45A10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x16D45C00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_HadalRoomIndex_TypeDefinitionIndex = 81893;

	class LD_HadalRoomIndex : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEX_INVOKE_OFFSET))(this);
		}
	};
}
