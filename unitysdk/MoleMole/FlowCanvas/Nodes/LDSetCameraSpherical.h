#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERASPHERICAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1300A3E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERASPHERICAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1300A480)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetCameraSpherical_TypeDefinitionIndex = 58913;

	class LDSetCameraSpherical : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERASPHERICAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Single polarAngle, ::System::Single elevationAngle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERASPHERICAL_INVOKE_OFFSET))(this, polarAngle, elevationAngle);
		}
	};
}
