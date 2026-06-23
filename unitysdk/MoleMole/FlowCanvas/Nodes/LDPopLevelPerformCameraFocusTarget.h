#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPOPLEVELPERFORMCAMERAFOCUSTARGET_INVOKE_OFFSET UNITYSDK_OFFSET(0x16CA1ED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPOPLEVELPERFORMCAMERAFOCUSTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA1F60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPopLevelPerformCameraFocusTarget_TypeDefinitionIndex = 48937;

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
