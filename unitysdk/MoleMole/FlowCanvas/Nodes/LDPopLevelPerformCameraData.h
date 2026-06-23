#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPOPLEVELPERFORMCAMERADATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x16CA1E20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPOPLEVELPERFORMCAMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA1EB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPopLevelPerformCameraData_TypeDefinitionIndex = 77645;

	class LDPopLevelPerformCameraData : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPOPLEVELPERFORMCAMERADATA__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPOPLEVELPERFORMCAMERADATA_INVOKE_OFFSET))(this, tag);
		}
	};
}
