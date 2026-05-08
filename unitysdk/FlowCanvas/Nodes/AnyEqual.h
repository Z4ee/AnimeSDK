#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

namespace System { class Object; }

#define FLOWCANVAS_NODES_ANYEQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B457340)
#define FLOWCANVAS_NODES_ANYEQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B457350)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnyEqual_TypeDefinitionIndex = 27657;

	class AnyEqual : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::System::Object*, ::System::Object*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYEQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Object* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYEQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
