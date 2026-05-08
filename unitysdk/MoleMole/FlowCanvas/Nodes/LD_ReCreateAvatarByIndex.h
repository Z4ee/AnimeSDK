#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX_PROCESS_OFFSET UNITYSDK_OFFSET(0x1499F780)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1499F690)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1499FB70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1499FBB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ReCreateAvatarByIndex_TypeDefinitionIndex = 77797;

	class LD_ReCreateAvatarByIndex : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* TargetAvatarIndex; // 0xA8
		::FlowCanvas::FlowOutput* _flowOutput; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX_PROCESS_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
