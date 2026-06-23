#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_HASCHALLENGE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BBBB60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HASCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BBBDA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HASCHALLENGE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x12BBBDE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_HasChallenge_TypeDefinitionIndex = 46601;

	class LD_HasChallenge : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Int32>* ChallengeID; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Single>* TotalTime; // 0xB0
		::System::Boolean HasChallenge; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HASCHALLENGE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HASCHALLENGE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__3_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HASCHALLENGE__REGISTERPORTS_B__3_0_OFFSET))(this);
		}
	};
}
