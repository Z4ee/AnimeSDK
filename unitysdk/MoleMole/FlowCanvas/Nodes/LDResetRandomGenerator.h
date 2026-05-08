#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETRANDOMGENERATOR_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x11744CF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETRANDOMGENERATOR_RESETRANDOM_OFFSET UNITYSDK_OFFSET(0x11744DE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETRANDOMGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11745150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETRANDOMGENERATOR__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x117451A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDResetRandomGenerator_TypeDefinitionIndex = 59091;

	class LDResetRandomGenerator : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::UInt32>* inputRandomSeed; // 0xA8
		::FlowCanvas::FlowOutput* _flowOutput; // 0xB0
		::System::Boolean useLevelRandomSeed; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETRANDOMGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETRANDOMGENERATOR_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void ResetRandom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETRANDOMGENERATOR_RESETRANDOM_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETRANDOMGENERATOR__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
