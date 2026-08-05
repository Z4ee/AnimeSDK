#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPOPLEVELPERFORMCAMERAFOCUSTARGET_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A85040)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPOPLEVELPERFORMCAMERAFOCUSTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x13A850D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPopLevelPerformCameraFocusTarget_TypeDefinitionIndex = 42071;

	class LDPopLevelPerformCameraFocusTarget : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPOPLEVELPERFORMCAMERAFOCUSTARGET__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPOPLEVELPERFORMCAMERAFOCUSTARGET_INVOKE_OFFSET))(this, tag);
		}
	};
}
