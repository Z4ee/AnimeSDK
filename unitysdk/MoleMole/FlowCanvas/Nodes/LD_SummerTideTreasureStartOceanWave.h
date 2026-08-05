#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURESTARTOCEANWAVE_DO_OFFSET UNITYSDK_OFFSET(0x19082190)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURESTARTOCEANWAVE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x190820D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURESTARTOCEANWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x190822A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SummerTideTreasureStartOceanWave_TypeDefinitionIndex = 53937;

	class LD_SummerTideTreasureStartOceanWave : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURESTARTOCEANWAVE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURESTARTOCEANWAVE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Do(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURESTARTOCEANWAVE_DO_OFFSET))(this, f);
		}
	};
}
