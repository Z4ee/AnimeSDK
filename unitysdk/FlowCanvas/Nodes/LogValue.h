#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System { class Object; }

#define FLOWCANVAS_NODES_LOGVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8F6230)
#define FLOWCANVAS_NODES_LOGVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F6240)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LogValue_TypeDefinitionIndex = 27788;

	class LogValue : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Object*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LOGVALUE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LOGVALUE_INVOKE_OFFSET))(this, obj);
		}
	};
}
