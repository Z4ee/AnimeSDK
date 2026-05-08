#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole::Cameras { class TopViewCameraConfig; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERTOPVIEWCAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x170C1F90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERTOPVIEWCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x170C2090)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnterTopViewCamera_TypeDefinitionIndex = 50403;

	class LDEnterTopViewCamera : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Boolean, ::MoleMole::Cameras::TopViewCameraConfig*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERTOPVIEWCAMERA__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Cameras::TopViewCameraConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::TopViewCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERTOPVIEWCAMERA_INVOKE_OFFSET))(this, config);
		}
	};
}
