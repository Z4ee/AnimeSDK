#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEXTESTWAITDELETE1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1174F090)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEXTESTWAITDELETE1__CTOR_OFFSET UNITYSDK_OFFSET(0x1174F280)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_HadalRoomIndexTestWaitDelete1_TypeDefinitionIndex = 81898;

	class LD_HadalRoomIndexTestWaitDelete1 : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEXTESTWAITDELETE1__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEXTESTWAITDELETE1_INVOKE_OFFSET))(this);
		}
	};
}
