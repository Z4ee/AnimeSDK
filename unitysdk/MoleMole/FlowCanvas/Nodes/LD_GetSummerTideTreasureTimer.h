#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASURETIMER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A05EE20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASURETIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A05EED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASURETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05F140)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASURETIMER__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A05F180)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetSummerTideTreasureTimer_TypeDefinitionIndex = 88564;

	class LD_GetSummerTideTreasureTimer : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Int32>* _time; // 0xA8
		::System::Int32 _curTime; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASURETIMER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASURETIMER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASURETIMER_UPDATE_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__2_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASURETIMER__REGISTERPORTS_B__2_0_OFFSET))(this);
		}
	};
}
