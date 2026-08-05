#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASUREWEATHER_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A8D4E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASUREWEATHER__CTOR_OFFSET UNITYSDK_OFFSET(0x13A8D620)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetSummerTideTreasureWeather_TypeDefinitionIndex = 90508;

	class LD_GetSummerTideTreasureWeather : public ::FlowCanvas::Nodes::PureFunctionNode_1<::MoleMole::Config::WeatherType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASUREWEATHER__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::WeatherType Invoke()
		{
			return ((::MoleMole::Config::WeatherType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASUREWEATHER_INVOKE_OFFSET))(this);
		}
	};
}
