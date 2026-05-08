#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole::Cameras { class SideScrollingCameraRuntimeParam; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16D35C60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D35D80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnterSideScrollingCameraMode_TypeDefinitionIndex = 67300;

	class LDEnterSideScrollingCameraMode : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Boolean, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Cameras::SideScrollingCameraRuntimeParam* param)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODE_INVOKE_OFFSET))(this, param);
		}
	};
}
