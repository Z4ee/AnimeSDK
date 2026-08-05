#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System { class String; }

#define FLOWCANVAS_NODES_LOGTEXT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E8B7EF0)
#define FLOWCANVAS_NODES_LOGTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B7F00)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LogText_TypeDefinitionIndex = 30776;

	class LogText : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LOGTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LOGTEXT_INVOKE_OFFSET))(this, text);
		}
	};
}
