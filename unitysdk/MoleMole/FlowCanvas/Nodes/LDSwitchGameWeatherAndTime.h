#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHGAMEWEATHERANDTIME_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x14999F60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHGAMEWEATHERANDTIME_START_OFFSET UNITYSDK_OFFSET(0x1499A0C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHGAMEWEATHERANDTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1499A440)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHGAMEWEATHERANDTIME__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1499A480)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSwitchGameWeatherAndTime_TypeDefinitionIndex = 82391;

	class LDSwitchGameWeatherAndTime : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* Output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* immediatelyChangeInput; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::Config::WeatherType>* sceneWeatherInput; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::Config::TimePeriodType>* sceneTimeInput; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHGAMEWEATHERANDTIME__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHGAMEWEATHERANDTIME_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHGAMEWEATHERANDTIME_START_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHGAMEWEATHERANDTIME__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
