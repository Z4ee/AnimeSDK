#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFMUTEINPUT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A05FF50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFMUTEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A060000)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SurfMuteInput_TypeDefinitionIndex = 77211;

	class LD_SurfMuteInput : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFMUTEINPUT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean mute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFMUTEINPUT_INVOKE_OFFSET))(this, mute);
		}
	};
}
