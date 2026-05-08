#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_3.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ILLUMINATIONCONTROLLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x14283ED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ILLUMINATIONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x142846B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_IlluminationController_TypeDefinitionIndex = 67862;

	class LD_IlluminationController : public ::FlowCanvas::Nodes::CallableActionNode_3<::System::Int32, ::System::Boolean, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ILLUMINATIONCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 sosWidgetID, ::System::Boolean IlluminationSwitch, ::System::Single IlluminationIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ILLUMINATIONCONTROLLER_INVOKE_OFFSET))(this, sosWidgetID, IlluminationSwitch, IlluminationIntensity);
		}
	};
}
