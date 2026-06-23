#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETWEATHERV2_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x11616270)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETWEATHERV2_START_OFFSET UNITYSDK_OFFSET(0x11616360)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETWEATHERV2__CTOR_OFFSET UNITYSDK_OFFSET(0x11616610)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETWEATHERV2__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x11616650)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SetWeatherV2_TypeDefinitionIndex = 58676;

	class LD_SetWeatherV2 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* weatherKey; // 0xA8
		::FlowCanvas::FlowOutput* Output; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETWEATHERV2__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETWEATHERV2_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETWEATHERV2_START_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETWEATHERV2__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
