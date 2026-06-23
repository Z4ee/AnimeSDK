#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_ANDMERGE_CHECK_OFFSET UNITYSDK_OFFSET(0x1CC319F0)
#define FLOWCANVAS_NODES_ANDMERGE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1CC318D0)
#define FLOWCANVAS_NODES_ANDMERGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC31AF0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ANDMerge_TypeDefinitionIndex = 30398;

	class ANDMerge : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::Il2CppArray<::System::Int32>* calls; // 0xA8
		::FlowCanvas::FlowOutput* fOut; // 0xB0
		::System::Int32 lastFrameCall; // 0xB8
		::System::Int32 _portCount; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANDMERGE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANDMERGE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Check(::System::Int32 index, ::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANDMERGE_CHECK_OFFSET))(this, index, f);
		}
	};
}
