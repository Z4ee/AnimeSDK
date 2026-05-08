#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_5.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVECAMERASTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x170C8CF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVECAMERASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x170C9090)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRemoveCameraState_TypeDefinitionIndex = 73402;

	class LDRemoveCameraState : public ::FlowCanvas::Nodes::CallableFunctionNode_5<::System::Boolean, ::System::Boolean, ::System::String*, ::System::Single, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVECAMERASTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean isImmediately, ::System::String* tag, ::System::Single overrideEnterTime, ::System::String* overrideEnterCurveKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVECAMERASTATE_INVOKE_OFFSET))(this, isImmediately, tag, overrideEnterTime, overrideEnterCurveKey);
		}
	};
}
