#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELCUSTOMPERFORMEND_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B1B1EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELCUSTOMPERFORMEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B1FD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_LevelCustomPerformEnd_TypeDefinitionIndex = 86004;

	class LD_LevelCustomPerformEnd : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELCUSTOMPERFORMEND__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELCUSTOMPERFORMEND_INVOKE_OFFSET))(this, tag);
		}
	};
}
