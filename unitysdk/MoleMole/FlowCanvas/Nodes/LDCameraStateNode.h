#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_7.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCAMERASTATENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19DAD5D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCAMERASTATENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAD9A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCameraStateNode_TypeDefinitionIndex = 47012;

	class LDCameraStateNode : public ::FlowCanvas::Nodes::CallableFunctionNode_7<::System::Boolean, ::MoleMole::Config::InlevelCameraState, ::System::Boolean, ::System::String*, ::System::String*, ::System::Single, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCAMERASTATENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Config::InlevelCameraState state, ::System::Boolean isImmediately, ::System::String* customSphereKey, ::System::String* tag, ::System::Single overrideEnterTime, ::System::String* overrideEnterCurveKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::InlevelCameraState, ::System::Boolean, ::System::String*, ::System::String*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCAMERASTATENODE_INVOKE_OFFSET))(this, state, isImmediately, customSphereKey, tag, overrideEnterTime, overrideEnterCurveKey);
		}
	};
}
