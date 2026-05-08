#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLOG_INVOKE_OFFSET UNITYSDK_OFFSET(0x125B4ED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLOG__CTOR_OFFSET UNITYSDK_OFFSET(0x125B4F20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLog_TypeDefinitionIndex = 69555;

	class LDLog : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLOG__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLOG_INVOKE_OFFSET))(this, content);
		}
	};
}
