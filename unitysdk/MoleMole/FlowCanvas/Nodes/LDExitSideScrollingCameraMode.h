#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1911B7C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1911B8C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDExitSideScrollingCameraMode_TypeDefinitionIndex = 72640;

	class LDExitSideScrollingCameraMode : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODE_INVOKE_OFFSET))(this);
		}
	};
}
