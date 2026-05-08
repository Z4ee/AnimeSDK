#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System { class Object; }

#define FLOWCANVAS_NODES_ISNOTNULL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AF218D0)
#define FLOWCANVAS_NODES_ISNOTNULL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF21910)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IsNotNull_TypeDefinitionIndex = 26685;

	class IsNotNull : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Boolean, ::System::Object*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ISNOTNULL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Object* OBJECT)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ISNOTNULL_INVOKE_OFFSET))(this, OBJECT);
		}
	};
}
