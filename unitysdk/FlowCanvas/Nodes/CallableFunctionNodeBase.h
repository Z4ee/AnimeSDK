#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/SimplexNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_CALLABLEFUNCTIONNODEBASE_CALLOUTPUTCALL_OFFSET UNITYSDK_OFFSET(0x1EA92CB0)
#define FLOWCANVAS_NODES_CALLABLEFUNCTIONNODEBASE_ISCOULDOUTCALL_OFFSET UNITYSDK_OFFSET(0x1EA92CA0)
#define FLOWCANVAS_NODES_CALLABLEFUNCTIONNODEBASE_ONCALLOUTPUTCALL_OFFSET UNITYSDK_OFFSET(0x1EA92D50)
#define FLOWCANVAS_NODES_CALLABLEFUNCTIONNODEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA92D60)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableFunctionNodeBase_TypeDefinitionIndex = 30522;

	class CallableFunctionNodeBase : public ::FlowCanvas::Nodes::SimplexNode
	{
	public:
		::FlowCanvas::FlowOutput* _lastOutput; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CALLABLEFUNCTIONNODEBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsCouldOutCall(::FlowCanvas::FlowOutput* output)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::FlowOutput*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CALLABLEFUNCTIONNODEBASE_ISCOULDOUTCALL_OFFSET))(this, output);
		}

		::System::Void CallOutputCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CALLABLEFUNCTIONNODEBASE_CALLOUTPUTCALL_OFFSET))(this);
		}

		::System::Void OnCallOutputCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CALLABLEFUNCTIONNODEBASE_ONCALLOUTPUTCALL_OFFSET))(this);
		}
	};
}
