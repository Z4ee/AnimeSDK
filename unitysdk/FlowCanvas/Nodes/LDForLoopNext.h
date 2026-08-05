#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define FLOWCANVAS_NODES_LDFORLOOPNEXT_DOSTEP_OFFSET UNITYSDK_OFFSET(0x178A3760)
#define FLOWCANVAS_NODES_LDFORLOOPNEXT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x178A3540)
#define FLOWCANVAS_NODES_LDFORLOOPNEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x178A3BE0)
#define FLOWCANVAS_NODES_LDFORLOOPNEXT__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x178A3C20)
#define FLOWCANVAS_NODES_LDFORLOOPNEXT__REGISTERPORTS_B__9_1_OFFSET UNITYSDK_OFFSET(0x178A3C30)
#define FLOWCANVAS_NODES_LDFORLOOPNEXT__REGISTERPORTS_B__9_2_OFFSET UNITYSDK_OFFSET(0x178A3D00)
#define FLOWCANVAS_NODES_LDFORLOOPNEXT__REGISTERPORTS_B__9_3_OFFSET UNITYSDK_OFFSET(0x178A3D30)
#define FLOWCANVAS_NODES_LDFORLOOPNEXT__REGISTERPORTS_B__9_4_OFFSET UNITYSDK_OFFSET(0x178A3CF0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDForLoopNext_TypeDefinitionIndex = 82057;

	class LDForLoopNext : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* fFinish; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* step; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* first; // 0xB8
		::FlowCanvas::FlowOutput* fCurrent; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* last; // 0xC8
		::System::Boolean broken; // 0xD0
		::System::Boolean reverse; // 0xD1
		::System::Int32 enumatorIndex; // 0xD4
		::System::Int32 current; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFORLOOPNEXT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFORLOOPNEXT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void DoStep(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFORLOOPNEXT_DOSTEP_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__9_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFORLOOPNEXT__REGISTERPORTS_B__9_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__9_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFORLOOPNEXT__REGISTERPORTS_B__9_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__9_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFORLOOPNEXT__REGISTERPORTS_B__9_4_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__9_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFORLOOPNEXT__REGISTERPORTS_B__9_2_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__9_3(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFORLOOPNEXT__REGISTERPORTS_B__9_3_OFFSET))(this, f);
		}
	};
}
