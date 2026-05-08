#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_AWAITALL_CHECK_OFFSET UNITYSDK_OFFSET(0x19845FF0)
#define FLOWCANVAS_NODES_AWAITALL_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x19845DD0)
#define FLOWCANVAS_NODES_AWAITALL_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19845ED0)
#define FLOWCANVAS_NODES_AWAITALL_RESET_OFFSET UNITYSDK_OFFSET(0x19845E50)
#define FLOWCANVAS_NODES_AWAITALL__CTOR_OFFSET UNITYSDK_OFFSET(0x19846130)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AwaitAll_TypeDefinitionIndex = 28053;

	class AwaitAll : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::Il2CppArray<::System::Single>* calls; // 0xA8
		::FlowCanvas::FlowOutput* fOut; // 0xB0
		::System::Single maxAwaitTime; // 0xB8
		::System::Int32 _portCount; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AWAITALL__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AWAITALL_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AWAITALL_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AWAITALL_RESET_OFFSET))(this);
		}

		::System::Void Check(::System::Int32 index, ::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AWAITALL_CHECK_OFFSET))(this, index, f);
		}
	};
}
