#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTAGECAMERASWITCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x19244F70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTAGECAMERASWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x192452C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStageCameraSwitch_TypeDefinitionIndex = 46076;

	class LDStageCameraSwitch : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::System::Boolean, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTAGECAMERASWITCH__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean active, ::System::String* staticCameraKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTAGECAMERASWITCH_INVOKE_OFFSET))(this, active, staticCameraKey);
		}
	};
}
