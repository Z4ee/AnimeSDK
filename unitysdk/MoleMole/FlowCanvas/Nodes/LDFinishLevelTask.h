#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDFINISHLEVELTASK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18208770)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFINISHLEVELTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x18208800)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDFinishLevelTask_TypeDefinitionIndex = 77861;

	class LDFinishLevelTask : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFINISHLEVELTASK__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 taskHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFINISHLEVELTASK_INVOKE_OFFSET))(this, taskHandle);
		}
	};
}
