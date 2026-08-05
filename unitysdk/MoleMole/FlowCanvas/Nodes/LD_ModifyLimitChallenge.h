#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYLIMITCHALLENGE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x149E7AE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYLIMITCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x149E7BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYLIMITCHALLENGE__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x149E7C30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ModifyLimitChallenge_TypeDefinitionIndex = 43899;

	class LD_ModifyLimitChallenge : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* ChallengeID; // 0xA8
		::FlowCanvas::FlowInput* inFlow; // 0xB0
		::FlowCanvas::FlowOutput* outFlow; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Single>* LeftDeltaTime; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYLIMITCHALLENGE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYLIMITCHALLENGE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYLIMITCHALLENGE__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
