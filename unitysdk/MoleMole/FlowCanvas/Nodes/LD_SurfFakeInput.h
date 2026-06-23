#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_4.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFFAKEINPUT_INVOKE_OFFSET UNITYSDK_OFFSET(0x17E79E70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFFAKEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x17E79F70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SurfFakeInput_TypeDefinitionIndex = 63275;

	class LD_SurfFakeInput : public ::FlowCanvas::Nodes::CallableActionNode_4<::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFFAKEINPUT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 steer, ::System::Boolean boost, ::System::Boolean drift, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFFAKEINPUT_INVOKE_OFFSET))(this, steer, boost, drift, duration);
		}
	};
}
