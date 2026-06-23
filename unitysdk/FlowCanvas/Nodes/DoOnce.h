#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define FLOWCANVAS_NODES_DOONCE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1BCB4230)
#define FLOWCANVAS_NODES_DOONCE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1BCB4240)
#define FLOWCANVAS_NODES_DOONCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB4340)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int DoOnce_TypeDefinitionIndex = 30424;

	class DoOnce : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Boolean called; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DOONCE__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DOONCE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DOONCE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
